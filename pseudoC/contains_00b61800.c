// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: contains
// Entry Point: 00b61800
// Size: 56 bytes
// Signature: undefined __thiscall contains(BoundingSphere * this, Vector3 * param_1)


/* BoundingSphere::contains(Vector3 const&) const */

bool __thiscall BoundingSphere::contains(BoundingSphere *this,Vector3 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*(float *)param_1 - *(float *)(this + 0xc),
                     *(float *)param_1 - *(float *)(this + 0xc),
                     (*(float *)(param_1 + 4) - *(float *)(this + 0x10)) *
                     (*(float *)(param_1 + 4) - *(float *)(this + 0x10)));
  fVar2 = (float)NEON_fmadd(*(float *)(param_1 + 8) - *(float *)(this + 0x14),
                            *(float *)(param_1 + 8) - *(float *)(this + 0x14),uVar1);
  return fVar2 <= *(float *)(this + 0x18) * *(float *)(this + 0x18);
}


