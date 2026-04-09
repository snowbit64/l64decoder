// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: write
// Entry Point: 00b34184
// Size: 196 bytes
// Signature: undefined __thiscall write(MemoryBufferedFile * this, void * param_1, uint param_2)


/* MemoryBufferedFile::write(void const*, unsigned int) */

ulong __thiscall MemoryBufferedFile::write(MemoryBufferedFile *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  MemoryBufferedFile MVar3;
  void *__dest;
  uint uVar4;
  ulong __n;
  void *__src;
  
  __src = *(void **)(this + 8);
  if (__src == (void *)0x0) {
    __n = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(this + 0x14);
    uVar4 = *(uint *)(this + 0x18);
    __n = (ulong)param_2;
    uVar1 = uVar4 + param_2;
    if (uVar4 + param_2 <= uVar2) {
      uVar1 = uVar2;
    }
    if (*(uint *)(this + 0x1c) < uVar1) {
      MVar3 = this[0x10];
      __dest = operator_new__((ulong)uVar1);
      *(uint *)(this + 0x1c) = uVar1;
      *(void **)(this + 8) = __dest;
      memmove(__dest,__src,(ulong)uVar2);
      if (MVar3 != (MemoryBufferedFile)0x0) {
        operator_delete__(__src);
      }
      __src = *(void **)(this + 8);
      uVar4 = *(uint *)(this + 0x18);
      this[0x10] = (MemoryBufferedFile)0x1;
    }
    memcpy((void *)((long)__src + (ulong)uVar4),param_1,__n);
    *(uint *)(this + 0x14) = uVar1;
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
  }
  return __n;
}


