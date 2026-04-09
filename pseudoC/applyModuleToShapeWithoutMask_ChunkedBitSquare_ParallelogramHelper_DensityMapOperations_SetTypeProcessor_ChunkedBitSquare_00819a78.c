// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>
// Entry Point: 00819a78
// Size: 708 bytes
// Signature: bool __cdecl applyModuleToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ParallelogramHelper * param_3, SetTypeProcessor * param_4)


/* bool DensityMapModifier::applyModuleToShapeWithoutMask<ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::SetTypeProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>&) */

bool DensityMapModifier::
     applyModuleToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ParallelogramHelper *param_3,
               SetTypeProcessor *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  code **ppcVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  uint uVar16;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint *local_80;
  uint local_78;
  uint uStack_74;
  uint local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_90 = (**(code **)(*(long *)param_1 + 0x18))();
  local_8c = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_88 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  uVar16 = *(uint *)(param_3 + 0x48);
  uVar12 = *(uint *)(param_3 + 0x4c);
  local_80 = (uint *)param_2;
  if (uVar16 < uVar12) {
    do {
      ParallelogramHelper::startXIteration(param_3,uVar16);
      uVar12 = *(uint *)(param_3 + 0x58);
      if (uVar12 < *(uint *)(param_3 + 0x5c)) {
        do {
          puVar6 = local_80;
          uVar3 = local_80[0xd];
          iVar2 = ((uVar16 >> 5) << (ulong)(*local_80 & 0x1f)) + (uVar12 >> 5);
          ppcVar9 = *(code ***)(*(long *)(local_80 + 10) + (ulong)(iVar2 * uVar3) * 8);
          uVar4 = uVar12 & 0x1f | (uVar16 & 0x1f) << 5;
          local_78 = uVar12;
          uStack_74 = uVar16;
          uVar7 = (**ppcVar9)(ppcVar9,uVar4,0,local_80[0xf]);
          if (1 < puVar6[0xd]) {
            puVar14 = puVar6 + 0x11;
            uVar15 = 1;
            do {
              ppcVar9 = *(code ***)
                         (*(long *)(puVar6 + 10) + (ulong)(uVar3 * iVar2 + (int)uVar15) * 8);
              iVar8 = (**ppcVar9)(ppcVar9,uVar4,0,*puVar14);
              puVar1 = puVar14 + -1;
              uVar15 = uVar15 + 1;
              puVar14 = puVar14 + 2;
              uVar7 = iVar8 << (ulong)(*puVar1 & 0x1f) | uVar7;
            } while (uVar15 < puVar6[0xd]);
          }
          local_70 = uVar7;
          DensityMapOperations::SetTypeProcessor<ChunkedBitSquare>::process
                    ((SetTypeProcessor<ChunkedBitSquare> *)param_4,(HelperSource *)&local_90);
          uVar3 = local_70;
          puVar6 = local_80;
          if (uVar7 != local_70) {
            uVar4 = local_78 & 0x1f | (uStack_74 & 0x1f) << 5;
            uVar7 = (((uStack_74 >> 5) << (ulong)(*local_80 & 0x1f)) + (local_78 >> 5)) *
                    local_80[0xd];
            lVar13 = (ulong)uVar7 * 8;
            lVar10 = *(long *)(*(long *)(local_80 + 10) + lVar13);
            uVar11 = (**(code **)(lVar10 + 8))(lVar10,uVar4,0,local_80[0xf],local_70);
            *(undefined8 *)(*(long *)(puVar6 + 10) + lVar13) = uVar11;
            if (1 < puVar6[0xd]) {
              puVar14 = puVar6 + 0x11;
              uVar15 = 1;
              do {
                lVar13 = (ulong)(uVar7 + (int)uVar15) * 8;
                lVar10 = *(long *)(*(long *)(puVar6 + 10) + lVar13);
                uVar11 = (**(code **)(lVar10 + 8))
                                   (lVar10,uVar4,0,*puVar14,uVar3 >> (ulong)(puVar14[-1] & 0x1f));
                uVar15 = uVar15 + 1;
                puVar14 = puVar14 + 2;
                *(undefined8 *)(*(long *)(puVar6 + 10) + lVar13) = uVar11;
              } while (uVar15 < puVar6[0xd]);
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(param_3 + 0x5c));
      }
      uVar12 = *(uint *)(param_3 + 0x4c);
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar12);
  }
  if (param_4[0x5c] != (SetTypeProcessor)0x0) {
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(param_4 + 0x48),*(uint *)(param_3 + 0x50),*(uint *)(param_3 + 0x48),
               *(uint *)(param_3 + 0x54),uVar12,*(uint *)(param_4 + 0x14),*(uint *)(param_4 + 0x18),
               *(uint *)(param_4 + 0x60),(bool)param_4[0x5d],true,true);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return true;
}


