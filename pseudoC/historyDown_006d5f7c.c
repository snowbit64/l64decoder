// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: historyDown
// Entry Point: 006d5f7c
// Size: 124 bytes
// Signature: undefined historyDown(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Console::historyDown() */

void Console::historyDown(void)

{
  uint uVar1;
  long in_x0;
  basic_string *pbVar2;
  
  uVar1 = *(int *)(in_x0 + 0x58) - 1;
  if (0 < *(int *)(in_x0 + 0x58)) {
    *(uint *)(in_x0 + 0x58) = uVar1;
    if (uVar1 == 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (in_x0 + 0x80),(basic_string *)(in_x0 + 0x60));
      pbVar2 = (basic_string *)(in_x0 + 0x78);
    }
    else {
      pbVar2 = (basic_string *)
               (*(long *)(in_x0 + 0x40) +
               (((ulong)(*(long *)(in_x0 + 0x48) - *(long *)(in_x0 + 0x40)) >> 5) - (ulong)uVar1) *
               0x20);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (in_x0 + 0x80),pbVar2);
      pbVar2 = pbVar2 + 6;
    }
    *(basic_string *)(in_x0 + 0xe8) = *pbVar2;
  }
  *(undefined4 *)(in_x0 + 0xb0) = 0;
  *(undefined4 *)(in_x0 + 0x108) = 0xffffffff;
  return;
}


