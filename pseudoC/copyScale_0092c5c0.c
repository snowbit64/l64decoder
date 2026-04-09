// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyScale
// Entry Point: 0092c5c0
// Size: 228 bytes
// Signature: undefined __thiscall copyScale(Matrix4x4 * this, Vector3 * param_1)


/* Matrix4x4::copyScale(Vector3&) const */

void __thiscall Matrix4x4::copyScale(Matrix4x4 *this,Vector3 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = NEON_fmadd(*(undefined4 *)this,*(undefined4 *)this,
                     *(float *)(this + 4) * *(float *)(this + 4));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(this + 8),*(undefined4 *)(this + 8),uVar1);
  fVar2 = SQRT(fVar2);
  uVar1 = NEON_fmadd(*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x10),
                     *(float *)(this + 0x14) * *(float *)(this + 0x14));
  fVar3 = (float)NEON_fmadd(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x18),uVar1);
  fVar3 = SQRT(fVar3);
  uVar1 = NEON_fmadd(*(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x20),
                     *(float *)(this + 0x24) * *(float *)(this + 0x24));
  fVar4 = (float)NEON_fmadd(*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x28),uVar1);
  *(float *)param_1 = fVar2;
  *(float *)(param_1 + 4) = fVar3;
  fVar4 = SQRT(fVar4);
  *(float *)(param_1 + 8) = fVar4;
  if ((fVar2 < 1.00001) && (0.99999 < fVar2)) {
    *(undefined4 *)param_1 = 0x3f800000;
  }
  if ((fVar3 < 1.00001) && (0.99999 < fVar3)) {
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
  }
  if ((fVar4 < 1.00001) && (0.99999 < fVar4)) {
    *(undefined4 *)(param_1 + 8) = 0x3f800000;
  }
  return;
}


