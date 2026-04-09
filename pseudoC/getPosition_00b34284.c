// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPosition
// Entry Point: 00b34284
// Size: 20 bytes
// Signature: undefined getPosition(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MemoryBufferedFile::getPosition() */

undefined4 MemoryBufferedFile::getPosition(void)

{
  undefined4 uVar1;
  long in_x0;
  
  uVar1 = 0;
  if (*(long *)(in_x0 + 8) != 0) {
    uVar1 = *(undefined4 *)(in_x0 + 0x18);
  }
  return uVar1;
}


