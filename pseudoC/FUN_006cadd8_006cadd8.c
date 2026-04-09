// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cadd8
// Entry Point: 006cadd8
// Size: 228 bytes
// Signature: undefined FUN_006cadd8(void)


void FUN_006cadd8(ulong *param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  size_t sVar2;
  byte *__src;
  size_t __n;
  void *__dest;
  ulong uVar3;
  
  bVar1 = *param_2;
  __n = *(size_t *)(param_2 + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  sVar2 = strlen(param_3);
  __src = *(byte **)(param_2 + 0x10);
  if ((bVar1 & 1) == 0) {
    __src = param_2 + 1;
    __n = (ulong)(bVar1 >> 1);
  }
  uVar3 = __n + sVar2;
  if (uVar3 < 0xfffffffffffffff0) {
    if (uVar3 < 0x17) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n << 1);
    }
    else {
      uVar3 = uVar3 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar3);
      param_1[1] = __n;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar3 | 1;
    }
    if (__n != 0) {
      memcpy(__dest,__src,__n);
    }
    *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 006cae64 to 006caebb has its CatchHandler @ 006caebc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1,(ulong)param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__basic_string_common<true>::__throw_length_error();
}


