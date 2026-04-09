// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputBranch
// Entry Point: 00c5ba04
// Size: 276 bytes
// Signature: undefined __cdecl outputBranch(bool param_1, AST_Branch * param_2, AST_Traverser * param_3)


/* TIRDebugUtil::OutputTraverser::outputBranch(bool, AST_Branch*, AST_Traverser*) */

undefined8
TIRDebugUtil::OutputTraverser::outputBranch(bool param_1,AST_Branch *param_2,AST_Traverser *param_3)

{
  long lVar1;
  basic_string *pbVar2;
  undefined auStack_9c [100];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar2 = *(basic_string **)(param_3 + 0x50);
  outputTreeText(pbVar2,(AST_Node *)param_2,*(int *)(param_3 + 0x48));
  FUN_00c5aa20(auStack_9c,100,&DAT_004f83ab,param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar2);
  if (*(long *)(param_2 + 0x20) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar2);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar2);
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
    (**(code **)**(undefined8 **)(param_2 + 0x20))(*(undefined8 **)(param_2 + 0x20),param_3);
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + -1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


