// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverseAggregate
// Entry Point: 00c101f0
// Size: 280 bytes
// Signature: undefined __cdecl traverseAggregate(bool param_1, AST_AggregateNode * param_2, AST_Traverser * param_3)


/* CodeTraverser::traverseAggregate(bool, AST_AggregateNode*, AST_Traverser*) */

undefined8
CodeTraverser::traverseAggregate(bool param_1,AST_AggregateNode *param_2,AST_Traverser *param_3)

{
  AST_AggregateNode *pAVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  plVar2 = (long *)0x0;
  if (param_3 != (AST_Traverser *)0x0) {
    plVar2 = (long *)(param_3 + -8);
  }
  lVar5 = plVar2[0xb];
  plVar2[0xb] = (long)param_2;
                    /* try { // try from 00c10228 to 00c10233 has its CatchHandler @ 00c10310 */
  if ((*(AST_Traverser *)((long)plVar2 + 0x56) == (AST_Traverser)0x0) ||
     (uVar4 = (**(code **)*plVar2)(plVar2,param_2), (uVar4 & 1) != 0)) {
    iVar3 = *(int *)(param_2 + 0x48);
    pAVar1 = param_2 + 0x50;
    if (iVar3 == 2) {
      (**(code **)(*plVar2 + 0x68))(plVar2,pAVar1,1);
    }
    else if (iVar3 == 1) {
                    /* try { // try from 00c10258 to 00c102ef has its CatchHandler @ 00c10308 */
      (**(code **)(*plVar2 + 0x68))(plVar2,pAVar1,0);
    }
    else {
      if (iVar3 - 0x58U < 0x2e) {
        if (*(long *)(param_2 + 0x58) - (long)*(undefined8 **)(param_2 + 0x50) == 8) {
          (**(code **)(*plVar2 + 0x70))(plVar2,iVar3,**(undefined8 **)(param_2 + 0x50));
          goto LAB_00c102f0;
        }
      }
      else if (iVar3 == 3) {
        (**(code **)(*plVar2 + 0x80))
                  (plVar2,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x70));
        goto LAB_00c102f0;
      }
      (**(code **)(*plVar2 + 0x78))(plVar2,iVar3,pAVar1);
    }
  }
LAB_00c102f0:
  plVar2[0xb] = lVar5;
  return 0;
}


