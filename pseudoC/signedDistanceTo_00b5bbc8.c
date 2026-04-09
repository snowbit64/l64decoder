// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: signedDistanceTo
// Entry Point: 00b5bbc8
// Size: 40 bytes
// Signature: undefined __thiscall signedDistanceTo(Plane * this, Vector3 * param_1)


/* Plane::signedDistanceTo(Vector3 const&) const */

float __thiscall Plane::signedDistanceTo(Plane *this,Vector3 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = NEON_fmadd(*(undefined4 *)param_1,*(undefined4 *)this,
                     *(float *)(param_1 + 4) * *(float *)(this + 4));
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*(undefined4 *)(this + 8),uVar1);
  return fVar2 + *(float *)(this + 0xc);
}


