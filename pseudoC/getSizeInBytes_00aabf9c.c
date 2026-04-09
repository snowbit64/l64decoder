// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSizeInBytes
// Entry Point: 00aabf9c
// Size: 12 bytes
// Signature: undefined getSizeInBytes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NullStructBuffer::getSizeInBytes() const */

int NullStructBuffer::getSizeInBytes(void)

{
  long in_x0;
  
  return *(int *)(in_x0 + 0x14) * *(int *)(in_x0 + 0x10);
}


