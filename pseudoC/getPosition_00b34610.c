// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPosition
// Entry Point: 00b34610
// Size: 40 bytes
// Signature: undefined getPosition(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NativeFile::getPosition() */

__off_t NativeFile::getPosition(void)

{
  long in_x0;
  __off_t _Var1;
  
  if (*(FILE **)(in_x0 + 8) != (FILE *)0x0) {
    _Var1 = ftello(*(FILE **)(in_x0 + 8));
    return _Var1;
  }
  return -1;
}


