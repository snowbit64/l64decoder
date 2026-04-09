// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00f6ff54
// Size: 96 bytes
// Signature: undefined __thiscall operator()(btTransform * this, btVector3 * param_1)


/* btTransform::TEMPNAMEPLACEHOLDERVALUE(btVector3 const&) const */

float __thiscall btTransform::operator()(btTransform *this,btVector3 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fVar1 = *(float *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar3 = NEON_fmadd(*(undefined4 *)(this + 4),uVar2,*(float *)this * fVar1);
  uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x14),uVar2,*(float *)(this + 0x10) * fVar1);
  uVar2 = NEON_fmadd(*(undefined4 *)(this + 0x24),uVar2,*(float *)(this + 0x20) * fVar1);
  fVar1 = (float)NEON_fmadd(*(undefined4 *)(this + 8),uVar5,uVar3);
  NEON_fmadd(*(undefined4 *)(this + 0x18),uVar5,uVar4);
  NEON_fmadd(*(undefined4 *)(this + 0x28),uVar5,uVar2);
  return fVar1 + *(float *)(this + 0x30);
}


