// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: substitute
// Entry Point: 00b9d394
// Size: 144 bytes
// Signature: undefined __cdecl substitute(char param_1, char param_2, basic_string * param_3)


/* StringUtil::substitute(char, char, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void StringUtil::substitute(char param_1,char param_2,basic_string *param_3)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  basic_string *in_x8;
  long lVar4;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8);
  bVar3 = *(byte *)in_x8;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(in_x8 + 2);
  }
  if ((int)uVar1 != 0) {
    lVar4 = 0;
    while( true ) {
      lVar2 = (long)in_x8 + 1;
      if ((bVar3 & 1) != 0) {
        lVar2 = *(long *)(in_x8 + 4);
      }
      if (*(char *)(lVar2 + lVar4) == param_1) {
        *(char *)(lVar2 + lVar4) = param_2;
      }
      if ((uVar1 & 0xffffffff) - 1 == lVar4) break;
      bVar3 = *(byte *)in_x8;
      lVar4 = lVar4 + 1;
    }
  }
  return;
}


