// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanGrow
// Entry Point: 00cf6918
// Size: 188 bytes
// Signature: undefined __thiscall CleanGrow(SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> * this, ulong param_1)


/* CryptoPP::SecBlock<unsigned int, CryptoPP::AllocatorWithCleanup<unsigned int, true>
   >::CleanGrow(unsigned long) */

void __thiscall
CryptoPP::SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
          (SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *this,
          ulong param_1)

{
  ulong uVar1;
  void *__dest;
  void *__src;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x10);
  if (uVar2 < param_1) {
    __src = *(void **)(this + 0x18);
    AllocatorBase<unsigned_int>::CheckSize(param_1);
    __dest = (void *)UnalignedAllocate(param_1 << 2);
    if ((__src != (void *)0x0) && (__dest != (void *)0x0)) {
      uVar1 = param_1;
      if (uVar2 <= param_1) {
        uVar1 = uVar2;
      }
      memcpy(__dest,__src,uVar1 << 2);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)((long)__src + uVar2 * 4 + -4) = 0;
    }
    UnalignedDeallocate(__src);
    *(void **)(this + 0x18) = __dest;
    memset((void *)((long)__dest + *(long *)(this + 0x10) * 4),0,
           (param_1 - *(long *)(this + 0x10)) * 4);
    *(ulong *)(this + 0x10) = param_1;
  }
  *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
  return;
}


