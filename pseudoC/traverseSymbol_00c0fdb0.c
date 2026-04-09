// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverseSymbol
// Entry Point: 00c0fdb0
// Size: 112 bytes
// Signature: undefined __cdecl traverseSymbol(AST_SymbolNode * param_1, AST_Traverser * param_2)


/* CodeTraverser::traverseSymbol(AST_SymbolNode*, AST_Traverser*) */

void CodeTraverser::traverseSymbol(AST_SymbolNode *param_1,AST_Traverser *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = (long *)0x0;
  if (param_2 != (AST_Traverser *)0x0) {
    plVar1 = (long *)(param_2 + -8);
  }
  lVar3 = plVar1[0xb];
  plVar1[0xb] = (long)param_1;
                    /* try { // try from 00c0fde8 to 00c0fe0b has its CatchHandler @ 00c0fe20 */
  if ((*(AST_Traverser *)((long)plVar1 + 0x56) == (AST_Traverser)0x0) ||
     (uVar2 = (**(code **)*plVar1)(plVar1,param_1), (uVar2 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  }
  plVar1[0xb] = lVar3;
  return;
}


