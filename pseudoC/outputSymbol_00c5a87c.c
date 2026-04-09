// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outputSymbol
// Entry Point: 00c5a87c
// Size: 212 bytes
// Signature: undefined __cdecl outputSymbol(AST_SymbolNode * param_1, AST_Traverser * param_2)


/* TIRDebugUtil::OutputTraverser::outputSymbol(AST_SymbolNode*, AST_Traverser*) */

void TIRDebugUtil::OutputTraverser::outputSymbol(AST_SymbolNode *param_1,AST_Traverser *param_2)

{
  void *pvVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte local_160 [16];
  void *local_150;
  undefined auStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  outputTreeText(*(basic_string **)(param_2 + 0x50),(AST_Node *)param_1,*(int *)(param_2 + 0x48));
  SHC_Type::getUserString();
  pbVar3 = *(byte **)(param_1 + 0x50);
  pbVar4 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar4 = pbVar3 + 1;
  }
  pvVar1 = (void *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    pvVar1 = local_150;
  }
                    /* try { // try from 00c5a8f0 to 00c5a913 has its CatchHandler @ 00c5a950 */
  FUN_00c5aa20(auStack_148,0x100,"%p SYM \'%s\' (%s)\n",param_1,pbVar4,pvVar1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(*(char **)(param_2 + 0x50));
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


