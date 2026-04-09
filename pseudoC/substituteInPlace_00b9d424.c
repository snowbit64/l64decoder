// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: substituteInPlace
// Entry Point: 00b9d424
// Size: 92 bytes
// Signature: undefined __cdecl substituteInPlace(char param_1, char param_2, basic_string * param_3)


/* StringUtil::substituteInPlace(char, char, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void StringUtil::substituteInPlace(char param_1,char param_2,basic_string *param_3)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  
  bVar3 = *(byte *)param_3;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 2);
  }
  if ((int)uVar1 != 0) {
    lVar4 = 0;
    while( true ) {
      lVar2 = (long)param_3 + 1;
      if ((bVar3 & 1) != 0) {
        lVar2 = *(long *)(param_3 + 4);
      }
      if (*(char *)(lVar2 + lVar4) == param_1) {
        *(char *)(lVar2 + lVar4) = param_2;
      }
      if ((uVar1 & 0xffffffff) - 1 == lVar4) break;
      bVar3 = *(byte *)param_3;
      lVar4 = lVar4 + 1;
    }
  }
  return;
}


