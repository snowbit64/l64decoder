// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_promote_constant
// Entry Point: 00c132dc
// Size: 1484 bytes
// Signature: undefined __cdecl ir_promote_constant(GsTBasicType param_1, AST_ConstantNode * param_2, GISLParserContext * param_3)


/* GISLParserUtil::ir_promote_constant(GsTBasicType, AST_ConstantNode*, GISLParserContext&) */

undefined8 *
GISLParserUtil::ir_promote_constant
          (GsTBasicType param_1,AST_ConstantNode *param_2,GISLParserContext *param_3)

{
  long lVar1;
  long lVar2;
  undefined uVar3;
  long lVar4;
  bool bVar5;
  GsTSourceLoc GVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  GsTBasicType GVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  IR_TypeSet *this;
  long *this_00;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  int iVar23;
  float fVar24;
  uint local_a4;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  piVar9 = *(int **)(param_2 + 0x20);
  iVar23 = *piVar9;
  if (iVar23 == 4) {
    GsTInfoSinkBase::message((TPrefixType)*(undefined8 *)(param_3 + 8),(char *)0x3,0x4d28b2);
    puVar17 = (undefined8 *)0x0;
    goto LAB_00c13868;
  }
  lVar1 = *(long *)(param_2 + 0x48);
  lVar2 = *(long *)(param_2 + 0x50);
  uVar22 = *(undefined4 *)(param_2 + 0x28);
  if (iVar23 == 0) {
LAB_00c13380:
    this = **(IR_TypeSet ***)(param_3 + 0x58);
    piVar9 = (int *)IR_TypeSet::getScalarType(this,param_1);
  }
  else if (iVar23 == 1) {
    uVar16 = piVar9[5];
    if (uVar16 == 1) goto LAB_00c13380;
LAB_00c133ac:
    this = **(IR_TypeSet ***)(param_3 + 0x58);
    piVar9 = (int *)IR_TypeSet::getVectorType(this,param_1,uVar16);
  }
  else {
    if (iVar23 == 2) {
      uVar16 = piVar9[4];
      uVar7 = piVar9[5];
      if (uVar7 == 1) {
        if (uVar16 != 1) goto LAB_00c133ac;
        goto LAB_00c13380;
      }
    }
    else {
      uVar7 = 0;
      uVar16 = 0;
    }
    this = **(IR_TypeSet ***)(param_3 + 0x58);
    piVar9 = (int *)IR_TypeSet::getMatrixType(this,param_1,uVar16,uVar7);
  }
  uVar21 = *(undefined8 *)(param_2 + 0x10);
  uVar20 = *(undefined8 *)(param_2 + 8);
  puVar17 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_3 + 0x58),0x68);
  uVar10 = *(undefined8 *)(param_3 + 0x58);
  puVar17[2] = 0;
  puVar17[3] = this;
  puVar17[4] = piVar9;
  puVar17[8] = 0;
  puVar17[7] = 0;
  *(undefined4 *)(puVar17 + 5) = uVar22;
  puVar17[10] = 0;
  puVar17[0xb] = 0;
  *(undefined8 *)((long)puVar17 + 0x34) = 0;
  *(ulong *)((long)puVar17 + 0x2c) = (ulong)local_a4;
  this_00 = puVar17 + 9;
  *this_00 = 0;
  *puVar17 = &PTR_traverse_00fed718;
  puVar17[1] = 0;
  puVar17[0xc] = uVar10;
  if (piVar9[2] != 0) {
    iVar23 = *piVar9;
    if (iVar23 == 0) {
      uVar16 = 1;
    }
    else if (iVar23 == 1) {
      uVar16 = piVar9[5];
    }
    else {
      if (iVar23 != 2) goto LAB_00c134b0;
      uVar16 = piVar9[5] * piVar9[4];
    }
    if (uVar16 != 0) {
                    /* try { // try from 00c134a8 to 00c134af has its CatchHandler @ 00c138a8 */
      std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
      __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)
               this_00,(ulong)uVar16);
    }
  }
