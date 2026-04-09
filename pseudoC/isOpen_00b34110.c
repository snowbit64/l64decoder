// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isOpen
// Entry Point: 00b34110
// Size: 16 bytes
// Signature: undefined isOpen(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MemoryBufferedFile::isOpen() const */

bool MemoryBufferedFile::isOpen(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 8) != 0;
}


