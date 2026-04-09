// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_declaration
// Entry Point: 00c138b8
// Size: 432 bytes
// Signature: undefined __thiscall ir_add_declaration(GISLParserUtil * this, AST_SymbolNode * param_1, AST_TypedNode * param_2, GsTSourceLoc param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_add_declaration(AST_SymbolNode*, AST_TypedNode*, GsTSourceLoc,
   GISLParserContext&) */

long * __thiscall
GISLParserUtil::ir_add_declaration
          (GISLParserUtil *this,AST_SymbolNode *param_1,AST_TypedNode *param_2,GsTSourceLoc param_3,
          GISLParserContext *param_4)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  byte local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x50);
  plVar4[2] = 0;
  *plVar4 = (long)&PTR___cxa_pure_virtual_00fed450;
  plVar4[1] = 0;
  lVar8 = *(long *)(this + 0x30);
  lVar5 = *(long *)(this + 0x28);
  lVar10 = *(long *)(this + 0x20);
  lVar9 = *(long *)(this + 0x18);
  lVar12 = *(long *)(this + 0x40);
  lVar11 = *(long *)(this + 0x38);
  plVar4[9] = 0;
  *plVar4 = (long)&PTR_traverse_00fed680;
  plVar4[1] = (long)param_2;
  plVar4[4] = lVar10;
  plVar4[3] = lVar9;
  plVar4[8] = lVar12;
  plVar4[7] = lVar11;
  plVar4[6] = lVar8;
  plVar4[5] = lVar5;
  plVar4[2] = (long)(char *)(ulong)param_3;
  if (param_1 == (AST_SymbolNode *)0x0) {
    plVar4[9] = (long)this;
  }
  else {
    lVar5 = ir_add_assign((GISLParserUtil *)0x89,(GsTOperator)this,(AST_TypedNode *)param_1,param_2,
                          param_3,param_4);
    if (lVar5 == 0) {
      SHC_Type::getUserString();
                    /* try { // try from 00c13990 to 00c1399b has its CatchHandler @ 00c13a68 */
      SHC_Type::getUserString();
      pbVar6 = *(byte **)(this + 0x50);
      pbVar7 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar7 = pbVar6 + 1;
      }
      pvVar1 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pvVar1 = local_60;
      }
      pvVar2 = (void *)((ulong)local_88 | 1);
      if ((local_88[0] & 1) != 0) {
        pvVar2 = local_78;
      }
                    /* try { // try from 00c139d8 to 00c139ff has its CatchHandler @ 00c13a78 */
      GISLParserContext::error
                ((GsTSourceLoc)param_4,(char *)param_2,(char *)(ulong)param_3,"Can\'t initialize",
                 pbVar7,"%s with %s value",pvVar1,pvVar2);
      GISLParserContext::recover();
      (**(code **)(*plVar4 + 0x68))(plVar4);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      plVar4 = (long *)0x0;
    }
    else {
      plVar4[9] = lVar5;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


