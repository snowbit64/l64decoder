// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSize
// Entry Point: 00b34568
// Size: 108 bytes
// Signature: undefined getSize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NativeFile::getSize() */

__off_t NativeFile::getSize(void)

{
  long in_x0;
  __off_t __off;
  __off_t _Var1;
  
  if (*(FILE **)(in_x0 + 8) == (FILE *)0x0) {
    _Var1 = -1;
  }
  else {
    __off = ftello(*(FILE **)(in_x0 + 8));
    fseeko(*(FILE **)(in_x0 + 8),0,2);
    _Var1 = ftello(*(FILE **)(in_x0 + 8));
    fseeko(*(FILE **)(in_x0 + 8),__off,0);
  }
  return _Var1;
}


