// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StandardReallocate<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>
// Entry Point: 00c7cd80
// Size: 248 bytes
// Signature: pointer __cdecl StandardReallocate<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>(AllocatorWithCleanup * param_1, uchar * param_2, size_type param_3, size_type param_4, bool param_5)


/* CryptoPP::AllocatorWithCleanup<unsigned char, false>::pointer
   CryptoPP::StandardReallocate<unsigned char, CryptoPP::AllocatorWithCleanup<unsigned char, false>
   >(CryptoPP::AllocatorWithCleanup<unsigned char, false>&, unsigned char*,
   CryptoPP::AllocatorWithCleanup<unsigned char, false>::size_type,
   CryptoPP::AllocatorWithCleanup<unsigned char, false>::size_type, bool) */

pointer CryptoPP::
        StandardReallocate<unsigned_char,CryptoPP::AllocatorWithCleanup<unsigned_char,false>>
                  (AllocatorWithCleanup *param_1,uchar *param_2,size_type param_3,size_type param_4,
                  bool param_5)

{
  pointer pVar1;
  void *__dest;
  ulong uVar2;
  size_t __n;
  
  __n = (size_t)param_4;
  uVar2 = (ulong)param_3;
  if (uVar2 == __n) {
    return (pointer)param_2;
  }
  if (param_5) {
    if (__n == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)UnalignedAllocate(__n);
      if ((param_2 != (uchar *)0x0) && (__dest != (void *)0x0)) {
        if (uVar2 <= __n) {
          __n = uVar2;
        }
        memcpy(__dest,param_2,__n);
      }
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      param_2[uVar2 - 1] = '\0';
    }
    UnalignedDeallocate(param_2);
    return (pointer)__dest;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_2[uVar2 - 1] = '\0';
  }
  UnalignedDeallocate(param_2);
  if (__n != 0) {
    pVar1 = UnalignedAllocate(__n);
    return pVar1;
  }
  return 0;
}


