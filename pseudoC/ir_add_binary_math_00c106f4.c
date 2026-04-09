// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_binary_math
// Entry Point: 00c106f4
// Size: 1932 bytes
// Signature: undefined __thiscall ir_add_binary_math(GISLParserUtil * this, GsTOperator param_1, AST_TypedNode * param_2, AST_TypedNode * param_3, GsTSourceLoc param_4, GISLParserContext * param_5)


/* GISLParserUtil::ir_add_binary_math(GsTOperator, AST_TypedNode*, AST_TypedNode*, GsTSourceLoc,
   GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_add_binary_math
          (GISLParserUtil *this,GsTOperator param_1,AST_TypedNode *param_2,AST_TypedNode *param_3,
          GsTSourceLoc param_4,GISLParserContext *param_5)

{
  void *pvVar1;
  GsTBasicType GVar2;
  GsTBasicType GVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *this_00;
  ulong uVar7;
  AST_ConstantNode *pAVar8;
  AST_ConstantNode *pAVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  GsTBasicType GVar14;
  GsTOperator GVar15;
  int *piVar16;
  byte local_b0 [16];
  void *local_a0;
  IR_TypeSet *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  uVar7 = (ulong)param_4;
  plVar11 = (long *)(ulong)param_1;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar10 = (long *)0x0;
  if ((plVar11 == (long *)0x0) || (param_2 == (AST_TypedNode *)0x0)) goto LAB_00c10e4c;
  switch((int)this) {
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
    goto switchD_00c10764_caseD_39;
  case 0x3e:
  case 0x3f:
    if (*(int *)plVar11[4] == 4) goto LAB_00c10e48;
    piVar16 = *(int **)(param_2 + 0x20);
    iVar4 = *piVar16;
    if (iVar4 == 4) goto LAB_00c10e48;
    GVar2 = ((int *)plVar11[4])[2];
    if (3 < GVar2 - 5) goto LAB_00c10e48;
    if (piVar16[2] == GVar2) goto switchD_00c10764_caseD_4b;
    GVar15 = (GVar2 - 5) * 4 + 0x58;
    if (iVar4 == 0) {
      uVar12 = 1;
      uVar13 = 1;
    }
    else if (iVar4 == 1) {
      uVar12 = piVar16[5];
      uVar13 = 1;
    }
    else if (iVar4 == 2) {
      uVar12 = piVar16[4];
      uVar13 = piVar16[5];
    }
    else {
      uVar12 = 0;
      uVar13 = 0;
    }
    GISLParserContext::createGenericMatrixType
              (param_5,GVar2,*(IR_QualFlags *)(param_2 + 0x28),uVar12,uVar13,iVar4 == 2);
    goto LAB_00c10d74;
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
    break;
  default:
    goto switchD_00c10764_caseD_4b;
  case 0x4c:
  case 0x4d:
  case 0x4e:
    uVar12 = *(uint *)plVar11[4];
    if ((4 < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x16U) == 0)) {
      uVar12 = ((uint *)plVar11[4])[2];
      plVar10 = plVar11;
      if (uVar12 != 9) {
        if (5 < uVar12 - 3) goto LAB_00c10e48;
        local_88 = *(undefined4 *)(plVar11 + 5);
        local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
        local_78 = 0;
        uStack_70 = 0;
        uStack_80 = 0;
        uStack_90 = IR_TypeSet::getScalarType(local_98,9);
        plVar10 = (long *)ir_add_conversion(0x68,(SHC_Type *)&local_98,(AST_TypedNode *)plVar11,
                                            param_5);
        if (plVar10 == (long *)0x0) goto LAB_00c10e4c;
      }
      uVar12 = **(uint **)(param_2 + 0x20);
      if ((4 < uVar12) || ((1 << (ulong)(uVar12 & 0x1f) & 0x16U) == 0)) {
        uVar12 = (*(uint **)(param_2 + 0x20))[2];
        plVar11 = plVar10;
        if (uVar12 == 9) goto switchD_00c10764_caseD_4b;
        if (uVar12 - 3 < 6) {
          local_88 = *(undefined4 *)(param_2 + 0x28);
          local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
          local_78 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          uStack_90 = IR_TypeSet::getScalarType(local_98,9);
          GVar15 = 0x68;
          goto LAB_00c10d74;
        }
      }
    }
    goto LAB_00c10e48;
  }
  plVar10 = (long *)0x0;
  if ((*(int *)plVar11[4] == 2) || (*(int *)plVar11[4] == 4)) goto LAB_00c10e4c;
  plVar10 = (long *)0x0;
  if ((**(int **)(param_2 + 0x20) == 2) || (**(int **)(param_2 + 0x20) == 4)) goto LAB_00c10e4c;
switchD_00c10764_caseD_39:
  if ((*(int *)plVar11[4] < 3) && (**(int **)(param_2 + 0x20) < 3)) {
    GVar2 = ((int *)plVar11[4])[2];
    GVar3 = (*(int **)(param_2 + 0x20))[2];
    pAVar8 = (AST_ConstantNode *)(**(code **)(*plVar11 + 0x28))(plVar11);
    pAVar9 = (AST_ConstantNode *)(**(code **)(*(long *)param_2 + 0x28))(param_2);
    if ((pAVar8 == (AST_ConstantNode *)0x0) || (pAVar9 == (AST_ConstantNode *)0x0)) {
      GVar14 = GVar2;
      if (((ulong)pAVar8 | (ulong)pAVar9) == 0) {
        if (GVar2 == GVar3) {
LAB_00c10ab8:
          uVar12 = GVar14 - 4;
          if (uVar12 < 6) {
            uVar6 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2;
            GVar15 = *(GsTOperator *)(&DAT_00528ee8 + uVar6);
            GVar14 = *(GsTBasicType *)(&DAT_00528f00 + uVar6);
          }
          else {
            GVar15 = 0x6c;
          }
          goto LAB_00c10b9c;
        }
      }
      else {
        if (pAVar8 == (AST_ConstantNode *)0x0) {
          if (pAVar9 == (AST_ConstantNode *)0x0) {
            GVar14 = 5;
            GVar15 = 0x58;
            goto LAB_00c10b9c;
          }
          uVar6 = AST_ConstantNode::compatibleWith(pAVar9,GVar2);
          if ((uVar6 & 1) != 0) goto LAB_00c10ab8;
          AST_ConstantNode::formatValue();
                    /* try { // try from 00c10b1c to 00c10b2b has its CatchHandler @ 00c10e84 */
          SHC_Type::getUserString();
          uVar7 = (ulong)&local_98 | 1;
          if (((ulong)local_98 & 1) != 0) {
            uVar7 = CONCAT44(uStack_84,local_88);
          }
          pvVar1 = (void *)((ulong)local_b0 | 1);
          if ((local_b0[0] & 1) != 0) {
            pvVar1 = local_a0;
          }
                    /* try { // try from 00c10b58 to 00c10b6f has its CatchHandler @ 00c10e80 */
          GISLParserContext::error
                    ((GsTSourceLoc)param_5,*(char **)(pAVar9 + 8),*(char **)(pAVar9 + 0x10),"",uVar7
                     ,"constant value cannot be converted to %s",pvVar1);
        }
        else {
          uVar6 = AST_ConstantNode::compatibleWith(pAVar8,GVar3);
          GVar14 = GVar3;
          if ((uVar6 & 1) != 0) goto LAB_00c10ab8;
          AST_ConstantNode::formatValue();
                    /* try { // try from 00c10a50 to 00c10a5f has its CatchHandler @ 00c10eb8 */
          SHC_Type::getUserString();
          uVar7 = (ulong)&local_98 | 1;
          if (((ulong)local_98 & 1) != 0) {
            uVar7 = CONCAT44(uStack_84,local_88);
          }
          pvVar1 = (void *)((ulong)local_b0 | 1);
          if ((local_b0[0] & 1) != 0) {
            pvVar1 = local_a0;
          }
                    /* try { // try from 00c10a8c to 00c10aa3 has its CatchHandler @ 00c10e88 */
          GISLParserContext::error
                    ((GsTSourceLoc)param_5,*(char **)(pAVar8 + 8),*(char **)(pAVar8 + 0x10),"",uVar7
                     ,"constant value cannot be converted to %s",pvVar1);
        }
        if ((local_b0[0] & 1) != 0) {
          operator_delete(local_a0);
        }
        if (((ulong)local_98 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_84,local_88));
        }
      }
    }
    else {
      GVar14 = 3;
      GVar15 = 0x6c;
      if ((GVar2 != 3) && (GVar3 != 3)) {
        GVar14 = 4;
        GVar15 = 0x70;
        if ((GVar2 != 4) && (GVar3 != 4)) {
          GVar14 = 6;
          GVar15 = 0x5c;
          if ((GVar2 != 6) && (GVar3 != 6)) {
            GVar14 = 5;
            GVar15 = 0x58;
            if ((GVar2 != 5) && (GVar3 != 5)) {
              GVar14 = 8;
              GVar15 = 100;
              if ((GVar2 != 8) && (GVar3 != 8)) {
                GVar15 = 0x60;
                if (GVar2 != 7 && GVar3 != 7) {
                  GVar15 = 0x58;
                }
                GVar14 = 7;
                if (GVar2 != 7 && GVar3 != 7) {
                  GVar14 = 5;
                }
              }
            }
          }
        }
      }
LAB_00c10b9c:
      plVar10 = plVar11;
      if (GVar2 != GVar14) {
        piVar16 = (int *)plVar11[4];
        local_88 = *(undefined4 *)(plVar11 + 5);
        iVar4 = *piVar16;
        if (iVar4 == 0) {
LAB_00c10be0:
          local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
          local_78 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          uStack_90 = IR_TypeSet::getScalarType(local_98,GVar14);
        }
        else if (iVar4 == 1) {
          uVar12 = piVar16[5];
LAB_00c10bd8:
          if (uVar12 == 1) goto LAB_00c10be0;
          local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
          local_78 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          uStack_90 = IR_TypeSet::getVectorType(local_98,GVar14,uVar12);
        }
        else {
          if (iVar4 == 2) {
            uVar12 = piVar16[4];
            uVar13 = piVar16[5];
            if (uVar13 == 1) goto LAB_00c10bd8;
          }
          else {
            uVar13 = 0;
            uVar12 = 0;
          }
          local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
          local_78 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          uStack_90 = IR_TypeSet::getMatrixType(local_98,GVar14,uVar12,uVar13);
        }
        plVar10 = (long *)ir_add_conversion(GVar15,(SHC_Type *)&local_98,(AST_TypedNode *)plVar11,
                                            param_5);
        if (plVar10 == (long *)0x0) goto LAB_00c10e4c;
      }
      plVar11 = plVar10;
      if (GVar3 != GVar14) {
        piVar16 = *(int **)(param_2 + 0x20);
        local_88 = *(undefined4 *)(param_2 + 0x28);
        iVar4 = *piVar16;
        if (iVar4 == 0) {
LAB_00c10cb8:
          local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
          local_78 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          uStack_90 = IR_TypeSet::getScalarType(local_98,GVar14);
        }
        else if (iVar4 == 1) {
          uVar12 = piVar16[5];
LAB_00c10cb0:
          if (uVar12 == 1) goto LAB_00c10cb8;
          local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
          local_78 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          uStack_90 = IR_TypeSet::getVectorType(local_98,GVar14,uVar12);
        }
        else {
          if (iVar4 == 2) {
            uVar12 = piVar16[4];
            uVar13 = piVar16[5];
            if (uVar13 == 1) goto LAB_00c10cb0;
          }
          else {
            uVar13 = 0;
            uVar12 = 0;
          }
          local_98 = **(IR_TypeSet ***)(param_5 + 0x58);
          local_78 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          uStack_90 = IR_TypeSet::getMatrixType(local_98,GVar14,uVar12,uVar13);
        }
LAB_00c10d74:
        plVar10 = (long *)ir_add_conversion(GVar15,(SHC_Type *)&local_98,param_2,param_5);
        param_2 = (AST_TypedNode *)plVar10;
        if (plVar10 == (long *)0x0) goto LAB_00c10e4c;
      }
switchD_00c10764_caseD_4b:
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
      *(int *)(this_00 + 9) = (int)this;
      this_00[6] = 0;
      this_00[5] = (ulong)uStack_84 << 0x20;
      this_00[8] = 0;
      this_00[7] = 0;
      *this_00 = (long)&PTR_traverse_00fed7b0;
      if (param_4 == 0) {
        param_3 = *(AST_TypedNode **)((long)param_2 + 8);
        uVar7 = *(ulong *)((long)param_2 + 0x10);
      }
      this_00[1] = (long)param_3;
      this_00[2] = uVar7;
      this_00[10] = (long)plVar11;
      this_00[0xb] = (long)param_2;
      uVar7 = AST_BinaryNode::promote((AST_BinaryNode *)this_00,param_5);
      if ((uVar7 & 1) != 0) {
        pAVar8 = (AST_ConstantNode *)(**(code **)(*plVar11 + 0x28))(plVar11);
        pAVar9 = (AST_ConstantNode *)(**(code **)(*(long *)param_2 + 0x28))(param_2);
        if (((pAVar8 == (AST_ConstantNode *)0x0) || (pAVar9 == (AST_ConstantNode *)0x0)) ||
           (plVar10 = (long *)foldBinaryConstantExpression
                                        (*(GsTOperator *)(this_00 + 9),pAVar8,pAVar9,param_5),
           plVar10 == (long *)0x0)) {
          plVar10 = this_00;
        }
        goto LAB_00c10e4c;
      }
    }
  }
LAB_00c10e48:
  plVar10 = (long *)0x0;
LAB_00c10e4c:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar10);
}


