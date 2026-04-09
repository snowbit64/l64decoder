// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isEof
// Entry Point: 00b3426c
// Size: 16 bytes
// Signature: undefined isEof(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MemoryBufferedFile::isEof() */

bool MemoryBufferedFile::isEof(void)

{
  long in_x0;
  
  return *(uint *)(in_x0 + 0x14) <= *(uint *)(in_x0 + 0x18);
}


