#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.."

echo "== Lean build"
lake build

echo "== production theorem axiom audit"
lake env lean Tests/AxiomAudit.lean

echo "== cleanup regression proofs"
lake env lean Tests/Cleanup.lean

echo "== executable self-test"
lake exe rv2pancake --self-test

if command -v turbo-lean >/dev/null 2>&1; then
  echo "== turbo-lean axiom check"
  turbo-lean check Rv2Pancake/Pipeline.lean
else
  echo "== turbo-lean axiom check (skipped: turbo-lean not installed)"
fi

echo "CORE VALIDATION PASS (Flapjack integration is not built by this Lake package)"
