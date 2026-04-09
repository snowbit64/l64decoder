// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: foldBinaryConstantExpression
// Entry Point: 00c11528
// Size: 4184 bytes
// Signature: undefined __cdecl foldBinaryConstantExpression(GsTOperator param_1, AST_ConstantNode * param_2, AST_ConstantNode * param_3, GISLParserContext * param_4)


/* GISLParserUtil::foldBinaryConstantExpression(GsTOperator, AST_ConstantNode*, AST_ConstantNode*,
   GISLParserContext&) */

undefined8 *
GISLParserUtil::foldBinaryConstantExpression
          (GsTOperator param_1,AST_ConstantNode *param_2,AST_ConstantNode *param_3,
          GISLParserContext *param_4)

{
  uint *puVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *this;
  uint uVar12;
  int **ppiVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (param_2 == (AST_ConstantNode *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_3 == (AST_ConstantNode *)0x0) {
    return (undefined8 *)0x0;
  }
  ppiVar13 = (int **)(param_2 + 0x20);
  piVar6 = *ppiVar13;
  if (piVar6 != *(int **)(param_3 + 0x20)) {
    return (undefined8 *)0x0;
  }
  if (2 < *piVar6) {
    return (undefined8 *)0x0;
  }
  if (5 < piVar6[2] - 3U) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x68);
  uVar7 = *(undefined8 *)(param_4 + 0x58);
  puVar4[2] = 0;
  puVar4[1] = 0;
  *puVar4 = &PTR___cxa_pure_virtual_00fed450;
  uVar19 = *(undefined8 *)(param_2 + 0x30);
  uVar18 = *(undefined8 *)(param_2 + 0x28);
  uVar17 = *(undefined8 *)(param_2 + 0x38);
  piVar6 = *ppiVar13;
  uVar20 = *(undefined8 *)(param_2 + 0x18);
  puVar4[8] = *(undefined8 *)(param_2 + 0x40);
  puVar4[7] = uVar17;
  this = puVar4 + 9;
  *this = 0;
  puVar4[6] = uVar19;
  puVar4[5] = uVar18;
  puVar4[4] = piVar6;
  puVar4[3] = uVar20;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  piVar6 = *ppiVar13;
  puVar4[0xc] = uVar7;
  iVar5 = piVar6[2];
  *puVar4 = &PTR_traverse_00fed718;
  if (iVar5 != 0) {
    iVar5 = *piVar6;
    if (iVar5 == 0) {
      iVar5 = 1;
      iVar9 = 1;
    }
    else if (iVar5 == 1) {
      iVar5 = piVar6[5];
      iVar9 = 1;
    }
    else if (iVar5 == 2) {
      iVar5 = piVar6[4];
      iVar9 = piVar6[5];
    }
    else {
      iVar5 = 0;
      iVar9 = 0;
    }
    if (iVar9 * iVar5 != 0) {
                    /* try { // try from 00c11654 to 00c1165b has its CatchHandler @ 00c12580 */
      std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
      __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>> *)this
               ,(ulong)(uint)(iVar9 * iVar5));
    }
  }
  switch(param_1) {
  case 0x39:
    piVar6 = *ppiVar13;
    if (*piVar6 < 3) {
      uVar12 = piVar6[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15);
            iVar9 = *(int *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            *piVar6 = iVar9 + iVar5;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
        goto LAB_00c12570;
      }
      if ((uVar12 == 8) || (uVar12 == 6)) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15);
            iVar9 = *(int *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            *piVar6 = iVar9 + iVar5;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
        goto LAB_00c12570;
      }
    }
    lVar8 = puVar4[9];
    lVar11 = puVar4[10];
    if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
      uVar14 = 1;
      lVar15 = 4;
      while( true ) {
        uVar10 = lVar11 - lVar8 >> 3;
        fVar21 = *(float *)(*(long *)(param_2 + 0x48) + lVar15);
        fVar23 = *(float *)(*(long *)(param_3 + 0x48) + lVar15);
        fVar22 = (float)piVar6[2];
        if (uVar10 <= uVar14 - 1) {
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::__append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)this,uVar14 - uVar10);
          lVar8 = *this;
        }
        ((float *)(lVar8 + lVar15))[-1] = fVar22;
        *(float *)(lVar8 + lVar15) = fVar21 + fVar23;
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
        piVar6 = *ppiVar13;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 8;
      }
    }
