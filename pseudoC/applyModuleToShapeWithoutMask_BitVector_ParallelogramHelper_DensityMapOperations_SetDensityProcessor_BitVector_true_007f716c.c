// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>
// Entry Point: 007f716c
// Size: 480 bytes
// Signature: bool __cdecl applyModuleToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>(IDensityPixelSource * param_1, BitVector * param_2, ParallelogramHelper * param_3, SetDensityProcessor * param_4)


/* bool DensityMapModifier::applyModuleToShapeWithoutMask<BitVector, ParallelogramHelper,
   DensityMapOperations::SetDensityProcessor<BitVector, true> >(IDensityPixelSource*, BitVector*,
   ParallelogramHelper&, DensityMapOperations::SetDensityProcessor<BitVector, true>&) */

bool DensityMapModifier::
     applyModuleToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::SetDensityProcessor<BitVector,true>>
               (IDensityPixelSource *param_1,BitVector *param_2,ParallelogramHelper *param_3,
               SetDensityProcessor *param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  long *local_70;
  uint local_68;
  uint uStack_64;
  uint local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_80 = (**(code **)(*(long *)param_1 + 0x18))();
  local_7c = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_78 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  uVar9 = *(uint *)(param_3 + 0x48);
  uVar3 = *(uint *)(param_3 + 0x4c);
  local_70 = (long *)param_2;
  if (uVar9 < uVar3) {
    do {
      ParallelogramHelper::startXIteration(param_3,uVar9);
      uVar4 = *(uint *)(param_3 + 0x5c);
      for (uVar3 = *(uint *)(param_3 + 0x58); uVar3 < uVar4; uVar3 = uVar3 + 1) {
        lVar8 = *local_70;
        uVar4 = (uVar3 + uVar9 * local_80) * local_78;
        lVar6 = *(long *)(lVar8 + (ulong)(uVar4 >> 0x13) * 8);
        uVar7 = (ulong)(uVar4 >> 3) & 0xffff;
        if ((uint)uVar7 < 0xfffd) {
          uVar5 = *(uint *)(lVar6 + uVar7);
        }
        else {
          uVar5 = (uVar4 >> 3) + 1;
          uVar1 = (uVar4 >> 3) + 2;
          uVar5 = (uint)CONCAT12(*(undefined *)
                                  (*(long *)(lVar8 + (ulong)(uVar1 >> 0x10) * 8) +
                                  ((ulong)uVar1 & 0xffff)),
                                 CONCAT11(*(undefined *)
                                           (*(long *)(lVar8 + (ulong)(uVar5 >> 0x10) * 8) +
                                           ((ulong)uVar5 & 0xffff)),*(undefined *)(lVar6 + uVar7)));
        }
        uVar4 = uVar5 >> (ulong)(uVar4 & 7) & (-1 << (ulong)(local_78 & 0x1f) ^ 0xffffffffU) &
                0xffff;
        local_68 = uVar3;
        uStack_64 = uVar9;
        local_60 = uVar4;
        DensityMapOperations::SetDensityProcessor<BitVector,true>::process
                  ((SetDensityProcessor<BitVector,true> *)param_4,(HelperSource *)&local_80);
        if (uVar4 != local_60) {
          DensityMapAccessUtil::writeValue
                    ((BitVector *)local_70,local_78,local_80,local_68,uStack_64,local_60);
        }
        uVar4 = *(uint *)(param_3 + 0x5c);
      }
      uVar3 = *(uint *)(param_3 + 0x4c);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar3);
  }
  if (param_4[100] != (SetDensityProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_4 + 0x50),*(uint *)(param_3 + 0x50),*(uint *)(param_3 + 0x48),
               *(uint *)(param_3 + 0x54),uVar3,*(uint *)(param_4 + 0x1c),*(uint *)(param_4 + 0x20),
               *(uint *)(param_4 + 0x68),(bool)param_4[0x65],true,true);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return true;
}


