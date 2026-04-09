// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_comma
// Entry Point: 00c142dc
// Size: 120 bytes
// Signature: undefined __thiscall ir_add_comma(GISLParserUtil * this, AST_TypedNode * param_1, AST_TypedNode * param_2, GsTSourceLoc param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_add_comma(AST_TypedNode*, AST_TypedNode*, GsTSourceLoc, GISLParserContext&) */

long * __thiscall
GISLParserUtil::ir_add_comma
          (GISLParserUtil *this,AST_TypedNode *param_1,AST_TypedNode *param_2,GsTSourceLoc param_3,
          GISLParserContext *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((((byte)this[0x28] >> 1 & 1) == 0) ||
     (plVar1 = (long *)param_1, ((byte)param_1[0x28] >> 1 & 1) == 0)) {
    plVar1 = (long *)ir_grow_aggregate(this,(AST_Node *)param_1,(AST_Node *)param_2,param_3,0,
                                       param_4);
    lVar2 = (**(code **)(*plVar1 + 0x30))();
    *(undefined4 *)(lVar2 + 0x48) = 0x4b;
    lVar2 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *(long *)(param_1 + 0x38);
    plVar1[6] = *(long *)(param_1 + 0x30);
    plVar1[5] = lVar2;
    plVar1[4] = lVar4;
    plVar1[3] = lVar3;
    plVar1[8] = lVar6;
    plVar1[7] = lVar5;
    *(undefined4 *)(plVar1 + 5) = 0;
  }
  return plVar1;
}


