// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverseLoop
// Entry Point: 00c10318
// Size: 192 bytes
// Signature: undefined __cdecl traverseLoop(bool param_1, AST_Loop * param_2, AST_Traverser * param_3)


/* CodeTraverser::traverseLoop(bool, AST_Loop*, AST_Traverser*) */

undefined8 CodeTraverser::traverseLoop(bool param_1,AST_Loop *param_2,AST_Traverser *param_3)

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
                    /* try { // try from 00c10350 to 00c1035b has its CatchHandler @ 00c103e0 */
  if ((*(AST_Traverser *)((long)plVar1 + 0x56) == (AST_Traverser)0x0) ||
     (uVar2 = (**(code **)*plVar1)(plVar1,param_2), (uVar2 & 1) != 0)) {
    if (*(int *)(param_2 + 0x18) == 1) {
      (**(code **)(*plVar1 + 0x90))
                (plVar1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x30));
    }
    else if (*(int *)(param_2 + 0x18) == 0) {
                    /* try { // try from 00c10380 to 00c103bf has its CatchHandler @ 00c103d8 */
      (**(code **)(*plVar1 + 0x88))
                (plVar1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                 *(undefined8 *)(param_2 + 0x30));
    }
    else {
      (**(code **)(*plVar1 + 0x98))
                (plVar1,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x20));
    }
  }
  plVar1[0xb] = lVar3;
  return 0;
}


