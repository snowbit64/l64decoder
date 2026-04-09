// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupContactConstraint
// Entry Point: 00f30384
// Size: 1684 bytes
// Signature: undefined __thiscall setupContactConstraint(btSequentialImpulseConstraintSolver * this, btSolverConstraint * param_1, int param_2, int param_3, btManifoldPoint * param_4, btContactSolverInfo * param_5, float * param_6, btVector3 * param_7, btVector3 * param_8)


/* btSequentialImpulseConstraintSolver::setupContactConstraint(btSolverConstraint&, int, int,
   btManifoldPoint&, btContactSolverInfo const&, float&, btVector3 const&, btVector3 const&) */

void __thiscall
btSequentialImpulseConstraintSolver::setupContactConstraint
          (btSequentialImpulseConstraintSolver *this,btSolverConstraint *param_1,int param_2,
          int param_3,btManifoldPoint *param_4,btContactSolverInfo *param_5,float *param_6,
          btVector3 *param_7,btVector3 *param_8)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  
  *param_6 = 1.0;
  lVar3 = *(long *)(this + 0x18);
  fVar14 = *(float *)(param_4 + 0x40);
  plVar5 = (long *)(lVar3 + (long)param_2 * 0xf8 + 0xf0);
  lVar7 = *plVar5;
  plVar4 = (long *)(lVar3 + (long)param_3 * 0xf8 + 0xf0);
  lVar6 = *plVar4;
  fVar11 = (float)NEON_fnmsub(*(float *)(param_4 + 0x48),*(float *)(param_7 + 4),
                              *(float *)(param_4 + 0x44) * *(float *)(param_7 + 8));
  uVar15 = NEON_fnmsub(fVar14,*(float *)(param_7 + 8),*(float *)param_7 * *(float *)(param_4 + 0x48)
                      );
  uVar13 = NEON_fnmsub(*(float *)param_7,*(float *)(param_4 + 0x44),fVar14 * *(float *)(param_7 + 4)
                      );
  fVar25 = 0.0;
  fVar14 = 0.0;
  fVar20 = 0.0;
  fVar24 = 0.0;
  if (lVar7 != 0) {
    uVar16 = NEON_fmadd(*(undefined4 *)(lVar7 + 0x150),uVar15,*(float *)(lVar7 + 0x14c) * fVar11);
    uVar19 = NEON_fmadd(*(undefined4 *)(lVar7 + 0x160),uVar15,*(float *)(lVar7 + 0x15c) * fVar11);
    uVar22 = NEON_fmadd(*(undefined4 *)(lVar7 + 0x170),uVar15,*(float *)(lVar7 + 0x16c) * fVar11);
    fVar14 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + 0x154),uVar13,uVar16);
    fVar20 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + 0x164),uVar13,uVar19);
    fVar24 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + 0x174),uVar13,uVar22);
    fVar14 = *(float *)(lVar7 + 0x278) * fVar14;
    fVar20 = *(float *)(lVar7 + 0x27c) * fVar20;
    fVar24 = *(float *)(lVar7 + 0x280) * fVar24;
  }
  *(float *)(param_1 + 0x40) = fVar14;
  *(float *)(param_1 + 0x44) = fVar20;
  *(float *)(param_1 + 0x48) = fVar24;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  fVar18 = (float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20);
  fVar29 = (float)((ulong)*(undefined8 *)(param_4 + 0x44) >> 0x20);
  fVar17 = (float)*(undefined8 *)(param_8 + 4);
  fVar27 = (float)*(undefined8 *)(param_4 + 0x44);
  fVar21 = -(*(float *)(param_4 + 0x40) * fVar17) + *(float *)param_8 * fVar27;
  fVar17 = -(fVar18 * fVar27) + fVar17 * fVar29;
  fVar18 = -(*(float *)param_8 * fVar29) + fVar18 * *(float *)(param_4 + 0x40);
  if (lVar6 == 0) {
    uVar12 = 0;
  }
  else {
    fVar25 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x174),fVar21,
                               *(float *)(lVar6 + 0x170) * fVar18);
    fVar25 = (float)NEON_fnmadd(*(undefined4 *)(lVar6 + 0x16c),fVar17,-fVar25);
    uVar12 = CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x278) >> 0x20) *
                      (-(*(float *)(lVar6 + 0x160) * fVar18 + *(float *)(lVar6 + 0x164) * fVar21) -
                      *(float *)(lVar6 + 0x15c) * fVar17),
                      (float)*(undefined8 *)(lVar6 + 0x278) *
                      (-(*(float *)(lVar6 + 0x150) * fVar18 + *(float *)(lVar6 + 0x154) * fVar21) -
                      *(float *)(lVar6 + 0x14c) * fVar17));
    fVar25 = *(float *)(lVar6 + 0x280) * fVar25;
  }
  fVar29 = 0.0;
  fVar27 = 0.0;
  *(undefined8 *)(param_1 + 0x50) = uVar12;
  *(float *)(param_1 + 0x58) = fVar25;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (lVar7 != 0) {
    uVar16 = NEON_fnmsub(*(float *)(param_7 + 8),fVar20,*(float *)(param_7 + 4) * fVar24);
    uVar22 = NEON_fmadd(*(undefined4 *)(param_4 + 0x40),uVar16,*(undefined4 *)(lVar7 + 0x19c));
    uVar19 = NEON_fnmsub(*(float *)param_7,fVar24,fVar14 * *(float *)(param_7 + 8));
    uVar16 = NEON_fnmsub(fVar14,*(float *)(param_7 + 4),*(float *)param_7 * fVar20);
    uVar19 = NEON_fmadd(*(undefined4 *)(param_4 + 0x44),uVar19,uVar22);
    fVar27 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 0x48),uVar16,uVar19);
  }
  if (lVar6 != 0) {
    fVar14 = (float)((ulong)*(undefined8 *)param_8 >> 0x20);
    fVar20 = (float)((ulong)uVar12 >> 0x20);
    fVar24 = (float)*(undefined8 *)param_8;
    fVar29 = *(float *)(lVar6 + 0x19c) +
             *(float *)(param_4 + 0x40) * (fVar14 * fVar25 - fVar20 * *(float *)(param_8 + 8)) +
             (float)*(undefined8 *)(param_4 + 0x44) *
             (-(fVar24 * fVar25) + (float)uVar12 * *(float *)(param_8 + 8)) +
             (float)((ulong)*(undefined8 *)(param_4 + 0x44) >> 0x20) *
             (-(fVar14 * (float)uVar12) + fVar20 * fVar24);
  }
  *(float *)(param_1 + 0x6c) = *param_6 / (fVar29 + fVar27);
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar31 = *(undefined8 *)(param_4 + 0x48);
    uVar12 = *(undefined8 *)(param_4 + 0x40);
    *(float *)param_1 = fVar11;
    *(undefined4 *)(param_1 + 4) = uVar15;
    *(undefined4 *)(param_1 + 8) = uVar13;
    *(undefined8 *)(param_1 + 0x18) = uVar31;
    *(undefined8 *)(param_1 + 0x10) = uVar12;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar12 = *(undefined8 *)(param_4 + 0x40);
    fVar11 = *(float *)(param_4 + 0x48);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(ulong *)(param_1 + 0x20) = CONCAT44(-fVar18,-fVar17);
    *(float *)(param_1 + 0x28) = -fVar21;
    *(ulong *)(param_1 + 0x30) = CONCAT44(-(float)((ulong)uVar12 >> 0x20),-(float)uVar12);
    *(float *)(param_1 + 0x38) = -fVar11;
  }
  fVar20 = 0.0;
  fVar25 = 0.0;
  fVar11 = 0.0;
  fVar14 = 0.0;
  fVar24 = 0.0;
  fVar17 = 0.0;
  if (lVar7 != 0) {
    fVar17 = (float)((ulong)*(undefined8 *)(lVar7 + 400) >> 0x20);
    fVar21 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20);
    fVar14 = (float)*(undefined8 *)(lVar7 + 400);
    fVar18 = (float)*(undefined8 *)(param_7 + 4);
    fVar24 = -(fVar18 * fVar17) + fVar14 * fVar21 + (float)*(undefined8 *)(lVar7 + 0x17c);
    fVar17 = -(fVar21 * *(float *)(lVar7 + 0x18c)) + fVar17 * *(float *)param_7 +
             (float)((ulong)*(undefined8 *)(lVar7 + 0x17c) >> 0x20);
    fVar14 = -(*(float *)param_7 * fVar14) + *(float *)(lVar7 + 0x18c) * fVar18 +
             *(float *)(lVar7 + 0x184);
  }
  if (lVar6 != 0) {
    fVar25 = (float)((ulong)*(undefined8 *)(lVar6 + 400) >> 0x20);
    fVar21 = (float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20);
    fVar11 = (float)*(undefined8 *)(lVar6 + 400);
    fVar18 = (float)*(undefined8 *)(param_8 + 4);
    fVar20 = -(fVar25 * fVar18) + fVar11 * fVar21 + (float)*(undefined8 *)(lVar6 + 0x17c);
    fVar25 = -(*(float *)(lVar6 + 0x18c) * fVar21) + fVar25 * *(float *)param_8 +
             (float)((ulong)*(undefined8 *)(lVar6 + 0x17c) >> 0x20);
    fVar11 = -(*(float *)param_8 * fVar11) + *(float *)(lVar6 + 0x18c) * fVar18 +
             *(float *)(lVar6 + 0x184);
  }
  uVar12 = *(undefined8 *)(param_4 + 0x40);
  uVar13 = *(undefined4 *)(param_4 + 0x48);
  lVar9 = (long)param_2;
  lVar8 = (long)param_3;
  fVar18 = *(float *)(param_4 + 0x50);
  fVar21 = *(float *)(param_5 + 0x38);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_4 + 0x54);
  fVar14 = (float)NEON_fnmadd(uVar13,fVar14 - fVar11,
                              -((float)uVar12 * (fVar24 - fVar20) +
                               (float)((ulong)uVar12 >> 0x20) * (fVar17 - fVar25)));
  fVar11 = *(float *)(param_4 + 0x5c);
  if (((byte)param_5[0x40] >> 2 & 1) == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    fVar20 = *(float *)(param_5 + 0x3c) * *(float *)(param_4 + 0x7c);
    *(float *)(param_1 + 100) = fVar20;
    if ((lVar7 != 0) && (*plVar5 != 0)) {
      lVar10 = lVar3 + lVar9 * 0xf8;
      uVar13 = NEON_fmadd(*(float *)(lVar7 + 0x1a8) * fVar20 *
                          *(float *)(lVar10 + 0x88) * *(float *)(param_1 + 0x18),
                          *(undefined4 *)(lVar10 + 0x78),*(undefined4 *)(lVar10 + 0x48));
      *(ulong *)(lVar10 + 0x40) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x40) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar10 + 0x70) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(lVar7 + 0x1a0) >> 0x20) * fVar20 *
                    (float)((ulong)*(undefined8 *)(lVar10 + 0x80) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20),
                    (float)*(undefined8 *)(lVar10 + 0x40) +
                    (float)*(undefined8 *)(lVar10 + 0x70) *
                    (float)*(undefined8 *)(lVar7 + 0x1a0) * fVar20 *
                    (float)*(undefined8 *)(lVar10 + 0x80) * (float)*(undefined8 *)(param_1 + 0x10));
      *(undefined4 *)(lVar10 + 0x48) = uVar13;
      uVar13 = NEON_fmadd(*(float *)(lVar10 + 0x68) * fVar20,*(undefined4 *)(param_1 + 0x48),
                          *(undefined4 *)(lVar10 + 0x58));
      *(ulong *)(lVar10 + 0x50) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x50) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) *
                    (float)((ulong)*(undefined8 *)(lVar10 + 0x60) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(lVar10 + 0x50) +
                    (float)*(undefined8 *)(param_1 + 0x40) *
                    (float)*(undefined8 *)(lVar10 + 0x60) * fVar20);
      *(undefined4 *)(lVar10 + 0x58) = uVar13;
    }
    if ((lVar6 != 0) && (*plVar4 != 0)) {
      uVar12 = *(undefined8 *)(lVar6 + 0x1a0);
      lVar7 = lVar3 + lVar8 * 0xf8;
      uVar31 = *(undefined8 *)(param_1 + 0x30);
      fVar20 = -*(float *)(param_1 + 100);
      uVar15 = NEON_fmsub(*(float *)(lVar6 + 0x1a8) * fVar20 *
                          *(float *)(lVar7 + 0x88) * *(float *)(param_1 + 0x38),
                          *(undefined4 *)(lVar7 + 0x78),*(undefined4 *)(lVar7 + 0x48));
      uVar13 = NEON_fmsub(*(float *)(param_1 + 0x58) * fVar20,*(undefined4 *)(lVar7 + 0x68),
                          *(undefined4 *)(lVar7 + 0x58));
      *(double *)(lVar7 + 0x50) =
           *(double *)(lVar7 + 0x50) -
           (double)CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x60) >> 0x20) *
                            (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) * fVar20,
                            (float)*(undefined8 *)(lVar7 + 0x60) *
                            (float)*(undefined8 *)(param_1 + 0x50) * fVar20);
      *(double *)(lVar7 + 0x40) =
           *(double *)(lVar7 + 0x40) -
           (double)CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x70) >> 0x20) *
                            (float)((ulong)uVar12 >> 0x20) * fVar20 *
                            (float)((ulong)*(undefined8 *)(lVar7 + 0x80) >> 0x20) *
                            (float)((ulong)uVar31 >> 0x20),
                            (float)*(undefined8 *)(lVar7 + 0x70) *
                            (float)uVar12 * fVar20 *
                            (float)*(undefined8 *)(lVar7 + 0x80) * (float)uVar31);
      *(undefined4 *)(lVar7 + 0x48) = uVar15;
      *(undefined4 *)(lVar7 + 0x58) = uVar13;
    }
  }
  fVar11 = fVar11 * fVar14;
  fVar14 = 0.0;
  fVar25 = 0.0;
  fVar27 = 0.0;
  fVar29 = 0.0;
  fVar20 = 0.0;
  fVar24 = 0.0;
  fVar17 = 0.0;
  lVar6 = *plVar5;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (lVar6 != 0) {
    lVar6 = lVar3 + lVar9 * 0xf8;
    fVar29 = *(float *)(lVar6 + 0xd0);
    fVar27 = *(float *)(lVar6 + 0xd4);
    fVar17 = *(float *)(lVar6 + 0xe0);
    fVar24 = *(float *)(lVar6 + 0xe4);
    fVar25 = *(float *)(lVar6 + 0xd8);
    fVar20 = *(float *)(lVar6 + 0xe8);
  }
  fVar21 = fVar21 + fVar18;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar23 = 0.0;
  fVar26 = 0.0;
  fVar18 = 0.0;
  fVar28 = 0.0;
  fVar30 = 0.0;
  if (*plVar4 != 0) {
    lVar6 = lVar3 + lVar8 * 0xf8;
    fVar14 = *(float *)(lVar6 + 0xd0);
    fVar23 = *(float *)(lVar6 + 0xd4);
    fVar30 = *(float *)(lVar6 + 0xe0);
    fVar28 = *(float *)(lVar6 + 0xe4);
    fVar26 = *(float *)(lVar6 + 0xd8);
    fVar18 = *(float *)(lVar6 + 0xe8);
  }
  lVar6 = lVar3 + lVar9 * 0xf8;
  lVar3 = lVar3 + lVar8 * 0xf8;
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),*(float *)(lVar6 + 0xb4) + fVar27,
                      *(float *)(param_1 + 0x10) * (*(float *)(lVar6 + 0xb0) + fVar29));
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),*(float *)(lVar6 + 0xb8) + fVar25,uVar13);
  uVar13 = NEON_fmadd(*(undefined4 *)param_1,*(float *)(lVar6 + 0xc0) + fVar17,uVar13);
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 4),*(float *)(lVar6 + 0xc4) + fVar24,uVar13);
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 8),*(float *)(lVar6 + 200) + fVar20,uVar13);
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0x30),*(float *)(lVar3 + 0xb0) + fVar14,uVar13);
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0x34),*(float *)(lVar3 + 0xb4) + fVar23,uVar13);
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0x38),*(float *)(lVar3 + 0xb8) + fVar26,uVar13);
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0x20),*(float *)(lVar3 + 0xc0) + fVar30,uVar13);
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),*(float *)(lVar3 + 0xc4) + fVar28,uVar13);
  bVar2 = *(int *)(param_5 + 0x2c) != 0;
  fVar14 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),*(float *)(lVar3 + 200) + fVar18,uVar13
                            );
  bVar1 = fVar21 <= *(float *)(param_5 + 0x30);
  fVar11 = fVar11 - fVar14;
  if (fVar21 <= 0.0) {
    lVar3 = 0x20;
    if (bVar2 && bVar1) {
      lVar3 = 0x24;
    }
    fVar14 = (*(float *)(param_5 + lVar3) * -fVar21) / *(float *)(param_5 + 0xc);
  }
  else {
    fVar11 = fVar11 - fVar21 / *(float *)(param_5 + 0xc);
    fVar14 = 0.0;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  fVar14 = *(float *)(param_1 + 0x6c) * fVar14;
  *(undefined4 *)(param_1 + 0x7c) = 0x501502f9;
  fVar20 = fVar14;
  if (bVar2 && bVar1) {
    fVar20 = -0.0;
  }
  fVar25 = 0.0;
  if (bVar2 && bVar1) {
    fVar25 = fVar14;
  }
  uVar13 = NEON_fmadd(*(float *)(param_1 + 0x6c),fVar11,fVar20);
  *(float *)(param_1 + 0x80) = fVar25;
  *(undefined4 *)(param_1 + 0x70) = uVar13;
  return;
}


