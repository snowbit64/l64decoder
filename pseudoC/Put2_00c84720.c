// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Put2
// Entry Point: 00c84720
// Size: 184 bytes
// Signature: undefined __cdecl Put2(uchar * param_1, ulong param_2, int param_3, bool param_4)


/* CryptoPP::StringSinkTemplate<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >::Put2(unsigned char const*, unsigned long, int, bool) */

undefined8
CryptoPP::
StringSinkTemplate<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::Put2(uchar *param_1,ulong param_2,int param_3,bool param_4)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong *this;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar3 = (ulong)(uint)param_3;
  if (uVar3 != 0) {
    this = *(ulong **)(param_1 + 0x18);
    bVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this;
    uVar6 = (ulong)(byte)bVar2;
    uVar5 = this[1];
    uVar1 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar1 = uVar5;
    }
    if (uVar3 < uVar1) {
      uVar6 = 0x16;
      if (((byte)bVar2 & 1) != 0) {
        uVar6 = (*this & 0xfffffffffffffffe) - 1;
      }
      if (uVar6 < uVar1 + uVar3) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)this);
        this = *(ulong **)(param_1 + 0x18);
        uVar6 = (ulong)(byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)this;
        uVar5 = this[1];
      }
      else {
        uVar6 = (ulong)((uint)*this & 0xff);
      }
    }
    iVar4 = (int)uVar5;
    iVar7 = (int)this[2];
    if ((uVar6 & 1) == 0) {
      iVar7 = (int)this + 1;
      iVar4 = (int)(uVar6 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    insert<char_const*>((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)this,iVar7 + iVar4,(char *)param_2,(char *)(param_2 + uVar3));
  }
  return 0;
}


