// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initWheelSolverConstraintBase
// Entry Point: 009baf30
// Size: 760 bytes
// Signature: undefined __thiscall initWheelSolverConstraintBase(Bt2RaycastVehicle * this, SolverConstraintInfo * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btRigidBody * param_5, btRigidBody * param_6, btSolverBody * param_7, btSolverBody * param_8, float * param_9, float * param_10, float * param_11, float * param_12)


/* Bt2RaycastVehicle::initWheelSolverConstraintBase(Bt2RaycastVehicle::SolverConstraintInfo&,
   btVector3 const&, btVector3 const&, btVector3 const&, btRigidBody*, btRigidBody*, btSolverBody*,
   btSolverBody*, float&, float&, float&, float&) */

void __thiscall
Bt2RaycastVehicle::initWheelSolverConstraintBase
          (Bt2RaycastVehicle *this,SolverConstraintInfo *param_1,btVector3 *param_2,
          btVector3 *param_3,btVector3 *param_4,btRigidBody *param_5,btRigidBody *param_6,
          btSolverBody *param_7,btSolverBody *param_8,float *param_9,float *param_10,float *param_11
          ,float *param_12)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar6 = *(float *)(param_2 + 8);
  fVar7 = *(float *)(param_3 + 4) - *(float *)(param_7 + 0x34);
  fVar8 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar1 = *(float *)param_3 - *(float *)(param_7 + 0x30);
  fVar10 = *(float *)(param_3 + 8) - *(float *)(param_8 + 0x38);
  fVar9 = *(float *)(param_3 + 8) - *(float *)(param_7 + 0x38);
  fVar15 = (float)NEON_fmadd(*(float *)(param_4 + 8),fVar8,fVar6 * -*(float *)param_4);
  fVar21 = *(float *)param_3 - *(float *)(param_8 + 0x30);
  fVar20 = *(float *)(param_3 + 4) - *(float *)(param_8 + 0x34);
  uVar12 = NEON_fmadd(*(float *)(param_4 + 4),fVar6,fVar3 * -*(float *)(param_4 + 8));
  uVar11 = NEON_fmadd(*(float *)param_4,fVar3,fVar8 * -*(float *)(param_4 + 4));
  uVar2 = NEON_fmadd(*(undefined4 *)(param_5 + 0x14c),uVar12,*(float *)(param_5 + 0x150) * fVar15);
  uVar17 = NEON_fmadd(*(undefined4 *)(param_5 + 0x16c),uVar12,fVar15 * *(float *)(param_5 + 0x170));
  fVar23 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x154),uVar11,uVar2);
  uVar2 = NEON_fmadd(*(undefined4 *)(param_5 + 0x15c),uVar12,fVar15 * *(float *)(param_5 + 0x160));
  uVar12 = NEON_fmadd(fVar20,fVar6,fVar3 * -fVar10);
  fVar14 = (float)NEON_fmadd(fVar10,fVar8,fVar6 * -fVar21);
  fVar18 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x174),uVar11,uVar17);
  uVar13 = NEON_fmadd(fVar21,fVar3,fVar8 * -fVar20);
  fVar22 = (float)NEON_fmadd(*(undefined4 *)(param_5 + 0x164),uVar11,uVar2);
  fVar16 = fVar23 * *(float *)(param_5 + 0x278);
  fVar15 = fVar18 * *(float *)(param_5 + 0x280);
  fVar19 = fVar22 * *(float *)(param_5 + 0x27c);
  fVar25 = (float)NEON_fmadd(fVar15,fVar1,fVar9 * -(fVar23 * *(float *)(param_5 + 0x278)));
  uVar2 = NEON_fmadd(*(undefined4 *)(param_6 + 0x14c),uVar12,fVar14 * *(float *)(param_6 + 0x150));
  uVar11 = NEON_fmadd(fVar19,fVar9,fVar7 * -(fVar18 * *(float *)(param_5 + 0x280)));
  fVar23 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 0x154),uVar13,uVar2);
  uVar2 = NEON_fmadd(fVar16,fVar7,fVar1 * -(fVar22 * *(float *)(param_5 + 0x27c)));
  uVar27 = NEON_fmadd(*(undefined4 *)(param_6 + 0x16c),uVar12,fVar14 * *(float *)(param_6 + 0x170));
  uVar17 = NEON_fmadd(fVar8,uVar11,fVar3 * fVar25);
  uVar11 = NEON_fmadd(*(undefined4 *)(param_6 + 0x15c),uVar12,fVar14 * *(float *)(param_6 + 0x160));
  fVar25 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 0x174),uVar13,uVar27);
  fVar28 = *(float *)(param_6 + 0x280);
  fVar26 = (float)NEON_fmadd(fVar6,uVar2,uVar17);
  fVar24 = (float)NEON_fmadd(*(undefined4 *)(param_6 + 0x164),uVar13,uVar11);
  fVar22 = fVar23 * *(float *)(param_6 + 0x278);
  fVar18 = fVar25 * fVar28;
  fVar29 = *(float *)(param_6 + 0x27c);
  fVar30 = fVar24 * fVar29;
  fVar23 = (float)NEON_fmadd(fVar18,fVar21,fVar10 * -(fVar23 * *(float *)(param_6 + 0x278)));
  *param_9 = fVar26 + *(float *)(param_5 + 0x19c);
  uVar2 = NEON_fmadd(fVar30,fVar10,fVar20 * -(fVar25 * fVar28));
  uVar11 = NEON_fmadd(fVar22,fVar20,fVar21 * -(fVar24 * fVar29));
  uVar2 = NEON_fmadd(*(undefined4 *)param_2,uVar2,fVar23 * *(float *)(param_2 + 4));
  fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),uVar11,uVar2);
  *param_10 = *(float *)(param_6 + 0x19c) + fVar10;
  uVar17 = NEON_fmadd(fVar7,fVar6,fVar3 * -fVar9);
  fVar6 = (float)NEON_fmadd(fVar9,fVar8,fVar6 * -fVar1);
  uVar2 = NEON_fmadd(fVar1,fVar3,fVar8 * -fVar7);
  uVar11 = NEON_fmadd(uVar17,*(undefined4 *)(param_7 + 0xc0),fVar6 * *(float *)(param_7 + 0xc4));
  uVar27 = NEON_fmadd(*(undefined4 *)param_2,*(float *)(param_7 + 0xb0) + *(float *)(param_7 + 0xd0)
                      ,(*(float *)(param_7 + 0xb4) + *(float *)(param_7 + 0xd4)) *
                       *(float *)(param_2 + 4));
  fVar3 = (float)NEON_fmadd(uVar2,*(undefined4 *)(param_7 + 200),uVar11);
  fVar1 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),
                            *(float *)(param_7 + 0xb8) + *(float *)(param_7 + 0xd8),uVar27);
  *param_11 = fVar1 + fVar3;
  uVar11 = NEON_fmadd(*(undefined4 *)param_2,*(float *)(param_8 + 0xb0) + *(float *)(param_8 + 0xd0)
                      ,(*(float *)(param_8 + 0xb4) + *(float *)(param_8 + 0xd4)) *
                       *(float *)(param_2 + 4));
  uVar27 = NEON_fmadd(uVar12,*(undefined4 *)(param_8 + 0xc0),fVar14 * *(float *)(param_8 + 0xc4));
  fVar1 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),
                            *(float *)(param_8 + 0xb8) + *(float *)(param_8 + 0xd8),uVar11);
  fVar3 = (float)NEON_fmadd(uVar13,*(undefined4 *)(param_8 + 200),uVar27);
  *param_12 = fVar1 + fVar3;
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)param_2;
  *(undefined4 *)param_1 = uVar17;
  *(float *)(param_1 + 4) = fVar6;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar12;
  *(float *)(param_1 + 0x14) = fVar14;
  *(undefined4 *)(param_1 + 0x18) = uVar13;
  *(float *)(param_1 + 0x30) = fVar16;
  *(float *)(param_1 + 0x34) = fVar19;
  *(float *)(param_1 + 0x38) = fVar15;
  *(float *)(param_1 + 0x40) = fVar22;
  *(float *)(param_1 + 0x44) = fVar30;
  *(float *)(param_1 + 0x48) = fVar18;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}


