// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFrictionConstraintImpulse
// Entry Point: 00f30d90
// Size: 700 bytes
// Signature: undefined __thiscall setFrictionConstraintImpulse(btSequentialImpulseConstraintSolver * this, btSolverConstraint * param_1, int param_2, int param_3, btManifoldPoint * param_4, btContactSolverInfo * param_5)


/* btSequentialImpulseConstraintSolver::setFrictionConstraintImpulse(btSolverConstraint&, int, int,
   btManifoldPoint&, btContactSolverInfo const&) */

void __thiscall
btSequentialImpulseConstraintSolver::setFrictionConstraintImpulse
          (btSequentialImpulseConstraintSolver *this,btSolverConstraint *param_1,int param_2,
          int param_3,btManifoldPoint *param_4,btContactSolverInfo *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  
  uVar1 = *(uint *)(param_5 + 0x40);
  lVar5 = (long)*(int *)(param_1 + 0x94);
  lVar2 = *(long *)(this + 0x78);
  if ((uVar1 >> 2 & 1) == 0) {
    *(undefined4 *)(lVar2 + lVar5 * 0xa0 + 100) = 0;
    if ((uVar1 >> 4 & 1) != 0) {
      *(undefined4 *)(lVar2 + lVar5 * 0xa0 + 0x104) = 0;
    }
  }
  else {
    lVar3 = *(long *)(this + 0x18);
    fVar10 = *(float *)(param_5 + 0x3c) * *(float *)(param_4 + 0x80);
    lVar7 = *(long *)(lVar3 + (long)param_2 * 0xf8 + 0xf0);
    lVar4 = *(long *)(lVar3 + (long)param_3 * 0xf8 + 0xf0);
    pfVar8 = (float *)(lVar2 + lVar5 * 0xa0 + 100);
    *pfVar8 = fVar10;
    if (lVar7 != 0) {
      lVar6 = lVar2 + lVar5 * 0xa0;
      fVar11 = *(float *)(lVar7 + 0x19c) * fVar10;
      lVar9 = lVar3 + (long)param_2 * 0xf8;
      uVar12 = NEON_fmadd(fVar11 * *(float *)(lVar6 + 0x18) * *(float *)(lVar7 + 0x1a8),
                          *(undefined4 *)(lVar9 + 0x78),*(undefined4 *)(lVar9 + 0x48));
      *(ulong *)(lVar9 + 0x40) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x40) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar9 + 0x70) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20) * fVar11 *
                    (float)((ulong)*(undefined8 *)(lVar7 + 0x1a0) >> 0x20),
                    (float)*(undefined8 *)(lVar9 + 0x40) +
                    (float)*(undefined8 *)(lVar9 + 0x70) *
                    (float)*(undefined8 *)(lVar6 + 0x10) * fVar11 *
                    (float)*(undefined8 *)(lVar7 + 0x1a0));
      *(undefined4 *)(lVar9 + 0x48) = uVar12;
      uVar12 = NEON_fmadd(*(float *)(lVar9 + 0x68) * fVar10,*(undefined4 *)(lVar6 + 0x48),
                          *(undefined4 *)(lVar9 + 0x58));
      *(ulong *)(lVar9 + 0x50) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x50) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar6 + 0x40) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(lVar9 + 0x60) >> 0x20) * fVar10,
                    (float)*(undefined8 *)(lVar9 + 0x50) +
                    (float)*(undefined8 *)(lVar6 + 0x40) *
                    (float)*(undefined8 *)(lVar9 + 0x60) * fVar10);
      *(undefined4 *)(lVar9 + 0x58) = uVar12;
    }
    if (lVar4 != 0) {
      fVar10 = *pfVar8;
      lVar6 = lVar2 + lVar5 * 0xa0;
      fVar14 = -fVar10;
      uVar15 = *(undefined8 *)(lVar4 + 0x1a0);
      lVar9 = lVar3 + (long)param_3 * 0xf8;
      fVar11 = *(float *)(lVar4 + 0x19c) * fVar14;
      uVar16 = *(undefined8 *)(lVar6 + 0x30);
      fVar17 = *(float *)(lVar6 + 0x58);
      uVar13 = NEON_fmsub(fVar11 * *(float *)(lVar6 + 0x38) * *(float *)(lVar4 + 0x1a8),
                          *(undefined4 *)(lVar9 + 0x78),*(undefined4 *)(lVar9 + 0x48));
      *(double *)(lVar9 + 0x50) =
           *(double *)(lVar9 + 0x50) -
           (double)CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x60) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(lVar6 + 0x50) >> 0x20) * fVar14,
                            (float)*(undefined8 *)(lVar9 + 0x60) *
                            (float)*(undefined8 *)(lVar6 + 0x50) * fVar14);
      uVar12 = NEON_fmadd(fVar17 * fVar10,*(undefined4 *)(lVar9 + 0x68),
                          *(undefined4 *)(lVar9 + 0x58));
      *(undefined4 *)(lVar9 + 0x48) = uVar13;
      *(double *)(lVar9 + 0x40) =
           *(double *)(lVar9 + 0x40) -
           (double)CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x70) >> 0x20) *
                            (float)((ulong)uVar16 >> 0x20) * fVar11 * (float)((ulong)uVar15 >> 0x20)
                            ,(float)*(undefined8 *)(lVar9 + 0x70) *
                             (float)uVar16 * fVar11 * (float)uVar15);
      *(undefined4 *)(lVar9 + 0x58) = uVar12;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar5 = lVar5 + 1;
      fVar10 = *(float *)(param_5 + 0x3c) * *(float *)(param_4 + 0x84);
      pfVar8 = (float *)(lVar2 + lVar5 * 0xa0 + 100);
      *pfVar8 = fVar10;
      if (lVar7 != 0) {
        lVar6 = lVar2 + lVar5 * 0xa0;
        fVar11 = *(float *)(lVar7 + 0x19c) * fVar10;
        lVar7 = lVar3 + (long)param_2 * 0xf8;
        uVar12 = NEON_fmadd(fVar11 * *(float *)(lVar6 + 0x18),*(undefined4 *)(lVar7 + 0x78),
                            *(undefined4 *)(lVar7 + 0x48));
        *(ulong *)(lVar7 + 0x40) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x40) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar7 + 0x70) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20) * fVar11,
                      (float)*(undefined8 *)(lVar7 + 0x40) +
                      (float)*(undefined8 *)(lVar7 + 0x70) *
                      (float)*(undefined8 *)(lVar6 + 0x10) * fVar11);
        *(undefined4 *)(lVar7 + 0x48) = uVar12;
        uVar12 = NEON_fmadd(*(float *)(lVar7 + 0x68) * fVar10,*(undefined4 *)(lVar6 + 0x48),
                            *(undefined4 *)(lVar7 + 0x58));
        *(ulong *)(lVar7 + 0x50) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x50) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar6 + 0x40) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar7 + 0x60) >> 0x20) * fVar10,
                      (float)*(undefined8 *)(lVar7 + 0x50) +
                      (float)*(undefined8 *)(lVar6 + 0x40) *
                      (float)*(undefined8 *)(lVar7 + 0x60) * fVar10);
        *(undefined4 *)(lVar7 + 0x58) = uVar12;
      }
      if (lVar4 != 0) {
        fVar10 = *pfVar8;
        lVar2 = lVar2 + lVar5 * 0xa0;
        fVar14 = -fVar10;
        lVar3 = lVar3 + (long)param_3 * 0xf8;
        fVar11 = *(float *)(lVar4 + 0x19c) * fVar14;
        uVar15 = *(undefined8 *)(lVar2 + 0x30);
        fVar17 = *(float *)(lVar2 + 0x58);
        uVar13 = NEON_fmsub(fVar11 * *(float *)(lVar2 + 0x38),*(undefined4 *)(lVar3 + 0x78),
                            *(undefined4 *)(lVar3 + 0x48));
        *(double *)(lVar3 + 0x50) =
             *(double *)(lVar3 + 0x50) -
             (double)CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) *
                              (float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) * fVar14,
                              (float)*(undefined8 *)(lVar3 + 0x60) *
                              (float)*(undefined8 *)(lVar2 + 0x50) * fVar14);
        uVar12 = NEON_fmadd(fVar17 * fVar10,*(undefined4 *)(lVar3 + 0x68),
                            *(undefined4 *)(lVar3 + 0x58));
        *(double *)(lVar3 + 0x40) =
             *(double *)(lVar3 + 0x40) -
             (double)CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20) *
                              (float)((ulong)uVar15 >> 0x20) * fVar11,
                              (float)*(undefined8 *)(lVar3 + 0x70) * (float)uVar15 * fVar11);
        *(undefined4 *)(lVar3 + 0x48) = uVar13;
        *(undefined4 *)(lVar3 + 0x58) = uVar12;
        return;
      }
    }
  }
  return;
}


