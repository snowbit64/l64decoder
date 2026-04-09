// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getComputerName
// Entry Point: 00c5bfe0
// Size: 120 bytes
// Signature: undefined __cdecl getComputerName(basic_string * param_1)


/* EnvUtil::getComputerName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void EnvUtil::getComputerName(basic_string *param_1)

{
  long lVar1;
  int iVar2;
  char acStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = gethostname(acStack_138,0xff);
  if (iVar2 != -1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != -1);
}


