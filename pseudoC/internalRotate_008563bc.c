// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: internalRotate
// Entry Point: 008563bc
// Size: 372 bytes
// Signature: undefined __thiscall internalRotate(Joint * this, Matrix4x4 * param_1)


/* CCDIKSolverUtil::Joint::internalRotate(Matrix4x4 const&) */

void __thiscall CCDIKSolverUtil::Joint::internalRotate(Joint *this,Matrix4x4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  fVar9 = *(float *)(this + 0x30);
  fVar3 = *(float *)(this + 0x34);
  puVar1 = (undefined4 *)(this + 0x20);
  uVar10 = *puVar1;
  uVar2 = NEON_fmadd(*(undefined4 *)param_1,uVar10,fVar9 * *(float *)(param_1 + 4));
  uVar11 = *(undefined4 *)(this + 0x40);
  uVar4 = *(undefined4 *)(this + 0x44);
  uVar2 = NEON_fmadd(*(undefined4 *)(param_1 + 8),uVar11,uVar2);
  *puVar1 = uVar2;
  uVar8 = *(undefined4 *)(this + 0x24);
  uVar2 = *(undefined4 *)(this + 0x28);
  uVar5 = NEON_fmadd(*(undefined4 *)param_1,uVar8,fVar3 * *(float *)(param_1 + 4));
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 8),uVar4,uVar5);
  fVar6 = *(float *)(this + 0x38);
  *(undefined4 *)(this + 0x24) = uVar5;
  uVar7 = *(undefined4 *)(this + 0x48);
  uVar5 = NEON_fmadd(*(undefined4 *)param_1,uVar2,fVar6 * *(float *)(param_1 + 4));
  uVar12 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x2c) = 0;
  uVar5 = NEON_fmadd(uVar12,uVar7,uVar5);
  *(undefined4 *)(this + 0x28) = uVar5;
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x10),uVar10,fVar9 * *(float *)(param_1 + 0x14));
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),uVar11,uVar5);
  *(undefined4 *)(this + 0x30) = uVar5;
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x10),uVar8,fVar3 * *(float *)(param_1 + 0x14));
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),uVar4,uVar5);
  *(undefined4 *)(this + 0x34) = uVar5;
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x10),uVar2,fVar6 * *(float *)(param_1 + 0x14));
  uVar12 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x3c) = 0;
  uVar5 = NEON_fmadd(uVar12,uVar7,uVar5);
  *(undefined4 *)(this + 0x38) = uVar5;
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x20),uVar10,fVar9 * *(float *)(param_1 + 0x24));
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x28),uVar11,uVar5);
  *(undefined4 *)(this + 0x40) = uVar5;
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x20),uVar8,fVar3 * *(float *)(param_1 + 0x24));
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x28),uVar4,uVar5);
  *(undefined4 *)(this + 0x44) = uVar5;
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x20),uVar2,fVar6 * *(float *)(param_1 + 0x24));
  uVar12 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x4c) = 0;
  uVar5 = NEON_fmadd(uVar12,uVar7,uVar5);
  *(undefined4 *)(this + 0x48) = uVar5;
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x30),uVar10,fVar9 * *(float *)(param_1 + 0x34));
  fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x38),uVar11,uVar5);
  *(float *)(this + 0x50) = *(float *)(this + 0x50) + fVar9;
  uVar5 = NEON_fmadd(*(undefined4 *)(param_1 + 0x30),uVar8,fVar3 * *(float *)(param_1 + 0x34));
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x38),uVar4,uVar5);
  *(float *)(this + 0x54) = *(float *)(this + 0x54) + fVar3;
  uVar2 = NEON_fmadd(*(undefined4 *)(param_1 + 0x30),uVar2,fVar6 * *(float *)(param_1 + 0x34));
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x5c) = 0x3f800000;
  fVar3 = (float)NEON_fmadd(uVar5,uVar7,uVar2);
  *(float *)(this + 0x58) = *(float *)(this + 0x58) + fVar3;
  JointLimits::bound((JointLimits *)this,(Matrix4x4 *)puVar1);
  return;
}


