// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDistortionHigh
// Entry Point: 008b7c84
// Size: 12 bytes
// Signature: undefined updateDistortionHigh(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BandDistortion::updateDistortionHigh() */

void BandDistortion::updateDistortionHigh(void)

{
  long *in_x0;
  
  Distortion::setType((Distortion *)(in_x0 + 4),*(Type *)(*in_x0 + 0x18));
  return;
}


