// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seek
// Entry Point: 00b34540
// Size: 40 bytes
// Signature: undefined __thiscall seek(NativeFile * this, ulonglong param_1)


/* NativeFile::seek(unsigned long long) */

FILE * __thiscall NativeFile::seek(NativeFile *this,ulonglong param_1)

{
  int iVar1;
  FILE *__stream;
  
  __stream = *(FILE **)(this + 8);
  if (__stream != (FILE *)0x0) {
    iVar1 = fseeko(__stream,param_1,0);
    __stream = (FILE *)(ulong)(iVar1 == 0);
  }
  return __stream;
}


