// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_loop
// Entry Point: 00c156b0
// Size: 240 bytes
// Signature: undefined __thiscall ir_add_loop(GISLParserUtil * this, LoopType param_1, AST_TypedNode * param_2, AST_TypedNode * param_3, AST_Node * param_4, GsTSourceLoc param_5, GISLParserContext * param_6)


/* GISLParserUtil::ir_add_loop(AST_Loop::LoopType, AST_TypedNode*, AST_TypedNode*, AST_Node*,
   GsTSourceLoc, GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_add_loop
          (GISLParserUtil *this,LoopType param_1,AST_TypedNode *param_2,AST_TypedNode *param_3,
          AST_Node *param_4,GsTSourceLoc param_5,GISLParserContext *param_6)

{
  long lVar1;
  AST_TypedNode *pAVar2;
  undefined8 *puVar3;
  IR_TypeSet *local_90;
  IR_Type *pIStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  pAVar2 = (AST_TypedNode *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((pAVar2 != (AST_TypedNode *)0x0) && (*(int *)(*(long *)(pAVar2 + 0x20) + 8) != 9)) {
    pIStack_88 = *(IR_Type **)(pAVar2 + 0x20);
    local_90 = *(IR_TypeSet **)(pAVar2 + 0x18);
    uStack_78 = *(undefined8 *)(pAVar2 + 0x30);
    uStack_80 = *(undefined8 *)(pAVar2 + 0x28);
    uStack_68 = *(undefined8 *)(pAVar2 + 0x40);
    local_70 = *(undefined8 *)(pAVar2 + 0x38);
    pIStack_88 = (IR_Type *)IR_TypeSet::getSameShapeBoolean(local_90,pIStack_88);
    uStack_68 = 0;
    pAVar2 = (AST_TypedNode *)ir_add_conversion(0x68,(SHC_Type *)&local_90,pAVar2,param_6);
  }
  puVar3 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_6 + 0x58),0x38);
  *(int *)(puVar3 + 3) = (int)this;
  puVar3[4] = pAVar2;
  puVar3[5] = param_2;
  puVar3[6] = param_3;
  puVar3[1] = param_4;
  puVar3[2] = (ulong)param_5;
  *puVar3 = &PTR_traverse_00fed4e8;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


