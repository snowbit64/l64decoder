// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getActiveLoopSecond
// Entry Point: 008b5f48
// Size: 36 bytes
// Signature: undefined getActiveLoopSecond(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::getActiveLoopSecond() const */

long LoopSynthesisGenerator::getActiveLoopSecond(void)

{
  long *in_x0;
  
  if ((*(int *)(in_x0 + 7) != 1) && (*in_x0 != 0)) {
    return *in_x0 + 0x30;
  }
  return 0;
}


