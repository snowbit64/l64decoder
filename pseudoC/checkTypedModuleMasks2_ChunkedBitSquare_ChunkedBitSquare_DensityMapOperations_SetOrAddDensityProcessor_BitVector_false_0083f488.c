// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks2<ChunkedBitSquare,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083f488
// Size: 1508 bytes
// Signature: bool __cdecl checkTypedModuleMasks2<ChunkedBitSquare,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11, HelperSource * param_12, IDensityPixelSource * param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18)


/* bool DensityMapModifier::checkTypedModuleMasks2<ChunkedBitSquare, ChunkedBitSquare,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ChunkedBitSquare>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ChunkedBitSquare>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks2<ChunkedBitSquare,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (TypedModuleWithMasks *param_1,IDensityPixelSource *param_2,uint param_3,uint param_4
               ,HelperSource *param_5,IDensityPixelSource *param_6,uint param_7,uint param_8,
               uint param_9,uint param_10,uint param_11,HelperSource *param_12,
               IDensityPixelSource *param_13,uint param_14,uint param_15,uint param_16,uint param_17
               ,uint param_18)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TypedModuleWithMasks TVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  code **ppcVar11;
  IDensityPixelSource *pIVar12;
  code *pcVar13;
  uint uVar14;
  IDensityPixelSource *pIVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  bool bVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  
  pIVar12 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar12 == (IDensityPixelSource *)0x0) {
    return true;
  }
  bVar7 = pIVar12 == param_2;
  if (bVar7) {
    if ((*(int *)(param_1 + 0x80) != 2) &&
       ((*(int *)(param_1 + 0x80) == 0) == (*(uint *)(param_1 + 0x84) != param_3))) {
      return false;
    }
    uVar14 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
             (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar14 < *(int *)(param_1 + 0x90)) {
      TVar5 = param_1[0x98];
joined_r0x0083f5a4:
      if (TVar5 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar5 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar14) goto joined_r0x0083f5a4;
      if (TVar5 != (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    if ((*(uint *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x9c) & uVar14) == 0)) {
      return false;
    }
    pIVar15 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar15 == param_2) {
      if (pIVar12 == param_2) {
        return true;
      }
      goto LAB_0083f5d8;
    }
  }
  else {
    pIVar15 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar15 == param_2) goto LAB_0083f5d8;
  }
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar14 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
           (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar14 < *(int *)(param_1 + 0xc0)) {
    TVar5 = param_1[200];
joined_r0x0083f58c:
    if (TVar5 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar5 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar14) goto joined_r0x0083f58c;
    if (TVar5 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar21 = *(uint *)(param_1 + 0xcc);
  bVar8 = (uVar21 & uVar14) == 0;
  bVar19 = uVar21 == 0 || !bVar8;
  if (uVar21 != 0 && bVar8) {
    return bVar19;
  }
  if (pIVar12 == param_2) {
    return bVar19;
  }
LAB_0083f5d8:
  if ((pIVar12 == param_6) || (pIVar15 == param_6)) {
    if (param_11 == 0) {
      return false;
    }
    uVar14 = 0;
    do {
      if (param_10 != 0) {
        uVar21 = 0;
        bVar8 = true;
        uVar2 = uVar14 + param_9;
        uVar22 = param_8;
        bVar19 = bVar7;
        do {
          puVar17 = *(uint **)(param_5 + 0x10);
          uVar3 = uVar21 + param_8;
          uVar4 = puVar17[0xd];
          uVar9 = puVar17[0xf];
          iVar6 = (uVar2 >> 5) << (ulong)(*puVar17 & 0x1f);
          lVar16 = *(long *)(puVar17 + 10);
          *(uint *)(param_5 + 0x18) = uVar3;
          ppcVar11 = *(code ***)(lVar16 + (ulong)((iVar6 + (uVar3 >> 5)) * uVar4) * 8);
          uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
          pcVar13 = *ppcVar11;
          *(uint *)(param_5 + 0x1c) = uVar2;
          uVar9 = (*pcVar13)(ppcVar11,uVar3,0,uVar9);
          if (1 < puVar17[0xd]) {
            uVar20 = 1;
            puVar18 = puVar17 + 0x11;
            do {
              ppcVar11 = *(code ***)
                          (*(long *)(puVar17 + 10) +
                          (ulong)(uVar4 * (iVar6 + (uVar22 >> 5)) + (int)uVar20) * 8);
              iVar10 = (**ppcVar11)(ppcVar11,uVar3,0,*puVar18);
              puVar1 = puVar18 + -1;
              uVar20 = uVar20 + 1;
              puVar18 = puVar18 + 2;
              uVar9 = iVar10 << (ulong)(*puVar1 & 0x1f) | uVar9;
            } while (uVar20 < puVar17[0xd]);
          }
          *(uint *)(param_5 + 0x20) = uVar9;
          if (bVar19) {
LAB_0083f624:
            bVar7 = true;
            if (bVar8) {
              return true;
            }
            break;
          }
          if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_6) &&
             ((*(int *)(param_1 + 0x80) == 2 ||
              ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar9 & param_7))))
             )) {
            uVar3 = uVar9 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                    (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
            if ((int)uVar3 < *(int *)(param_1 + 0x90)) {
              TVar5 = param_1[0x98];
joined_r0x0083f7e0:
              if (TVar5 == (TypedModuleWithMasks)0x0) goto LAB_0083f678;
            }
            else {
              TVar5 = param_1[0x98];
              if (*(int *)(param_1 + 0x94) < (int)uVar3) goto joined_r0x0083f7e0;
              if (TVar5 != (TypedModuleWithMasks)0x0) goto LAB_0083f678;
            }
            if ((*(uint *)(param_1 + 0x9c) == 0) || ((*(uint *)(param_1 + 0x9c) & uVar3) != 0))
            goto LAB_0083f624;
          }
LAB_0083f678:
          uVar21 = uVar21 + 1;
          bVar19 = false;
          bVar7 = false;
          uVar22 = uVar22 + 1;
          bVar8 = uVar21 < param_10;
        } while (uVar21 != param_10);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_11);
    pIVar12 = *(IDensityPixelSource **)(param_1 + 0x78);
    pIVar15 = *(IDensityPixelSource **)(param_1 + 0xa8);
  }
  if (((pIVar12 == param_13) || (pIVar15 == param_13)) && (param_11 != 0)) {
    uVar14 = 0;
    do {
      bVar19 = bVar7;
      if (param_10 != 0) {
        uVar21 = 0;
        uVar2 = uVar14 + param_9;
        bVar8 = true;
        uVar22 = param_8;
        do {
          puVar17 = *(uint **)(param_12 + 0x10);
          uVar3 = uVar21 + param_8;
          uVar4 = puVar17[0xd];
          uVar9 = puVar17[0xf];
          iVar6 = (uVar2 >> 5) << (ulong)(*puVar17 & 0x1f);
          lVar16 = *(long *)(puVar17 + 10);
          *(uint *)(param_12 + 0x18) = uVar3;
          ppcVar11 = *(code ***)(lVar16 + (ulong)((iVar6 + (uVar3 >> 5)) * uVar4) * 8);
          uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
          pcVar13 = *ppcVar11;
          *(uint *)(param_12 + 0x1c) = uVar2;
          uVar9 = (*pcVar13)(ppcVar11,uVar3,0,uVar9);
          if (1 < puVar17[0xd]) {
            puVar18 = puVar17 + 0x11;
            uVar20 = 1;
            do {
              ppcVar11 = *(code ***)
                          (*(long *)(puVar17 + 10) +
                          (ulong)(uVar4 * (iVar6 + (uVar22 >> 5)) + (int)uVar20) * 8);
              iVar10 = (**ppcVar11)(ppcVar11,uVar3,0,*puVar18);
              puVar1 = puVar18 + -1;
              uVar20 = uVar20 + 1;
              puVar18 = puVar18 + 2;
              uVar9 = iVar10 << (ulong)(*puVar1 & 0x1f) | uVar9;
            } while (uVar20 < puVar17[0xd]);
          }
          *(uint *)(param_12 + 0x20) = uVar9;
          if (bVar7) {
LAB_0083fa08:
            bVar19 = true;
            if (bVar8) {
              return true;
            }
            break;
          }
          if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_13) &&
             ((*(int *)(param_1 + 0x80) == 2 ||
              ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar9 & param_14)))
              ))) {
            uVar3 = uVar9 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                    (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
            if ((int)uVar3 < *(int *)(param_1 + 0x90)) {
              TVar5 = param_1[0x98];
joined_r0x0083f9f4:
              if (TVar5 == (TypedModuleWithMasks)0x0) goto LAB_0083f88c;
            }
            else {
              TVar5 = param_1[0x98];
              if (*(int *)(param_1 + 0x94) < (int)uVar3) goto joined_r0x0083f9f4;
              if (TVar5 != (TypedModuleWithMasks)0x0) goto LAB_0083f88c;
            }
            if ((*(uint *)(param_1 + 0x9c) == 0) || ((*(uint *)(param_1 + 0x9c) & uVar3) != 0))
            goto LAB_0083fa08;
          }
LAB_0083f88c:
          uVar21 = uVar21 + 1;
          bVar7 = false;
          uVar22 = uVar22 + 1;
          bVar8 = uVar21 < param_10;
          bVar19 = false;
        } while (uVar21 != param_10);
      }
      bVar7 = bVar19;
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_11);
  }
  return false;
}


