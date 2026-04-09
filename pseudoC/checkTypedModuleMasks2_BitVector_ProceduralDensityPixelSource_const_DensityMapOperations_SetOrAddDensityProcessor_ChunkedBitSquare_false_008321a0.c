// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks2<BitVector,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 008321a0
// Size: 1184 bytes
// Signature: bool __cdecl checkTypedModuleMasks2<BitVector,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11, HelperSource * param_12, IDensityPixelSource * param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18)


/* bool DensityMapModifier::checkTypedModuleMasks2<BitVector, ProceduralDensityPixelSource const,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<BitVector>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ProceduralDensityPixelSource const>&, IDensityPixelSource
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks2<BitVector,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (TypedModuleWithMasks *param_1,IDensityPixelSource *param_2,uint param_3,uint param_4
               ,HelperSource *param_5,IDensityPixelSource *param_6,uint param_7,uint param_8,
               uint param_9,uint param_10,uint param_11,HelperSource *param_12,
               IDensityPixelSource *param_13,uint param_14,uint param_15,uint param_16,uint param_17
               ,uint param_18)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  TypedModuleWithMasks TVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  IDensityPixelSource *pIVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  IDensityPixelSource *local_70;
  
  pIVar18 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar18 == (IDensityPixelSource *)0x0) {
    return true;
  }
  bVar13 = pIVar18 == param_2;
  if (bVar13) {
    if ((*(int *)(param_1 + 0x80) != 2) &&
       ((*(int *)(param_1 + 0x80) == 0) == (*(uint *)(param_1 + 0x84) != param_3))) {
      return false;
    }
    uVar23 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
             (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar23 < *(int *)(param_1 + 0x90)) {
      TVar10 = param_1[0x98];
joined_r0x008322bc:
      if (TVar10 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar10 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar23) goto joined_r0x008322bc;
      if (TVar10 != (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    if ((*(uint *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x9c) & uVar23) == 0)) {
      return false;
    }
    local_70 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (local_70 == param_2) {
      if (pIVar18 == param_2) {
        return true;
      }
      goto LAB_008322f0;
    }
  }
  else {
    local_70 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (local_70 == param_2) goto LAB_008322f0;
  }
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar23 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
           (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar23 < *(int *)(param_1 + 0xc0)) {
    TVar10 = param_1[200];
joined_r0x008322a4:
    if (TVar10 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar10 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar23) goto joined_r0x008322a4;
    if (TVar10 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar21 = *(uint *)(param_1 + 0xcc);
  bVar14 = (uVar21 & uVar23) == 0;
  bVar12 = uVar21 == 0 || !bVar14;
  if (uVar21 != 0 && bVar14) {
    return bVar12;
  }
  if (pIVar18 == param_2) {
    return bVar12;
  }
LAB_008322f0:
  if ((pIVar18 == param_6) || (local_70 == param_6)) {
    if (param_11 == 0) {
      return false;
    }
    uVar23 = 0;
    uVar20 = *(uint *)(param_5 + 8);
    uVar21 = uVar20 * (param_8 + *(int *)param_5 * param_9);
    do {
      if (param_10 != 0) {
        uVar3 = *(uint *)(param_1 + 0x88);
        uVar6 = *(uint *)(param_1 + 0x8c);
        iVar4 = *(int *)(param_1 + 0x80);
        uVar7 = *(uint *)(param_1 + 0x84);
        TVar10 = param_1[0x98];
        iVar5 = *(int *)(param_1 + 0x90);
        iVar8 = *(int *)(param_1 + 0x94);
        uVar9 = *(uint *)(param_1 + 0x9c);
        lVar19 = **(long **)(param_5 + 0x10);
        uVar15 = param_8;
        uVar2 = uVar21;
        uVar11 = param_10;
        bVar12 = bVar13;
        do {
          uVar22 = (ulong)(uVar2 >> 3) & 0xffff;
          *(uint *)(param_5 + 0x18) = uVar15;
          *(uint *)(param_5 + 0x1c) = uVar23 + param_9;
          lVar17 = *(long *)(lVar19 + (ulong)(uVar2 >> 0x13) * 8);
          if ((uint)uVar22 < 0xfffd) {
            uVar16 = *(uint *)(lVar17 + uVar22);
          }
          else {
            uVar16 = (uVar2 >> 3) + 1;
            uVar1 = (uVar2 >> 3) + 2;
            uVar16 = (uint)CONCAT12(*(undefined *)
                                     (*(long *)(lVar19 + (ulong)(uVar1 >> 0x10) * 8) +
                                     ((ulong)uVar1 & 0xffff)),
                                    CONCAT11(*(undefined *)
                                              (*(long *)(lVar19 + (ulong)(uVar16 >> 0x10) * 8) +
                                              ((ulong)uVar16 & 0xffff)),
                                             *(undefined *)(lVar17 + uVar22)));
          }
          uVar16 = uVar16 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar20 & 0x1f)) & 0xffffU;
          *(uint *)(param_5 + 0x20) = uVar16;
          if ((bool)(bVar12 | pIVar18 != param_6)) {
            if (bVar12) {
              return true;
            }
          }
          else if ((iVar4 == 2) || ((iVar4 == 0) != (uVar7 != (uVar16 & param_7)))) {
            uVar16 = uVar16 >> (ulong)(uVar3 & 0x1f) & ~(-1 << (ulong)(uVar6 & 0x1f));
            if (((int)uVar16 < iVar5) || (iVar8 < (int)uVar16)) {
              if (TVar10 != (TypedModuleWithMasks)0x0) goto LAB_008325c8;
            }
            else if (TVar10 == (TypedModuleWithMasks)0x0) {
LAB_008325c8:
              if (uVar9 == 0) {
                return true;
              }
              if ((uVar9 & uVar16) != 0) {
                return true;
              }
            }
          }
          bVar12 = false;
          bVar13 = false;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 + uVar20;
          uVar15 = uVar15 + 1;
        } while (uVar11 != 0);
      }
      uVar23 = uVar23 + 1;
      uVar21 = uVar21 + *(int *)param_5 * uVar20;
    } while (uVar23 != param_11);
  }
  if (((pIVar18 != param_13) && (local_70 != param_13)) || (param_11 == 0)) {
    return false;
  }
  uVar23 = 0;
  do {
    bVar12 = bVar13;
    if (param_10 != 0) {
      uVar20 = param_10;
      uVar21 = param_8;
      do {
        *(uint *)(param_12 + 0x18) = uVar21;
        *(uint *)(param_12 + 0x1c) = uVar23 + param_9;
        uVar15 = (**(code **)(**(long **)(param_12 + 0x10) + 0x58))
                           (*(long **)(param_12 + 0x10),uVar21,uVar23 + param_9);
        *(uint *)(param_12 + 0x20) = uVar15;
        if (bVar13) {
          return true;
        }
        if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_13) &&
           ((*(int *)(param_1 + 0x80) == 2 ||
            ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar15 & param_14))))
           )) {
          uVar15 = uVar15 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                   (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
          if ((int)uVar15 < *(int *)(param_1 + 0x90)) {
            TVar10 = param_1[0x98];
joined_r0x00832408:
            if (TVar10 == (TypedModuleWithMasks)0x0) goto LAB_0083235c;
          }
          else {
            TVar10 = param_1[0x98];
            if (*(int *)(param_1 + 0x94) < (int)uVar15) goto joined_r0x00832408;
            if (TVar10 != (TypedModuleWithMasks)0x0) goto LAB_0083235c;
          }
          if (*(uint *)(param_1 + 0x9c) == 0) {
            return true;
          }
          if ((*(uint *)(param_1 + 0x9c) & uVar15) != 0) {
            return true;
          }
        }
LAB_0083235c:
        bVar13 = false;
        uVar20 = uVar20 - 1;
        uVar21 = uVar21 + 1;
        bVar12 = false;
      } while (uVar20 != 0);
    }
    bVar13 = bVar12;
    uVar23 = uVar23 + 1;
    if (uVar23 == param_11) {
      return false;
    }
  } while( true );
}


