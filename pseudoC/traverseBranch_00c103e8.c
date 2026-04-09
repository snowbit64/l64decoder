// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverseBranch
// Entry Point: 00c103e8
// Size: 120 bytes
// Signature: undefined __cdecl traverseBranch(bool param_1, AST_Branch * param_2, AST_Traverser * param_3)


/* CodeTraverser::traverseBranch(bool, AST_Branch*, AST_Traverser*) */

undefined8 CodeTraverser::traverseBranch(bool param_1,AST_Branch *param_2,AST_Traverser *param_3)

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
                    /* try { // try from 00c10420 to 00c10447 has its CatchHandler @ 00c10460 */
  if ((*(AST_Traverser *)((long)plVar1 + 0x56) == (AST_Traverser)0x0) ||
     (uVar2 = (**(code **)*plVar1)(plVar1,param_2), (uVar2 & 1) != 0)) {
    (**(code **)(*plVar1 + 0xa0))
              (plVar1,*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  }
  plVar1[0xb] = lVar3;
  return 0;
}


