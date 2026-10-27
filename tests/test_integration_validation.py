"""Regression checks for release evidence, without a Lean build or network access."""
import contextlib
import importlib.util
import io
import json
from pathlib import Path
import subprocess
import shutil
import sys
import tempfile
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location('validation', ROOT / 'scripts/validate-integration.py')
validation = importlib.util.module_from_spec(spec)
spec.loader.exec_module(validation)


class Reports(unittest.TestCase):
    def exercise(self, mode, preparation_error=None):
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            for name in ['FlapjackFlip', 'integration', 'scripts']:
                (root / name).mkdir()
            report_dir = root / '.lake/integration-reports'
            report_dir.mkdir(parents=True)
            (report_dir / 'summary.json').write_text(json.dumps(
                {'run_id': 'old', 'status': 'passed', 'release_ready': True}))
            destination = root / '.lake/challenge'
            destination.mkdir()

            def run(command, cwd, stdout, stderr):
                if 'flip-check' in command[0] and 'build' not in command:
                    sizes = {'tests': 120, 'generated-42': 100, 'generated-999': 340,
                             'generated-777': 60, 'generated-20261027': 500}
                    stdout.write(f"0/{sizes[command[-1]]} tests passed\n")
                    return subprocess.CompletedProcess(command, 1)
                return subprocess.CompletedProcess(command, 0)

            with patch.object(validation, 'ROOT', root), \
                 patch.object(validation.prepare, 'DEST', destination), \
                 patch.object(validation.prepare, 'prepare', side_effect=preparation_error), \
                 patch.object(validation.prepare, 'verify_prepared'), \
                 patch.object(validation.subprocess, 'check_output', return_value='revision\n'), \
                 patch.object(validation.subprocess, 'run', side_effect=run), \
                 patch.object(sys, 'argv', ['validate-integration.py', mode]), \
                 contextlib.redirect_stdout(io.StringIO()):
                code = validation.main()
            report = json.loads((report_dir / 'summary.json').read_text())
            self.assertNotEqual(report['run_id'], 'old')
            archived = json.loads((report_dir / report['run_id'] / 'summary.json').read_text())
            self.assertEqual(report, archived)
            self.assertIn('finished_at', report)
            return code, report

    def test_preparation_failure_replaces_old_success(self):
        code, report = self.exercise('release', RuntimeError('Frozen challenge file changed'))
        self.assertEqual(code, 1)
        self.assertEqual(report['status'], 'failed')
        self.assertFalse(report['release_ready'])
        self.assertFalse(report['proof_passed'])
        self.assertIn('Frozen', report['error'])

    def test_proof_success_does_not_claim_release(self):
        code, report = self.exercise('proof')
        self.assertEqual(code, 0)
        self.assertTrue(report['proof_passed'])
        self.assertFalse(report['release_ready'])

    def test_coverage_measurement_does_not_claim_release(self):
        code, report = self.exercise('coverage')
        self.assertEqual(code, 0)
        self.assertEqual(report['status'], 'passed')
        self.assertFalse(report['release_ready'])
        self.assertEqual(sum(c.get('total', 0) for c in report['checks']), 1120)

    def test_release_fails_insufficient_coverage(self):
        code, report = self.exercise('release')
        self.assertEqual(code, 1)
        self.assertEqual(report['status'], 'failed')
        self.assertFalse(report['release_ready'])


class Initialization(unittest.TestCase):
    def test_missing_and_malformed_configuration_in_subprocess(self):
        for contents in [None, '{invalid json', '{}']:
            with self.subTest(contents=contents), tempfile.TemporaryDirectory() as temporary:
                root = Path(temporary)
                (root / 'scripts').mkdir()
                (root / 'integration').mkdir()
                for name in ['prepare-integration.py', 'validate-integration.py']:
                    shutil.copyfile(ROOT / 'scripts' / name, root / 'scripts' / name)
                if contents is not None:
                    (root / 'integration/challenge.json').write_text(contents)
                reports = root / '.lake/integration-reports'
                reports.mkdir(parents=True)
                (reports / 'summary.json').write_text(json.dumps(
                    {'run_id': 'old', 'status': 'passed', 'release_ready': True}))
                result = subprocess.run([sys.executable, str(root / 'scripts/validate-integration.py'),
                                         'release'], capture_output=True, text=True)
                self.assertEqual(result.returncode, 1, result.stdout + result.stderr)
                report = json.loads((reports / 'summary.json').read_text())
                self.assertNotEqual(report['run_id'], 'old')
                self.assertEqual(report['status'], 'failed')
                self.assertFalse(report['release_ready'])
                self.assertIn('error', report)
                self.assertFalse((root / '.lake/flapjack-integration').exists())


if __name__ == '__main__':
    unittest.main()
