// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverseSelection
// Entry Point: 00c10158
// Size: 144 bytes
// Signature: undefined __cdecl traverseSelection(bool param_1, AST_SelectionNode * param_2, AST_Traverser * param_3)


/* CodeTraverser::traverseSelection(bool, AST_SelectionNode*, AST_Traverser*) */

undefined8
CodeTraverser::traverseSelection(bool param_1,AST_SelectionNode *param_2,AST_Traverser *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = (long *)0x0;
  if (param_3 != (AST_Traverser *)0x0) {
    plVar1 = (long *)(param_3 + -8);
  }
  lVar3 = plVar1[0xb];
  plVar1[0xb] = (long)param_2;
                    /* try { // try from 00c10190 to 00c101cf has its CatchHandler @ 00c101e8 */
  if ((*(AST_Traverser *)((long)plVar1 + 0x56) == (AST_Traverser)0x0) ||
     (uVar2 = (**(code **)*plVar1)(plVar1,param_2), (uVar2 & 1) != 0)) {
    if (*(long *)(param_2 + 0x20) == 0) {
      (**(code **)(*plVar1 + 0x58))
                (plVar1,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50),
                 *(undefined8 *)(param_2 + 0x58));
    }
    else {
      (**(code **)(*plVar1 + 0x60))(plVar1);
    }
  }
  plVar1[0xb] = lVar3;
  return 0;
}


