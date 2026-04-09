// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDistortionLow
// Entry Point: 008b7c6c
// Size: 12 bytes
// Signature: undefined updateDistortionLow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BandDistortion::updateDistortionLow() */

void BandDistortion::updateDistortionLow(void)

{
  long *in_x0;
  
  Distortion::setType((Distortion *)(in_x0 + 1),*(Type *)(*in_x0 + 8));
  return;
}


