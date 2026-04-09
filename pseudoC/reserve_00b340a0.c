// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00b340a0
// Size: 112 bytes
// Signature: undefined __thiscall reserve(MemoryBufferedFile * this, uint param_1)


/* MemoryBufferedFile::reserve(unsigned int) */

void __thiscall MemoryBufferedFile::reserve(MemoryBufferedFile *this,uint param_1)

{
  MemoryBufferedFile MVar1;
  void *__dest;
  void *__src;
  
  if (*(uint *)(this + 0x1c) < param_1) {
    __src = *(void **)(this + 8);
    MVar1 = this[0x10];
    __dest = operator_new__((ulong)param_1);
    *(uint *)(this + 0x1c) = param_1;
    *(void **)(this + 8) = __dest;
    if ((__src != (void *)0x0) &&
       (memmove(__dest,__src,(ulong)*(uint *)(this + 0x14)), MVar1 != (MemoryBufferedFile)0x0)) {
      operator_delete__(__src);
    }
    this[0x10] = (MemoryBufferedFile)0x1;
  }
  return;
}


