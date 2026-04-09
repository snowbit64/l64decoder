// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f57740
// Size: 232 bytes
// Signature: undefined __thiscall getAabb(btBoxShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btBoxShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btBoxShape::getAabb(btBoxShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  fVar1 = (float)(**(code **)(*(long *)this + 0x60))();
  fVar2 = *(float *)(this + 0x2c) + fVar1;
  fVar4 = *(float *)(this + 0x30) + fVar1;
  fVar1 = *(float *)(this + 0x34) + fVar1;
  uVar5 = NEON_fmadd(ABS(*(float *)(param_1 + 4)),fVar4,ABS(*(float *)param_1) * fVar2);
  uVar8 = NEON_fmadd(ABS(*(float *)(param_1 + 0x14)),fVar4,ABS(*(float *)(param_1 + 0x10)) * fVar2);
  uVar3 = NEON_fmadd(ABS(*(float *)(param_1 + 0x24)),fVar4,ABS(*(float *)(param_1 + 0x20)) * fVar2);
  fVar4 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 8)),fVar1,uVar5);
  fVar6 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 0x18)),fVar1,uVar8);
  fVar7 = *(float *)(param_1 + 0x30);
  fVar9 = *(float *)(param_1 + 0x34);
  fVar1 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 0x28)),fVar1,uVar3);
  fVar2 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)param_2 = fVar7 - fVar4;
  *(float *)(param_2 + 4) = fVar9 - fVar6;
  *(float *)(param_2 + 8) = fVar2 - fVar1;
  *(float *)param_3 = fVar7 + fVar4;
  *(float *)(param_3 + 4) = fVar9 + fVar6;
  *(float *)(param_3 + 8) = fVar1 + fVar2;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}


