// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDistortionMid
// Entry Point: 008b7c78
// Size: 12 bytes
// Signature: undefined updateDistortionMid(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BandDistortion::updateDistortionMid() */

void BandDistortion::updateDistortionMid(void)

{
  long *in_x0;
  
  Distortion::setType((Distortion *)((long)in_x0 + 0x14),*(Type *)(*in_x0 + 0x10));
  return;
}


