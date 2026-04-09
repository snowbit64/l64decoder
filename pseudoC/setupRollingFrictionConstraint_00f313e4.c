// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupRollingFrictionConstraint
// Entry Point: 00f313e4
// Size: 684 bytes
// Signature: undefined __cdecl setupRollingFrictionConstraint(btSolverConstraint * param_1, btVector3 * param_2, int param_3, int param_4, btManifoldPoint * param_5, btVector3 * param_6, btVector3 * param_7, btCollisionObject * param_8, btCollisionObject * param_9, float param_10, float param_11, float param_12)


/* btSequentialImpulseConstraintSolver::setupRollingFrictionConstraint(btSolverConstraint&,
   btVector3 const&, int, int, btManifoldPoint&, btVector3 const&, btVector3 const&,
   btCollisionObject*, btCollisionObject*, float, float, float) */

void btSequentialImpulseConstraintSolver::setupRollingFrictionConstraint
               (btSolverConstraint *param_1,btVector3 *param_2,int param_3,int param_4,
               btManifoldPoint *param_5,btVector3 *param_6,btVector3 *param_7,
               btCollisionObject *param_8,btCollisionObject *param_9,float param_10,float param_11,
               float param_12)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  
  iVar2 = (int)param_5;
  puVar1 = (undefined8 *)(ulong)(uint)param_3;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar15 = 0;
  fVar16 = 0.0;
  fVar18 = 0.0;
  uVar14 = 0;
  *(int *)(param_2 + 0x98) = param_4;
  *(int *)(param_2 + 0x9c) = iVar2;
  *(undefined8 *)(param_2 + 0x38) = 0x80000000;
  *(undefined8 *)(param_2 + 0x30) = 0x8000000080000000;
  lVar3 = *(long *)(param_1 + 0x18);
  fVar6 = *(float *)(param_6 + 0x58);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(float *)(param_2 + 0x68) = fVar6;
  lVar5 = *(long *)(lVar3 + (long)param_4 * 0xf8 + 0xf0);
  lVar4 = *(long *)(lVar3 + (long)iVar2 * 0xf8 + 0xf0);
  *(undefined8 *)(param_2 + 0x88) = 0;
  fVar7 = *(float *)puVar1;
  uVar9 = *(undefined8 *)((long)puVar1 + 4);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar11 = -fVar7;
  fVar8 = (float)uVar9;
  fVar10 = (float)((ulong)uVar9 >> 0x20);
  *(float *)param_2 = fVar11;
  *(ulong *)(param_2 + 4) = CONCAT44(-fVar10,-fVar8);
  if (lVar5 != 0) {
    uVar9 = NEON_rev64(CONCAT44(*(float *)(lVar5 + 0x154) * fVar10,*(float *)(lVar5 + 0x160) * fVar8
                               ),4);
    fVar18 = (float)NEON_fnmsub(*(undefined4 *)(lVar5 + 0x16c),fVar11,
                                (float)*(undefined8 *)(lVar5 + 0x170) * fVar8 +
                                (float)((ulong)*(undefined8 *)(lVar5 + 0x170) >> 0x20) * fVar10);
    uVar14 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x278) >> 0x20) *
                      (-((float)((ulong)uVar9 >> 0x20) + fVar10 * *(float *)(lVar5 + 0x164)) +
                      *(float *)(lVar5 + 0x15c) * fVar11),
                      (float)*(undefined8 *)(lVar5 + 0x278) *
                      (-((float)uVar9 + fVar8 * *(float *)(lVar5 + 0x150)) +
                      *(float *)(lVar5 + 0x14c) * fVar11));
    fVar18 = *(float *)(lVar5 + 0x280) * fVar18;
  }
  *(undefined8 *)(param_2 + 0x40) = uVar14;
  *(float *)(param_2 + 0x48) = fVar18;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  uVar9 = *puVar1;
  uVar14 = puVar1[1];
  *(undefined8 *)(param_2 + 0x20) = uVar9;
  *(undefined8 *)(param_2 + 0x28) = uVar14;
  fVar18 = (float)uVar9;
  fVar12 = (float)((ulong)uVar9 >> 0x20);
  fVar13 = (float)uVar14;
  if (lVar4 != 0) {
    uVar9 = NEON_rev64(CONCAT44(*(float *)(lVar4 + 0x150) * fVar12,
                                *(float *)(lVar4 + 0x15c) * fVar18),4);
    uVar15 = CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x278) >> 0x20) *
                      ((float)((ulong)uVar9 >> 0x20) + fVar12 * *(float *)(lVar4 + 0x160) +
                      *(float *)(lVar4 + 0x164) * fVar13),
                      (float)*(undefined8 *)(lVar4 + 0x278) *
                      ((float)uVar9 + fVar18 * *(float *)(lVar4 + 0x14c) +
                      *(float *)(lVar4 + 0x154) * fVar13));
    fVar16 = *(float *)(lVar4 + 0x280) *
             ((float)*(undefined8 *)(lVar4 + 0x16c) * fVar18 +
              (float)((ulong)*(undefined8 *)(lVar4 + 0x16c) >> 0x20) * fVar12 +
             *(float *)(lVar4 + 0x174) * fVar13);
  }
  *(undefined8 *)(param_2 + 0x50) = uVar15;
  *(float *)(param_2 + 0x58) = fVar16;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (lVar5 == 0) {
    uVar17 = 0;
    fVar16 = 0.0;
    fVar20 = 0.0;
  }
  else {
    uVar17 = NEON_fnmsub(*(undefined4 *)(lVar5 + 0x14c),fVar11,
                         *(float *)(lVar5 + 0x154) * fVar10 + *(float *)(lVar5 + 0x150) * fVar8);
    fVar16 = (float)NEON_fnmsub(*(undefined4 *)(lVar5 + 0x15c),fVar11,
                                *(float *)(lVar5 + 0x164) * fVar10 +
                                *(float *)(lVar5 + 0x160) * fVar8);
    fVar20 = (float)NEON_fnmsub(*(undefined4 *)(lVar5 + 0x16c),fVar11,
                                *(float *)(lVar5 + 0x174) * fVar10 +
                                *(float *)(lVar5 + 0x170) * fVar8);
  }
  if (lVar4 == 0) {
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar25 = 0.0;
  }
  else {
    fVar22 = *(float *)(lVar4 + 0x14c) * fVar18 + *(float *)(lVar4 + 0x150) * fVar12 +
             *(float *)(lVar4 + 0x154) * fVar13;
    fVar23 = *(float *)(lVar4 + 0x15c) * fVar18 + *(float *)(lVar4 + 0x160) * fVar12 +
             *(float *)(lVar4 + 0x164) * fVar13;
    fVar25 = *(float *)(lVar4 + 0x16c) * fVar18 + *(float *)(lVar4 + 0x170) * fVar12 +
             *(float *)(lVar4 + 0x174) * fVar13;
  }
  fVar19 = 0.0;
  uVar17 = NEON_fnmsub(uVar17,fVar11,fVar20 * fVar10 + fVar16 * fVar8);
  uVar21 = 0;
  uVar17 = NEON_fmadd(fVar18,fVar22,uVar17);
  fVar16 = 0.0;
  uVar17 = NEON_fmadd(fVar12,fVar23,uVar17);
  fVar11 = (float)NEON_fmadd(fVar13,fVar25,uVar17);
  uVar17 = 0;
  *(float *)(param_2 + 0x6c) = 1.0 / fVar11;
  if (lVar5 != 0) {
    lVar5 = lVar3 + (long)param_4 * 0xf8;
    fVar16 = *(float *)(lVar5 + 0xc0);
    fVar19 = *(float *)(lVar5 + 0xc4);
    uVar21 = *(undefined4 *)(lVar5 + 200);
  }
  uVar26 = 0;
  uVar24 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar3 + (long)iVar2 * 0xf8;
    uVar24 = *(undefined4 *)(lVar3 + 0xc0);
    uVar26 = *(undefined4 *)(lVar3 + 0xc4);
    uVar17 = *(undefined4 *)(lVar3 + 200);
  }
  fVar7 = (float)NEON_fmadd(fVar10,uVar21,fVar7 * fVar16);
  uVar17 = NEON_fnmsub(uVar17,fVar13,fVar7 - fVar19 * -fVar8);
  uVar17 = NEON_fmadd(uVar26,fVar12,uVar17);
  fVar7 = (float)NEON_fmadd(uVar24,fVar18,uVar17);
  *(float *)(param_2 + 0x78) = -fVar6;
  *(float *)(param_2 + 0x7c) = fVar6;
  *(float *)(param_2 + 0x70) = (param_11 - fVar7) * (1.0 / fVar11);
  *(float *)(param_2 + 0x74) = param_12;
  return;
}


