// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isOpen
// Entry Point: 00b34638
// Size: 16 bytes
// Signature: undefined isOpen(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NativeFile::isOpen() const */

bool NativeFile::isOpen(void)

{
  long in_x0;
  
  return *(long *)(in_x0 + 8) != 0;
}


