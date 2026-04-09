// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator+
// Entry Point: 00c6218c
// Size: 192 bytes
// Signature: basic_string __thiscall operator+(__ndk1 * this, char param_1, basic_string * param_2)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(char, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

basic_string __thiscall std::__ndk1::operator+(__ndk1 *this,char param_1,basic_string *param_2)

{
  byte bVar1;
  basic_string bVar2;
  undefined *puVar3;
  byte *pbVar4;
  ulong *in_x8;
  byte *pbVar5;
  ulong uVar6;
  
  pbVar4 = (byte *)(ulong)(byte)param_1;
  bVar1 = *pbVar4;
  uVar6 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar6 = *(ulong *)(pbVar4 + 8);
  }
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (uVar6 + 1 < 0xfffffffffffffff0) {
    if (uVar6 + 1 < 0x17) {
      puVar3 = (undefined *)((long)in_x8 + 1);
      *(undefined *)in_x8 = 2;
    }
    else {
      uVar6 = uVar6 + 0x11 & 0xfffffffffffffff0;
                    /* try { // try from 00c621f4 to 00c6224b has its CatchHandler @ 00c6224c */
      puVar3 = (undefined *)operator_new(uVar6);
      in_x8[1] = 1;
      in_x8[2] = (ulong)puVar3;
      *in_x8 = uVar6 | 1;
    }
    pbVar5 = *(byte **)(pbVar4 + 0x10);
    puVar3[1] = 0;
    if ((bVar1 & 1) == 0) {
      pbVar5 = pbVar4 + 1;
    }
    *puVar3 = (char)this;
    bVar2 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)in_x8,(ulong)pbVar5);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__basic_string_common<true>::__throw_length_error();
}


