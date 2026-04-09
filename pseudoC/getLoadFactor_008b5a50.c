// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLoadFactor
// Entry Point: 008b5a50
// Size: 24 bytes
// Signature: undefined getLoadFactor(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::getLoadFactor() const */

undefined4 LoopSynthesisGenerator::getLoadFactor(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x10) != 0) {
    return *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x50c);
  }
  return 0;
}


