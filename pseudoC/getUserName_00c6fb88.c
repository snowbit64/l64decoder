// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUserName
// Entry Point: 00c6fb88
// Size: 136 bytes
// Signature: undefined __cdecl getUserName(basic_string * param_1)


/* AndroidSysUtil::getUserName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

void AndroidSysUtil::getUserName(basic_string *param_1)

{
  long lVar1;
  uint local_83c;
  char acStack_838 [2048];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_83c = 0x800;
  AndroidJNICall::callString(s_pActivityJNICall,"getUserName",acStack_838,&local_83c);
  if (local_83c != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


