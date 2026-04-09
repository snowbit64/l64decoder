// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks2<BitVector,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 008404fc
// Size: 1448 bytes
// Signature: bool __cdecl checkTypedModuleMasks2<BitVector,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11, HelperSource * param_12, IDensityPixelSource * param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18)


/* bool DensityMapModifier::checkTypedModuleMasks2<BitVector, ChunkedBitSquare,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<BitVector>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ChunkedBitSquare>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks2<BitVector,ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
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
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TypedModuleWithMasks TVar9;
  int iVar10;
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
  long lVar21;
  uint *puVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  uint local_a4;
  IDensityPixelSource *local_80;
  
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
    uVar27 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
             (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar27 < *(int *)(param_1 + 0x90)) {
      TVar9 = param_1[0x98];
joined_r0x0084061c:
      if (TVar9 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar9 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar27) goto joined_r0x0084061c;
      if (TVar9 != (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    if ((*(uint *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x9c) & uVar27) == 0)) {
      return false;
    }
    local_80 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (local_80 == param_2) {
      if (pIVar19 == param_2) {
        return true;
      }
      goto LAB_00840650;
    }
  }
  else {
    local_80 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (local_80 == param_2) goto LAB_00840650;
  }
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar27 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
           (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar27 < *(int *)(param_1 + 0xc0)) {
    TVar9 = param_1[200];
joined_r0x00840604:
    if (TVar9 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar9 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar27) goto joined_r0x00840604;
    if (TVar9 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar23 = *(uint *)(param_1 + 0xcc);
  bVar13 = (uVar23 & uVar27) == 0;
  bVar11 = uVar23 == 0 || !bVar13;
  if (uVar23 != 0 && bVar13) {
    return bVar11;
  }
  if (pIVar19 == param_2) {
    return bVar11;
  }
LAB_00840650:
  if ((pIVar19 == param_6) || (local_80 == param_6)) {
    if (param_11 == 0) {
      return false;
    }
    uVar27 = 0;
    uVar3 = *(uint *)(param_5 + 8);
    uVar23 = uVar3 * (param_8 + *(int *)param_5 * param_9);
    do {
      if (param_10 != 0) {
        uVar14 = *(uint *)(param_1 + 0x88);
        uVar4 = *(uint *)(param_1 + 0x8c);
        iVar10 = *(int *)(param_1 + 0x80);
        uVar5 = *(uint *)(param_1 + 0x84);
        iVar15 = *(int *)(param_1 + 0x90);
        iVar6 = *(int *)(param_1 + 0x94);
        TVar9 = param_1[0x98];
        uVar8 = *(uint *)(param_1 + 0x9c);
        lVar21 = **(long **)(param_5 + 0x10);
        uVar28 = param_10;
        uVar25 = param_8;
        uVar7 = uVar23;
        bVar11 = bVar12;
        do {
          uVar24 = (ulong)(uVar7 >> 3) & 0xffff;
          *(uint *)(param_5 + 0x18) = uVar25;
          *(uint *)(param_5 + 0x1c) = uVar27 + param_9;
          lVar18 = *(long *)(lVar21 + (ulong)(uVar7 >> 0x13) * 8);
          if ((uint)uVar24 < 0xfffd) {
            uVar16 = *(uint *)(lVar18 + uVar24);
          }
          else {
            uVar16 = (uVar7 >> 3) + 1;
            uVar2 = (uVar7 >> 3) + 2;
            uVar16 = (uint)CONCAT12(*(undefined *)
                                     (*(long *)(lVar21 + (ulong)(uVar2 >> 0x10) * 8) +
                                     ((ulong)uVar2 & 0xffff)),
                                    CONCAT11(*(undefined *)
                                              (*(long *)(lVar21 + (ulong)(uVar16 >> 0x10) * 8) +
                                              ((ulong)uVar16 & 0xffff)),
                                             *(undefined *)(lVar18 + uVar24)));
          }
          uVar16 = uVar16 >> (ulong)(uVar7 & 7) & ~(-1 << (ulong)(uVar3 & 0x1f)) & 0xffffU;
          *(uint *)(param_5 + 0x20) = uVar16;
          if ((bool)(bVar11 | pIVar19 != param_6)) {
            if (bVar11) {
              return true;
            }
          }
          else if ((iVar10 == 2) || ((iVar10 == 0) != (uVar5 != (uVar16 & param_7)))) {
            uVar16 = uVar16 >> (ulong)(uVar14 & 0x1f) & ~(-1 << (ulong)(uVar4 & 0x1f));
            if (((int)uVar16 < iVar15) || (iVar6 < (int)uVar16)) {
              if (TVar9 != (TypedModuleWithMasks)0x0) goto LAB_00840a30;
            }
            else if (TVar9 == (TypedModuleWithMasks)0x0) {
LAB_00840a30:
              if (uVar8 == 0) {
                return true;
              }
              if ((uVar8 & uVar16) != 0) {
                return true;
              }
            }
          }
          bVar11 = false;
          bVar12 = false;
          uVar28 = uVar28 - 1;
          uVar7 = uVar7 + uVar3;
          uVar25 = uVar25 + 1;
        } while (uVar28 != 0);
      }
      uVar27 = uVar27 + 1;
      uVar23 = uVar23 + *(int *)param_5 * uVar3;
    } while (uVar27 != param_11);
  }
  if (((pIVar19 != param_13) && (local_80 != param_13)) || (param_11 == 0)) {
    return false;
  }
  local_a4 = 0;
  do {
    if (param_10 != 0) {
      uVar27 = 0;
      bVar13 = true;
      uVar3 = local_a4 + param_9;
      uVar23 = param_8;
      bVar11 = bVar12;
      do {
        puVar26 = *(uint **)(param_12 + 0x10);
        uVar25 = uVar27 + param_8;
        uVar7 = puVar26[0xd];
        uVar14 = puVar26[0xf];
        iVar10 = (uVar3 >> 5) << (ulong)(*puVar26 & 0x1f);
        lVar21 = *(long *)(puVar26 + 10);
        *(uint *)(param_12 + 0x18) = uVar25;
        ppcVar17 = *(code ***)(lVar21 + (ulong)((iVar10 + (uVar25 >> 5)) * uVar7) * 8);
        uVar25 = uVar25 & 0x1f | (uVar3 & 0x1f) << 5;
        pcVar20 = *ppcVar17;
        *(uint *)(param_12 + 0x1c) = uVar3;
        uVar14 = (*pcVar20)(ppcVar17,uVar25,0,uVar14);
        if (1 < puVar26[0xd]) {
          uVar24 = 1;
          puVar22 = puVar26 + 0x11;
          do {
            ppcVar17 = *(code ***)
                        (*(long *)(puVar26 + 10) +
                        (ulong)(uVar7 * (iVar10 + (uVar23 >> 5)) + (int)uVar24) * 8);
            iVar15 = (**ppcVar17)(ppcVar17,uVar25,0,*puVar22);
            puVar1 = puVar22 + -1;
            uVar24 = uVar24 + 1;
            puVar22 = puVar22 + 2;
            uVar14 = iVar15 << (ulong)(*puVar1 & 0x1f) | uVar14;
          } while (uVar24 < puVar26[0xd]);
        }
        *(uint *)(param_12 + 0x20) = uVar14;
        if (bVar11) {
LAB_00840890:
          bVar12 = true;
          if (bVar13) {
            return true;
          }
          break;
        }
        if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_13) &&
           ((*(int *)(param_1 + 0x80) == 2 ||
            ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar14 & param_14))))
           )) {
          uVar25 = uVar14 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                   (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
          if ((int)uVar25 < *(int *)(param_1 + 0x90)) {
            TVar9 = param_1[0x98];
joined_r0x0084087c:
            if (TVar9 == (TypedModuleWithMasks)0x0) goto LAB_00840714;
          }
          else {
            TVar9 = param_1[0x98];
            if (*(int *)(param_1 + 0x94) < (int)uVar25) goto joined_r0x0084087c;
            if (TVar9 != (TypedModuleWithMasks)0x0) goto LAB_00840714;
          }
          if ((*(uint *)(param_1 + 0x9c) == 0) || ((*(uint *)(param_1 + 0x9c) & uVar25) != 0))
          goto LAB_00840890;
        }
LAB_00840714:
        uVar27 = uVar27 + 1;
        bVar11 = false;
        bVar12 = false;
        uVar23 = uVar23 + 1;
        bVar13 = uVar27 < param_10;
      } while (uVar27 != param_10);
    }
    local_a4 = local_a4 + 1;
    if (local_a4 == param_11) {
      return false;
    }
  } while( true );
}


