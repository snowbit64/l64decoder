// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00c84c6c
// Size: 212 bytes
// Signature: undefined __cdecl Put2(uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::StringSinkTemplate<std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned
   char> > >::Put2(unsigned char const*, unsigned long, int, bool) */

undefined8
CryptoPP::
StringSinkTemplate<std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>>::Put2
          (uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  void *__src;
  void *__dest;
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  void **ppvVar3;
  
  uVar1 = (ulong)(uint)param_3;
  if (uVar1 != 0) {
    ppvVar3 = *(void ***)(param_1 + 0x18);
    __src = *ppvVar3;
    __n = (long)ppvVar3[1] - (long)__src;
    if ((uVar1 < __n) &&
       (uVar2 = __n * 2,
       (ulong)((long)ppvVar3[2] - (long)__src) < __n + uVar1 &&
       (ulong)((long)ppvVar3[2] - (long)__src) < uVar2)) {
      __dest = operator_new(uVar2);
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *ppvVar3 = __dest;
      ppvVar3[1] = (void *)((long)__dest + __n);
      ppvVar3[2] = (void *)((long)__dest + uVar2);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    insert<unsigned_char_const*>
              (*(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(param_1 + 0x18),
               (__wrap_iter)
               *(undefined8 *)
                (*(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(param_1 + 0x18) +
                8),(uchar *)param_2,(uchar *)(param_2 + uVar1));
  }
  return 0;
}


