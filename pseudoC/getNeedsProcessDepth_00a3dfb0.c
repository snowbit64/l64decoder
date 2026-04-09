// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNeedsProcessDepth
// Entry Point: 00a3dfb0
// Size: 16 bytes
// Signature: undefined getNeedsProcessDepth(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScreenSpaceProcessor::getNeedsProcessDepth() const */

bool ScreenSpaceProcessor::getNeedsProcessDepth(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 0x1b18) != 0;
}


