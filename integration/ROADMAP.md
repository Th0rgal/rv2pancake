# 0.3 release contract and proof frontier

Status: **not release-ready**. The package remains 0.1.0. A passing core or
integration-proof CI job is not full roadmap completion.

## Contract

The core and Flapjack integration use different semantics and Lean versions.
The core models the return register and word memory. Flapjack's frozen
`DecompilerSound` requires successful recompilation and both directions of
`Refines`: every oracle, every initial oracle state, every finite source step
budget, matching event prefixes and matching final status/events. Resource-limit
termination has exactly the exception in the frozen `Status.Final` definition.
Neither finite execution tests nor the core theorem imply this contract.

`integration/challenge.json` pins the original challenge. Its frozen specification,
compiler wrapper, interpreter, judge, tests, toolchain and dependency lockfile are
checked against the manifest from that Git revision before builds. Repository
specification copies must match. The authoritative implementation is this
repository's `FlapjackFlip/`; the preparation script overlays only non-frozen
implementation files into `.lake/flapjack-integration`.

The pinned machine's instruction support and behavior are authoritative. In
particular, its decoder does not model every RV64IM word operation. Decoder
normalization proves equality in this model, not equivalence under all hardware
memory models. Unsupported inputs may be rejected; every successful output must
satisfy the frozen soundness theorem. Never change the judge to improve coverage.

## Commands and evidence

- `bash scripts/validate.sh`: core build, theorem audit, cleanup regressions,
  seven benchmarks and turbo-lean when installed.
- `python3 scripts/validate-integration.py proof`: pinned integration build,
  transitive axiom audit of **all** integration declarations plus `acceptance`,
  kernel-checked certificate mutations, and five certified end-to-end regressions.
- `python3 scripts/validate-integration.py coverage`: proofs plus measured visible,
  historical synthetic and separate generated regression coverage. A successful
  measurement command does not mean the coverage targets passed.
- `bash scripts/validate-release.sh`: core and strict integration release gate.
  Insufficient coverage produces a nonzero exit code.

Reports live in `.lake/integration-reports/`: each command's log, exit
status and elapsed wall time, exact source hashes, challenge revision and coverage
thresholds are recorded in `summary.json`. These times include harness overhead;
they are not generated-program runtime speedups. Reports use unique run IDs and atomic writes; preparation failures invalidate earlier success, and post-run verification never recopies the tested sources. CI uploads the reports.
The independently seeded 500-case suite is reproducible regression evidence,
not the challenge graders' secret hidden suite.

## Milestones

| Milestone | Status | Completion evidence or remaining work |
| --- | --- | --- |
| Explicit release contract | Implemented | Frozen all-oracles semantics, proof boundary, supported-model boundary and release thresholds documented here. |
| Pinned integration | Implemented; clean CI verification pending | Separate Lean 4.33.1 challenge and 4.35.0 core builds; original frozen files preserved. Local build reused pinned dependency caches. |
| General simulation foundation | Implemented | `Simulation.sound` and `EquivalenceCertificate.sound`, allowing finite target stuttering. Relations currently require exact status/event equality at matched states. |
| Executable unequal-image checker | Implemented, narrow | `checkDecoded_sound`: equal metadata/code length plus equal aligned decoded instructions. Kernel witness: different FENCE encodings. This does **not** handle relocated code. |
| Non-vacuous certified decompilation | Partial | Straight-line proposal reconstruction, checked on every return; 5/120 visible tests pass, up from 0. |
| Full visible and generated coverage | Pending: proof/certificate generation | Need 120/120 visible, 500/500 historical synthetic, and at least 475/500 independently seeded cases. |
| Robustness and proof audits | Partial | Axiom sweep, metadata/instruction/length mutations, corrupt runtime rejection. Broad malformed-image fuzzing and resource limits remain. |
| Performance and readability | Pending | Establish representative large-program baselines and budgets after useful certified coverage exists; retain 4× token bound. |
| Final independent approval and 0.3 release | Pending | Astra/Fable review of the same final revision, all release targets, clean CI and accurate version metadata. |

## Next proof obligations

The executable checker currently requires identical layout. `Simulation` is a
proof interface, not a universal executable equivalence algorithm. To cover the
remaining lifter output, implement a finite certificate format with checkable
local obligations, and derive `Simulation` from its successful validation:

1. Related control-flow locations and a register-expression relation; prove
   straight-line blocks preserve the relation and observable events.
2. Explicit address relations for heap headers, code pointers, stack frames and
   spills. Stack exhaustion must also match in both refinement directions; source-level equivalence alone does not justify changing frame sizes. Code length appears in the installed heap header, so simply ignoring
   code-length differences is unsound.
3. Branch successors, inductive loop invariants, call/return links, recursion and
   exception unwinding. Establish both simulation directions; use a progress
   measure where zero-step matching would otherwise hide unmatched behavior.
4. FFI barriers: equal names, configurations and arrays, compatible oracle state,
   returned-memory updates, final FFI outcomes, traps and resource-limit behavior.
5. An untrusted certificate generator driven by the recovered control-flow graph.
   Fail closed on a missing or rejected obligation.

Source reconstruction can improve coverage independently: canonical locals,
expressions and control flow sometimes reproduce an image exactly. It must still
pass the same proof-backed gate. Do not replace certification with the historical
ungated lifter or infer correctness from its finite behavioral test scores.
