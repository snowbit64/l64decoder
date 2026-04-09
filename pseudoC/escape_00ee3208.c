// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: escape
// Entry Point: 00ee3208
// Size: 760 bytes
// Signature: undefined __cdecl escape(basic_string_view param_1, bool param_2)


/* Luau::escape(std::__ndk1::basic_string_view<char, std::__ndk1::char_traits<char> >, bool) */

void Luau::escape(basic_string_view param_1,bool param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong in_x2;
  undefined8 *in_x8;
  
  uVar5 = (ulong)param_2;
  pbVar4 = (byte *)(ulong)param_1;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00ee323c to 00ee3243 has its CatchHandler @ 00ee3500 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)in_x8);
  if (uVar5 != 0) {
    cVar3 = (char)in_x8;
    if ((in_x2 & 1) == 0) {
      do {
        bVar1 = *pbVar4;
        if ((bVar1 < 0x20) ||
           (((uVar2 = bVar1 - 0x22, uVar2 < 0x3f &&
             ((1L << ((ulong)uVar2 & 0x3f) & 0x4400000000000021U) != 0)) || (bVar1 == 0x7b)))) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar3);
          switch(bVar1) {
          case 7:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 8:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 9:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 10:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0xb:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0xc:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0xd:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          default:
            formatAppend((basic_string *)in_x8,"%03u",(ulong)bVar1);
            break;
          case 0x22:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0x27:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0x5c:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
          }
        }
        else {
                    /* try { // try from 00ee33bc to 00ee34e3 has its CatchHandler @ 00ee3504 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar3);
        }
        pbVar4 = pbVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    else {
      do {
        bVar1 = *pbVar4;
        if (((bVar1 < 0x20) ||
            ((uVar2 = bVar1 - 0x22, uVar2 < 0x3f &&
             ((1L << ((ulong)uVar2 & 0x3f) & 0x4400000000000021U) != 0)))) || (bVar1 == 0x7b)) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar3);
          switch(bVar1) {
          case 7:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 8:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 9:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 10:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0xb:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0xc:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0xd:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          default:
            formatAppend((basic_string *)in_x8,"%03u",(ulong)bVar1);
            break;
          case 0x22:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0x27:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0x5c:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
            break;
          case 0x60:
          case 0x7b:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(cVar3);
          }
        }
        else {
                    /* try { // try from 00ee326c to 00ee33a3 has its CatchHandler @ 00ee3508 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (cVar3);
        }
        pbVar4 = pbVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}


