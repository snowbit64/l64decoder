// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputUnary
// Entry Point: 00c5ada4
// Size: 300 bytes
// Signature: undefined __cdecl outputUnary(bool param_1, AST_UnaryNode * param_2, AST_Traverser * param_3)


/* TIRDebugUtil::OutputTraverser::outputUnary(bool, AST_UnaryNode*, AST_Traverser*) */

undefined8
TIRDebugUtil::OutputTraverser::outputUnary
          (bool param_1,AST_UnaryNode *param_2,AST_Traverser *param_3)

{
  long lVar1;
  void *pvVar2;
  basic_string *pbVar3;
  byte local_b8 [16];
  void *local_a8;
  undefined auStack_9c [100];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar3 = *(basic_string **)(param_3 + 0x50);
  outputTreeText(pbVar3,(AST_Node *)param_2,*(int *)(param_3 + 0x48));
  FUN_00c5aa20(auStack_9c,100,"%p 1RY ",param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  SHC_Type::getUserString();
  pvVar2 = (void *)((ulong)local_b8 | 1);
  if ((local_b8[0] & 1) != 0) {
    pvVar2 = local_a8;
  }
                    /* try { // try from 00c5ae6c to 00c5ae73 has its CatchHandler @ 00c5aed0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3,(ulong)pvVar2);
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar3);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


