// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumUnreadBits
// Entry Point: 00b392b8
// Size: 12 bytes
// Signature: undefined getNumUnreadBits(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GsBitStream::getNumUnreadBits() const */

int GsBitStream::getNumUnreadBits(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x18) - *(int *)(in_x0 + 0x14);
}


