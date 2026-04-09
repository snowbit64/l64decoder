// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumOfTransforms
// Entry Point: 00749430
// Size: 16 bytes
// Signature: undefined getNumOfTransforms(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Clip::getNumOfTransforms() */

ulong Clip::getNumOfTransforms(void)

{
  long in_x0;
  
  return (ulong)(*(long *)(in_x0 + 0x28) - *(long *)(in_x0 + 0x20)) >> 3;
}


