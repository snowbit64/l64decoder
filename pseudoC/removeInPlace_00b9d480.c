// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeInPlace
// Entry Point: 00b9d480
// Size: 124 bytes
// Signature: undefined __cdecl removeInPlace(char param_1, basic_string * param_2)


/* StringUtil::removeInPlace(char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void StringUtil::removeInPlace(char param_1,basic_string *param_2)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  
  bVar3 = *(byte *)param_2;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 2);
  }
  if ((int)uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    uVar4 = 0;
    while( true ) {
      lVar2 = (long)param_2 + 1;
      if ((bVar3 & 1) != 0) {
        lVar2 = *(long *)(param_2 + 4);
      }
      if (*(char *)(lVar2 + lVar5) != param_1) {
        *(char *)(lVar2 + (ulong)uVar4) = *(char *)(lVar2 + lVar5);
        uVar4 = uVar4 + 1;
      }
      if ((uVar1 & 0xffffffff) - 1 == lVar5) break;
      bVar3 = *(byte *)param_2;
      lVar5 = lVar5 + 1;
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((ulong)param_2,(char)uVar4);
  return;
}


