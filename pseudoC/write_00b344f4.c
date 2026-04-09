// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: write
// Entry Point: 00b344f4
// Size: 76 bytes
// Signature: undefined __thiscall write(NativeFile * this, void * param_1, uint param_2)


/* NativeFile::write(void const*, unsigned int) */

ulong __thiscall NativeFile::write(NativeFile *this,void *param_1,uint param_2)

{
  size_t sVar1;
  
  if (*(FILE **)(this + 8) == (FILE *)0x0) {
    sVar1 = 0xffffffff;
  }
  else {
    sVar1 = fwrite(param_1,1,(ulong)param_2,*(FILE **)(this + 8));
    fflush(*(FILE **)(this + 8));
  }
  return sVar1 & 0xffffffff;
}


