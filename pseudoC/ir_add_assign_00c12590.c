// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_assign
// Entry Point: 00c12590
// Size: 964 bytes
// Signature: undefined __thiscall ir_add_assign(GISLParserUtil * this, GsTOperator param_1, AST_TypedNode * param_2, AST_TypedNode * param_3, GsTSourceLoc param_4, GISLParserContext * param_5)


/* GISLParserUtil::ir_add_assign(GsTOperator, AST_TypedNode*, AST_TypedNode*, GsTSourceLoc,
   GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_add_assign
          (GISLParserUtil *this,GsTOperator param_1,AST_TypedNode *param_2,AST_TypedNode *param_3,
          GsTSourceLoc param_4,GISLParserContext *param_5)

{
  void *pvVar1;
  GsTBasicType GVar2;
  GsTBasicType GVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *this_00;
  ulong uVar7;
  AST_ConstantNode *this_01;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  GsTOperator GVar13;
  GsTOperator GVar14;
  byte local_b8 [16];
  void *local_a8;
  IR_Type *local_a0;
  IR_TypeSet *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  uVar7 = (ulong)param_4;
  uVar9 = (ulong)param_1;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = IR_Type::compatibleWithMOV(*(IR_Type **)(uVar9 + 0x20),*(IR_Type **)(param_2 + 0x20));
  GVar13 = (GsTOperator)this;
  if ((GVar13 == 0x89) && ((uVar6 & 1) != 0)) {
    this_00 = (long *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_5 + 0x58),0x60);
    local_98 = (IR_TypeSet *)0x0;
    uStack_90 = 0;
    local_88 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    this_00[1] = 0;
    this_00[2] = 0;
    this_00[4] = 0;
    this_00[3] = 0;
    *(undefined4 *)(this_00 + 9) = 0x89;
    this_00[6] = 0;
    this_00[5] = (ulong)uStack_84 << 0x20;
    this_00[8] = 0;
    this_00[7] = 0;
    *this_00 = (long)&PTR_traverse_00fed7b0;
    if (param_4 == 0) {
      param_3 = *(AST_TypedNode **)(uVar9 + 8);
      uVar7 = *(ulong *)(uVar9 + 0x10);
    }
    this_00[1] = (long)param_3;
    this_00[2] = uVar7;
    this_00[10] = uVar9;
    this_00[0xb] = (long)param_2;
    uVar7 = AST_BinaryNode::promote((AST_BinaryNode *)this_00,param_5);
    if ((uVar7 & 1) == 0) {
      this_00 = (long *)0x0;
    }
    goto LAB_00c12730;
  }
  if ((**(int **)(uVar9 + 0x20) < 3) && (**(int **)(param_2 + 0x20) < 3)) {
    GVar2 = (*(int **)(uVar9 + 0x20))[2];
    GVar3 = (*(int **)(param_2 + 0x20))[2];
    this_01 = (AST_ConstantNode *)(**(code **)(*(long *)param_2 + 0x28))(param_2);
    local_a0 = (IR_Type *)0x0;
    iVar5 = IR_Type::canReceive(*(IR_Type **)(uVar9 + 0x20),*(IR_Type **)(param_2 + 0x20),
                                this_01 != (AST_ConstantNode *)0x0,&local_a0);
    if (iVar5 != -1) {
      if ((this_01 == (AST_ConstantNode *)0x0) ||
         (uVar6 = AST_ConstantNode::compatibleWith(this_01,GVar2), (uVar6 & 1) != 0)) {
        if (GVar3 != GVar2) {
          if (GVar2 - 4 < 6) {
            GVar14 = *(GsTOperator *)(&DAT_00528f34 + (long)(int)(GVar2 - 4) * 4);
          }
          else {
            GVar14 = 0x6c;
          }
          piVar12 = *(int **)(param_2 + 0x20);
          local_88 = *(undefined4 *)(param_2 + 0x28);
          iVar5 = *piVar12;
          if (iVar5 == 0) {
LAB_00c12828:
            local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
            local_78 = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_90 = IR_TypeSet::getScalarType(local_98,GVar2);
          }
          else if (iVar5 == 1) {
            uVar10 = piVar12[5];
LAB_00c12820:
            if (uVar10 == 1) goto LAB_00c12828;
            local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
            local_78 = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_90 = IR_TypeSet::getVectorType(local_98,GVar2,uVar10);
          }
          else {
            if (iVar5 == 2) {
              uVar10 = piVar12[4];
              uVar11 = piVar12[5];
              if (uVar11 == 1) goto LAB_00c12820;
            }
            else {
              uVar11 = 0;
              uVar10 = 0;
            }
            local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
            local_78 = 0;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_90 = IR_TypeSet::getMatrixType(local_98,GVar2,uVar10,uVar11);
          }
          param_2 = (AST_TypedNode *)ir_add_conversion(GVar14,(SHC_Type *)&local_98,param_2,param_5)
          ;
          this_00 = (long *)param_2;
          if ((long *)param_2 == (long *)0x0) goto LAB_00c12730;
        }
        plVar8 = (long *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_5 + 0x58),0x60);
        local_98 = (IR_TypeSet *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        local_78 = 0;
        uStack_70 = 0;
        uStack_80 = 0;
        plVar8[1] = 0;
        plVar8[2] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        *(GsTOperator *)(plVar8 + 9) = GVar13;
        plVar8[6] = 0;
        plVar8[5] = (ulong)uStack_84 << 0x20;
        plVar8[8] = 0;
        plVar8[7] = 0;
        *plVar8 = (long)&PTR_traverse_00fed7b0;
        if (param_4 == 0) {
          param_3 = *(AST_TypedNode **)(uVar9 + 8);
          uVar7 = *(ulong *)(uVar9 + 0x10);
        }
        plVar8[1] = (long)param_3;
        plVar8[2] = uVar7;
        this_00 = (long *)ir_add_conversion(GVar13,(SHC_Type *)(uVar9 + 0x18),param_2,param_5);
        if (this_00 != (long *)0x0) {
          plVar8[10] = uVar9;
          plVar8[0xb] = (long)this_00;
          uVar7 = (**(code **)(*plVar8 + 0x60))(plVar8,param_5);
          this_00 = plVar8;
          if ((uVar7 & 1) == 0) {
            this_00 = (long *)0x0;
          }
        }
        goto LAB_00c12730;
      }
      AST_ConstantNode::formatValue();
                    /* try { // try from 00c12770 to 00c1277f has its CatchHandler @ 00c12984 */
      SHC_Type::getUserString();
      uVar7 = (ulong)&local_98 | 1;
      if (((ulong)local_98 & 1) != 0) {
        uVar7 = CONCAT44(uStack_84,local_88);
      }
      pvVar1 = (void *)((ulong)local_b8 | 1);
      if ((local_b8[0] & 1) != 0) {
        pvVar1 = local_a8;
      }
                    /* try { // try from 00c127ac to 00c127c3 has its CatchHandler @ 00c12954 */
      GISLParserContext::error
                ((GsTSourceLoc)param_5,*(char **)(this_01 + 8),*(char **)(this_01 + 0x10),"",uVar7,
                 "constant value cannot be converted to %s",pvVar1);
      if ((local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      if (((ulong)local_98 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_84,local_88));
      }
    }
  }
  else {
    GISLParserContext::error
              ((GsTSourceLoc)param_5,*(char **)(param_2 + 8),*(char **)(param_2 + 0x10),"",
               &DAT_0050a39f,"types are not compatible for assignment");
  }
  this_00 = (long *)0x0;
LAB_00c12730:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


