// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergeAggregates
// Entry Point: 00c1584c
// Size: 100 bytes
// Signature: undefined __cdecl mergeAggregates(AST_AggregateNode * param_1, AST_AggregateNode * param_2, GISLParserContext * param_3)


/* GISLParserUtil::mergeAggregates(AST_AggregateNode*, AST_AggregateNode*, GISLParserContext&) */

AST_AggregateNode *
GISLParserUtil::mergeAggregates
          (AST_AggregateNode *param_1,AST_AggregateNode *param_2,GISLParserContext *param_3)

{
  AST_AggregateNode *pAVar1;
  AST_Node **ppAVar2;
  AST_Node **ppAVar3;
  
  pAVar1 = param_2;
  if (((param_1 != (AST_AggregateNode *)0x0) &&
      (pAVar1 = param_1, param_2 != (AST_AggregateNode *)0x0)) &&
     (ppAVar2 = *(AST_Node ***)(param_2 + 0x50), ppAVar2 != *(AST_Node ***)(param_2 + 0x58))) {
    do {
      ppAVar3 = ppAVar2 + 1;
      param_1 = (AST_AggregateNode *)
                ir_grow_aggregate((GISLParserUtil *)param_1,*ppAVar2,*(AST_Node **)(param_2 + 8),
                                  (GsTSourceLoc)*(undefined8 *)(param_2 + 0x10),0,param_3);
      pAVar1 = param_1;
      ppAVar2 = ppAVar3;
    } while (ppAVar3 != *(AST_Node ***)(param_2 + 0x58));
  }
  return pAVar1;
}


