#!/usr/bin/env python3
"""Materialize the pinned, frozen challenge with this repository's implementation.

Only the disposable .lake/flapjack-integration checkout is changed. Frozen
specification files are checked against the pinned Git tree before every build.
"""
import hashlib
import json
from pathlib import Path
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]
DEST = ROOT / '.lake/flapjack-integration'
PIN = None


def load_pin():
    global PIN
    PIN = json.loads((ROOT / 'integration/challenge.json').read_text())
    required = {'url', 'revision', 'visible_tests', 'synthetic_seeds',
                'holdout_seed', 'holdout_tests', 'holdout_minimum_percent'}
    if not isinstance(PIN, dict) or not required <= PIN.keys():
        raise ValueError('Incomplete challenge configuration')
    return PIN


def git(*args):
    return subprocess.check_output(['git', '-C', str(DEST), *args])


def verify_frozen():
    if PIN is None:
        load_pin()
    if git('rev-parse', 'HEAD').decode().strip() != PIN['revision']:
        raise RuntimeError(f'{DEST}: unexpected revision; refusing to overwrite it')
    manifest = git('show', f"{PIN['revision']}:FROZEN.sha256")
    if (DEST / 'FROZEN.sha256').read_bytes() != manifest:
        raise RuntimeError('Frozen manifest differs from pinned Git tree')
    frozen = {}
    for line in manifest.decode().splitlines():
        digest, name = line.split(maxsplit=1)
        frozen[name] = digest
        if hashlib.sha256((DEST / name).read_bytes()).hexdigest() != digest:
            raise RuntimeError(f'Frozen challenge file changed: {name}')
    allowed = {p.relative_to(ROOT).as_posix()
               for p in (ROOT / 'FlapjackFlip').glob('*.lean')
               if p.relative_to(ROOT).as_posix() not in frozen}
    changed = set(git('diff', '--name-only', PIN['revision'], '--').decode().splitlines())
    if changed - allowed:
        raise RuntimeError(f'Challenge support files changed: {sorted(changed - allowed)}')
    return frozen


def prepare():
    load_pin()
    if not DEST.exists():
        DEST.parent.mkdir(parents=True, exist_ok=True)
        subprocess.run(['git', 'clone', '--no-checkout', PIN['url'], str(DEST)], check=True)
        subprocess.run(['git', '-C', str(DEST), 'checkout', '--detach', PIN['revision']], check=True)
    frozen = verify_frozen()
    # Specification copies in the main repository must agree too. Never overlay
    # them: the authoritative specification is the frozen upstream challenge.
    for source in sorted((ROOT / 'FlapjackFlip').glob('*.lean')):
        name = source.relative_to(ROOT).as_posix()
        if name in frozen:
            if hashlib.sha256(source.read_bytes()).hexdigest() != frozen[name]:
                raise RuntimeError(f'Repository specification differs from challenge: {name}')
        else:
            shutil.copyfile(source, DEST / name)
    # Remove obsolete non-frozen implementation modules from previous runs.
    for target in (DEST / 'FlapjackFlip').glob('*.lean'):
        name = target.relative_to(DEST).as_posix()
        if name not in frozen and not (ROOT / name).exists():
            target.unlink()
    for source in (ROOT / 'integration').glob('*.lean'):
        if source.name in frozen:
            raise RuntimeError(f'Cannot overlay frozen file: {source.name}')
        shutil.copyfile(source, DEST / source.name)
    print(DEST)


def verify_prepared():
    """Verify without mutating the implementation that was actually tested."""
    verify_frozen()
    for source in (ROOT / 'FlapjackFlip').glob('*.lean'):
        if source.read_bytes() != (DEST / 'FlapjackFlip' / source.name).read_bytes():
            raise RuntimeError(f'Tested implementation differs: {source.name}')
    for source in (ROOT / 'integration').glob('*.lean'):
        if source.read_bytes() != (DEST / source.name).read_bytes():
            raise RuntimeError(f'Tested validation module differs: {source.name}')


if __name__ == '__main__':
    prepare()