LAB_00c12570:
    uVar7 = *(undefined8 *)(param_2 + 8);
    puVar4[2] = *(undefined8 *)(param_2 + 0x10);
    puVar4[1] = uVar7;
    return puVar4;
  case 0x3a:
    piVar6 = *ppiVar13;
    if (*piVar6 < 3) {
      uVar12 = piVar6[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15);
            iVar9 = *(int *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            *piVar6 = iVar5 - iVar9;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
        goto LAB_00c12570;
      }
      if ((uVar12 == 8) || (uVar12 == 6)) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15);
            iVar9 = *(int *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            *piVar6 = iVar5 - iVar9;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
        goto LAB_00c12570;
      }
    }
    lVar8 = puVar4[9];
    lVar11 = puVar4[10];
    if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
      uVar14 = 1;
      lVar15 = 4;
      while( true ) {
        uVar10 = lVar11 - lVar8 >> 3;
        fVar21 = *(float *)(*(long *)(param_2 + 0x48) + lVar15);
        fVar23 = *(float *)(*(long *)(param_3 + 0x48) + lVar15);
        fVar22 = (float)piVar6[2];
        if (uVar10 <= uVar14 - 1) {
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::__append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)this,uVar14 - uVar10);
          lVar8 = *this;
        }
        ((float *)(lVar8 + lVar15))[-1] = fVar22;
        *(float *)(lVar8 + lVar15) = fVar21 - fVar23;
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
        piVar6 = *ppiVar13;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 8;
      }
    }
    goto LAB_00c12570;
  case 0x3b:
    piVar6 = *ppiVar13;
    if (*piVar6 < 3) {
      uVar12 = piVar6[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15);
            iVar9 = *(int *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            ((int *)(lVar8 + lVar15))[-1] = uVar12;
            *(int *)(lVar8 + lVar15) = iVar9 * iVar5;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
        goto LAB_00c12570;
      }
      if ((uVar12 == 8) || (uVar12 == 6)) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15);
            iVar9 = *(int *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            ((int *)(lVar8 + lVar15))[-1] = uVar12;
            *(int *)(lVar8 + lVar15) = iVar9 * iVar5;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
        goto LAB_00c12570;
      }
    }
    lVar8 = puVar4[9];
    lVar11 = puVar4[10];
    if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
      uVar14 = 1;
      lVar15 = 4;
      while( true ) {
        uVar10 = lVar11 - lVar8 >> 3;
        fVar21 = *(float *)(*(long *)(param_2 + 0x48) + lVar15);
        fVar23 = *(float *)(*(long *)(param_3 + 0x48) + lVar15);
        fVar22 = (float)piVar6[2];
        if (uVar10 <= uVar14 - 1) {
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::__append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)this,uVar14 - uVar10);
          lVar8 = *this;
        }
        ((float *)(lVar8 + lVar15))[-1] = fVar22;
        *(float *)(lVar8 + lVar15) = fVar21 * fVar23;
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
        piVar6 = *ppiVar13;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 8;
      }
    }
    goto LAB_00c12570;
  case 0x3c:
    if (**ppiVar13 < 3) {
      uVar12 = (*ppiVar13)[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 0;
          lVar15 = 4;
          do {
            iVar5 = *(int *)(*(long *)(param_3 + 0x48) + lVar15);
            if (iVar5 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = 0;
              if (iVar5 != 0) {
                iVar9 = *(int *)(*(long *)(param_2 + 0x48) + lVar15) / iVar5;
              }
            }
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = (*ppiVar13)[2];
            if (uVar10 <= uVar14) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,(uVar14 - uVar10) + 1);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            *piVar6 = iVar9;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = iVar5;
          } while (uVar14 < ((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff));
        }
        goto LAB_00c12570;
      }
      if ((uVar12 == 8) || (uVar12 == 6)) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 0;
          lVar15 = 4;
          do {
            uVar12 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar12 == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              if (uVar12 != 0) {
                uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15) / uVar12;
              }
            }
            uVar10 = lVar11 - lVar8 >> 3;
            uVar12 = (*ppiVar13)[2];
            if (uVar10 <= uVar14) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,(uVar14 - uVar10) + 1);
              lVar8 = *this;
            }
            puVar1 = (uint *)(lVar8 + lVar15);
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            *puVar1 = uVar16;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            puVar1[-1] = uVar12;
          } while (uVar14 < ((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff));
        }
        goto LAB_00c12570;
      }
    }
    lVar8 = puVar4[9];
    lVar11 = puVar4[10];
    if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
      uVar14 = 0;
      lVar15 = 4;
      do {
        if (*(float *)(*(long *)(param_3 + 0x48) + lVar15) == 0.0) {
          fVar22 = 0.0;
        }
        else {
          fVar22 = *(float *)(*(long *)(param_2 + 0x48) + lVar15) /
                   *(float *)(*(long *)(param_3 + 0x48) + lVar15);
        }
        uVar10 = lVar11 - lVar8 >> 3;
        fVar21 = (float)(*ppiVar13)[2];
        if (uVar10 <= uVar14) {
          std::__ndk1::vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
          ::__append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                      *)this,(uVar14 - uVar10) + 1);
          lVar8 = *this;
        }
        pfVar2 = (float *)(lVar8 + lVar15);
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 8;
        *pfVar2 = fVar22;
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        pfVar2[-1] = fVar21;
      } while (uVar14 < ((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff));
    }
    goto LAB_00c12570;
  case 0x3d:
    if (**ppiVar13 < 3) {
      uVar12 = (*ppiVar13)[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 0;
          lVar15 = 4;
          do {
            iVar5 = *(int *)(*(long *)(param_3 + 0x48) + lVar15);
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar9 = 0;
              if (iVar5 != 0) {
                iVar9 = *(int *)(*(long *)(param_2 + 0x48) + lVar15) / iVar5;
              }
              iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15) - iVar9 * iVar5;
            }
            uVar10 = lVar11 - lVar8 >> 3;
            iVar9 = (*ppiVar13)[2];
            if (uVar10 <= uVar14) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,(uVar14 - uVar10) + 1);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            *piVar6 = iVar5;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = iVar9;
          } while (uVar14 < ((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff));
        }
      }
      else {
        if ((uVar12 != 8) && (uVar12 != 6)) {
          return (undefined8 *)0x0;
        }
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 0;
          lVar15 = 4;
          do {
            uVar12 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar12 == 0) {
              iVar5 = 0;
            }
            else {
              uVar16 = 0;
              if (uVar12 != 0) {
                uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15) / uVar12;
              }
              iVar5 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15) - uVar16 * uVar12;
            }
            uVar10 = lVar11 - lVar8 >> 3;
            iVar9 = (*ppiVar13)[2];
            if (uVar10 <= uVar14) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,(uVar14 - uVar10) + 1);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            *piVar6 = iVar5;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = iVar9;
          } while (uVar14 < ((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff));
        }
      }
      goto LAB_00c12570;
    }
    break;
  case 0x3e:
    if (**ppiVar13 < 3) {
      uVar12 = (*ppiVar13)[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar16 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            *piVar6 = iVar5 >> (uVar16 & 0x1f);
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      else {
        if ((uVar12 != 8) && (uVar12 != 6)) {
          return (undefined8 *)0x0;
        }
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar3 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            puVar1 = (uint *)(lVar8 + lVar15);
            *puVar1 = uVar16 >> (ulong)(uVar3 & 0x1f);
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            puVar1[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      goto LAB_00c12570;
    }
    break;
  case 0x3f:
    if (**ppiVar13 < 3) {
      uVar12 = (*ppiVar13)[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar16 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            *piVar6 = iVar5 << (ulong)(uVar16 & 0x1f);
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      else {
        if ((uVar12 != 8) && (uVar12 != 6)) {
          return (undefined8 *)0x0;
        }
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            iVar5 = *(int *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar16 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            piVar6 = (int *)(lVar8 + lVar15);
            *piVar6 = iVar5 << (ulong)(uVar16 & 0x1f);
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            piVar6[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      goto LAB_00c12570;
    }
    break;
  case 0x40:
    if (**ppiVar13 < 3) {
      uVar12 = (*ppiVar13)[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar3 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            puVar1 = (uint *)(lVar8 + lVar15);
            *puVar1 = uVar3 & uVar16;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            puVar1[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      else {
        if ((uVar12 != 8) && (uVar12 != 6)) {
          return (undefined8 *)0x0;
        }
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar3 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            puVar1 = (uint *)(lVar8 + lVar15);
            *puVar1 = uVar3 & uVar16;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            puVar1[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      goto LAB_00c12570;
    }
    break;
  case 0x41:
    if (**ppiVar13 < 3) {
      uVar12 = (*ppiVar13)[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar3 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            puVar1 = (uint *)(lVar8 + lVar15);
            *puVar1 = uVar3 | uVar16;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            puVar1[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      else {
        if ((uVar12 != 8) && (uVar12 != 6)) {
          return (undefined8 *)0x0;
        }
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar3 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            puVar1 = (uint *)(lVar8 + lVar15);
            *puVar1 = uVar3 | uVar16;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            puVar1[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      goto LAB_00c12570;
    }
    break;
  case 0x42:
    if (**ppiVar13 < 3) {
      uVar12 = (*ppiVar13)[2];
      if ((uVar12 & 0xfffffffd) == 5) {
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar3 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            puVar1 = (uint *)(lVar8 + lVar15);
            *puVar1 = uVar3 ^ uVar16;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            puVar1[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      else {
        if ((uVar12 != 8) && (uVar12 != 6)) {
          return (undefined8 *)0x0;
        }
        lVar8 = puVar4[9];
        lVar11 = puVar4[10];
        if ((int)((ulong)(lVar11 - lVar8) >> 3) != 0) {
          uVar14 = 1;
          lVar15 = 4;
          while( true ) {
            uVar10 = lVar11 - lVar8 >> 3;
            uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + lVar15);
            uVar3 = *(uint *)(*(long *)(param_3 + 0x48) + lVar15);
            if (uVar10 <= uVar14 - 1) {
              std::__ndk1::
              vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>::
              __append((vector<AST_ConstantNode::Value,SHC_STLPoolAllocator<AST_ConstantNode::Value>>
                        *)this,uVar14 - uVar10);
              lVar8 = *this;
            }
            puVar1 = (uint *)(lVar8 + lVar15);
            *puVar1 = uVar3 ^ uVar16;
            lVar8 = puVar4[9];
            lVar11 = puVar4[10];
            puVar1[-1] = uVar12;
            if (((ulong)(lVar11 - lVar8) >> 3 & 0xffffffff) <= uVar14) break;
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 8;
            uVar12 = (*ppiVar13)[2];
          }
        }
      }
      goto LAB_00c12570;
    }
  }
  return (undefined8 *)0x0;
}


