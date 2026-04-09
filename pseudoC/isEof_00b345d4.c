// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isEof
// Entry Point: 00b345d4
// Size: 36 bytes
// Signature: undefined isEof(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NativeFile::isEof() */

FILE * NativeFile::isEof(void)

{
  int iVar1;
  long in_x0;
  FILE *__stream;
  
  __stream = *(FILE **)(in_x0 + 8);
  if (__stream != (FILE *)0x0) {
    iVar1 = feof(__stream);
    __stream = (FILE *)(ulong)(iVar1 != 0);
  }
  return __stream;
}


