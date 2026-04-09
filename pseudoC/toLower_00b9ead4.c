// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toLower
// Entry Point: 00b9ead4
// Size: 112 bytes
// Signature: undefined __cdecl toLower(basic_string * param_1)


/* StringUtil::toLower(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void StringUtil::toLower(basic_string *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  
  bVar5 = (*(byte *)param_1 & 1) == 0;
  uVar6 = (ulong)(*(byte *)param_1 >> 1);
  if (!bVar5) {
    uVar6 = *(ulong *)(param_1 + 2);
  }
  if (uVar6 != 0) {
    uVar6 = 0;
    do {
      lVar2 = (long)param_1 + 1;
      if (!bVar5) {
        lVar2 = *(long *)(param_1 + 4);
      }
      bVar4 = *(byte *)(lVar2 + uVar6);
      bVar1 = bVar4 | 0x20;
      if (0x19 < bVar4 - 0x41) {
        bVar1 = bVar4;
      }
      *(byte *)(lVar2 + uVar6) = bVar1;
      uVar6 = uVar6 + 1;
      bVar5 = (*(byte *)param_1 & 1) == 0;
      uVar3 = (ulong)(*(byte *)param_1 >> 1);
      if (!bVar5) {
        uVar3 = *(ulong *)(param_1 + 2);
      }
    } while (uVar6 < uVar3);
  }
  return;
}


