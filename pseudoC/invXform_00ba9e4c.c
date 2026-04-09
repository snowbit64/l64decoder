// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invXform
// Entry Point: 00ba9e4c
// Size: 88 bytes
// Signature: undefined __thiscall invXform(btTransform * this, btVector3 * param_1)


/* btTransform::invXform(btVector3 const&) const */

undefined  [16] __thiscall btTransform::invXform(btTransform *this,btVector3 *param_1)

{
  undefined auVar1 [16];
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_1 + 4) - *(float *)(this + 0x34);
  fVar4 = *(float *)param_1 - *(float *)(this + 0x30);
  fVar5 = *(float *)(param_1 + 8) - *(float *)(this + 0x38);
  uVar3 = NEON_fmadd(*(undefined4 *)(this + 8),fVar4,fVar2 * *(float *)(this + 0x18));
  auVar1._0_4_ = (float)*(undefined8 *)(this + 0x10) * fVar2 + (float)*(undefined8 *)this * fVar4 +
                 (float)*(undefined8 *)(this + 0x20) * fVar5;
  auVar1._4_4_ = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) * fVar2 +
                 (float)((ulong)*(undefined8 *)this >> 0x20) * fVar4 +
                 (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) * fVar5;
  NEON_fmadd(*(undefined4 *)(this + 0x28),fVar5,uVar3);
  auVar1._8_8_ = 0;
  return auVar1;
}


