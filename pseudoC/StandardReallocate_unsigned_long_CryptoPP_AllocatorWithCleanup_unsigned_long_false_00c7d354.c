// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StandardReallocate<unsigned_long,CryptoPP::AllocatorWithCleanup<unsigned_long,false>>
// Entry Point: 00c7d354
// Size: 268 bytes
// Signature: pointer __cdecl StandardReallocate<unsigned_long,CryptoPP::AllocatorWithCleanup<unsigned_long,false>>(AllocatorWithCleanup * param_1, ulong * param_2, size_type param_3, size_type param_4, bool param_5)


/* CryptoPP::AllocatorWithCleanup<unsigned long, false>::pointer
   CryptoPP::StandardReallocate<unsigned long, CryptoPP::AllocatorWithCleanup<unsigned long, false>
   >(CryptoPP::AllocatorWithCleanup<unsigned long, false>&, unsigned long*,
   CryptoPP::AllocatorWithCleanup<unsigned long, false>::size_type,
   CryptoPP::AllocatorWithCleanup<unsigned long, false>::size_type, bool) */

pointer CryptoPP::
        StandardReallocate<unsigned_long,CryptoPP::AllocatorWithCleanup<unsigned_long,false>>
                  (AllocatorWithCleanup *param_1,ulong *param_2,size_type param_3,size_type param_4,
                  bool param_5)

{
  pointer pVar1;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_4;
  uVar2 = (ulong)param_3;
  if (uVar2 == uVar3) {
    return (pointer)param_2;
  }
  if (param_5) {
    AllocatorBase<unsigned_long>::CheckSize(uVar3);
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)UnalignedAllocate(uVar3 << 3);
      if ((param_2 != (ulong *)0x0) && (__dest != (void *)0x0)) {
        if (uVar2 <= uVar3) {
          uVar3 = uVar2;
        }
        memcpy(__dest,param_2,uVar3 << 3);
      }
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      param_2[uVar2 - 1] = 0;
    }
    UnalignedDeallocate(param_2);
    return (pointer)__dest;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_2[uVar2 - 1] = 0;
  }
  UnalignedDeallocate(param_2);
  AllocatorBase<unsigned_long>::CheckSize(uVar3);
  if (uVar3 != 0) {
    pVar1 = UnalignedAllocate(uVar3 << 3);
    return pVar1;
  }
  return 0;
}


