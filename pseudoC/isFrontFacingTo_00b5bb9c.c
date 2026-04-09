// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isFrontFacingTo
// Entry Point: 00b5bb9c
// Size: 44 bytes
// Signature: undefined __thiscall isFrontFacingTo(Plane * this, Vector3 * param_1)


/* Plane::isFrontFacingTo(Vector3 const&) const */

bool __thiscall Plane::isFrontFacingTo(Plane *this,Vector3 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*(undefined4 *)this,*(undefined4 *)param_1,
                     *(float *)(this + 4) * *(float *)(param_1 + 4));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(this + 8),*(undefined4 *)(param_1 + 8),uVar1);
  return fVar2 <= 0.0;
}