LAB_00c134b0:
  puVar17[2] = uVar21;
  puVar17[1] = uVar20;
  if ((int)((ulong)(lVar2 - lVar1) >> 3) != 0) {
    lVar18 = 0;
    uVar19 = 0;
    do {
      if (6 < param_1 - 3) {
        GVar6 = 0x4fd209;
LAB_00c13854:
        GsTInfoSinkBase::message((TPrefixType)*(undefined8 *)(param_3 + 8),(char *)0x3,GVar6);
        puVar17 = (undefined8 *)0x0;
        break;
      }
      lVar13 = *(long *)(param_2 + 0x48);
      GVar12 = param_1;
      switch(param_1) {
      default:
        switch(*(undefined4 *)(lVar13 + lVar18)) {
        case 3:
        case 4:
          lVar11 = puVar17[9];
          uVar22 = *(undefined4 *)(lVar13 + lVar18 + 4);
          lVar13 = puVar17[10] - lVar11;
          break;
        case 5:
        case 7:
          lVar11 = puVar17[9];
          iVar23 = *(int *)(lVar13 + lVar18 + 4);
          uVar14 = puVar17[10] - lVar11 >> 3;
          if (uVar14 <= uVar19) {
            std::__ndk1::
            vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
                      ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this_00,(uVar19 - uVar14) + 1);
            lVar11 = *this_00;
          }
          fVar24 = (float)iVar23;
          goto LAB_00c13760;
        case 6:
        case 8:
          lVar11 = puVar17[9];
          uVar22 = *(undefined4 *)(lVar13 + lVar18 + 4);
          uVar14 = puVar17[10] - lVar11 >> 3;
          if (uVar14 <= uVar19) {
            std::__ndk1::
            vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
                      ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this_00,(uVar19 - uVar14) + 1);
            lVar11 = *this_00;
          }
          fVar24 = (float)NEON_ucvtf(uVar22);
LAB_00c13760:
          *(float *)(lVar11 + lVar18 + 4) = fVar24;
          goto LAB_00c134fc;
        case 9:
          lVar11 = puVar17[9];
          uVar22 = 0x3f800000;
          if (*(char *)(lVar13 + lVar18 + 4) == '\0') {
            uVar22 = 0;
          }
          lVar13 = puVar17[10] - lVar11;
          break;
        default:
          goto switchD_00c13674_caseD_7;
        }
        if ((ulong)(lVar13 >> 3) <= uVar19) {
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::__append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)this_00,(uVar19 - (lVar13 >> 3)) + 1);
          lVar11 = *this_00;
        }
        *(undefined4 *)(lVar11 + lVar18 + 4) = uVar22;
        break;
      case 5:
      case 7:
        switch(*(undefined4 *)(lVar13 + lVar18)) {
        case 3:
        case 4:
          lVar11 = puVar17[9];
          fVar24 = *(float *)(lVar13 + lVar18 + 4);
          uVar14 = puVar17[10] - lVar11 >> 3;
          if (uVar14 <= uVar19) {
            std::__ndk1::
            vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
                      ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this_00,(uVar19 - uVar14) + 1);
            lVar11 = *this_00;
          }
LAB_00c1371c:
          *(int *)(lVar11 + lVar18 + 4) = (int)fVar24;
          goto LAB_00c134fc;
        case 5:
        case 6:
        case 7:
        case 8:
switchD_00c135b8_caseD_5:
          lVar11 = puVar17[9];
          lVar15 = puVar17[10];
          uVar16 = *(uint *)(lVar13 + lVar18 + 4);
          break;
        case 9:
switchD_00c135b8_caseD_9:
          lVar11 = puVar17[9];
          lVar15 = puVar17[10];
          uVar16 = (uint)*(byte *)(lVar13 + lVar18 + 4);
          break;
        default:
          goto switchD_00c13674_caseD_7;
        }
        uVar14 = lVar15 - lVar11 >> 3;
        if (uVar14 <= uVar19) {
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::__append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)this_00,(uVar19 - uVar14) + 1);
          lVar11 = *this_00;
        }
        *(uint *)(lVar11 + lVar18 + 4) = uVar16;
        break;
      case 6:
      case 8:
        switch(*(undefined4 *)(lVar13 + lVar18)) {
        case 3:
        case 4:
          lVar11 = puVar17[9];
          fVar24 = *(float *)(lVar13 + lVar18 + 4);
          uVar14 = puVar17[10] - lVar11 >> 3;
          if (uVar14 <= uVar19) {
            std::__ndk1::
            vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
                      ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this_00,(uVar19 - uVar14) + 1);
            lVar11 = *this_00;
          }
          goto LAB_00c1371c;
        case 5:
        case 6:
        case 7:
        case 8:
          goto switchD_00c135b8_caseD_5;
        case 9:
          goto switchD_00c135b8_caseD_9;
        }
switchD_00c13674_caseD_7:
        GVar6 = 0x4d28b2;
        goto LAB_00c13854;
      case 9:
        switch(*(undefined4 *)(lVar13 + lVar18)) {
        case 3:
        case 4:
          lVar11 = puVar17[9];
          fVar24 = *(float *)(lVar13 + lVar18 + 4);
          uVar14 = puVar17[10] - lVar11 >> 3;
          if (uVar14 <= uVar19) {
            std::__ndk1::
            vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
                      ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this_00,(uVar19 - uVar14) + 1);
            lVar11 = *this_00;
          }
          bVar5 = fVar24 == 0.0;
          break;
        case 5:
        case 6:
        case 7:
        case 8:
          lVar11 = puVar17[9];
          iVar23 = *(int *)(lVar13 + lVar18 + 4);
          uVar14 = puVar17[10] - lVar11 >> 3;
          if (uVar14 <= uVar19) {
            std::__ndk1::
            vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
                      ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this_00,(uVar19 - uVar14) + 1);
            lVar11 = *this_00;
          }
          bVar5 = iVar23 == 0;
          break;
        case 9:
          lVar11 = puVar17[9];
          uVar3 = *(undefined *)(lVar13 + lVar18 + 4);
          uVar14 = puVar17[10] - lVar11 >> 3;
          if (uVar14 <= uVar19) {
            std::__ndk1::
            vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::__append
                      ((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this_00,(uVar19 - uVar14) + 1);
            lVar11 = *this_00;
          }
          *(undefined *)(lVar11 + lVar18 + 4) = uVar3;
          GVar12 = 9;
          goto LAB_00c134fc;
        default:
          goto switchD_00c13674_caseD_7;
        }
        *(bool *)(lVar11 + lVar18 + 4) = !bVar5;
        GVar12 = 9;
      }
LAB_00c134fc:
      *(GsTBasicType *)(lVar11 + lVar18) = GVar12;
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 8;
    } while (((ulong)(lVar2 - lVar1) >> 3 & 0xffffffff) * 8 - lVar18 != 0);
  }
LAB_00c13868:
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar17;
}


