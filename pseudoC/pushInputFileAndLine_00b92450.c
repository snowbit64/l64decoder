// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushInputFileAndLine
// Entry Point: 00b92450
// Size: 176 bytes
// Signature: undefined pushInputFileAndLine(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Preprocessor::pushInputFileAndLine() */

void Preprocessor::pushInputFileAndLine(void)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x0;
  long lVar3;
  byte local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(in_x0 + 0x38);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_58);
  puVar1 = *(undefined8 **)(in_x0 + 0x50);
  local_40 = *(undefined4 *)(lVar3 + 0x40);
  if (puVar1 < *(undefined8 **)(in_x0 + 0x58)) {
    puVar1[2] = local_48;
    puVar1[1] = uStack_50;
    *puVar1 = CONCAT71(uStack_57,local_58);
    *(undefined4 *)(puVar1 + 3) = local_40;
    *(undefined8 **)(in_x0 + 0x50) = puVar1 + 4;
  }
  else {
                    /* try { // try from 00b924c0 to 00b924c7 has its CatchHandler @ 00b92500 */
    std::__ndk1::
    vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
    ::
    __push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>
              ((vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                *)(in_x0 + 0x48),(pair *)&local_58);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


