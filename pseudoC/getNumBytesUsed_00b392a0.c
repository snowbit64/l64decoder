// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumBytesUsed
// Entry Point: 00b392a0
// Size: 16 bytes
// Signature: undefined getNumBytesUsed(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsBitStream::getNumBytesUsed() const */

uint GsBitStream::getNumBytesUsed(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x18) + 7U >> 3;
}


