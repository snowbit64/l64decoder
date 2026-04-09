// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getGlobalParam
// Entry Point: 00b5f844
// Size: 36 bytes
// Signature: undefined __thiscall getGlobalParam(Spline * this, uint param_1, float param_2)


/* Spline::getGlobalParam(unsigned int, float) const */

float __thiscall Spline::getGlobalParam(Spline *this,uint param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(*(long *)(this + 0x10) + (ulong)param_1 * 4);
  fVar1 = (float)NEON_fmadd(*(float *)(*(long *)(this + 0x10) + (ulong)(param_1 + 1) * 4) - fVar1,
                            param_2,fVar1);
  return fVar1 / *(float *)(this + 0x2c);
}


