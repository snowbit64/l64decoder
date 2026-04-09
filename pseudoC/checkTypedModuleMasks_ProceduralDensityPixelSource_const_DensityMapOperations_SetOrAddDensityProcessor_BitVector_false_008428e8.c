// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkTypedModuleMasks<ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
// Entry Point: 008428e8
// Size: 704 bytes
// Signature: bool __cdecl checkTypedModuleMasks<ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>(TypedModuleWithMasks * param_1, IDensityPixelSource * param_2, uint param_3, uint param_4, HelperSource * param_5, IDensityPixelSource * param_6, uint param_7, uint param_8, uint param_9, uint param_10, uint param_11)


/* bool DensityMapModifier::checkTypedModuleMasks<ProceduralDensityPixelSource const,
   DensityMapOperations::SetOrAddDensityProcessor<BitVector, false>
   >(DensityMapModifier::TypedModuleWithMasks<DensityMapOperations::SetOrAddDensityProcessor<BitVector,
   false> > const&, IDensityPixelSource const*, unsigned int, unsigned int,
   DensityMapAccessUtil::HelperSource<ProceduralDensityPixelSource const>&, IDensityPixelSource
   const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

bool DensityMapModifier::
     checkTypedModuleMasks<ProceduralDensityPixelSource_const,DensityMapOperations::SetOrAddDensityProcessor<BitVector,false>>
               (TypedModuleWithMasks *param_1,IDensityPixelSource *param_2,uint param_3,uint param_4
               ,HelperSource *param_5,IDensityPixelSource *param_6,uint param_7,uint param_8,
               uint param_9,uint param_10,uint param_11)

{
  TypedModuleWithMasks TVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  IDensityPixelSource *pIVar7;
  uint uVar8;
  uint uVar9;
  
  pIVar7 = *(IDensityPixelSource **)(param_1 + 0x78);
  if (pIVar7 == (IDensityPixelSource *)0x0) {
    return true;
  }
  bVar4 = pIVar7 == param_2;
  if (bVar4) {
    if ((*(int *)(param_1 + 0x80) != 2) &&
       ((*(int *)(param_1 + 0x80) == 0) == (*(uint *)(param_1 + 0x84) != param_3))) {
      return false;
    }
    uVar9 = param_4 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
            (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
    if ((int)uVar9 < *(int *)(param_1 + 0x90)) {
      TVar1 = param_1[0x98];
joined_r0x00842a08:
      if (TVar1 == (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    else {
      TVar1 = param_1[0x98];
      if (*(int *)(param_1 + 0x94) < (int)uVar9) goto joined_r0x00842a08;
      if (TVar1 != (TypedModuleWithMasks)0x0) {
        return false;
      }
    }
    if ((*(uint *)(param_1 + 0x9c) != 0) && ((*(uint *)(param_1 + 0x9c) & uVar9) == 0)) {
      return false;
    }
    if (*(IDensityPixelSource **)(param_1 + 0xa8) == param_2) {
      if (pIVar7 == param_2) {
        return true;
      }
      goto LAB_00842a3c;
    }
  }
  else if (*(IDensityPixelSource **)(param_1 + 0xa8) == param_2) goto LAB_00842a3c;
  if ((*(int *)(param_1 + 0xb0) != 2) &&
     ((*(int *)(param_1 + 0xb0) == 0) == (*(uint *)(param_1 + 0xb4) != param_3))) {
    return false;
  }
  uVar9 = param_4 >> (ulong)(*(uint *)(param_1 + 0xb8) & 0x1f) &
          (-1 << (ulong)(*(uint *)(param_1 + 0xbc) & 0x1f) ^ 0xffffffffU);
  if ((int)uVar9 < *(int *)(param_1 + 0xc0)) {
    TVar1 = param_1[200];
joined_r0x008429f0:
    if (TVar1 == (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  else {
    TVar1 = param_1[200];
    if (*(int *)(param_1 + 0xc4) < (int)uVar9) goto joined_r0x008429f0;
    if (TVar1 != (TypedModuleWithMasks)0x0) {
      return false;
    }
  }
  uVar8 = *(uint *)(param_1 + 0xcc);
  bVar5 = (uVar8 & uVar9) == 0;
  bVar3 = uVar8 == 0 || !bVar5;
  if (uVar8 != 0 && bVar5) {
    return bVar3;
  }
  if (pIVar7 == param_2) {
    return bVar3;
  }
LAB_00842a3c:
  if (param_11 == 0) {
    return false;
  }
  uVar9 = 0;
  do {
    bVar3 = bVar4;
    if (param_10 != 0) {
      uVar8 = param_8;
      uVar2 = param_10;
      do {
        *(uint *)(param_5 + 0x18) = uVar8;
        *(uint *)(param_5 + 0x1c) = uVar9 + param_9;
        uVar6 = (**(code **)(**(long **)(param_5 + 0x10) + 0x58))
                          (*(long **)(param_5 + 0x10),uVar8,uVar9 + param_9);
        *(uint *)(param_5 + 0x20) = uVar6;
        if (bVar4) {
          return true;
        }
        if ((*(int *)(param_1 + 0x80) == 2) ||
           ((*(int *)(param_1 + 0x80) == 0) != (*(uint *)(param_1 + 0x84) != (uVar6 & param_7)))) {
          uVar6 = uVar6 >> (ulong)(*(uint *)(param_1 + 0x88) & 0x1f) &
                  (-1 << (ulong)(*(uint *)(param_1 + 0x8c) & 0x1f) ^ 0xffffffffU);
          if ((int)uVar6 < *(int *)(param_1 + 0x90)) {
            TVar1 = param_1[0x98];
joined_r0x00842b14:
            if (TVar1 == (TypedModuleWithMasks)0x0) goto LAB_00842a78;
          }
          else {
            TVar1 = param_1[0x98];
            if (*(int *)(param_1 + 0x94) < (int)uVar6) goto joined_r0x00842b14;
            if (TVar1 != (TypedModuleWithMasks)0x0) goto LAB_00842a78;
          }
          if (*(uint *)(param_1 + 0x9c) == 0) {
            return true;
          }
          if ((*(uint *)(param_1 + 0x9c) & uVar6) != 0) {
            return true;
          }
        }
LAB_00842a78:
        bVar4 = false;
        uVar2 = uVar2 - 1;
        uVar8 = uVar8 + 1;
        bVar3 = false;
      } while (uVar2 != 0);
    }
    bVar4 = bVar3;
    uVar9 = uVar9 + 1;
    if (uVar9 == param_11) {
      return false;
    }
  } while( true );
}


