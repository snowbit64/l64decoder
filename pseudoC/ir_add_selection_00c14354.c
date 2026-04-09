// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_selection
// Entry Point: 00c14354
// Size: 632 bytes
// Signature: undefined __thiscall ir_add_selection(GISLParserUtil * this, AST_TypedNode * param_1, AST_TypedNode * param_2, AST_TypedNode * param_3, GsTSourceLoc param_4, GISLParserContext * param_5)


/* GISLParserUtil::ir_add_selection(AST_TypedNode*, AST_TypedNode*, AST_TypedNode*, GsTSourceLoc,
   GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_add_selection
          (GISLParserUtil *this,AST_TypedNode *param_1,AST_TypedNode *param_2,AST_TypedNode *param_3
          ,GsTSourceLoc param_4,GISLParserContext *param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  AST_TypedNode *pAVar5;
  undefined8 *this_00;
  ulong uVar6;
  long lVar7;
  int iVar8;
  IR_Type *this_01;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  IR_TypeSet *local_90;
  IR_Type *pIStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(int *)(*(long *)(this + 0x20) + 8) != 9) {
    pIStack_88 = *(IR_Type **)(this + 0x20);
    local_90 = *(IR_TypeSet **)(this + 0x18);
    uStack_78 = *(undefined8 *)(this + 0x30);
    uStack_80 = *(undefined8 *)(this + 0x28);
    uStack_68 = *(undefined8 *)(this + 0x40);
    local_70 = *(undefined8 *)(this + 0x38);
    pIStack_88 = (IR_Type *)IR_TypeSet::getSameShapeBoolean(local_90,pIStack_88);
    uStack_68 = 0;
    this = (GISLParserUtil *)
           ir_add_conversion(0x68,(SHC_Type *)&local_90,(AST_TypedNode *)this,param_5);
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x20) + 8);
  iVar8 = 3;
  if (((((((iVar3 != 3) && (iVar1 = *(int *)(*(long *)(param_2 + 0x20) + 8), iVar1 != 3)) &&
         (iVar8 = 4, iVar3 != 4)) && ((iVar1 != 4 && (iVar8 = 6, iVar3 != 6)))) &&
       ((iVar1 != 6 && ((iVar8 = 5, iVar3 != 5 && (iVar1 != 5)))))) && (iVar8 = 8, iVar3 != 8)) &&
     ((iVar1 != 8 && (iVar8 = 7, iVar1 != 7 && iVar3 != 7)))) {
    iVar8 = iVar3;
  }
  if (iVar8 == iVar3) {
    puVar4 = (undefined8 *)ir_add_conversion(1,(SHC_Type *)(param_1 + 0x18),param_2,param_5);
    pAVar5 = param_1;
    if ((puVar4 == (undefined8 *)0x0) &&
       (pAVar5 = (AST_TypedNode *)ir_add_conversion(1,(SHC_Type *)(param_2 + 0x18),param_1,param_5),
       puVar4 = (undefined8 *)param_2, pAVar5 == (AST_TypedNode *)0x0)) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00c1459c;
    }
  }
  else {
    pAVar5 = (AST_TypedNode *)ir_add_conversion(1,(SHC_Type *)(param_2 + 0x18),param_1,param_5);
    puVar4 = (undefined8 *)param_2;
    if ((pAVar5 == (AST_TypedNode *)0x0) &&
       (puVar4 = (undefined8 *)ir_add_conversion(1,(SHC_Type *)(param_1 + 0x18),param_2,param_5),
       pAVar5 = param_1, puVar4 == (undefined8 *)0x0)) goto LAB_00c1459c;
  }
  this_00 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_5 + 0x58),0x60);
  *this_00 = &PTR___cxa_pure_virtual_00fed450;
  this_00[1] = 0;
  this_00[2] = 0;
  uVar10 = *(undefined8 *)(pAVar5 + 0x30);
  uVar9 = *(undefined8 *)(pAVar5 + 0x28);
  uVar12 = *(undefined8 *)(pAVar5 + 0x20);
  uVar11 = *(undefined8 *)(pAVar5 + 0x18);
  uVar14 = *(undefined8 *)(pAVar5 + 0x40);
  uVar13 = *(undefined8 *)(pAVar5 + 0x38);
  this_00[9] = this;
  this_00[10] = pAVar5;
  this_00[0xb] = puVar4;
  *this_00 = &PTR_traverse_00fed978;
  this_00[1] = param_3;
  this_00[8] = uVar14;
  this_00[7] = uVar13;
  this_00[4] = uVar12;
  this_00[3] = uVar11;
  this_00[6] = uVar10;
  this_00[5] = uVar9;
  this_00[2] = (ulong)param_4;
  uVar6 = AST_SelectionNode::promoteTernary((AST_SelectionNode *)this_00,param_5);
  puVar4 = (undefined8 *)0x0;
  if ((uVar6 & 1) != 0) {
    local_90 = (IR_TypeSet *)0x0;
    lVar7 = (**(code **)(*(long *)this_00[10] + 0x18))();
    this_01 = *(IR_Type **)(lVar7 + 0x20);
    lVar7 = (**(code **)(*(long *)this_00[0xb] + 0x18))((long *)this_00[0xb]);
    iVar3 = IR_Type::canReceive(this_01,*(IR_Type **)(lVar7 + 0x20),false,(IR_Type **)&local_90);
    puVar4 = this_00;
    if (iVar3 != 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
LAB_00c1459c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


