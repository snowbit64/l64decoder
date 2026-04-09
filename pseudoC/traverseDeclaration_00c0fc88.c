// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverseDeclaration
// Entry Point: 00c0fc88
// Size: 256 bytes
// Signature: undefined __cdecl traverseDeclaration(bool param_1, AST_DeclarationNode * param_2, AST_Traverser * param_3)


/* CodeTraverser::traverseDeclaration(bool, AST_DeclarationNode*, AST_Traverser*) */

undefined8
CodeTraverser::traverseDeclaration(bool param_1,AST_DeclarationNode *param_2,AST_Traverser *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  plVar1 = (long *)0x0;
  if (param_3 != (AST_Traverser *)0x0) {
    plVar1 = (long *)(param_3 + -8);
  }
  lVar6 = plVar1[0xb];
  plVar1[0xb] = (long)param_2;
                    /* try { // try from 00c0fcc4 to 00c0fce3 has its CatchHandler @ 00c0fda8 */
  if ((*(AST_Traverser *)((long)plVar1 + 0x56) == (AST_Traverser)0x0) ||
     (uVar2 = (**(code **)*plVar1)(plVar1,param_2), (uVar2 & 1) != 0)) {
    lVar3 = (**(code **)(**(long **)(param_2 + 0x48) + 0x38))();
    if (lVar3 == 0) {
                    /* try { // try from 00c0fd4c to 00c0fd6b has its CatchHandler @ 00c0fd98 */
      uVar4 = (**(code **)(**(long **)(param_2 + 0x48) + 0x48))();
      (**(code **)(*plVar1 + 8))(plVar1,param_2 + 0x18,uVar4,0);
    }
    else {
                    /* try { // try from 00c0fcf8 to 00c0fcfb has its CatchHandler @ 00c0fd90 */
      lVar3 = (**(code **)(**(long **)(param_2 + 0x48) + 0x38))();
                    /* try { // try from 00c0fd0c to 00c0fd0f has its CatchHandler @ 00c0fd88 */
      uVar4 = (**(code **)(**(long **)(lVar3 + 0x50) + 0x48))();
                    /* try { // try from 00c0fd20 to 00c0fd3f has its CatchHandler @ 00c0fda0 */
      uVar5 = (**(code **)(**(long **)(lVar3 + 0x58) + 0x18))();
      (**(code **)(*plVar1 + 8))(plVar1,param_2 + 0x18,uVar4,uVar5);
    }
  }
  plVar1[0xb] = lVar6;
  return 0;
}


