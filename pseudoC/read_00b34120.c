// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b34120
// Size: 100 bytes
// Signature: undefined __thiscall read(MemoryBufferedFile * this, void * param_1, uint param_2)


/* MemoryBufferedFile::read(void*, unsigned int) */

ulong __thiscall MemoryBufferedFile::read(MemoryBufferedFile *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong __n;
  
  if (*(long *)(this + 8) == 0) {
    __n = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(this + 0x18);
    uVar1 = *(uint *)(this + 0x14) - uVar2;
    if (uVar2 + param_2 <= *(uint *)(this + 0x14)) {
      uVar1 = param_2;
    }
    __n = (ulong)uVar1;
    memcpy(param_1,(void *)(*(long *)(this + 8) + (ulong)uVar2),__n);
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar1;
  }
  return __n;
}


