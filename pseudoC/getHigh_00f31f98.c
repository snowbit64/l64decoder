// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHigh
// Entry Point: 00f31f98
// Size: 108 bytes
// Signature: undefined getHigh(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btAngularLimit::getHigh() const */

float btAngularLimit::getHigh(void)

{
  float *in_x0;
  float fVar1;
  float fVar2;
  
  fVar2 = fmodf(in_x0[1] + *in_x0,6.283185);
  if (-3.141593 <= fVar2) {
    if (fVar2 <= 3.141593) {
      return fVar2;
    }
    fVar1 = -6.283185;
  }
  else {
    fVar1 = 6.283185;
  }
  return fVar2 + fVar1;
}


