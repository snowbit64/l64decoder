// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks2<ChunkedBitSquare,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 0083fffc
// Size: 1280 bytes
// Signature: bool __cdecl checkTypedModuleMasks2<ChunkedBitSquare,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11, HelperSource * param_12, IDensityPixelSource * param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18)


/* bool DensityMapModifier::checkTypedModuleMasks2<ChunkedBitSquare, ProceduralDensityPixelSource
   const, DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ChunkedBitSquare>&, IDensityPixelSource const*, unsigned int,
   unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ProceduralDensityPixelSource const>&, IDensityPixelSource
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks2<ChunkedBitSquare,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (TypedModuleWithMasks *param_1,IDensityPixelSource *param_2,uint param_3,uint param_4
               ,HelperSource *param_5,IDensityPixelSource *param_6,uint param_7,uint param_8,
               uint param_9,uint param_10,uint param_11,HelperSource *param_12,
               IDensityPixelSource *param_13,uint param_14,uint param_15,uint param_16,uint param_17
               ,uint param_18)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  TypedModuleWithMasks TVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  code **ppcVar11;
  IDensityPixelSource *pIVar12;
  code *pcVar13;
  uint uVar14;
  IDensityPixelSource *pIVar15;
  long lVar16;
  bool bVar17;
  uint *puVar18;
  uint *puVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  
  pIVar12 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar12 == (IDensityPixelSource *)0x0) {
    return true;
  }
  bVar6 = pIVar12 == param_2;
  if (bVar6) {
    if ((*(int *)(param_1 + 0x80) != 2) &&
       ((*(int *)(param_1 + 0x80) == 0) == (*(uint *)(param_1 + 0x84) != param_3))) {
      return false;
    }
    uVar14 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
             (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar14 < *(int *)(param_1 + 0x90)) {
      TVar4 = param_1[0x98];
joined_r0x00840118:
      if (TVar4 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar4 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar14) goto joined_r0x00840118;
      if (TVar4 != (TypedModuleWithMasks)0x0) {
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
      goto LAB_0084014c;
    }
  }
  else {
    pIVar15 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar15 == param_2) goto LAB_0084014c;
  }
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar14 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
           (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar14 < *(int *)(param_1 + 0xc0)) {
    TVar4 = param_1[200];
joined_r0x00840100:
    if (TVar4 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar4 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar14) goto joined_r0x00840100;
    if (TVar4 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar21 = *(uint *)(param_1 + 0xcc);
  bVar7 = (uVar21 & uVar14) == 0;
  bVar17 = uVar21 == 0 || !bVar7;
  if (uVar21 != 0 && bVar7) {
    return bVar17;
  }
  if (pIVar12 == param_2) {
    return bVar17;
  }
LAB_0084014c:
  if ((pIVar12 == param_6) || (pIVar15 == param_6)) {
    if (param_11 == 0) {
      return false;
    }
    uVar14 = 0;
    do {
      if (param_10 != 0) {
        uVar21 = 0;
        bVar7 = true;
        uVar10 = uVar14 + param_9;
        uVar22 = param_8;
        bVar17 = bVar6;
        do {
          puVar19 = *(uint **)(param_5 + 0x10);
          uVar2 = uVar21 + param_8;
          uVar3 = puVar19[0xd];
          uVar8 = puVar19[0xf];
          iVar5 = (uVar10 >> 5) << (ulong)(*puVar19 & 0x1f);
          lVar16 = *(long *)(puVar19 + 10);
          *(uint *)(param_5 + 0x18) = uVar2;
          ppcVar11 = *(code ***)(lVar16 + (ulong)((iVar5 + (uVar2 >> 5)) * uVar3) * 8);
          uVar2 = uVar2 & 0x1f | (uVar10 & 0x1f) << 5;
          pcVar13 = *ppcVar11;
          *(uint *)(param_5 + 0x1c) = uVar10;
          uVar8 = (*pcVar13)(ppcVar11,uVar2,0,uVar8);
          if (1 < puVar19[0xd]) {
            uVar20 = 1;
            puVar18 = puVar19 + 0x11;
            do {
              ppcVar11 = *(code ***)
                          (*(long *)(puVar19 + 10) +
                          (ulong)(uVar3 * (iVar5 + (uVar22 >> 5)) + (int)uVar20) * 8);
              iVar9 = (**ppcVar11)(ppcVar11,uVar2,0,*puVar18);
              puVar1 = puVar18 + -1;
              uVar20 = uVar20 + 1;
              puVar18 = puVar18 + 2;
              uVar8 = iVar9 << (ulong)(*puVar1 & 0x1f) | uVar8;
            } while (uVar20 < puVar19[0xd]);
          }
          *(uint *)(param_5 + 0x20) = uVar8;
          if (bVar17) {
LAB_00840198:
            bVar6 = true;
            if (bVar7) {
              return true;
            }
            break;
          }
          if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_6) &&
             ((*(int *)(param_1 + 0x80) == 2 ||
              ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar8 & param_7))))
             )) {
            uVar2 = uVar8 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                    (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
            if ((int)uVar2 < *(int *)(param_1 + 0x90)) {
              TVar4 = param_1[0x98];
joined_r0x00840354:
              if (TVar4 == (TypedModuleWithMasks)0x0) goto LAB_008401ec;
            }
            else {
              TVar4 = param_1[0x98];
              if (*(int *)(param_1 + 0x94) < (int)uVar2) goto joined_r0x00840354;
              if (TVar4 != (TypedModuleWithMasks)0x0) goto LAB_008401ec;
            }
            if ((*(uint *)(param_1 + 0x9c) == 0) || ((*(uint *)(param_1 + 0x9c) & uVar2) != 0))
            goto LAB_00840198;
          }
LAB_008401ec:
          uVar21 = uVar21 + 1;
          bVar17 = false;
          bVar6 = false;
          uVar22 = uVar22 + 1;
          bVar7 = uVar21 < param_10;
        } while (uVar21 != param_10);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_11);
    pIVar12 = *(IDensityPixelSource **)(param_1 + 0x78);
    pIVar15 = *(IDensityPixelSource **)(param_1 + 0xa8);
  }
  if (((pIVar12 != param_13) && (pIVar15 != param_13)) || (param_11 == 0)) {
    return false;
  }
  uVar14 = 0;
  do {
    if (param_10 != 0) {
      uVar21 = param_8;
      uVar22 = param_10;
      bVar17 = bVar6;
      do {
        *(uint *)(param_12 + 0x18) = uVar21;
        *(uint *)(param_12 + 0x1c) = uVar14 + param_9;
        uVar10 = (**(code **)(**(long **)(param_12 + 0x10) + 0x58))
                           (*(long **)(param_12 + 0x10),uVar21,uVar14 + param_9);
        *(uint *)(param_12 + 0x20) = uVar10;
        if (bVar17) {
          return true;
        }
        if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_13) &&
           ((*(int *)(param_1 + 0x80) == 2 ||
            ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar10 & param_14))))
           )) {
          uVar10 = uVar10 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                   (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
          if ((int)uVar10 < *(int *)(param_1 + 0x90)) {
            TVar4 = param_1[0x98];
joined_r0x0084046c:
            if (TVar4 == (TypedModuleWithMasks)0x0) goto LAB_008403c0;
          }
          else {
            TVar4 = param_1[0x98];
            if (*(int *)(param_1 + 0x94) < (int)uVar10) goto joined_r0x0084046c;
            if (TVar4 != (TypedModuleWithMasks)0x0) goto LAB_008403c0;
          }
          if (*(uint *)(param_1 + 0x9c) == 0) {
            return true;
          }
          if ((*(uint *)(param_1 + 0x9c) & uVar10) != 0) {
            return true;
          }
        }
LAB_008403c0:
        bVar17 = false;
        bVar6 = false;
        uVar22 = uVar22 - 1;
        uVar21 = uVar21 + 1;
      } while (uVar22 != 0);
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == param_11) {
      return false;
    }
  } while( true );
}


