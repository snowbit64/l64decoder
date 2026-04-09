// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomCallbackDelay
// Entry Point: 00943504
// Size: 8 bytes
// Signature: undefined getRandomCallbackDelay(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DStreamingManager::getRandomCallbackDelay() */

void I3DStreamingManager::getRandomCallbackDelay(void)

{
  long in_x0;
  
  MathUtil::getRandomMinMax(*(float *)(in_x0 + 0x68),*(float *)(in_x0 + 0x6c));
  return;
}


