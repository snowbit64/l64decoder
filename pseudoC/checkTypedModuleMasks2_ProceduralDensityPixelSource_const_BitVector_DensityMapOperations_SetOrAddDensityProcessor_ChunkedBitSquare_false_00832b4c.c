// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks2<ProceduralDensityPixelSource_const,BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 00832b4c
// Size: 1184 bytes
// Signature: bool __cdecl checkTypedModuleMasks2<ProceduralDensityPixelSource_const,BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11, HelperSource * param_12, IDensityPixelSource * param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18)


/* bool DensityMapModifier::checkTypedModuleMasks2<ProceduralDensityPixelSource const, BitVector,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ProceduralDensityPixelSource const>&, IDensityPixelSource
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<BitVector>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks2<ProceduralDensityPixelSource_const,BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
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
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  IDensityPixelSource *pIVar17;
  IDensityPixelSource *pIVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  
  pIVar17 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar17 == (IDensityPixelSource *)0x0) {
    return true;
  }
  bVar12 = pIVar17 == param_2;
  if (bVar12) {
    if ((*(int *)(param_1 + 0x80) != 2) &&
       ((*(int *)(param_1 + 0x80) == 0) == (*(uint *)(param_1 + 0x84) != param_3))) {
      return false;
    }
    uVar22 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
             (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar22 < *(int *)(param_1 + 0x90)) {
      TVar10 = param_1[0x98];
joined_r0x00832c70:
      if (TVar10 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar10 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar22) goto joined_r0x00832c70;
      if (TVar10 != (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    if ((*(uint *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x9c) & uVar22) == 0)) {
      return false;
    }
    pIVar18 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar18 == param_2) {
      if (pIVar17 == param_2) {
        return true;
      }
      goto LAB_00832ca4;
    }
  }
  else {
    pIVar18 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar18 == param_2) goto LAB_00832ca4;
  }
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar22 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
           (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar22 < *(int *)(param_1 + 0xc0)) {
    TVar10 = param_1[200];
joined_r0x00832c58:
    if (TVar10 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar10 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar22) goto joined_r0x00832c58;
    if (TVar10 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar19 = *(uint *)(param_1 + 0xcc);
  bVar13 = (uVar19 & uVar22) == 0;
  bVar11 = uVar19 == 0 || !bVar13;
  if (uVar19 != 0 && bVar13) {
    return bVar11;
  }
  if (pIVar17 == param_2) {
    return bVar11;
  }
LAB_00832ca4:
  if (((pIVar17 == param_6) || (pIVar18 == param_6)) && (param_11 != 0)) {
    uVar22 = 0;
    do {
      bVar11 = bVar12;
      if (param_10 != 0) {
        uVar20 = param_10;
        uVar19 = param_8;
        do {
          *(uint *)(param_5 + 0x18) = uVar19;
          *(uint *)(param_5 + 0x1c) = uVar22 + param_9;
          uVar14 = (**(code **)(**(long **)(param_5 + 0x10) + 0x58))
                             (*(long **)(param_5 + 0x10),uVar19,uVar22 + param_9);
          *(uint *)(param_5 + 0x20) = uVar14;
          if (bVar12) {
            return true;
          }
          if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_6) &&
             ((*(int *)(param_1 + 0x80) == 2 ||
              ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar14 & param_7)))
              ))) {
            uVar14 = uVar14 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                     (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
            if ((int)uVar14 < *(int *)(param_1 + 0x90)) {
              TVar10 = param_1[0x98];
joined_r0x00832db0:
              if (TVar10 == (TypedModuleWithMasks)0x0) goto LAB_00832d04;
            }
            else {
              TVar10 = param_1[0x98];
              if (*(int *)(param_1 + 0x94) < (int)uVar14) goto joined_r0x00832db0;
              if (TVar10 != (TypedModuleWithMasks)0x0) goto LAB_00832d04;
            }
            if (*(uint *)(param_1 + 0x9c) == 0) {
              return true;
            }
            if ((*(uint *)(param_1 + 0x9c) & uVar14) != 0) {
              return true;
            }
          }
LAB_00832d04:
          bVar12 = false;
          uVar20 = uVar20 - 1;
          uVar19 = uVar19 + 1;
          bVar11 = false;
        } while (uVar20 != 0);
      }
      bVar12 = bVar11;
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_11);
    pIVar17 = *(IDensityPixelSource **)(param_1 + 0x78);
    pIVar18 = *(IDensityPixelSource **)(param_1 + 0xa8);
  }
  if (((pIVar17 != param_13) && (pIVar18 != param_13)) || (param_11 == 0)) {
    return false;
  }
  uVar22 = 0;
  uVar20 = *(uint *)(param_12 + 8);
  uVar19 = uVar20 * (param_8 + *(int *)param_12 * param_9);
  do {
    bVar11 = bVar12;
    if (param_10 != 0) {
      uVar3 = *(uint *)(param_1 + 0x88);
      uVar6 = *(uint *)(param_1 + 0x8c);
      iVar4 = *(int *)(param_1 + 0x80);
      uVar7 = *(uint *)(param_1 + 0x84);
      iVar5 = *(int *)(param_1 + 0x90);
      iVar8 = *(int *)(param_1 + 0x94);
      TVar10 = param_1[0x98];
      uVar9 = *(uint *)(param_1 + 0x9c);
      lVar24 = **(long **)(param_12 + 0x10);
      uVar23 = param_10;
      uVar14 = param_8;
      uVar2 = uVar19;
      do {
        uVar21 = (ulong)(uVar2 >> 3) & 0xffff;
        *(uint *)(param_12 + 0x18) = uVar14;
        *(uint *)(param_12 + 0x1c) = uVar22 + param_9;
        lVar16 = *(long *)(lVar24 + (ulong)(uVar2 >> 0x13) * 8);
        if ((uint)uVar21 < 0xfffd) {
          uVar15 = *(uint *)(lVar16 + uVar21);
        }
        else {
          uVar15 = (uVar2 >> 3) + 1;
          uVar1 = (uVar2 >> 3) + 2;
          uVar15 = (uint)CONCAT12(*(undefined *)
                                   (*(long *)(lVar24 + (ulong)(uVar1 >> 0x10) * 8) +
                                   ((ulong)uVar1 & 0xffff)),
                                  CONCAT11(*(undefined *)
                                            (*(long *)(lVar24 + (ulong)(uVar15 >> 0x10) * 8) +
                                            ((ulong)uVar15 & 0xffff)),
                                           *(undefined *)(lVar16 + uVar21)));
        }
        uVar15 = uVar15 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar20 & 0x1f)) & 0xffffU;
        *(uint *)(param_12 + 0x20) = uVar15;
        if ((bool)(bVar12 | pIVar17 != param_13)) {
          if (bVar12) {
            return true;
          }
        }
        else if ((iVar4 == 2) || ((iVar4 == 0) != (uVar7 != (uVar15 & param_14)))) {
          uVar15 = uVar15 >> (ulong)(uVar3 & 0x1f) & ~(-1 << (ulong)(uVar6 & 0x1f));
          if (((int)uVar15 < iVar5) || (iVar8 < (int)uVar15)) {
            if (TVar10 != (TypedModuleWithMasks)0x0) goto LAB_00832fd0;
          }
          else if (TVar10 == (TypedModuleWithMasks)0x0) {
LAB_00832fd0:
            if (uVar9 == 0) {
              return true;
            }
            if ((uVar9 & uVar15) != 0) {
              return true;
            }
          }
        }
        bVar12 = false;
        uVar23 = uVar23 - 1;
        uVar2 = uVar2 + uVar20;
        uVar14 = uVar14 + 1;
        bVar11 = false;
      } while (uVar23 != 0);
    }
    bVar12 = bVar11;
    uVar22 = uVar22 + 1;
    uVar19 = uVar19 + *(int *)param_12 * uVar20;
    if (uVar22 == param_11) {
      return false;
    }
  } while( true );
}


