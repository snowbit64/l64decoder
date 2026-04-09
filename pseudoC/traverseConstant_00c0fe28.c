// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverseConstant
// Entry Point: 00c0fe28
// Size: 112 bytes
// Signature: undefined __cdecl traverseConstant(AST_ConstantNode * param_1, AST_Traverser * param_2)


/* CodeTraverser::traverseConstant(AST_ConstantNode*, AST_Traverser*) */

void CodeTraverser::traverseConstant(AST_ConstantNode *param_1,AST_Traverser *param_2)

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
                    /* try { // try from 00c0fe60 to 00c0fe83 has its CatchHandler @ 00c0fe98 */
  if ((*(AST_Traverser *)((long)plVar1 + 0x56) == (AST_Traverser)0x0) ||
     (uVar2 = (**(code **)*plVar1)(plVar1,param_1), (uVar2 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0x48));
  }
  plVar1[0xb] = lVar3;
  return;
}


