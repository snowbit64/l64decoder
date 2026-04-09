// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initWheelSuspSolverConstraintBase
// Entry Point: 009bab40
// Size: 1008 bytes
// Signature: undefined __thiscall initWheelSuspSolverConstraintBase(Bt2RaycastVehicle * this, SuspSolverConstraintInfo * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5, btRigidBody * param_6, btRigidBody * param_7, btSolverBody * param_8, btSolverBody * param_9, float * param_10, float * param_11, float * param_12, float * param_13, float * param_14, float * param_15)


/* Bt2RaycastVehicle::initWheelSuspSolverConstraintBase(Bt2RaycastVehicle::SuspSolverConstraintInfo&,
   btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&, btRigidBody*,
   btRigidBody*, btSolverBody*, btSolverBody*, float&, float&, float&, float&, float&, float&) */

void __thiscall
Bt2RaycastVehicle::initWheelSuspSolverConstraintBase
          (Bt2RaycastVehicle *this,SuspSolverConstraintInfo *param_1,btVector3 *param_2,
          btVector3 *param_3,btVector3 *param_4,btVector3 *param_5,btRigidBody *param_6,
          btRigidBody *param_7,btSolverBody *param_8,btSolverBody *param_9,float *param_10,
          float *param_11,float *param_12,float *param_13,float *param_14,float *param_15)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  uVar1 = NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)param_2,
                     *(float *)(param_4 + 4) * *(float *)(param_2 + 4));
  uVar1 = NEON_fmadd(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_2 + 8),uVar1);
  fVar2 = (float)NEON_fminnm(uVar1,0xbdcccccd);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(float *)(param_1 + 0x78) = 1.0 / fVar2;
  fVar6 = *(float *)(param_4 + 4);
  fVar9 = *(float *)(param_4 + 8);
  fVar11 = *(float *)param_4;
  fVar2 = (float)NEON_fmadd(*(float *)(param_5 + 8),fVar11,fVar9 * -*(float *)param_5);
  fVar16 = *(float *)param_3 - *(float *)(param_9 + 0x30);
  uVar14 = NEON_fmadd(*(float *)(param_5 + 4),fVar9,fVar6 * -*(float *)(param_5 + 8));
  uVar17 = NEON_fmadd(*(float *)param_5,fVar6,fVar11 * -*(float *)(param_5 + 4));
  fVar19 = *(float *)(param_3 + 8) - *(float *)(param_9 + 0x38);
  uVar22 = NEON_fmadd(*(undefined4 *)(param_6 + 0x14c),uVar14,*(float *)(param_6 + 0x150) * fVar2);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_6 + 0x15c),uVar14,fVar2 * *(float *)(param_6 + 0x160));
  uVar14 = NEON_fmadd(*(undefined4 *)(param_6 + 0x16c),uVar14,fVar2 * *(float *)(param_6 + 0x170));
  fVar7 = *(float *)(param_3 + 4) - *(float *)(param_9 + 0x34);
  fVar23 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 0x154),uVar17,uVar22);
  fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 0x164),uVar17,uVar1);
  fVar5 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 0x174),uVar17,uVar14);
  fVar18 = *(float *)(param_3 + 8) - *(float *)(param_8 + 0x38);
  fVar8 = *(float *)(param_3 + 4) - *(float *)(param_8 + 0x34);
  fVar3 = (float)NEON_fmadd(fVar19,fVar11,fVar9 * -fVar16);
  fVar27 = *(float *)param_3 - *(float *)(param_8 + 0x30);
  fVar2 = fVar5 * *(float *)(param_6 + 0x280);
  uVar1 = NEON_fmadd(fVar7,fVar9,fVar6 * -fVar19);
  fVar4 = fVar10 * *(float *)(param_6 + 0x27c);
  fVar31 = (float)NEON_fmadd(fVar2,fVar27,fVar18 * -(fVar23 * *(float *)(param_6 + 0x278)));
  uVar14 = NEON_fmadd(fVar16,fVar6,fVar11 * -fVar7);
  fVar23 = fVar23 * *(float *)(param_6 + 0x278);
  uVar20 = NEON_fmadd(*(undefined4 *)(param_7 + 0x14c),uVar1,fVar3 * *(float *)(param_7 + 0x150));
  uVar17 = NEON_fmadd(fVar4,fVar18,fVar8 * -(fVar5 * *(float *)(param_6 + 0x280)));
  uVar22 = NEON_fmadd(fVar23,fVar8,fVar27 * -(fVar10 * *(float *)(param_6 + 0x27c)));
  fVar21 = (float)NEON_fmadd(*(undefined4 *)(param_7 + 0x154),uVar14,uVar20);
  uVar17 = NEON_fmadd(fVar11,uVar17,fVar6 * fVar31);
  uVar20 = NEON_fmadd(*(undefined4 *)(param_7 + 0x16c),uVar1,fVar3 * *(float *)(param_7 + 0x170));
  fVar24 = *(float *)(param_7 + 0x278);
  uVar25 = NEON_fmadd(*(undefined4 *)(param_7 + 0x15c),uVar1,fVar3 * *(float *)(param_7 + 0x160));
  fVar10 = (float)NEON_fmadd(fVar9,uVar22,uVar17);
  fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_7 + 0x174),uVar14,uVar20);
  fVar28 = *(float *)(param_7 + 0x280);
  fVar26 = (float)NEON_fmadd(*(undefined4 *)(param_7 + 0x164),uVar14,uVar25);
  fVar5 = fVar15 * fVar28;
  fVar29 = *(float *)(param_7 + 0x27c);
  fVar31 = fVar26 * fVar29;
  fVar30 = (float)NEON_fmadd(fVar5,fVar16,fVar19 * -(fVar21 * fVar24));
  *param_10 = fVar10 + *(float *)(param_6 + 0x19c);
  fVar21 = fVar21 * fVar24;
  uVar22 = NEON_fmadd(fVar31,fVar19,fVar7 * -(fVar15 * fVar28));
  uVar17 = NEON_fmadd(fVar21,fVar7,fVar16 * -(fVar26 * fVar29));
  uVar22 = NEON_fmadd(*(undefined4 *)param_4,uVar22,fVar30 * *(float *)(param_4 + 4));
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),uVar17,uVar22);
  uVar22 = NEON_fmadd(fVar8,fVar9,fVar6 * -fVar18);
  *param_11 = *(float *)(param_7 + 0x19c) + fVar7;
  fVar7 = (float)NEON_fmadd(fVar18,fVar11,fVar9 * -fVar27);
  uVar17 = NEON_fmadd(fVar27,fVar6,fVar11 * -fVar8);
  uVar20 = NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)(param_8 + 0xb0),
                      *(float *)(param_4 + 4) * *(float *)(param_8 + 0xb4));
  uVar25 = NEON_fmadd(uVar22,*(undefined4 *)(param_8 + 0xc0),fVar7 * *(float *)(param_8 + 0xc4));
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_8 + 0xb8),uVar20);
  fVar8 = (float)NEON_fmadd(uVar17,*(undefined4 *)(param_8 + 200),uVar25);
  *param_14 = fVar6 + fVar8;
  uVar20 = NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)(param_9 + 0xb0),
                      *(float *)(param_4 + 4) * *(float *)(param_9 + 0xb4));
  uVar25 = NEON_fmadd(uVar1,*(undefined4 *)(param_9 + 0xc0),fVar3 * *(float *)(param_9 + 0xc4));
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_9 + 0xb8),uVar20);
  fVar8 = (float)NEON_fmadd(uVar14,*(undefined4 *)(param_9 + 200),uVar25);
  *param_15 = fVar6 + fVar8;
  uVar20 = NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)(param_8 + 0xd0),
                      *(float *)(param_4 + 4) * *(float *)(param_8 + 0xd4));
  uVar25 = NEON_fmadd(uVar22,*(undefined4 *)(param_8 + 0xe0),fVar7 * *(float *)(param_8 + 0xe4));
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_8 + 0xd8),uVar20);
  fVar8 = (float)NEON_fmadd(uVar17,*(undefined4 *)(param_8 + 0xe8),uVar25);
  *param_12 = *param_14 + fVar6 + fVar8;
  uVar20 = NEON_fmadd(*(undefined4 *)param_4,*(undefined4 *)(param_9 + 0xd0),
                      *(float *)(param_4 + 4) * *(float *)(param_9 + 0xd4));
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_9 + 0xd8),uVar20);
  uVar20 = NEON_fmadd(uVar1,*(undefined4 *)(param_9 + 0xe0),fVar3 * *(float *)(param_9 + 0xe4));
  fVar8 = (float)NEON_fmadd(uVar14,*(undefined4 *)(param_9 + 0xe8),uVar20);
  *param_13 = *param_15 + fVar6 + fVar8;
  *param_12 = *(float *)(param_1 + 0x78) * *param_12;
  *param_13 = *(float *)(param_1 + 0x78) * *param_13;
  *param_14 = *(float *)(param_1 + 0x78) * *param_14;
  *param_15 = *(float *)(param_1 + 0x78) * *param_15;
  uVar13 = *(undefined8 *)(param_4 + 8);
  uVar12 = *(undefined8 *)param_4;
  *(undefined4 *)param_1 = uVar22;
  *(float *)(param_1 + 4) = fVar7;
  *(undefined4 *)(param_1 + 8) = uVar17;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(float *)(param_1 + 0x14) = fVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar14;
  *(float *)(param_1 + 0x30) = fVar23;
  *(float *)(param_1 + 0x34) = fVar4;
  *(float *)(param_1 + 0x38) = fVar2;
  *(float *)(param_1 + 0x40) = fVar21;
  *(float *)(param_1 + 0x44) = fVar31;
  *(float *)(param_1 + 0x48) = fVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}


