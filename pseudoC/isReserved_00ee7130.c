// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isReserved
// Entry Point: 00ee7130
// Size: 160 bytes
// Signature: undefined __cdecl isReserved(basic_string * param_1)


/* Luau::Lexer::isReserved(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

bool Luau::Lexer::isReserved(basic_string *param_1)

{
  ulong uVar1;
  size_t sVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  char *__s;
  long lVar6;
  
  lVar6 = 0;
  bVar3 = true;
  while( true ) {
    __s = (&PTR_DAT_01016840)[lVar6];
    sVar5 = strlen(__s);
    sVar2 = (ulong)(*(byte *)param_1 >> 1);
    if ((*(byte *)param_1 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 2);
    }
                    /* try { // try from 00ee71a0 to 00ee71b3 has its CatchHandler @ 00ee71d0 */
    if ((sVar5 == sVar2) &&
       (iVar4 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)param_1,0,(char *)0xffffffffffffffff,(ulong)__s), iVar4 == 0)) break;
    uVar1 = lVar6 + 0x11f;
    lVar6 = lVar6 + 1;
    bVar3 = uVar1 < 0x133;
    if (lVar6 == 0x15) {
      return bVar3;
    }
  }
  return bVar3;
}


