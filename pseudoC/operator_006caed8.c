// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator+
// Entry Point: 006caed8
// Size: 236 bytes
// Signature: basic_string __thiscall operator+(__ndk1 * this, basic_string.conflict * param_1, basic_string.conflict * param_2)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

basic_string __thiscall
std::__ndk1::operator+(__ndk1 *this,basic_string_conflict *param_1,basic_string_conflict *param_2)

{
  size_t __n;
  size_t sVar1;
  __ndk1 *__src;
  basic_string_conflict bVar2;
  __ndk1 _Var3;
  bool bVar4;
  basic_string bVar5;
  ulong *in_x8;
  basic_string_conflict *pbVar6;
  void *__dest;
  ulong uVar7;
  
  bVar2 = *param_1;
  _Var3 = *this;
  sVar1 = *(size_t *)(this + 8);
  __src = *(__ndk1 **)(this + 0x10);
  uVar7 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
  }
  bVar4 = ((byte)_Var3 & 1) != 0;
  *in_x8 = 0;
  in_x8[1] = 0;
  __n = (ulong)((byte)_Var3 >> 1);
  if (bVar4) {
    __n = sVar1;
  }
  in_x8[2] = 0;
  if (!bVar4) {
    __src = this + 1;
  }
  uVar7 = uVar7 + __n;
  if (uVar7 < 0xfffffffffffffff0) {
    if (uVar7 < 0x17) {
      __dest = (void *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)__n << 1);
    }
    else {
      uVar7 = uVar7 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar7);
      in_x8[1] = __n;
      in_x8[2] = (ulong)__dest;
      *in_x8 = uVar7 | 1;
    }
    if (__n != 0) {
      memcpy(__dest,__src,__n);
    }
    pbVar6 = *(basic_string_conflict **)(param_1 + 0x10);
    *(undefined *)((long)__dest + __n) = 0;
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
                    /* try { // try from 006caf70 to 006cafc3 has its CatchHandler @ 006cafc4 */
    bVar5 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)in_x8,(ulong)pbVar6);
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__basic_string_common<true>::__throw_length_error();
}


