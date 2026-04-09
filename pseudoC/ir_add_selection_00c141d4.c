// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_selection
// Entry Point: 00c141d4
// Size: 264 bytes
// Signature: undefined __cdecl ir_add_selection(AST_TypedNode * param_1, NodePair param_2, GsTSourceLoc param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_add_selection(AST_TypedNode*, GISLParserUtil::NodePair, GsTSourceLoc,
   GISLParserContext&) */

void GISLParserUtil::ir_add_selection
               (AST_TypedNode *param_1,NodePair param_2,GsTSourceLoc param_3,
               GISLParserContext *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 in_x4;
  GISLParserContext *in_x5;
  IR_TypeSet *local_90;
  IR_Type *pIStack_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(*(long *)(param_1 + 0x20) + 8) != 9) {
    pIStack_88 = *(IR_Type **)(param_1 + 0x20);
    local_90 = *(IR_TypeSet **)(param_1 + 0x18);
    local_78 = *(undefined8 *)(param_1 + 0x30);
    local_80 = *(ulong *)(param_1 + 0x28);
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    local_70 = *(undefined8 *)(param_1 + 0x38);
    pIStack_88 = (IR_Type *)IR_TypeSet::getSameShapeBoolean(local_90,pIStack_88);
    uStack_68 = 0;
    param_1 = (AST_TypedNode *)ir_add_conversion(0x68,(SHC_Type *)&local_90,param_1,in_x5);
  }
  puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(in_x5 + 0x58),0x60);
  local_90 = (IR_TypeSet *)0x0;
  pIStack_88 = (IR_Type *)0x0;
  local_80 = local_80 & 0xffffffff00000000;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[5] = local_80;
  puVar2[9] = param_1;
  puVar2[10] = (ulong)param_2;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[0xb] = (ulong)param_3;
  puVar2[2] = in_x4;
  *puVar2 = &PTR_traverse_00fed978;
  puVar2[1] = param_4;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


