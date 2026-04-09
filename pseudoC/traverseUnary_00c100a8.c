// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverseUnary
// Entry Point: 00c100a8
// Size: 160 bytes
// Signature: undefined __cdecl traverseUnary(bool param_1, AST_UnaryNode * param_2, AST_Traverser * param_3)


/* CodeTraverser::traverseUnary(bool, AST_UnaryNode*, AST_Traverser*) */

undefined8 CodeTraverser::traverseUnary(bool param_1,AST_UnaryNode *param_2,AST_Traverser *param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  plVar1 = (long *)0x0;
  if (param_3 != (AST_Traverser *)0x0) {
    plVar1 = (long *)(param_3 + -8);
  }
  lVar4 = plVar1[0xb];
  plVar1[0xb] = (long)param_2;
                    /* try { // try from 00c100e0 to 00c100eb has its CatchHandler @ 00c10150 */
  if ((*(AST_Traverser *)((long)plVar1 + 0x56) == (AST_Traverser)0x0) ||
     (uVar3 = (**(code **)*plVar1)(plVar1,param_2), (uVar3 & 1) != 0)) {
    iVar2 = *(int *)(param_2 + 0x48);
    if (iVar2 - 0xbU < 2) {
                    /* try { // try from 00c1010c to 00c1012f has its CatchHandler @ 00c10148 */
      (**(code **)(*plVar1 + 0x50))(plVar1,iVar2,*(undefined8 *)(param_2 + 0x50));
    }
    else {
      (**(code **)(*plVar1 + 0x48))(plVar1,iVar2,param_2 + 0x18,*(undefined8 *)(param_2 + 0x50));
    }
  }
  plVar1[0xb] = lVar4;
  return 0;
}


