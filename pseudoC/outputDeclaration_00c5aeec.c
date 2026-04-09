// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputDeclaration
// Entry Point: 00c5aeec
// Size: 180 bytes
// Signature: undefined __cdecl outputDeclaration(bool param_1, AST_DeclarationNode * param_2, AST_Traverser * param_3)


/* TIRDebugUtil::OutputTraverser::outputDeclaration(bool, AST_DeclarationNode*, AST_Traverser*) */

undefined8
TIRDebugUtil::OutputTraverser::outputDeclaration
          (bool param_1,AST_DeclarationNode *param_2,AST_Traverser *param_3)

{
  long lVar1;
  basic_string *pbVar2;
  undefined auStack_9c [100];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar2 = *(basic_string **)(param_3 + 0x50);
  outputTreeText(pbVar2,(AST_Node *)param_2,*(int *)(param_3 + 0x48));
  FUN_00c5aa20(auStack_9c,100,"%p DECL\n",param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)pbVar2);
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
  (**(code **)**(undefined8 **)(param_2 + 0x48))(*(undefined8 **)(param_2 + 0x48),param_3);
  *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + -1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


