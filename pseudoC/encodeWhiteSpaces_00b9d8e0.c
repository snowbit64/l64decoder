// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeWhiteSpaces
// Entry Point: 00b9d8e0
// Size: 372 bytes
// Signature: undefined __thiscall encodeWhiteSpaces(StringUtil * this, basic_string * param_1)


/* StringUtil::encodeWhiteSpaces(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall StringUtil::encodeWhiteSpaces(StringUtil *this,basic_string *param_1)

{
  bool bVar1;
  StringUtil *pSVar2;
  bool bVar3;
  char cVar4;
  undefined8 *in_x8;
  ulong uVar5;
  ulong uVar6;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00b9d91c to 00b9d923 has its CatchHandler @ 00b9da54 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)in_x8);
  bVar3 = ((byte)*this & 1) == 0;
  uVar5 = (ulong)((byte)*this >> 1);
  if (!bVar3) {
    uVar5 = *(ulong *)(this + 8);
  }
  if (uVar5 != 0) {
    uVar5 = 0;
    uVar6 = 1;
    do {
      pSVar2 = this + 1;
      if (!bVar3) {
        pSVar2 = *(StringUtil **)(this + 0x10);
      }
      cVar4 = (char)in_x8;
      switch(pSVar2[uVar5]) {
      case (StringUtil)0x9:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        break;
      case (StringUtil)0xa:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        break;
      case (StringUtil)0xb:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        break;
      case (StringUtil)0xc:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        break;
      case (StringUtil)0xd:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
        break;
      default:
                    /* try { // try from 00b9d958 to 00b9da3b has its CatchHandler @ 00b9da58 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back(cVar4);
      }
      bVar3 = ((byte)*this & 1) == 0;
      uVar5 = (ulong)((byte)*this >> 1);
      if (!bVar3) {
        uVar5 = *(ulong *)(this + 8);
      }
      bVar1 = uVar6 < uVar5;
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar1);
  }
  return;
}


