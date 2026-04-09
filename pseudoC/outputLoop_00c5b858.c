// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputLoop
// Entry Point: 00c5b858
// Size: 428 bytes
// Signature: undefined __cdecl outputLoop(bool param_1, AST_Loop * param_2, AST_Traverser * param_3)


/* TIRDebugUtil::OutputTraverser::outputLoop(bool, AST_Loop*, AST_Traverser*) */

undefined8
TIRDebugUtil::OutputTraverser::outputLoop(bool param_1,AST_Loop *param_2,AST_Traverser *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  basic_string *pbVar4;
  undefined auStack_9c [100];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar4 = *(basic_string **)(param_3 + 0x50);
  outputTreeText(pbVar4,(AST_Node *)param_2,*(int *)(param_3 + 0x48));
  FUN_00c5aa20(auStack_9c,100,"%p Loop with condition ",param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar4);
  if (*(int *)(param_2 + 0x18) == 2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar4);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar4);
  iVar1 = *(int *)(param_3 + 0x48);
  *(int *)(param_3 + 0x48) = iVar1 + 1;
  outputTreeText(*(basic_string **)(param_3 + 0x50),(AST_Node *)param_2,iVar1 + 1);
  if (*(long *)(param_2 + 0x20) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar4);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar4);
    (**(code **)**(undefined8 **)(param_2 + 0x20))(*(undefined8 **)(param_2 + 0x20),param_3);
  }
  outputTreeText(*(basic_string **)(param_3 + 0x50),(AST_Node *)param_2,*(int *)(param_3 + 0x48));
  if (*(long *)(param_2 + 0x30) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar4);
    lVar3 = *(long *)(param_2 + 0x28);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar4);
    (**(code **)**(undefined8 **)(param_2 + 0x30))(*(undefined8 **)(param_2 + 0x30),param_3);
    lVar3 = *(long *)(param_2 + 0x28);
  }
  if (lVar3 != 0) {
    outputTreeText(*(basic_string **)(param_3 + 0x50),(AST_Node *)param_2,*(int *)(param_3 + 0x48));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar4);
    (**(code **)**(undefined8 **)(param_2 + 0x28))(*(undefined8 **)(param_2 + 0x28),param_3);
  }
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + -1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


