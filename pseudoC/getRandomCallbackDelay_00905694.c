// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomCallbackDelay
// Entry Point: 00905694
// Size: 8 bytes
// Signature: undefined getRandomCallbackDelay(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DManager::getRandomCallbackDelay() */

void I3DManager::getRandomCallbackDelay(void)

{
  long in_x0;
  
  MathUtil::getRandomMinMax(*(float *)(in_x0 + 0x60),*(float *)(in_x0 + 100));
  return;
}


