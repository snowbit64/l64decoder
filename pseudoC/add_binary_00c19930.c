// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: add_binary
// Entry Point: 00c19930
// Size: 624 bytes
// Signature: undefined __cdecl add_binary(GsTOperator param_1, AST_TypedNode * param_2, AST_TypedNode * param_3, GsTSourceLoc param_4, char * param_5, bool param_6)


/* WARNING: Removing unreachable block (ram,0x00c19a8c) */
/* GISLParserContext::add_binary(GsTOperator, AST_TypedNode*, AST_TypedNode*, GsTSourceLoc, char
   const*, bool) */

AST_TypedNode *
GISLParserContext::add_binary
          (GsTOperator param_1,AST_TypedNode *param_2,AST_TypedNode *param_3,GsTSourceLoc param_4,
          char *param_5,bool param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  GsTSourceLoc *pGVar6;
  AST_TypedNode *pAVar7;
  SHC_Type *in_x6;
  uint in_w7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  IR_TypeSet *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  ulong uStack_70;
  long local_68;
  
  uStack_70 = (ulong)param_6;
  pGVar6 = (GsTSourceLoc *)(ulong)param_1;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_78 = param_5;
  pAVar7 = (AST_TypedNode *)
           GISLParserUtil::ir_add_binary_math
                     ((GISLParserUtil *)((ulong)param_2 & 0xffffffff),(GsTOperator)param_3,
                      (AST_TypedNode *)(ulong)param_4,(AST_TypedNode *)param_5,(uint)param_6,
                      (GISLParserContext *)pGVar6);
  if (pAVar7 != (AST_TypedNode *)0x0) {
    if (((int)param_2 - 0x43U < 2) &&
       ((**(int **)(param_3 + 0x20) == 4 ||
        (**(int **)((AST_TypedNode *)(ulong)param_4 + 0x20) == 4)))) {
      *(undefined *)(pGVar6 + 6) = 1;
    }
    goto LAB_00c19b68;
  }
  binaryOpError(pGVar6,(char *)&local_78,in_x6,(SHC_Type *)(param_3 + 0x18));
  *(undefined *)(pGVar6 + 6) = 1;
  pAVar7 = param_3;
  if ((in_w7 & 1) == 0) goto LAB_00c19b68;
  local_a8 = **(IR_TypeSet ***)(pGVar6 + 0x16);
  local_98 = 2;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_a0 = IR_TypeSet::getScalarType(local_a8,9);
  pAVar7 = (AST_TypedNode *)
           GISLParserUtil::ir_add_constant
                     ((GISLParserUtil *)&local_a8,(SHC_Type *)param_5,(uint)param_6,
                      (GISLParserContext *)pGVar6);
  puVar9 = *(undefined8 **)(pAVar7 + 0x48);
  puVar2 = *(undefined8 **)(pAVar7 + 0x50);
  if (puVar2 == puVar9) {
    if (*(undefined8 **)(pAVar7 + 0x58) == puVar2) {
      puVar9 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(pAVar7 + 0x60),8);
      puVar2 = puVar9 + 1;
      puVar8 = puVar9 + 1;
      *puVar9 = 0;
      puVar1 = *(undefined8 **)(pAVar7 + 0x48);
      puVar11 = *(undefined8 **)(pAVar7 + 0x50);
      lVar3 = (long)puVar11 - (long)puVar1;
      if (lVar3 != 0) {
        uVar12 = lVar3 - 8;
        if ((0x17 < uVar12) &&
           ((puVar11 <= (undefined8 *)((long)puVar9 + (~uVar12 & 0xfffffffffffffff8)) ||
            (puVar9 <= puVar11 + (uVar12 >> 3 ^ 0xffffffffffffffff))))) {
          puVar14 = puVar9 + -2;
          uVar12 = (uVar12 >> 3) + 1;
          uVar13 = uVar12 & 0x3ffffffffffffffc;
          puVar9 = puVar9 + -uVar13;
          puVar10 = puVar11 + -2;
          uVar15 = uVar13;
          do {
            puVar5 = puVar10 + -1;
            uVar18 = puVar10[-2];
            uVar17 = puVar10[1];
            uVar16 = *puVar10;
            puVar10 = puVar10 + -4;
            uVar15 = uVar15 - 4;
            puVar14[-1] = *puVar5;
            puVar14[-2] = uVar18;
            puVar14[1] = uVar17;
            *puVar14 = uVar16;
            puVar14 = puVar14 + -4;
          } while (uVar15 != 0);
          puVar11 = puVar11 + -uVar13;
          if (uVar12 == uVar13) goto LAB_00c19b58;
        }
        do {
          puVar11 = puVar11 + -1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar11;
        } while (puVar11 != puVar1);
      }
LAB_00c19b58:
      *(undefined8 **)(pAVar7 + 0x48) = puVar9;
      *(undefined8 **)(pAVar7 + 0x50) = puVar8;
      *(undefined8 **)(pAVar7 + 0x58) = puVar2;
    }
    else {
      *puVar2 = 0;
      puVar9 = *(undefined8 **)(pAVar7 + 0x48);
      *(undefined8 **)(pAVar7 + 0x50) = puVar2 + 1;
    }
  }
  *(undefined *)((long)puVar9 + 4) = 0;
  *(undefined4 *)puVar9 = 9;
LAB_00c19b68:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return pAVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


