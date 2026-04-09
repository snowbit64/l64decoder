// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getYatXZ
// Entry Point: 00b5bf08
// Size: 32 bytes
// Signature: undefined __thiscall getYatXZ(Plane * this, float param_1, float param_2)


/* Plane::getYatXZ(float, float) const */

float __thiscall Plane::getYatXZ(Plane *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(*(undefined4 *)this,param_1,*(float *)(this + 8) * param_2);
  return (*(float *)(this + 0xc) + fVar1) / -*(float *)(this + 4);
}


