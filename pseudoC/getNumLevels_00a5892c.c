// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumLevels
// Entry Point: 00a5892c
// Size: 68 bytes
// Signature: undefined getNumLevels(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LODTransformGroup::getNumLevels() */

undefined8 LODTransformGroup::getNumLevels(void)

{
  long in_x0;
  
  if (*(float *)(in_x0 + 0x158) == 0.0) {
    return 1;
  }
  if (*(float *)(in_x0 + 0x15c) == 0.0) {
    return 2;
  }
  if (*(float *)(in_x0 + 0x160) == 0.0) {
    return 3;
  }
  return 4;
}


