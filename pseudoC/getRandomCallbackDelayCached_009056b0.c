// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomCallbackDelayCached
// Entry Point: 009056b0
// Size: 8 bytes
// Signature: undefined getRandomCallbackDelayCached(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DManager::getRandomCallbackDelayCached() */

void I3DManager::getRandomCallbackDelayCached(void)

{
  long in_x0;
  
  MathUtil::getRandomMinMax(*(float *)(in_x0 + 0x68),*(float *)(in_x0 + 0x6c));
  return;
}


