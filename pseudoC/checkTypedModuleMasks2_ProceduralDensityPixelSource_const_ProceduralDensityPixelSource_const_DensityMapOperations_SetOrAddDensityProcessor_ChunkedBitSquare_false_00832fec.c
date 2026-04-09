// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
// Entry Point: 00832fec
// Size: 1032 bytes
// Signature: bool __cdecl checkTypedModuleMasks2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11, HelperSource * param_12, IDensityPixelSource * param_13, uint param_14, uint param_15, uint param_16, uint param_17, uint param_18)


/* bool DensityMapModifier::checkTypedModuleMasks2<ProceduralDensityPixelSource const,
   ProceduralDensityPixelSource const,
   DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ProceduralDensityPixelSource const>&, IDensityPixelSource
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ProceduralDensityPixelSource const>&, IDensityPixelSource
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks2<ProceduralDensityPixelSource_const,ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<ChunkedBitSquare,false>>
               (TypedModuleWithMasks *param_1,IDensityPixelSource *param_2,uint param_3,uint param_4
               ,HelperSource *param_5,IDensityPixelSource *param_6,uint param_7,uint param_8,
               uint param_9,uint param_10,uint param_11,HelperSource *param_12,
               IDensityPixelSource *param_13,uint param_14,uint param_15,uint param_16,uint param_17
               ,uint param_18)

{
  TypedModuleWithMasks TVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  IDensityPixelSource *pIVar6;
  IDensityPixelSource *pIVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  pIVar6 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar6 == (IDensityPixelSource *)0x0) {
    return true;
  }
  bVar3 = pIVar6 == param_2;
  if (bVar3) {
    if ((*(int *)(param_1 + 0x80) != 2) &&
       ((*(int *)(param_1 + 0x80) == 0) == (*(uint *)(param_1 + 0x84) != param_3))) {
      return false;
    }
    uVar9 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
            (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar9 < *(int *)(param_1 + 0x90)) {
      TVar1 = param_1[0x98];
joined_r0x00833110:
      if (TVar1 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar1 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar9) goto joined_r0x00833110;
      if (TVar1 != (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    if ((*(uint *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x9c) & uVar9) == 0)) {
      return false;
    }
    pIVar7 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar7 == param_2) {
      if (pIVar6 == param_2) {
        return true;
      }
      goto LAB_00833144;
    }
  }
  else {
    pIVar7 = *(IDensityPixelSource **)(param_1 + 0xa8);
    if (pIVar7 == param_2) goto LAB_00833144;
  }
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar9 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
          (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar9 < *(int *)(param_1 + 0xc0)) {
    TVar1 = param_1[200];
joined_r0x008330f8:
    if (TVar1 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar1 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar9) goto joined_r0x008330f8;
    if (TVar1 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar8 = *(uint *)(param_1 + 0xcc);
  bVar4 = (uVar8 & uVar9) == 0;
  bVar10 = uVar8 == 0 || !bVar4;
  if (uVar8 != 0 && bVar4) {
    return bVar10;
  }
  if (pIVar6 == param_2) {
    return bVar10;
  }
LAB_00833144:
  if ((pIVar6 == param_6) || (pIVar7 == param_6)) {
    if (param_11 == 0) {
      return false;
    }
    uVar9 = 0;
    do {
      if (param_10 != 0) {
        uVar8 = param_8;
        uVar2 = param_10;
        bVar10 = bVar3;
        do {
          *(uint *)(param_5 + 0x18) = uVar8;
          *(uint *)(param_5 + 0x1c) = uVar9 + param_9;
          uVar5 = (**(code **)(**(long **)(param_5 + 0x10) + 0x58))
                            (*(long **)(param_5 + 0x10),uVar8,uVar9 + param_9);
          *(uint *)(param_5 + 0x20) = uVar5;
          if (bVar10) {
            return true;
          }
          if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_6) &&
             ((*(int *)(param_1 + 0x80) == 2 ||
              ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar5 & param_7))))
             )) {
            uVar5 = uVar5 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                    (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
            if ((int)uVar5 < *(int *)(param_1 + 0x90)) {
              TVar1 = param_1[0x98];
joined_r0x00833374:
              if (TVar1 == (TypedModuleWithMasks)0x0) goto LAB_008332c8;
            }
            else {
              TVar1 = param_1[0x98];
              if (*(int *)(param_1 + 0x94) < (int)uVar5) goto joined_r0x00833374;
              if (TVar1 != (TypedModuleWithMasks)0x0) goto LAB_008332c8;
            }
            if (*(uint *)(param_1 + 0x9c) == 0) {
              return true;
            }
            if ((*(uint *)(param_1 + 0x9c) & uVar5) != 0) {
              return true;
            }
          }
LAB_008332c8:
          bVar10 = false;
          bVar3 = false;
          uVar2 = uVar2 - 1;
          uVar8 = uVar8 + 1;
        } while (uVar2 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_11);
    pIVar6 = *(IDensityPixelSource **)(param_1 + 0x78);
    pIVar7 = *(IDensityPixelSource **)(param_1 + 0xa8);
  }
  if (((pIVar6 != param_13) && (pIVar7 != param_13)) || (param_11 == 0)) {
    return false;
  }
  uVar9 = 0;
  do {
    bVar10 = bVar3;
    if (param_10 != 0) {
      uVar8 = param_8;
      uVar2 = param_10;
      do {
        *(uint *)(param_12 + 0x18) = uVar8;
        *(uint *)(param_12 + 0x1c) = uVar9 + param_9;
        uVar5 = (**(code **)(**(long **)(param_12 + 0x10) + 0x58))
                          (*(long **)(param_12 + 0x10),uVar8,uVar9 + param_9);
        *(uint *)(param_12 + 0x20) = uVar5;
        if (bVar3) {
          return true;
        }
        if ((*(IDensityPixelSource **)(param_1 + 0x78) == param_13) &&
           ((*(int *)(param_1 + 0x80) == 2 ||
            ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar5 & param_14)))))
           ) {
          uVar5 = uVar5 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                  (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
          if ((int)uVar5 < *(int *)(param_1 + 0x90)) {
            TVar1 = param_1[0x98];
joined_r0x00833254:
            if (TVar1 == (TypedModuleWithMasks)0x0) goto LAB_008331a4;
          }
          else {
            TVar1 = param_1[0x98];
            if (*(int *)(param_1 + 0x94) < (int)uVar5) goto joined_r0x00833254;
            if (TVar1 != (TypedModuleWithMasks)0x0) goto LAB_008331a4;
          }
          if (*(uint *)(param_1 + 0x9c) == 0) {
            return true;
          }
          if ((*(uint *)(param_1 + 0x9c) & uVar5) != 0) {
            return true;
          }
        }
LAB_008331a4:
        bVar3 = false;
        uVar2 = uVar2 - 1;
        uVar8 = uVar8 + 1;
        bVar10 = false;
      } while (uVar2 != 0);
    }
    bVar3 = bVar10;
    uVar9 = uVar9 + 1;
    if (uVar9 == param_11) {
      return false;
    }
  } while( true );
}


