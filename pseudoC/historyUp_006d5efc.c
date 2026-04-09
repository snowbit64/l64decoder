// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: historyUp
// Entry Point: 006d5efc
// Size: 128 bytes
// Signature: undefined historyUp(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::historyUp() */

void Console::historyUp(void)

{
  basic_string *pbVar1;
  long in_x0;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(in_x0 + 0x58);
  if (iVar2 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (in_x0 + 0x60),(basic_string *)(in_x0 + 0x80));
    iVar2 = *(int *)(in_x0 + 0x58);
    *(undefined4 *)(in_x0 + 0x78) = *(undefined4 *)(in_x0 + 0xe8);
  }
  lVar3 = *(long *)(in_x0 + 0x48) - *(long *)(in_x0 + 0x40) >> 5;
  if (iVar2 < (int)lVar3) {
    pbVar1 = (basic_string *)(*(long *)(in_x0 + 0x40) + (lVar3 - (ulong)(iVar2 + 1U)) * 0x20);
    *(uint *)(in_x0 + 0x58) = iVar2 + 1U;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (in_x0 + 0x80),pbVar1);
    *(basic_string *)(in_x0 + 0xe8) = pbVar1[6];
  }
  *(undefined4 *)(in_x0 + 0xb0) = 0;
  *(undefined4 *)(in_x0 + 0x108) = 0xffffffff;
  return;
}


