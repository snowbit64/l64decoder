// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilename
// Entry Point: 008b4550
// Size: 24 bytes
// Signature: undefined getFilename(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisSample::getFilename() const */

long LoopSynthesisSample::getFilename(void)

{
  long lVar1;
  long in_x0;
  
  lVar1 = in_x0 + 0x121;
  if ((*(byte *)(in_x0 + 0x120) & 1) != 0) {
    lVar1 = *(long *)(in_x0 + 0x130);
  }
  return lVar1;
}


