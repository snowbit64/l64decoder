// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputSelection
// Entry Point: 00c5b420
// Size: 464 bytes
// Signature: undefined __cdecl outputSelection(bool param_1, AST_SelectionNode * param_2, AST_Traverser * param_3)


/* TIRDebugUtil::OutputTraverser::outputSelection(bool, AST_SelectionNode*, AST_Traverser*) */

undefined8
TIRDebugUtil::OutputTraverser::outputSelection
          (bool param_1,AST_SelectionNode *param_2,AST_Traverser *param_3)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  basic_string *pbVar5;
  byte local_c8 [16];
  void *local_b8;
  undefined auStack_ac [100];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar5 = *(basic_string **)(param_3 + 0x50);
  outputTreeText(pbVar5,(AST_Node *)param_2,*(int *)(param_3 + 0x48));
  FUN_00c5aa20(auStack_ac,100,"%p ternary?:",param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar5);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar5);
  SHC_Type::getUserString();
  pvVar3 = (void *)((ulong)local_c8 | 1);
  if ((local_c8[0] & 1) != 0) {
    pvVar3 = local_b8;
  }
                    /* try { // try from 00c5b4bc to 00c5b4c3 has its CatchHandler @ 00c5b5f0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar5,(ulong)pvVar3);
  if ((local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar5);
  iVar1 = *(int *)(param_3 + 0x48);
  *(int *)(param_3 + 0x48) = iVar1 + 1;
  outputTreeText(*(basic_string **)(param_3 + 0x50),(AST_Node *)param_2,iVar1 + 1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar5);
  (**(code **)**(undefined8 **)(param_2 + 0x48))(*(undefined8 **)(param_2 + 0x48),param_3);
  outputTreeText(*(basic_string **)(param_3 + 0x50),(AST_Node *)param_2,*(int *)(param_3 + 0x48));
  if (*(long *)(param_2 + 0x50) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar5);
    lVar4 = *(long *)(param_2 + 0x58);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar5);
    (**(code **)**(undefined8 **)(param_2 + 0x50))(*(undefined8 **)(param_2 + 0x50),param_3);
    lVar4 = *(long *)(param_2 + 0x58);
  }
  if (lVar4 != 0) {
    outputTreeText(*(basic_string **)(param_3 + 0x50),(AST_Node *)param_2,*(int *)(param_3 + 0x48));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)pbVar5);
    (**(code **)**(undefined8 **)(param_2 + 0x58))(*(undefined8 **)(param_2 + 0x58),param_3);
  }
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + -1;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


