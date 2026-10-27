#!/usr/bin/env python3
"""Proof gate, measured coverage, or strict full integration release gate."""
import argparse
import hashlib
from datetime import datetime, timezone
import fcntl
import uuid
import importlib.util
import json
from pathlib import Path
import re
import subprocess
import time

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location('prepare', ROOT / 'scripts/prepare-integration.py')
prepare = importlib.util.module_from_spec(spec)
spec.loader.exec_module(prepare)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('mode', choices=['proof', 'coverage', 'release'], default='proof', nargs='?')
    args = parser.parse_args()
    dest = prepare.DEST
    report_root = ROOT / '.lake/integration-reports'
    report_root.mkdir(parents=True, exist_ok=True)
    lock = (report_root / 'validation.lock').open('w')
    try:
        fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
    except BlockingIOError:
        raise SystemExit('An integration validation is already running')
    run_id = str(uuid.uuid4())
    results = report_root / run_id
    results.mkdir()

    def sources():
        return {p.relative_to(ROOT).as_posix(): hashlib.sha256(p.read_bytes()).hexdigest()
                for directory in ['FlapjackFlip', 'integration', 'scripts', 'tests', '.github/workflows']
                for p in sorted((ROOT / directory).glob('*')) if p.is_file()}

    report = {
        'run_id': run_id, 'started_at': datetime.now(timezone.utc).isoformat(),
        'status': 'running', 'mode': args.mode, 'logs': str(results),
        'challenge_revision': None,
        'checks': [], 'release_ready': False, 'proof_passed': False,
    }

    def save():
        content = json.dumps(report, indent=2) + '\n'
        for directory in [results, report_root]:
            temporary = directory / f'.summary-{run_id}.tmp'
            temporary.write_text(content)
            temporary.replace(directory / 'summary.json')

    def verify():
        prepare.verify_prepared()
        if sources() != report['source_sha256']:
            raise RuntimeError('Repository sources changed during validation')

    def run(name, command, required=True):
        start = time.monotonic()
        print(f'== {name}', flush=True)
        with (results / f'{name}.log').open('w') as log:
            process = subprocess.run(command, cwd=dest, stdout=log, stderr=subprocess.STDOUT)
        output = (results / f'{name}.log').read_text()
        item = {'name': name, 'command': command, 'exit_code': process.returncode,
                'seconds': round(time.monotonic() - start, 3)}
        report['checks'].append(item)
        save()
        print('\n'.join(output.splitlines()[-5:]), flush=True)
        if required and process.returncode:
            raise RuntimeError(f'{name} failed; see {results / (name + ".log")}')
        return item, output

    try:
        save()  # Invalidate an older success before any preparation can fail.
        prepare.load_pin()
        report['challenge_revision'] = prepare.PIN['revision']
        report['source_sha256'] = sources()
        report['repository_revision'] = subprocess.check_output(
            ['git', '-C', str(ROOT), 'rev-parse', 'HEAD'], text=True).strip()
        prepare.prepare()
        _, build = run('build', ['lake', 'build'])
        if re.search(r'\bwarning:', build):
            raise RuntimeError('Integration build emitted warnings')
        run('axioms', ['lake', 'env', 'lean', 'IntegrationAudit.lean'])
        run('certificate-regressions', ['lake', 'env', 'lean', 'CertificateTests.lean'])
        run('certified-smoke', ['lake', 'env', 'lean', '--run', 'IntegrationSmoke.lean'])
        report['proof_passed'] = True
        if args.mode == 'proof':
            verify()
            report['status'] = 'passed'
            print('INTEGRATION PROOF PASS (coverage and release not established)')
            return 0

        binary = str(dest / '.lake/build/bin/flip-check')
        suites = [('visible', 'tests', prepare.PIN['visible_tests'], 100)]
        for seed, count in prepare.PIN['synthetic_seeds']:
            suites.append((f'synthetic-{seed}', f'generated-{seed}', count, 100))
        seed = prepare.PIN['holdout_seed']
        suites.append((f'holdout-{seed}', f'generated-{seed}', prepare.PIN['holdout_tests'],
                       prepare.PIN['holdout_minimum_percent']))
        passed_all = True
        for name, directory, expected, threshold in suites:
            if name != 'visible':
                seed = int(name.split('-')[1])
                run(name + '-generate', ['python3', 'scripts/gen_tests.py', str(seed), str(expected), directory])
                run(name + '-build', [binary, 'build', directory])
            item, output = run(name, [binary, directory], required=False)
            counts = re.findall(r'^(\d+)/(\d+) tests passed$', output, re.MULTILINE)
            if len(counts) != 1:
                raise RuntimeError(f'{name}: missing or ambiguous test summary')
            passed, total = map(int, counts[0])
            if total != expected or passed > total or item['exit_code'] != (0 if passed == total else 1):
                raise RuntimeError(f'{name}: inconsistent test count or exit status')
            meets_target = passed * 100 >= threshold * total
            item.update(passed=passed, total=total, required_percent=threshold, meets_target=meets_target)
            passed_all &= meets_target
            save()
        # Check again after execution, detecting changes to the frozen judge.
        verify()
        report['status'] = 'passed' if passed_all or args.mode == 'coverage' else 'failed'
        report['release_ready'] = passed_all
        print('INTEGRATION RELEASE PASS' if passed_all else 'INTEGRATION RELEASE BLOCKED: coverage below target')
        return 0 if args.mode == 'coverage' or passed_all else 1
    except (RuntimeError, OSError, ValueError, subprocess.CalledProcessError) as error:
        report['status'] = 'failed'
        report['error'] = str(error)
        print(error, flush=True)
        return 1
    finally:
        report['finished_at'] = datetime.now(timezone.utc).isoformat()
        if report['status'] == 'running':
            report['status'] = 'interrupted'
        save()
        print(f'Report: {report_root / "summary.json"}', flush=True)
        lock.close()


if __name__ == '__main__':
    raise SystemExit(main())
