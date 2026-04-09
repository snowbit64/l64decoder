// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isEof
// Entry Point: 00b35dec
// Size: 36 bytes
// Signature: undefined isEof(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ThreadedFileReader::isEof() */

bool ThreadedFileReader::isEof(void)

{
  long in_x0;
  
  return *(char *)(in_x0 + 0xc) == '\0' || *(long *)(in_x0 + 0x20) == *(long *)(in_x0 + 0x10);
}


