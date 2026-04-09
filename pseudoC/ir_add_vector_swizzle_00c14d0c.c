// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_vector_swizzle
// Entry Point: 00c14d0c
// Size: 1136 bytes
// Signature: undefined __cdecl ir_add_vector_swizzle(VectorFields * param_1, AST_TypedNode * param_2, GsTSourceLoc param_3, GsTSourceLoc param_4, GISLParserContext * param_5)


/* WARNING: Removing unreachable block (ram,0x00c14f64) */
/* GISLParserUtil::ir_add_vector_swizzle(GISLParserUtil::VectorFields&, AST_TypedNode*,
   GsTSourceLoc, GsTSourceLoc, GISLParserContext&) */

undefined8 *
GISLParserUtil::ir_add_vector_swizzle
          (VectorFields *param_1,AST_TypedNode *param_2,GsTSourceLoc param_3,GsTSourceLoc param_4,
          GISLParserContext *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 in_x5;
  GISLParserContext *in_x6;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 uVar22;
  IR_TypeSet *pIVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint local_98;
  uint uStack_84;
  
  uVar21 = (ulong)param_4;
  uVar13 = (ulong)param_3;
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x28);
  if ((((byte)param_2[0x28] >> 1 & 1) != 0) &&
     (puVar6 = (undefined8 *)
               ir_add_const_vector_swizzle
                         ((GISLParserUtil *)param_1,(VectorFields *)param_2,(AST_TypedNode *)param_5
                          ,(GsTSourceLoc)in_x5,in_x6), puVar6 != (undefined8 *)0x0))
  goto LAB_00c15144;
  if (*(int *)(param_1 + 0x10) == 1) {
    pIVar23 = **(IR_TypeSet ***)(in_x6 + 0x58);
    piVar7 = (int *)IR_TypeSet::getScalarType(pIVar23,6);
    puVar8 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(in_x6 + 0x58),0x68);
    uVar12 = *(undefined8 *)(in_x6 + 0x58);
    puVar8[2] = 0;
    puVar8[3] = pIVar23;
    *(undefined4 *)(puVar8 + 5) = 2;
    puVar8[4] = piVar7;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[7] = 0;
    puVar8[1] = 0;
    *puVar8 = &PTR_traverse_00fed718;
    *(undefined8 *)((long)puVar8 + 0x34) = 0;
    *(ulong *)((long)puVar8 + 0x2c) = (ulong)local_98;
    puVar8[9] = 0;
    puVar8[0xc] = uVar12;
    if (piVar7[2] == 0) {
LAB_00c14e3c:
      puVar6 = (undefined8 *)0x0;
      puVar8[2] = in_x5;
      puVar8[1] = param_5;
      uVar22 = *(undefined4 *)param_1;
LAB_00c14e50:
      if ((undefined8 *)puVar8[0xb] == puVar6) {
        puVar6 = (undefined8 *)SHC_PoolAllocator::allocate((SHC_PoolAllocator *)puVar8[0xc],8);
        puVar1 = puVar6 + 1;
        puVar14 = puVar6 + 1;
        *puVar6 = 0;
        puVar2 = (undefined8 *)puVar8[9];
        puVar16 = (undefined8 *)puVar8[10];
        lVar9 = (long)puVar16 - (long)puVar2;
        if (lVar9 != 0) {
          uVar17 = lVar9 - 8;
          if ((0x17 < uVar17) &&
             ((puVar16 <= (undefined8 *)((long)puVar6 + (~uVar17 & 0xfffffffffffffff8)) ||
              (puVar6 <= puVar16 + (uVar17 >> 3 ^ 0xffffffffffffffff))))) {
            puVar19 = puVar6 + -2;
            uVar17 = (uVar17 >> 3) + 1;
            uVar18 = uVar17 & 0x3ffffffffffffffc;
            puVar6 = puVar6 + -uVar18;
            puVar15 = puVar16 + -2;
            uVar20 = uVar18;
            do {
              puVar5 = puVar15 + -1;
              uVar25 = puVar15[-2];
              uVar24 = puVar15[1];
              uVar12 = *puVar15;
              puVar15 = puVar15 + -4;
              uVar20 = uVar20 - 4;
              puVar19[-1] = *puVar5;
              puVar19[-2] = uVar25;
              puVar19[1] = uVar24;
              *puVar19 = uVar12;
              puVar19 = puVar19 + -4;
            } while (uVar20 != 0);
            puVar16 = puVar16 + -uVar18;
            if (uVar17 == uVar18) goto LAB_00c15084;
          }
          do {
            puVar16 = puVar16 + -1;
            puVar6 = puVar6 + -1;
            *puVar6 = *puVar16;
          } while (puVar16 != puVar2);
        }
LAB_00c15084:
        puVar8[9] = puVar6;
        puVar8[10] = puVar14;
        puVar8[0xb] = puVar1;
      }
      else {
        *puVar6 = 0;
        puVar8[10] = puVar6 + 1;
        puVar6 = (undefined8 *)puVar8[9];
      }
    }
    else {
      iVar3 = *piVar7;
      if (iVar3 == 0) {
        uVar10 = 1;
      }
      else if (iVar3 == 1) {
        uVar10 = piVar7[5];
      }
      else {
        if (iVar3 != 2) goto LAB_00c14e3c;
        uVar10 = piVar7[5] * piVar7[4];
      }
      if (uVar10 == 0) goto LAB_00c14e3c;
                    /* try { // try from 00c14fbc to 00c14fc3 has its CatchHandler @ 00c1517c */
      std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
      __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
               (puVar8 + 9),(ulong)uVar10);
      puVar8[2] = in_x5;
      puVar6 = (undefined8 *)puVar8[9];
      puVar8[1] = param_5;
      uVar22 = *(undefined4 *)param_1;
      if ((undefined8 *)puVar8[10] == puVar6) goto LAB_00c14e50;
    }
    *(undefined4 *)puVar6 = 6;
    *(undefined4 *)((long)puVar6 + 4) = uVar22;
    puVar6 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(in_x6 + 0x58),0x60);
    puVar6[4] = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 9) = 0x4f;
    puVar6[6] = 0;
    puVar6[5] = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    *puVar6 = &PTR_traverse_00fed7b0;
    if (param_4 == 0) {
      uVar21 = puVar8[2];
      uVar13 = puVar8[1];
    }
    puVar6[1] = uVar13;
    puVar6[2] = uVar21;
    puVar6[10] = param_2;
    puVar6[0xb] = puVar8;
    pIVar23 = **(IR_TypeSet ***)(in_x6 + 0x58);
    uVar12 = IR_TypeSet::getScalarType(pIVar23,*(GsTBasicType *)(*(long *)(param_2 + 0x20) + 8));
    *(undefined4 *)(puVar6 + 5) = 0;
    puVar6[3] = pIVar23;
    puVar6[4] = uVar12;
  }
  else {
    lVar9 = ir_add_swizzle((GISLParserUtil *)param_1,(VectorFields *)param_5,(GsTSourceLoc)in_x5,
                           in_x6);
    puVar6 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(in_x6 + 0x58),0x60);
    puVar6[4] = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 9) = 0x52;
    puVar6[6] = 0;
    puVar6[5] = (ulong)uStack_84 << 0x20;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[8] = 0;
    puVar6[7] = 0;
    *puVar6 = &PTR_traverse_00fed7b0;
    if (param_4 == 0) {
      uVar13 = *(ulong *)(lVar9 + 8);
      uVar21 = *(ulong *)(lVar9 + 0x10);
    }
    puVar6[1] = uVar13;
    puVar6[2] = uVar21;
    puVar6[10] = param_2;
    puVar6[0xb] = lVar9;
    if (*(uint *)(param_1 + 0x10) == 1) {
      pIVar23 = **(IR_TypeSet ***)(in_x6 + 0x58);
      uVar12 = IR_TypeSet::getScalarType(pIVar23,*(GsTBasicType *)(*(long *)(param_2 + 0x20) + 8));
    }
    else {
      pIVar23 = **(IR_TypeSet ***)(in_x6 + 0x58);
      uVar12 = IR_TypeSet::getVectorType
                         (pIVar23,*(GsTBasicType *)(*(long *)(param_2 + 0x20) + 8),
                          *(uint *)(param_1 + 0x10));
    }
    puVar6[3] = pIVar23;
    puVar6[4] = uVar12;
    *(undefined4 *)(puVar6 + 5) = 0;
  }
  *(undefined8 *)((long)puVar6 + 0x34) = 0;
  *(undefined8 *)((long)puVar6 + 0x2c) = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
LAB_00c15144:
  if (*(long *)(lVar4 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}


