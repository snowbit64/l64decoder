// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StandardReallocate<unsigned_short,CryptoPP::AllocatorWithCleanup<unsigned_short,false>>
// Entry Point: 00c7cfa8
// Size: 268 bytes
// Signature: pointer __cdecl StandardReallocate<unsigned_short,CryptoPP::AllocatorWithCleanup<unsigned_short,false>>(AllocatorWithCleanup * param_1, ushort * param_2, size_type param_3, size_type param_4, bool param_5)


/* CryptoPP::AllocatorWithCleanup<unsigned short, false>::pointer
   CryptoPP::StandardReallocate<unsigned short, CryptoPP::AllocatorWithCleanup<unsigned short,
   false> >(CryptoPP::AllocatorWithCleanup<unsigned short, false>&, unsigned short*,
   CryptoPP::AllocatorWithCleanup<unsigned short, false>::size_type,
   CryptoPP::AllocatorWithCleanup<unsigned short, false>::size_type, bool) */

pointer CryptoPP::
        StandardReallocate<unsigned_short,CryptoPP::AllocatorWithCleanup<unsigned_short,false>>
                  (AllocatorWithCleanup *param_1,ushort *param_2,size_type param_3,size_type param_4
                  ,bool param_5)

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
    AllocatorBase<unsigned_short>::CheckSize(uVar3);
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)UnalignedAllocate(uVar3 << 1);
      if ((param_2 != (ushort *)0x0) && (__dest != (void *)0x0)) {
        if (uVar2 <= uVar3) {
          uVar3 = uVar2;
        }
        memcpy(__dest,param_2,uVar3 << 1);
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
  AllocatorBase<unsigned_short>::CheckSize(uVar3);
  if (uVar3 != 0) {
    pVar1 = UnalignedAllocate(uVar3 << 1);
    return pVar1;
  }
  return 0;
}


