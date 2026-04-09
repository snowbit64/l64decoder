// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldUnaryConstantExpression
// Entry Point: 00c12e04
// Size: 800 bytes
// Signature: undefined __cdecl foldUnaryConstantExpression(GsTOperator param_1, AST_ConstantNode * param_2, GISLParserContext * param_3)


/* GISLParserUtil::foldUnaryConstantExpression(GsTOperator, AST_ConstantNode*, GISLParserContext&)
    */

long * GISLParserUtil::foldUnaryConstantExpression
                 (GsTOperator param_1,AST_ConstantNode *param_2,GISLParserContext *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  
  if (((param_2 == (AST_ConstantNode *)0x0) || (2 < **(int **)(param_2 + 0x20))) ||
     (5 < (*(int **)(param_2 + 0x20))[2] - 3U)) {
    return (long *)0x0;
  }
  plVar4 = (long *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_3 + 0x58),0x68);
  lVar6 = *(long *)(param_3 + 0x58);
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (long)&PTR___cxa_pure_virtual_00fed450;
  lVar11 = *(long *)(param_2 + 0x30);
  lVar13 = *(long *)(param_2 + 0x28);
  lVar15 = *(long *)(param_2 + 0x40);
  lVar14 = *(long *)(param_2 + 0x38);
  lVar17 = *(long *)(param_2 + 0x20);
  lVar16 = *(long *)(param_2 + 0x18);
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar10 = plVar4 + 9;
  *plVar10 = 0;
  plVar4[8] = lVar15;
  plVar4[7] = lVar14;
  plVar4[4] = lVar17;
  plVar4[3] = lVar16;
  plVar4[6] = lVar11;
  plVar4[5] = lVar13;
  piVar8 = *(int **)(param_2 + 0x20);
  plVar4[0xc] = lVar6;
  iVar5 = piVar8[2];
  *plVar4 = (long)&PTR_traverse_00fed718;
  if (iVar5 != 0) {
    iVar5 = *piVar8;
    if (iVar5 == 0) {
      iVar5 = 1;
      iVar7 = 1;
    }
    else if (iVar5 == 1) {
      iVar5 = piVar8[5];
      iVar7 = 1;
    }
    else if (iVar5 == 2) {
      iVar5 = piVar8[4];
      iVar7 = piVar8[5];
    }
    else {
      iVar5 = 0;
      iVar7 = 0;
    }
    if (iVar7 * iVar5 != 0) {
                    /* try { // try from 00c12f30 to 00c12f37 has its CatchHandler @ 00c13124 */
      std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
      __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
               plVar10,(ulong)(uint)(iVar7 * iVar5));
    }
  }
  if (param_1 != 6) {
    plVar10 = (long *)0x0;
    param_2 = (AST_ConstantNode *)plVar4;
    goto LAB_00c13110;
  }
  if (**(int **)(param_2 + 0x20) < 3) {
    uVar2 = (*(int **)(param_2 + 0x20))[2];
    if ((uVar2 & 0xfffffffd) == 5) {
      lVar6 = plVar4[9];
      lVar13 = plVar4[10];
      if ((int)((ulong)(lVar13 - lVar6) >> 3) != 0) {
        lVar11 = 0;
        uVar12 = 0;
        do {
          uVar9 = lVar13 - lVar6 >> 3;
          uVar3 = *(undefined4 *)(plVar4[4] + 8);
          iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar11 + 4);
          if (uVar9 <= uVar12) {
            std::__ndk1::
            vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
                      ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)plVar10,(uVar12 - uVar9) + 1);
            lVar6 = *plVar10;
          }
          puVar1 = (undefined4 *)(lVar6 + lVar11);
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 8;
          puVar1[1] = -iVar5;
          lVar6 = plVar4[9];
          lVar13 = plVar4[10];
          *puVar1 = uVar3;
        } while (uVar12 < ((ulong)(lVar13 - lVar6) >> 3 & 0xffffffff));
      }
    }
    else {
      if ((uVar2 != 8) && (uVar2 != 6)) goto LAB_00c13084;
      lVar6 = plVar4[9];
      lVar13 = plVar4[10];
      if ((int)((ulong)(lVar13 - lVar6) >> 3) != 0) {
        lVar11 = 0;
        uVar12 = 0;
        do {
          uVar9 = lVar13 - lVar6 >> 3;
          uVar3 = *(undefined4 *)(plVar4[4] + 8);
          iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar11 + 4);
          if (uVar9 <= uVar12) {
            std::__ndk1::
            vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
                      ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)plVar10,(uVar12 - uVar9) + 1);
            lVar6 = *plVar10;
          }
          puVar1 = (undefined4 *)(lVar6 + lVar11);
          uVar12 = uVar12 + 1;
          lVar11 = lVar11 + 8;
          puVar1[1] = -iVar5;
          lVar6 = plVar4[9];
          lVar13 = plVar4[10];
          *puVar1 = uVar3;
        } while (uVar12 < ((ulong)(lVar13 - lVar6) >> 3 & 0xffffffff));
      }
    }
  }
  else {
LAB_00c13084:
    lVar6 = plVar4[9];
    lVar13 = plVar4[10];
    if ((int)((ulong)(lVar13 - lVar6) >> 3) != 0) {
      lVar11 = 0;
      uVar12 = 0;
      do {
        uVar9 = lVar13 - lVar6 >> 3;
        uVar3 = *(undefined4 *)(plVar4[4] + 8);
        fVar18 = *(float *)(*(long *)(param_2 + 0x48) + lVar11 + 4);
        if (uVar9 <= uVar12) {
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::__append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)plVar10,(uVar12 - uVar9) + 1);
          lVar6 = *plVar10;
        }
        puVar1 = (undefined4 *)(lVar6 + lVar11);
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 8;
        *puVar1 = uVar3;
        puVar1[1] = -fVar18;
        lVar6 = plVar4[9];
        lVar13 = plVar4[10];
      } while (uVar12 < ((ulong)(lVar13 - lVar6) >> 3 & 0xffffffff));
    }
  }
  lVar6 = *(long *)(param_2 + 8);
  plVar4[2] = *(long *)(param_2 + 0x10);
  plVar4[1] = lVar6;
  plVar10 = plVar4;
LAB_00c13110:
  (**(code **)(*(long *)param_2 + 0x68))(param_2);
  return plVar10;
}


