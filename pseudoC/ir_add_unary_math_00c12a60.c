// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_unary_math
// Entry Point: 00c12a60
// Size: 708 bytes
// Signature: undefined __thiscall ir_add_unary_math(GISLParserUtil * this, GsTOperator param_1, AST_Node * param_2, GsTSourceLoc param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_add_unary_math(GsTOperator, AST_Node*, GsTSourceLoc, GISLParserContext&) */

long * __thiscall
GISLParserUtil::ir_add_unary_math
          (GISLParserUtil *this,GsTOperator param_1,AST_Node *param_2,GsTSourceLoc param_3,
          GISLParserContext *param_4)

{
  int iVar1;
  long lVar2;
  GsTOperator GVar3;
  long *plVar4;
  AST_ConstantNode *pAVar5;
  long *plVar6;
  ulong uVar7;
  GsTBasicType GVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  IR_TypeSet *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  uVar7 = (ulong)param_3;
  lVar2 = tpidr_el0;
  GVar3 = (GsTOperator)this;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)(ulong)param_1 + 0x18))((long *)(ulong)param_1);
  if (plVar4 == (long *)0x0) {
    GsTInfoSinkBase::message((TPrefixType)*(undefined8 *)(param_4 + 8),(char *)0x3,0x4d008c);
    goto LAB_00c12cf0;
  }
  GVar8 = 5;
  switch(GVar3) {
  case 6:
  case 7:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if (*(int *)plVar4[4] < 3) {
      if (GVar3 == 7) goto switchD_00c12ad4_caseD_68;
      goto switchD_00c12ad4_caseD_8;
    }
    goto LAB_00c12cec;
  default:
    goto switchD_00c12ad4_caseD_8;
  case 9:
    if (*(int *)plVar4[4] != 6) goto LAB_00c12cec;
    goto switchD_00c12ad4_caseD_8;
  case 10:
    if (*(int *)plVar4[4] != 7) goto LAB_00c12cec;
    goto switchD_00c12ad4_caseD_8;
  case 0x58:
    break;
  case 0x5c:
    GVar8 = 6;
    break;
  case 0x60:
    GVar8 = 7;
    break;
  case 100:
    GVar8 = 8;
    break;
  case 0x68:
switchD_00c12ad4_caseD_68:
    GVar8 = 9;
    break;
  case 0x6c:
    GVar8 = 3;
    break;
  case 0x70:
    GVar8 = 4;
  }
  piVar11 = (int *)plVar4[4];
  iVar1 = *piVar11;
  if (iVar1 == 0) {
LAB_00c12b94:
    local_78 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    local_88 = **(IR_TypeSet ***)(param_4 + 0x58);
    uStack_80 = IR_TypeSet::getScalarType(local_88,GVar8);
  }
  else if (iVar1 == 1) {
    uVar9 = piVar11[5];
    if (uVar9 == 1) goto LAB_00c12b94;
LAB_00c12bc0:
    local_78 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    local_88 = **(IR_TypeSet ***)(param_4 + 0x58);
    uStack_80 = IR_TypeSet::getVectorType(local_88,GVar8,uVar9);
  }
  else {
    if (iVar1 == 2) {
      uVar9 = piVar11[4];
      uVar10 = piVar11[5];
      if (uVar10 == 1) {
        if (uVar9 != 1) goto LAB_00c12bc0;
        goto LAB_00c12b94;
      }
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
    }
    local_78 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    local_88 = **(IR_TypeSet ***)(param_4 + 0x58);
    uStack_80 = IR_TypeSet::getMatrixType(local_88,GVar8,uVar9,uVar10);
  }
  plVar4 = (long *)ir_add_conversion(GVar3,(SHC_Type *)&local_88,(AST_TypedNode *)plVar4,param_4);
  if (plVar4 != (long *)0x0) {
switchD_00c12ad4_caseD_8:
    uVar9 = GVar3 - 0x58 >> 2 | GVar3 << 0x1e;
    if ((6 < uVar9) && (uVar9 != 0xc)) {
      pAVar5 = (AST_ConstantNode *)(**(code **)(*plVar4 + 0x28))(plVar4);
      plVar6 = (long *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x58);
      local_88 = (IR_TypeSet *)0x0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      plVar6[4] = 0;
      plVar6[3] = 0;
      plVar6[1] = 0;
      plVar6[2] = 0;
      plVar6[6] = 0;
      plVar6[5] = (ulong)uStack_74 << 0x20;
      *(GsTOperator *)(plVar6 + 9) = GVar3;
      plVar6[10] = 0;
      plVar6[8] = 0;
      plVar6[7] = 0;
      *plVar6 = (long)&PTR_traverse_00fed858;
      if (param_3 == 0) {
        param_2 = (AST_Node *)plVar4[1];
        uVar7 = plVar4[2];
      }
      plVar6[1] = (long)param_2;
      plVar6[2] = uVar7;
      plVar6[10] = (long)plVar4;
      uVar7 = AST_UnaryNode::promote((GISLParserContext *)plVar6);
      if ((uVar7 & 1) == 0) {
LAB_00c12cec:
        plVar4 = (long *)0x0;
      }
      else if ((pAVar5 == (AST_ConstantNode *)0x0) ||
              (plVar4 = (long *)foldUnaryConstantExpression
                                          (*(GsTOperator *)(plVar6 + 9),pAVar5,param_4),
              plVar4 == (long *)0x0)) {
        plVar4 = plVar6;
      }
    }
  }
LAB_00c12cf0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


