// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b344a4
// Size: 80 bytes
// Signature: undefined __thiscall read(NativeFile * this, void * param_1, uint param_2)


/* NativeFile::read(void*, unsigned int) */

undefined4 __thiscall NativeFile::read(NativeFile *this,void *param_1,uint param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  
  if (*(FILE **)(this + 8) == (FILE *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    sVar2 = fread(param_1,1,(ulong)param_2,*(FILE **)(this + 8));
    iVar1 = ferror(*(FILE **)(this + 8));
    uVar3 = (undefined4)sVar2;
    if (iVar1 != 0) {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}


