// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getZatXY
// Entry Point: 00b5bf28
// Size: 36 bytes
// Signature: undefined __thiscall getZatXY(Plane * this, float param_1, float param_2)


/* Plane::getZatXY(float, float) const */

float __thiscall Plane::getZatXY(Plane *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)NEON_fmadd(*(undefined4 *)this,param_1,*(float *)(this + 4) * param_2);
  return (*(float *)(this + 0xc) + fVar1) / -*(float *)(this + 8);
}


