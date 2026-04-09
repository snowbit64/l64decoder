// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: popInputFileAndLine
// Entry Point: 00b9251c
// Size: 112 bytes
// Signature: undefined popInputFileAndLine(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Preprocessor::popInputFileAndLine() */

bool Preprocessor::popInputFileAndLine(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  
  lVar1 = *(long *)(in_x0 + 0x48);
  lVar2 = *(long *)(in_x0 + 0x50);
  if (lVar2 != lVar1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (*(long *)(in_x0 + 0x38) + 0x28),(basic_string *)(lVar2 + -0x20));
    lVar3 = *(long *)(in_x0 + 0x50);
    *(undefined4 *)(*(long *)(in_x0 + 0x38) + 0x40) = *(undefined4 *)(lVar3 + -8);
    if ((*(byte *)(lVar3 + -0x20) & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -0x10));
    }
    *(byte **)(in_x0 + 0x50) = (byte *)(lVar3 + -0x20);
  }
  return lVar2 != lVar1;
}


