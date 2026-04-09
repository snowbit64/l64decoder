// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks2<ProceduralDensityPixelSource_const,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 00841474
// Size: 1292 bytes
// Signature: bool __cdecl checkTypedModuleMasks2<ProceduralDensityPixelSource_const,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11, HelperSource * param_12, IDensityPixelSource * param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18)


/* bool DensityMapModifier::checkTypedModuleMasks2<ProceduralDensityPixelSource const,
   ChunkedBitSquare, DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ProceduralDensityPixelSource const>&, IDensityPixelSource
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ChunkedBitSquare>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks2<ProceduralDensityPixelSource_const,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (TypedModuleWithMasks *param_1,IDensityPixelSource *param_2,uint param_3,uint param_4
               ,HelperSource *param_5,IDensityPixelSource *param_6,uint param_7,uint param_8,
               uint param_9,uint param_10,uint param_11,HelperSource *param_12,
               IDensityPixelSource *param_13,uint param_14,uint param_15,uint param_16,uint param_17
               ,uint param_18)

{
  uint *puVar1;
  uint uVar2;
  TypedModuleWithMasks TVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  code **ppcVar10;
  IDensityPixelSource *pIVar11;
  code *pcVar12;
  IDensityPixelSource *pIVar13;
  long lVar14;
  bool bVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint local_8c;
  
  pIVar11 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar11 == (IDensityPixelSource *)0x0) {
    return true;
  }
  bVar5 = pIVar11 == param_2;
  if (bVar5) {
    if ((*(int *)(param_1 + 0x80) != 2) &&
       ((*(int *)(param_1 + 0x80) == 0) == (*(uint *)(param_1 + 0x84) != param_3))) {
      return false;
    }
    uVar18 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
             (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar18 < *(int *)(param_1 + 0x90)) {
      TVar3 = param_1[0x98];
joined_r0x00841598:
      if (TVar3 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar3 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar18) goto joined_r0x00841598;
      if (TVar3 != (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    if ((*(uint *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x9c) & uVar18) == 0)) {
      return false;
    }
    pIVar13 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar13 == param_2) {
      if (pIVar11 == param_2) {
        return true;
      }
      goto LAB_008415cc;
    }
  }
  else {
    pIVar13 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar13 == param_2) goto LAB_008415cc;
  }
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar18 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
           (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar18 < *(int *)(param_1 + 0xc0)) {
    TVar3 = param_1[200];
joined_r0x00841580:
    if (TVar3 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar3 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar18) goto joined_r0x00841580;
    if (TVar3 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar19 = *(uint *)(param_1 + 0xcc);
  bVar6 = (uVar19 & uVar18) == 0;
  bVar15 = uVar19 == 0 || !bVar6;
  if (uVar19 != 0 && bVar6) {
    return bVar15;
  }
  if (pIVar11 == param_2) {
    return bVar15;
  }
LAB_008415cc:
  if ((pIVar11 == param_6) || (pIVar13 == param_6)) {
    if (param_11 == 0) {
      return false;
    }
    uVar18 = 0;
    do {
      if (param_10 != 0) {
        uVar20 = param_10;
        uVar19 = param_8;
        bVar15 = bVar5;
        do {
          *(uint *)(param_5 + 0x18) = uVar19;
          *(uint *)(param_5 + 0x1c) = uVar18 + param_9;
          uVar9 = (**(code **)(**(long **)(param_5 + 0x10) + 0x58))
                            (*(long **)(param_5 + 0x10),uVar19,uVar18 + param_9);
          *(uint *)(param_5 + 0x20) = uVar9;
          if (bVar15) {
            return true;
          }
          if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_6) &&
             ((*(int *)(param_1 + 0x80) == 2 ||
              ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar9 & param_7))))
             )) {
            uVar9 = uVar9 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                    (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
            if ((int)uVar9 < *(int *)(param_1 + 0x90)) {
              TVar3 = param_1[0x98];
joined_r0x00841904:
              if (TVar3 == (TypedModuleWithMasks)0x0) goto LAB_0084185c;
            }
            else {
              TVar3 = param_1[0x98];
              if (*(int *)(param_1 + 0x94) < (int)uVar9) goto joined_r0x00841904;
              if (TVar3 != (TypedModuleWithMasks)0x0) goto LAB_0084185c;
            }
            if (*(uint *)(param_1 + 0x9c) == 0) {
              return true;
            }
            if ((*(uint *)(param_1 + 0x9c) & uVar9) != 0) {
              return true;
            }
          }
LAB_0084185c:
          bVar15 = false;
          bVar5 = false;
          uVar20 = uVar20 - 1;
          uVar19 = uVar19 + 1;
        } while (uVar20 != 0);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != param_11);
    pIVar11 = *(IDensityPixelSource **)(param_1 + 0x78);
    pIVar13 = *(IDensityPixelSource **)(param_1 + 0xa8);
  }
  if (((pIVar11 != param_13) && (pIVar13 != param_13)) || (param_11 == 0)) {
    return false;
  }
  local_8c = 0;
  do {
    if (param_10 != 0) {
      uVar18 = 0;
      bVar6 = true;
      uVar20 = local_8c + param_9;
      uVar19 = param_8;
      bVar15 = bVar5;
      do {
        puVar17 = *(uint **)(param_12 + 0x10);
        uVar9 = uVar18 + param_8;
        uVar2 = puVar17[0xd];
        uVar7 = puVar17[0xf];
        iVar4 = (uVar20 >> 5) << (ulong)(*puVar17 & 0x1f);
        lVar14 = *(long *)(puVar17 + 10);
        *(uint *)(param_12 + 0x18) = uVar9;
        ppcVar10 = *(code ***)(lVar14 + (ulong)((iVar4 + (uVar9 >> 5)) * uVar2) * 8);
        uVar9 = uVar9 & 0x1f | (uVar20 & 0x1f) << 5;
        pcVar12 = *ppcVar10;
        *(uint *)(param_12 + 0x1c) = uVar20;
        uVar7 = (*pcVar12)(ppcVar10,uVar9,0,uVar7);
        if (1 < puVar17[0xd]) {
          uVar21 = 1;
          puVar16 = puVar17 + 0x11;
          do {
            ppcVar10 = *(code ***)
                        (*(long *)(puVar17 + 10) +
                        (ulong)(uVar2 * (iVar4 + (uVar19 >> 5)) + (int)uVar21) * 8);
            iVar8 = (**ppcVar10)(ppcVar10,uVar9,0,*puVar16);
            puVar1 = puVar16 + -1;
            uVar21 = uVar21 + 1;
            puVar16 = puVar16 + 2;
            uVar7 = iVar8 << (ulong)(*puVar1 & 0x1f) | uVar7;
          } while (uVar21 < puVar17[0xd]);
        }
        *(uint *)(param_12 + 0x20) = uVar7;
        if (bVar15) {
LAB_00841808:
          bVar5 = true;
          if (bVar6) {
            return true;
          }
          break;
        }
        if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_13) &&
           ((*(int *)(param_1 + 0x80) == 2 ||
            ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar7 & param_14)))))
           ) {
          uVar9 = uVar7 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                  (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
          if ((int)uVar9 < *(int *)(param_1 + 0x90)) {
            TVar3 = param_1[0x98];
joined_r0x008417f4:
            if (TVar3 == (TypedModuleWithMasks)0x0) goto LAB_00841688;
          }
          else {
            TVar3 = param_1[0x98];
            if (*(int *)(param_1 + 0x94) < (int)uVar9) goto joined_r0x008417f4;
            if (TVar3 != (TypedModuleWithMasks)0x0) goto LAB_00841688;
          }
          if ((*(uint *)(param_1 + 0x9c) == 0) || ((*(uint *)(param_1 + 0x9c) & uVar9) != 0))
          goto LAB_00841808;
        }
LAB_00841688:
        uVar18 = uVar18 + 1;
        bVar15 = false;
        bVar5 = false;
        uVar19 = uVar19 + 1;
        bVar6 = uVar18 < param_10;
      } while (uVar18 != param_10);
    }
    local_8c = local_8c + 1;
    if (local_8c == param_11) {
      return false;
    }
  } while( true );
}


