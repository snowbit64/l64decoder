// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_dot_operation
// Entry Point: 00c1518c
// Size: 1300 bytes
// Signature: undefined __cdecl ir_add_dot_operation(AST_TypedNode * param_1, GsTSourceLoc param_2, SHC_String * param_3, GsTSourceLoc param_4, GISLParserContext * param_5)


/* GISLParserUtil::ir_add_dot_operation(AST_TypedNode*, GsTSourceLoc, SHC_String const*,
   GsTSourceLoc, GISLParserContext&) */

undefined8 *
GISLParserUtil::ir_add_dot_operation
          (AST_TypedNode *param_1,GsTSourceLoc param_2,SHC_String *param_3,GsTSourceLoc param_4,
          GISLParserContext *param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  SHC_String *pSVar7;
  char *pcVar8;
  SHC_String *in_x5;
  GISLParserContext *in_x6;
  int iVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  GISLParserContext *pGVar13;
  int iVar14;
  SHC_String *pSVar15;
  undefined8 uVar16;
  GsTSourceLoc GVar17;
  uint uVar18;
  IR_TypeSet *pIVar19;
  GISLParserContext *local_c0;
  SHC_String *pSStack_b8;
  uint local_b0 [4];
  uint local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  pSVar7 = (SHC_String *)(ulong)param_4;
  pGVar13 = (GISLParserContext *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar10 = *(uint **)(param_1 + 0x20);
  local_c0 = param_5;
  if (4 < *puVar10) {
    pcVar8 = " field selection requires structure, pointer, vector, or matrix on left hand side";
    pSVar15 = *(SHC_String **)(pSVar7 + 0x10);
    if (((byte)*pSVar7 & 1) == 0) {
      pSVar15 = pSVar7 + 1;
    }
    goto LAB_00c154f8;
  }
  GVar17 = (GsTSourceLoc)param_3;
  switch(*puVar10) {
  case 0:
    uVar2 = GISLParserContext::parseVectorFields
                      (in_x6,pSVar7,1,(VectorFields *)local_b0,(GsTSourceLoc *)&local_c0);
    if ((uVar2 & 1) != 0) {
      GISLParserContext::createGenericVectorType
                ((GsTBasicType)in_x6,*(IR_QualFlags *)(*(long *)(param_1 + 0x20) + 8),
                 *(uint *)(param_1 + 0x28) & 2);
      uVar2 = GISLParserContext::getConstructorOp(in_x6,(SHC_Type *)&local_98);
      puVar6 = (undefined8 *)
               GISLParserContext::constructBuiltIn
                         ((SHC_Type *)in_x6,(int)&stack0xffffffffffffffa0 - 0x38,
                          (AST_Node *)(uVar2 & 0xffffffff),(GsTSourceLoc)param_1,
                          SUB81(*(undefined8 *)(param_1 + 8),0));
      goto LAB_00c15504;
    }
    local_a0 = 1;
    local_b0[0] = 0;
    break;
  case 1:
    uVar2 = GISLParserContext::parseVectorFields
                      (in_x6,pSVar7,puVar10[5],(VectorFields *)&local_98,(GsTSourceLoc *)&local_c0);
    if ((uVar2 & 1) != 0) {
      puVar6 = (undefined8 *)
               ir_add_vector_swizzle((VectorFields *)&local_98,param_1,param_2,GVar17,local_c0);
      goto LAB_00c15504;
    }
    local_98 = 0;
    uStack_88 = 1;
    break;
  case 2:
    pSStack_b8 = in_x5;
    uVar2 = GISLParserContext::parseMatrixFields
                      (in_x6,pSVar7,puVar10[4],puVar10[5],(VectorFields *)local_b0,
                       (GsTSourceLoc *)&local_c0);
    if ((uVar2 & 1) != 0) {
      lVar3 = ir_add_swizzle((GISLParserUtil *)local_b0,(VectorFields *)local_c0,
                             (GsTSourceLoc)pSStack_b8,in_x6);
      puVar6 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(in_x6 + 0x58),0x60)
      ;
      local_98 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uStack_7c = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[4] = 0;
      puVar6[3] = 0;
      *(undefined4 *)(puVar6 + 9) = 0x53;
      puVar6[6] = 0;
      puVar6[5] = (ulong)uStack_84 << 0x20;
      puVar6[8] = 0;
      puVar6[7] = 0;
      *puVar6 = &PTR_traverse_00fed7b0;
      if (GVar17 == 0) {
        pGVar13 = *(GISLParserContext **)(lVar3 + 8);
        param_3 = *(SHC_String **)(lVar3 + 0x10);
      }
      puVar6[1] = pGVar13;
      puVar6[2] = param_3;
      puVar6[10] = param_1;
      puVar6[0xb] = lVar3;
      if (local_a0 == 1) {
        pIVar19 = **(IR_TypeSet ***)(in_x6 + 0x58);
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uVar11 = IR_TypeSet::getScalarType(pIVar19,*(GsTBasicType *)(*(long *)(param_1 + 0x20) + 8))
        ;
      }
      else {
        pIVar19 = **(IR_TypeSet ***)(in_x6 + 0x58);
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uVar11 = IR_TypeSet::getVectorType
                           (pIVar19,*(GsTBasicType *)(*(long *)(param_1 + 0x20) + 8),local_a0);
      }
      puVar6[3] = pIVar19;
      puVar6[4] = uVar11;
      *(undefined4 *)(puVar6 + 5) = 0;
      *(ulong *)((long)puVar6 + 0x34) = CONCAT44(uStack_8c,uStack_90);
      *(ulong *)((long)puVar6 + 0x2c) = CONCAT44(uStack_94,local_98);
      puVar6[8] = CONCAT44(uStack_80,uStack_84);
      puVar6[7] = CONCAT44(uStack_88,uStack_8c);
      goto LAB_00c15504;
    }
    local_b0[0] = 0;
    local_a0 = 1;
    break;
  case 3:
    pSVar15 = *(SHC_String **)(pSVar7 + 0x10);
    if (((byte)*pSVar7 & 1) == 0) {
      pSVar15 = pSVar7 + 1;
    }
    lVar3 = IR_Struct::getField(*(IR_Struct **)(puVar10 + 2),(char *)pSVar15,local_b0);
    if (lVar3 != 0) {
      pIVar19 = **(IR_TypeSet ***)(in_x6 + 0x58);
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      piVar4 = (int *)IR_TypeSet::getScalarType(pIVar19,6);
      puVar5 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(in_x6 + 0x58),0x68)
      ;
      uVar11 = *(undefined8 *)(in_x6 + 0x58);
      puVar5[2] = 0;
      puVar5[3] = pIVar19;
      puVar5[4] = piVar4;
      puVar5[1] = (GISLParserContext *)0x0;
      *(undefined4 *)(puVar5 + 5) = 2;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar6 = puVar5 + 9;
      *puVar6 = 0;
      puVar5[8] = CONCAT44(uStack_80,uStack_84);
      puVar5[7] = CONCAT44(uStack_88,uStack_8c);
      *puVar5 = &PTR_traverse_00fed718;
      puVar5[0xc] = uVar11;
      *(ulong *)((long)puVar5 + 0x34) = CONCAT44(uStack_8c,uStack_90);
      *(ulong *)((long)puVar5 + 0x2c) = CONCAT44(uStack_94,local_98);
      if (piVar4[2] == 0) {
LAB_00c155c4:
        puVar5[2] = in_x5;
        puVar5[1] = param_5;
LAB_00c155d4:
        uVar18 = local_b0[0];
        std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
        __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
                 puVar6,1);
        puVar12 = (undefined4 *)*puVar6;
      }
      else {
        iVar9 = *piVar4;
        if (iVar9 == 0) {
          iVar9 = 1;
          iVar14 = 1;
        }
        else if (iVar9 == 1) {
          iVar9 = piVar4[5];
          iVar14 = 1;
        }
        else if (iVar9 == 2) {
          iVar9 = piVar4[4];
          iVar14 = piVar4[5];
        }
        else {
          iVar9 = 0;
          iVar14 = 0;
        }
        if (iVar14 * iVar9 == 0) goto LAB_00c155c4;
                    /* try { // try from 00c1559c to 00c155a3 has its CatchHandler @ 00c156a0 */
        std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
        __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
                 puVar6,(ulong)(uint)(iVar14 * iVar9));
        puVar5[2] = in_x5;
        puVar12 = (undefined4 *)puVar5[9];
        puVar5[1] = param_5;
        uVar18 = local_b0[0];
        if ((undefined4 *)puVar5[10] == puVar12) goto LAB_00c155d4;
      }
      *puVar12 = 6;
      puVar12[1] = uVar18;
      puVar6 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(in_x6 + 0x58),0x60)
      ;
      local_98 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uStack_7c = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[4] = 0;
      puVar6[3] = 0;
      *(undefined4 *)(puVar6 + 9) = 0x51;
      puVar6[6] = 0;
      puVar6[5] = (ulong)uStack_84 << 0x20;
      puVar6[8] = 0;
      puVar6[7] = 0;
      *puVar6 = &PTR_traverse_00fed7b0;
      if (GVar17 == 0) {
        param_3 = (SHC_String *)puVar5[2];
        pGVar13 = (GISLParserContext *)puVar5[1];
      }
      puVar6[1] = pGVar13;
      puVar6[2] = param_3;
      puVar6[10] = param_1;
      puVar6[0xb] = puVar5;
      uVar11 = **(undefined8 **)(in_x6 + 0x58);
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uVar16 = *(undefined8 *)(lVar3 + 0x10);
      uStack_94 = 0;
      uStack_90 = 0;
      *(undefined4 *)(puVar6 + 5) = *(undefined4 *)(lVar3 + 0x18);
      puVar6[3] = uVar11;
      puVar6[4] = uVar16;
      puVar6[8] = 0;
      puVar6[7] = 0;
      *(undefined8 *)((long)puVar6 + 0x34) = 0;
      *(undefined8 *)((long)puVar6 + 0x2c) = 0;
      goto LAB_00c15504;
    }
    pcVar8 = " no such field in structure";
    pSVar15 = pSVar7 + 1;
    if (((byte)*pSVar7 & 1) != 0) {
      pSVar15 = *(SHC_String **)(pSVar7 + 0x10);
    }
    goto LAB_00c154f8;
  case 4:
    pcVar8 = "cannot apply dot operator to an array";
    pGVar13 = param_5;
    param_3 = in_x5;
    pSVar15 = (SHC_String *)&DAT_004ccf25;
LAB_00c154f8:
    GISLParserContext::error
              ((GsTBasicType)in_x6,(char *)pGVar13,(char *)param_3,pcVar8,pSVar15,&DAT_0050a39f);
  }
  GISLParserContext::recover();
  puVar6 = (undefined8 *)param_1;
LAB_00c15504:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


