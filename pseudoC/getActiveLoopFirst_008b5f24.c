// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getActiveLoopFirst
// Entry Point: 008b5f24
// Size: 36 bytes
// Signature: undefined getActiveLoopFirst(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::getActiveLoopFirst() const */

long LoopSynthesisGenerator::getActiveLoopFirst(void)

{
  long *in_x0;
  
  if ((*(int *)(in_x0 + 7) != 1) && (*in_x0 != 0)) {
    return *in_x0 + 0x10;
  }
  return 0;
}


