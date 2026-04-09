// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isEof
// Entry Point: 00b31730
// Size: 20 bytes
// Signature: undefined isEof(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CompressedFile::isEof() */

bool CompressedFile::isEof(void)

{
  long in_x0;
  
  return *(uint *)(in_x0 + 0x220) <= *(uint *)(in_x0 + 0x224);
}


