// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBufferSize
// Entry Point: 008bb48c
// Size: 20 bytes
// Signature: undefined getBufferSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisStreamSource::getBufferSize() */

int LoopSynthesisStreamSource::getBufferSize(void)

{
  int iVar1;
  long in_x0;
  
  iVar1 = 0x1000;
  if (*(int *)(in_x0 + 0x10) != 0) {
    iVar1 = *(int *)(in_x0 + 0x10);
  }
  return iVar1;
}


