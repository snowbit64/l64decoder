// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEyeAdaptedLuminanceBuffer
// Entry Point: 00a41714
// Size: 16 bytes
// Signature: undefined getEyeAdaptedLuminanceBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScreenSpaceProcessor::getEyeAdaptedLuminanceBuffer() */

undefined8 ScreenSpaceProcessor::getEyeAdaptedLuminanceBuffer(void)

{
  long in_x0;
  
  return *(undefined8 *)(in_x0 + (ulong)*(uint *)(in_x0 + 0x18fc) * 8 + 0x1a38);
}


