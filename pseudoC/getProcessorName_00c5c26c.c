// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProcessorName
// Entry Point: 00c5c26c
// Size: 124 bytes
// Signature: undefined __cdecl getProcessorName(basic_string * param_1)


/* EnvUtil::getProcessorName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void EnvUtil::getProcessorName(basic_string *param_1)

{
  long lVar1;
  undefined auStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sysconf(0x61);
  FUN_00c5c2e8(0x3e112e0be826d695,auStack_138);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


