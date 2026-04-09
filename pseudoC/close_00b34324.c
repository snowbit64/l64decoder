// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: close
// Entry Point: 00b34324
// Size: 44 bytes
// Signature: undefined close(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NativeFile::close() */

FILE * NativeFile::close(void)

{
  uint uVar1;
  long in_x0;
  FILE *__stream;
  
  __stream = *(FILE **)(in_x0 + 8);
  if (__stream != (FILE *)0x0) {
    uVar1 = fclose(__stream);
    __stream = (FILE *)(ulong)uVar1;
    *(undefined8 *)(in_x0 + 8) = 0;
  }
  return __stream;
}


