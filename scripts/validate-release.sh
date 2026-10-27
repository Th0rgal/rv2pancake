#!/usr/bin/env bash
set -euo pipefail
cd "$(dirname "$0")/.."
bash scripts/validate.sh
python3 scripts/validate-integration.py release
