// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resolveSplitPenetrationImpulseCacheFriendly
// Entry Point: 00f2b6bc
// Size: 452 bytes
// Signature: undefined __thiscall resolveSplitPenetrationImpulseCacheFriendly(btSequentialImpulseConstraintSolver * this, btSolverBody * param_1, btSolverBody * param_2, btSolverConstraint * param_3)


/* btSequentialImpulseConstraintSolver::resolveSplitPenetrationImpulseCacheFriendly(btSolverBody&,
   btSolverBody&, btSolverConstraint const&) */

void __thiscall
btSequentialImpulseConstraintSolver::resolveSplitPenetrationImpulseCacheFriendly
          (btSequentialImpulseConstraintSolver *this,btSolverBody *param_1,btSolverBody *param_2,
          btSolverConstraint *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if (*(float *)(param_3 + 0x80) != 0.0) {
    fVar2 = (float)*(undefined8 *)(param_3 + 0x10);
    fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    uVar7 = NEON_fmadd(*(undefined4 *)(param_1 + 0x98),*(float *)(param_3 + 0x18),
                       *(float *)(param_1 + 0x90) * fVar2 + *(float *)(param_1 + 0x94) * fVar3);
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)param_3,uVar7);
    fVar9 = *(float *)(param_3 + 0x60);
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_3 + 0x30),
                              fVar4 + (float)*(undefined8 *)(param_1 + 0xa4) *
                                      (float)*(undefined8 *)(param_3 + 4) +
                                      (float)((ulong)*(undefined8 *)(param_1 + 0xa4) >> 0x20) *
                                      (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20));
    fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_3 + 0x20),
                              fVar4 + (float)*(undefined8 *)(param_2 + 0x94) *
                                      (float)*(undefined8 *)(param_3 + 0x34) +
                                      (float)((ulong)*(undefined8 *)(param_2 + 0x94) >> 0x20) *
                                      (float)((ulong)*(undefined8 *)(param_3 + 0x34) >> 0x20));
    fVar8 = *(float *)(param_3 + 0x78);
    lVar1 = *(long *)(param_1 + 0xf0);
    fVar5 = (float)NEON_fmadd(fVar4 + (float)*(undefined8 *)(param_2 + 0xa4) *
                                      (float)*(undefined8 *)(param_3 + 0x24) +
                                      (float)((ulong)*(undefined8 *)(param_2 + 0xa4) >> 0x20) *
                                      (float)((ulong)*(undefined8 *)(param_3 + 0x24) >> 0x20),
                              *(undefined4 *)(param_3 + 0x6c),*(float *)(param_3 + 0x74) * fVar9);
    gNumSplitImpulseRecoveries = gNumSplitImpulseRecoveries + 1;
    fVar5 = *(float *)(param_3 + 0x80) - fVar5;
    fVar6 = fVar5 + fVar9;
    fVar4 = fVar6;
    if (fVar6 <= fVar8) {
      fVar4 = fVar8;
    }
    fVar9 = fVar8 - fVar9;
    if (fVar8 <= fVar6) {
      fVar9 = fVar5;
    }
    *(float *)(param_3 + 0x60) = fVar4;
    if (lVar1 != 0) {
      uVar7 = NEON_fmadd(fVar9 * *(float *)(param_3 + 0x18) * *(float *)(param_1 + 0x88),
                         *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x98));
      *(ulong *)(param_1 + 0x90) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) *
                    fVar3 * fVar9 * (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x90) +
                    (float)*(undefined8 *)(param_1 + 0x70) *
                    fVar2 * fVar9 * (float)*(undefined8 *)(param_1 + 0x80));
      *(undefined4 *)(param_1 + 0x98) = uVar7;
      uVar7 = NEON_fmadd(*(float *)(param_1 + 0x68) * fVar9,*(undefined4 *)(param_3 + 0x48),
                         *(undefined4 *)(param_1 + 0xa8));
      *(ulong *)(param_1 + 0xa0) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar9,
                    (float)*(undefined8 *)(param_1 + 0xa0) +
                    (float)*(undefined8 *)(param_3 + 0x40) *
                    (float)*(undefined8 *)(param_1 + 0x60) * fVar9);
      *(undefined4 *)(param_1 + 0xa8) = uVar7;
    }
    if (*(long *)(param_2 + 0xf0) != 0) {
      uVar7 = NEON_fmadd(*(float *)(param_2 + 0x88) * fVar9 * *(float *)(param_3 + 0x38),
                         *(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x98));
      *(ulong *)(param_2 + 0x90) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20) * fVar9 *
                    (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20),
                    (float)*(undefined8 *)(param_2 + 0x90) +
                    (float)*(undefined8 *)(param_2 + 0x70) *
                    (float)*(undefined8 *)(param_2 + 0x80) * fVar9 *
                    (float)*(undefined8 *)(param_3 + 0x30));
      *(undefined4 *)(param_2 + 0x98) = uVar7;
      uVar7 = NEON_fmadd(*(float *)(param_2 + 0x68) * fVar9,*(undefined4 *)(param_3 + 0x58),
                         *(undefined4 *)(param_2 + 0xa8));
      *(ulong *)(param_2 + 0xa0) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0xa0) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20) * fVar9,
                    (float)*(undefined8 *)(param_2 + 0xa0) +
                    (float)*(undefined8 *)(param_3 + 0x50) *
                    (float)*(undefined8 *)(param_2 + 0x60) * fVar9);
      *(undefined4 *)(param_2 + 0xa8) = uVar7;
    }
  }
  return;
}


