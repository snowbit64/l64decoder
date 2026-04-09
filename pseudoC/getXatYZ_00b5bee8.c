// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getXatYZ
// Entry Point: 00b5bee8
// Size: 32 bytes
// Signature: undefined __thiscall getXatYZ(Plane * this, float param_1, float param_2)


/* Plane::getXatYZ(float, float) const */

float __thiscall Plane::getXatYZ(Plane *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(*(undefined4 *)(this + 4),param_1,*(float *)(this + 8) * param_2);
  return (*(float *)(this + 0xc) + fVar1) / -*(float *)this;
}


