// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupFrictionConstraint
// Entry Point: 00f3104c
// Size: 920 bytes
// Signature: undefined __cdecl setupFrictionConstraint(btSolverConstraint * param_1, btVector3 * param_2, int param_3, int param_4, btManifoldPoint * param_5, btVector3 * param_6, btVector3 * param_7, btCollisionObject * param_8, btCollisionObject * param_9, float param_10, float param_11, float param_12)


/* btSequentialImpulseConstraintSolver::setupFrictionConstraint(btSolverConstraint&, btVector3
   const&, int, int, btManifoldPoint&, btVector3 const&, btVector3 const&, btCollisionObject*,
   btCollisionObject*, float, float, float) */

void btSequentialImpulseConstraintSolver::setupFrictionConstraint
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
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  
  iVar2 = (int)param_5;
  puVar1 = (undefined8 *)(ulong)(uint)param_3;
  lVar3 = *(long *)(param_1 + 0x18);
  fVar6 = *(float *)(param_6 + 0x54);
  *(int *)(param_2 + 0x98) = param_4;
  *(int *)(param_2 + 0x9c) = iVar2;
  *(float *)(param_2 + 0x68) = fVar6;
  lVar5 = *(long *)(lVar3 + (long)param_4 * 0xf8 + 0xf0);
  lVar4 = *(long *)(lVar3 + (long)iVar2 * 0xf8 + 0xf0);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  if (lVar5 == 0) {
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    uVar10 = 0;
    uVar13 = 0;
    fVar16 = 0.0;
    fVar7 = 0.0;
    fVar11 = 0.0;
    fVar17 = 0.0;
    fVar9 = 0.0;
    fVar18 = 0.0;
    fVar12 = 0.0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    uVar8 = *puVar1;
    *(undefined8 *)(param_2 + 0x18) = puVar1[1];
    *(undefined8 *)(param_2 + 0x10) = uVar8;
    fVar11 = *(float *)(param_2 + 0x14);
    fVar7 = *(float *)(param_2 + 0x18);
    fVar12 = *(float *)(param_7 + 4);
    fVar9 = *(float *)(param_7 + 8);
    fVar18 = *(float *)param_7;
    *(undefined4 *)(param_2 + 0xc) = 0;
    fVar17 = *(float *)(param_2 + 0x10);
    fVar16 = (float)NEON_fnmsub(fVar7,fVar12,fVar11 * fVar9);
    uVar13 = NEON_fnmsub(fVar17,fVar9,fVar18 * fVar7);
    uVar10 = NEON_fnmsub(fVar18,fVar11,fVar17 * fVar12);
    *(float *)param_2 = fVar16;
    *(undefined4 *)(param_2 + 4) = uVar13;
    *(undefined4 *)(param_2 + 8) = uVar10;
    uVar19 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x150),uVar13,*(float *)(lVar5 + 0x14c) * fVar16);
    uVar21 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x160),uVar13,*(float *)(lVar5 + 0x15c) * fVar16);
    uVar24 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x170),uVar13,*(float *)(lVar5 + 0x16c) * fVar16);
    fVar20 = (float)NEON_fmadd(*(undefined4 *)(lVar5 + 0x154),uVar10,uVar19);
    fVar9 = *(float *)(lVar5 + 0x278);
    fVar22 = (float)NEON_fmadd(*(undefined4 *)(lVar5 + 0x164),uVar10,uVar21);
    fVar12 = *(float *)(lVar5 + 0x27c);
    fVar25 = (float)NEON_fmadd(*(undefined4 *)(lVar5 + 0x174),uVar10,uVar24);
    fVar18 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_2 + 0x4c) = 0;
    fVar9 = fVar9 * fVar20;
    fVar12 = fVar12 * fVar22;
    fVar18 = fVar18 * fVar25;
    *(float *)(param_2 + 0x40) = fVar9;
    *(float *)(param_2 + 0x44) = fVar12;
    *(float *)(param_2 + 0x48) = fVar18;
  }
  if (lVar4 == 0) {
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    uVar19 = 0;
    uVar21 = 0;
    fVar28 = 0.0;
    fVar25 = 0.0;
    fVar23 = 0.0;
    fVar26 = 0.0;
    fVar20 = 0.0;
    fVar22 = 0.0;
    fVar27 = 0.0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  else {
    fVar20 = *(float *)puVar1;
    fVar22 = *(float *)((long)puVar1 + 4);
    fVar29 = *(float *)(puVar1 + 1);
    *(undefined4 *)(param_2 + 0x3c) = 0;
    fVar26 = -fVar20;
    fVar23 = -fVar22;
    fVar25 = -fVar29;
    *(float *)(param_2 + 0x30) = fVar26;
    *(float *)(param_2 + 0x34) = fVar23;
    *(float *)(param_2 + 0x38) = fVar25;
    fVar30 = *(float *)(param_8 + 4);
    fVar27 = *(float *)(param_8 + 8);
    fVar32 = *(float *)param_8;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    fVar28 = (float)NEON_fnmsub(fVar22,fVar27,fVar29 * fVar30);
    uVar21 = NEON_fnmsub(fVar32,fVar29,fVar20 * fVar27);
    uVar19 = NEON_fnmsub(fVar20,fVar30,fVar22 * fVar32);
    *(float *)(param_2 + 0x20) = fVar28;
    *(undefined4 *)(param_2 + 0x24) = uVar21;
    *(undefined4 *)(param_2 + 0x28) = uVar19;
    fVar22 = *(float *)(lVar4 + 0x27c);
    uVar24 = NEON_fmadd(*(undefined4 *)(lVar4 + 0x150),uVar21,*(float *)(lVar4 + 0x14c) * fVar28);
    uVar31 = NEON_fmadd(*(undefined4 *)(lVar4 + 0x160),uVar21,*(float *)(lVar4 + 0x15c) * fVar28);
    uVar33 = NEON_fmadd(*(undefined4 *)(lVar4 + 0x170),uVar21,*(float *)(lVar4 + 0x16c) * fVar28);
    fVar29 = (float)NEON_fmadd(*(undefined4 *)(lVar4 + 0x154),uVar19,uVar24);
    fVar27 = *(float *)(lVar4 + 0x278);
    fVar32 = (float)NEON_fmadd(*(undefined4 *)(lVar4 + 0x164),uVar19,uVar31);
    fVar30 = (float)NEON_fmadd(*(undefined4 *)(lVar4 + 0x174),uVar19,uVar33);
    fVar20 = *(float *)(lVar4 + 0x280);
    *(undefined4 *)(param_2 + 0x5c) = 0;
    fVar27 = fVar27 * fVar29;
    fVar22 = fVar22 * fVar32;
    fVar20 = fVar20 * fVar30;
    *(float *)(param_2 + 0x50) = fVar27;
    *(float *)(param_2 + 0x54) = fVar22;
    *(float *)(param_2 + 0x58) = fVar20;
  }
  fVar29 = 0.0;
  fVar30 = 0.0;
  if (lVar5 != 0) {
    uVar24 = NEON_fnmsub(*(float *)(param_7 + 8),fVar12,*(float *)(param_7 + 4) * fVar18);
    uVar24 = NEON_fmadd(*(undefined4 *)puVar1,uVar24,*(undefined4 *)(lVar5 + 0x19c));
    uVar33 = NEON_fnmsub(*(float *)param_7,fVar18,fVar9 * *(float *)(param_7 + 8));
    uVar31 = NEON_fnmsub(fVar9,*(float *)(param_7 + 4),*(float *)param_7 * fVar12);
    uVar24 = NEON_fmadd(*(undefined4 *)((long)puVar1 + 4),uVar33,uVar24);
    fVar30 = (float)NEON_fmadd(*(undefined4 *)(puVar1 + 1),uVar31,uVar24);
  }
  if (lVar4 != 0) {
    uVar24 = NEON_fnmsub(*(float *)(param_8 + 4),fVar20,*(float *)(param_8 + 8) * fVar22);
    uVar31 = NEON_fmadd(*(undefined4 *)puVar1,uVar24,*(undefined4 *)(lVar4 + 0x19c));
    uVar24 = NEON_fnmsub(*(float *)(param_8 + 8),fVar27,*(float *)param_8 * fVar20);
    uVar33 = NEON_fnmsub(*(float *)param_8,fVar22,*(float *)(param_8 + 4) * fVar27);
    uVar24 = NEON_fmadd(*(undefined4 *)((long)puVar1 + 4),uVar24,uVar31);
    fVar29 = (float)NEON_fmadd(*(undefined4 *)(puVar1 + 1),uVar33,uVar24);
  }
  fVar20 = 0.0;
  fVar32 = 0.0;
  uVar24 = 0;
  uVar31 = 0;
  uVar33 = 0;
  fVar22 = 0.0;
  fVar27 = 0.0;
  fVar9 = param_10 / (fVar29 + fVar30);
  fVar12 = 0.0;
  fVar18 = 0.0;
  *(float *)(param_2 + 0x6c) = fVar9;
  if (lVar5 != 0) {
    lVar5 = lVar3 + (long)param_4 * 0xf8;
    fVar32 = *(float *)(lVar5 + 0xd0) + *(float *)(lVar5 + 0xb0);
    uVar24 = *(undefined4 *)(lVar5 + 200);
    uVar33 = *(undefined4 *)(lVar5 + 0xc0);
    uVar31 = *(undefined4 *)(lVar5 + 0xc4);
    fVar22 = (float)*(undefined8 *)(lVar5 + 0xd4) + (float)*(undefined8 *)(lVar5 + 0xb4);
    fVar27 = (float)((ulong)*(undefined8 *)(lVar5 + 0xd4) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar5 + 0xb4) >> 0x20);
  }
  uVar34 = 0;
  uVar14 = 0;
  uVar15 = 0;
  if (lVar4 != 0) {
    lVar3 = lVar3 + (long)iVar2 * 0xf8;
    fVar12 = (float)*(undefined8 *)(lVar3 + 0xd0) + (float)*(undefined8 *)(lVar3 + 0xb0);
    fVar18 = (float)((ulong)*(undefined8 *)(lVar3 + 0xd0) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar3 + 0xb0) >> 0x20);
    fVar20 = *(float *)(lVar3 + 0xd8) + *(float *)(lVar3 + 0xb8);
    uVar34 = *(undefined4 *)(lVar3 + 200);
    uVar15 = *(undefined4 *)(lVar3 + 0xc0);
    uVar14 = *(undefined4 *)(lVar3 + 0xc4);
  }
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(float *)(param_2 + 0x74) = param_12;
  *(float *)(param_2 + 0x7c) = fVar6;
  uVar33 = NEON_fmadd(fVar16,uVar33,fVar17 * fVar32 + fVar11 * fVar22 + fVar7 * fVar27);
  uVar13 = NEON_fmadd(uVar13,uVar31,uVar33);
  fVar7 = (float)NEON_fmadd(uVar10,uVar24,uVar13);
  uVar13 = NEON_fmadd(fVar25,fVar20,fVar7 + fVar26 * fVar12 + fVar23 * fVar18);
  uVar13 = NEON_fmadd(fVar28,uVar15,uVar13);
  uVar13 = NEON_fmadd(uVar21,uVar14,uVar13);
  fVar7 = (float)NEON_fmadd(uVar19,uVar34,uVar13);
  *(float *)(param_2 + 0x78) = -fVar6;
  *(float *)(param_2 + 0x70) = (param_11 - fVar7) * fVar9;
  return;
}


