// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks2<ChunkedBitSquare,BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 00830c38
// Size: 1424 bytes
// Signature: bool __cdecl checkTypedModuleMasks2<ChunkedBitSquare,BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11, HelperSource * param_12, IDensityPixelSource * param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18)


/* bool DensityMapModifier::checkTypedModuleMasks2<ChunkedBitSquare, BitVector,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ChunkedBitSquare>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<BitVector>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks2<ChunkedBitSquare,BitVector,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
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
  int iVar5;
  uint uVar6;
  uint uVar7;
  TypedModuleWithMasks TVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  code **ppcVar17;
  long lVar18;
  IDensityPixelSource *pIVar19;
  code *pcVar20;
  uint uVar21;
  IDensityPixelSource *pIVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  
  pIVar19 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar19 == (IDensityPixelSource *)0x0) {
    return true;
  }
  bVar12 = pIVar19 == param_2;
  if (bVar12) {
    if ((*(int *)(param_1 + 0x80) != 2) &&
       ((*(int *)(param_1 + 0x80) == 0) == (*(uint *)(param_1 + 0x84) != param_3))) {
      return false;
    }
    uVar21 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
             (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar21 < *(int *)(param_1 + 0x90)) {
      TVar8 = param_1[0x98];
joined_r0x00830d58:
      if (TVar8 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar8 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar21) goto joined_r0x00830d58;
      if (TVar8 != (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    if ((*(uint *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x9c) & uVar21) == 0)) {
      return false;
    }
    pIVar22 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar22 == param_2) {
      if (pIVar19 == param_2) {
        return true;
      }
      goto LAB_00830d8c;
    }
  }
  else {
    pIVar22 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar22 == param_2) goto LAB_00830d8c;
  }
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar21 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
           (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar21 < *(int *)(param_1 + 0xc0)) {
    TVar8 = param_1[200];
joined_r0x00830d40:
    if (TVar8 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar8 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar21) goto joined_r0x00830d40;
    if (TVar8 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar27 = *(uint *)(param_1 + 0xcc);
  bVar13 = (uVar27 & uVar21) == 0;
  bVar11 = uVar27 == 0 || !bVar13;
  if (uVar27 != 0 && bVar13) {
    return bVar11;
  }
  if (pIVar19 == param_2) {
    return bVar11;
  }
LAB_00830d8c:
  if (((pIVar19 == param_6) || (pIVar22 == param_6)) && (param_11 != 0)) {
    uVar21 = 0;
    do {
      bVar11 = bVar12;
      if (param_10 != 0) {
        uVar27 = 0;
        bVar13 = true;
        uVar25 = uVar21 + param_9;
        uVar29 = param_8;
        do {
          puVar28 = *(uint **)(param_5 + 0x10);
          uVar3 = uVar27 + param_8;
          uVar6 = puVar28[0xd];
          uVar14 = puVar28[0xf];
          iVar9 = (uVar25 >> 5) << (ulong)(*puVar28 & 0x1f);
          lVar23 = *(long *)(puVar28 + 10);
          *(uint *)(param_5 + 0x18) = uVar3;
          ppcVar17 = *(code ***)(lVar23 + (ulong)((iVar9 + (uVar3 >> 5)) * uVar6) * 8);
          uVar3 = uVar3 & 0x1f | (uVar25 & 0x1f) << 5;
          pcVar20 = *ppcVar17;
          *(uint *)(param_5 + 0x1c) = uVar25;
          uVar14 = (*pcVar20)(ppcVar17,uVar3,0,uVar14);
          if (1 < puVar28[0xd]) {
            uVar26 = 1;
            puVar24 = puVar28 + 0x11;
            do {
              ppcVar17 = *(code ***)
                          (*(long *)(puVar28 + 10) +
                          (ulong)(uVar6 * (iVar9 + (uVar29 >> 5)) + (int)uVar26) * 8);
              iVar15 = (**ppcVar17)(ppcVar17,uVar3,0,*puVar24);
              puVar1 = puVar24 + -1;
              uVar26 = uVar26 + 1;
              puVar24 = puVar24 + 2;
              uVar14 = iVar15 << (ulong)(*puVar1 & 0x1f) | uVar14;
            } while (uVar26 < puVar28[0xd]);
          }
          *(uint *)(param_5 + 0x20) = uVar14;
          if (bVar12) {
LAB_00830dcc:
            bVar11 = true;
            if (bVar13) {
              return true;
            }
            break;
          }
          if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_6) &&
             ((*(int *)(param_1 + 0x80) == 2 ||
              ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar14 & param_7)))
              ))) {
            uVar3 = uVar14 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                    (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
            if ((int)uVar3 < *(int *)(param_1 + 0x90)) {
              TVar8 = param_1[0x98];
joined_r0x00830f84:
              if (TVar8 == (TypedModuleWithMasks)0x0) goto LAB_00830e1c;
            }
            else {
              TVar8 = param_1[0x98];
              if (*(int *)(param_1 + 0x94) < (int)uVar3) goto joined_r0x00830f84;
              if (TVar8 != (TypedModuleWithMasks)0x0) goto LAB_00830e1c;
            }
            if ((*(uint *)(param_1 + 0x9c) == 0) || ((*(uint *)(param_1 + 0x9c) & uVar3) != 0))
            goto LAB_00830dcc;
          }
LAB_00830e1c:
          uVar27 = uVar27 + 1;
          bVar12 = false;
          bVar13 = uVar27 < param_10;
          uVar29 = uVar29 + 1;
          bVar11 = false;
        } while (uVar27 != param_10);
      }
      bVar12 = bVar11;
      uVar21 = uVar21 + 1;
    } while (uVar21 != param_11);
    pIVar19 = *(IDensityPixelSource **)(param_1 + 0x78);
    pIVar22 = *(IDensityPixelSource **)(param_1 + 0xa8);
  }
  if (((pIVar19 != param_13) && (pIVar22 != param_13)) || (param_11 == 0)) {
    return false;
  }
  uVar21 = 0;
  uVar29 = *(uint *)(param_12 + 8);
  uVar27 = uVar29 * (param_8 + *(int *)param_12 * param_9);
  do {
    bVar11 = bVar12;
    if (param_10 != 0) {
      uVar6 = *(uint *)(param_1 + 0x88);
      uVar14 = *(uint *)(param_1 + 0x8c);
      iVar9 = *(int *)(param_1 + 0x80);
      uVar4 = *(uint *)(param_1 + 0x84);
      iVar15 = *(int *)(param_1 + 0x90);
      iVar5 = *(int *)(param_1 + 0x94);
      TVar8 = param_1[0x98];
      uVar7 = *(uint *)(param_1 + 0x9c);
      lVar23 = **(long **)(param_12 + 0x10);
      uVar25 = param_8;
      uVar3 = uVar27;
      uVar10 = param_10;
      do {
        uVar26 = (ulong)(uVar3 >> 3) & 0xffff;
        *(uint *)(param_12 + 0x18) = uVar25;
        *(uint *)(param_12 + 0x1c) = uVar21 + param_9;
        lVar18 = *(long *)(lVar23 + (ulong)(uVar3 >> 0x13) * 8);
        if ((uint)uVar26 < 0xfffd) {
          uVar16 = *(uint *)(lVar18 + uVar26);
        }
        else {
          uVar16 = (uVar3 >> 3) + 1;
          uVar2 = (uVar3 >> 3) + 2;
          uVar16 = (uint)CONCAT12(*(undefined *)
                                   (*(long *)(lVar23 + (ulong)(uVar2 >> 0x10) * 8) +
                                   ((ulong)uVar2 & 0xffff)),
                                  CONCAT11(*(undefined *)
                                            (*(long *)(lVar23 + (ulong)(uVar16 >> 0x10) * 8) +
                                            ((ulong)uVar16 & 0xffff)),
                                           *(undefined *)(lVar18 + uVar26)));
        }
        uVar16 = uVar16 >> (ulong)(uVar3 & 7) & ~(-1 << (ulong)(uVar29 & 0x1f)) & 0xffffU;
        *(uint *)(param_12 + 0x20) = uVar16;
        if ((bool)(bVar12 | pIVar19 != param_13)) {
          if (bVar12) {
            return true;
          }
        }
        else if ((iVar9 == 2) || ((iVar9 == 0) != (uVar4 != (uVar16 & param_14)))) {
          uVar16 = uVar16 >> (ulong)(uVar6 & 0x1f) & ~(-1 << (ulong)(uVar14 & 0x1f));
          if (((int)uVar16 < iVar15) || (iVar5 < (int)uVar16)) {
            if (TVar8 != (TypedModuleWithMasks)0x0) goto LAB_00831158;
          }
          else if (TVar8 == (TypedModuleWithMasks)0x0) {
LAB_00831158:
            if (uVar7 == 0) {
              return true;
            }
            if ((uVar7 & uVar16) != 0) {
              return true;
            }
          }
        }
        bVar12 = false;
        uVar10 = uVar10 - 1;
        uVar3 = uVar3 + uVar29;
        uVar25 = uVar25 + 1;
        bVar11 = false;
      } while (uVar10 != 0);
    }
    bVar12 = bVar11;
    uVar21 = uVar21 + 1;
    uVar27 = uVar27 + *(int *)param_12 * uVar29;
    if (uVar21 == param_11) {
      return false;
    }
  } while( true );
}


