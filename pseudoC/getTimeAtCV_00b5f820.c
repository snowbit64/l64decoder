// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTimeAtCV
// Entry Point: 00b5f820
// Size: 36 bytes
// Signature: undefined __thiscall getTimeAtCV(Spline * this, uint param_1)


/* Spline::getTimeAtCV(unsigned int) const */

float __thiscall Spline::getTimeAtCV(Spline *this,uint param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (param_1 < *(uint *)(this + 0x28)) {
    fVar1 = *(float *)(*(long *)(this + 0x10) + (ulong)param_1 * 4) / *(float *)(this + 0x2c);
  }
  return fVar1;
}


