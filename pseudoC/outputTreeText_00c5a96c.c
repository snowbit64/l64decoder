// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputTreeText
// Entry Point: 00c5a96c
// Size: 180 bytes
// Signature: undefined __cdecl outputTreeText(basic_string * param_1, AST_Node * param_2, int param_3)


/* TIRDebugUtil::OutputTraverser::outputTreeText(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, AST_Node*, int) */

void TIRDebugUtil::OutputTraverser::outputTreeText
               (basic_string *param_1,AST_Node *param_2,int param_3)

{
  long lVar1;
  undefined auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 8) != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_1);
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_00c5bb18(auStack_78);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_1);
  if (0 < param_3) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


