// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks<ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 00842228
// Size: 912 bytes
// Signature: bool __cdecl checkTypedModuleMasks<ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11)


/* bool DensityMapModifier::checkTypedModuleMasks<ChunkedBitSquare,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ChunkedBitSquare>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks<ChunkedBitSquare,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (TypedModuleWithMasks *param_1,IDensityPixelSource *param_2,uint param_3,uint param_4
               ,HelperSource *param_5,IDensityPixelSource *param_6,uint param_7,uint param_8,
               uint param_9,uint param_10,uint param_11)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TypedModuleWithMasks TVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  code **ppcVar12;
  IDensityPixelSource *pIVar13;
  code *pcVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  
  pIVar13 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar13 == (IDensityPixelSource *)0x0) {
    return true;
  }
  bVar8 = pIVar13 == param_2;
  if (bVar8) {
    if ((*(int *)(param_1 + 0x80) != 2) &&
       ((*(int *)(param_1 + 0x80) == 0) == (*(uint *)(param_1 + 0x84) != param_3))) {
      return false;
    }
    uVar15 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
             (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar15 < *(int *)(param_1 + 0x90)) {
      TVar5 = param_1[0x98];
joined_r0x00842344:
      if (TVar5 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar5 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar15) goto joined_r0x00842344;
      if (TVar5 != (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    if ((*(uint *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x9c) & uVar15) == 0)) {
      return false;
    }
    if (*(IDensityPixelSource **)(param_1 + 0xa8) == param_2) {
      if (pIVar13 == param_2) {
        return true;
      }
      goto LAB_00842378;
    }
  }
  else if (*(IDensityPixelSource **)(param_1 + 0xa8) == param_2) goto LAB_00842378;
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar15 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
           (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar15 < *(int *)(param_1 + 0xc0)) {
    TVar5 = param_1[200];
joined_r0x0084232c:
    if (TVar5 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar5 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar15) goto joined_r0x0084232c;
    if (TVar5 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar18 = *(uint *)(param_1 + 0xcc);
  bVar9 = (uVar18 & uVar15) == 0;
  bVar7 = uVar18 == 0 || !bVar9;
  if (uVar18 != 0 && bVar9) {
    return bVar7;
  }
  if (pIVar13 == param_2) {
    return bVar7;
  }
LAB_00842378:
  if (param_11 != 0) {
    uVar15 = 0;
    do {
      if (param_10 != 0) {
        uVar18 = 0;
        bVar9 = true;
        uVar2 = uVar15 + param_9;
        uVar17 = param_8;
        bVar7 = bVar8;
        do {
          puVar21 = *(uint **)(param_5 + 0x10);
          uVar3 = uVar18 + param_8;
          uVar4 = puVar21[0xd];
          uVar10 = puVar21[0xf];
          iVar6 = (uVar2 >> 5) << (ulong)(*puVar21 & 0x1f);
          lVar16 = *(long *)(puVar21 + 10);
          *(uint *)(param_5 + 0x18) = uVar3;
          ppcVar12 = *(code ***)(lVar16 + (ulong)((iVar6 + (uVar3 >> 5)) * uVar4) * 8);
          uVar3 = uVar3 & 0x1f | (uVar2 & 0x1f) << 5;
          pcVar14 = *ppcVar12;
          *(uint *)(param_5 + 0x1c) = uVar2;
          uVar10 = (*pcVar14)(ppcVar12,uVar3,0,uVar10);
          if (1 < puVar21[0xd]) {
            uVar19 = 1;
            puVar20 = puVar21 + 0x11;
            do {
              ppcVar12 = *(code ***)
                          (*(long *)(puVar21 + 10) +
                          (ulong)(uVar4 * (iVar6 + (uVar17 >> 5)) + (int)uVar19) * 8);
              iVar11 = (**ppcVar12)(ppcVar12,uVar3,0,*puVar20);
              puVar1 = puVar20 + -1;
              uVar19 = uVar19 + 1;
              puVar20 = puVar20 + 2;
              uVar10 = iVar11 << (ulong)(*puVar1 & 0x1f) | uVar10;
            } while (uVar19 < puVar21[0xd]);
          }
          *(uint *)(param_5 + 0x20) = uVar10;
          if (bVar7) {
LAB_00842558:
            bVar8 = true;
            if (bVar9) {
              return true;
            }
            break;
          }
          if ((*(int *)(param_1 + 0x80) == 2) ||
             ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar10 & param_7))))
          {
            uVar3 = uVar10 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                    (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
            if ((int)uVar3 < *(int *)(param_1 + 0x90)) {
              TVar5 = param_1[0x98];
joined_r0x00842544:
              if (TVar5 == (TypedModuleWithMasks)0x0) goto LAB_008423f0;
            }
            else {
              TVar5 = param_1[0x98];
              if (*(int *)(param_1 + 0x94) < (int)uVar3) goto joined_r0x00842544;
              if (TVar5 != (TypedModuleWithMasks)0x0) goto LAB_008423f0;
            }
            if ((*(uint *)(param_1 + 0x9c) == 0) || ((*(uint *)(param_1 + 0x9c) & uVar3) != 0))
            goto LAB_00842558;
          }
LAB_008423f0:
          uVar18 = uVar18 + 1;
          bVar7 = false;
          bVar8 = false;
          uVar17 = uVar17 + 1;
          bVar9 = uVar18 < param_10;
        } while (uVar18 != param_10);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_11);
  }
  return false;
}


