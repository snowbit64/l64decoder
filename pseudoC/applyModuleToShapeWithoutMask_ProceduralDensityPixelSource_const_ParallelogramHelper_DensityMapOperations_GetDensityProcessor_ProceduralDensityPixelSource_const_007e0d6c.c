// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithoutMask<ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
// Entry Point: 007e0d6c
// Size: 368 bytes
// Signature: bool __cdecl applyModuleToShapeWithoutMask<ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>(IDensityPixelSource * param_1, ProceduralDensityPixelSource * param_2, ParallelogramHelper * param_3, GetDensityProcessor * param_4)


/* bool DensityMapModifier::applyModuleToShapeWithoutMask<ProceduralDensityPixelSource const,
   ParallelogramHelper, DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource
   const> >(IDensityPixelSource*, ProceduralDensityPixelSource const*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource const>&) */

bool DensityMapModifier::
     applyModuleToShapeWithoutMask<ProceduralDensityPixelSource_const,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ProceduralDensityPixelSource_const>>
               (IDensityPixelSource *param_1,ProceduralDensityPixelSource *param_2,
               ParallelogramHelper *param_3,GetDensityProcessor *param_4)

{
  GetDensityProcessor GVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  (**(code **)(*(long *)param_1 + 0x18))();
  (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  uVar5 = *(uint *)(param_3 + 0x48);
  uVar3 = *(uint *)(param_3 + 0x4c);
  do {
    if (uVar3 <= uVar5) {
      return true;
    }
    ParallelogramHelper::startXIteration(param_3,uVar5);
    uVar4 = *(uint *)(param_3 + 0x5c);
    for (uVar3 = *(uint *)(param_3 + 0x58); uVar3 < uVar4; uVar3 = uVar3 + 1) {
      uVar2 = (**(code **)(*(long *)param_2 + 0x58))(param_2,uVar3,uVar5);
      uVar4 = uVar2 >> (ulong)(*(uint *)(param_4 + 0x14) & 0x1f) & *(uint *)(param_4 + 0x1c);
      *(uint *)(param_4 + 0x40) = uVar4;
      *(uint *)(param_4 + 0x44) = *(uint *)(param_4 + 0x20) & uVar2;
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      if ((*(int *)(param_4 + 0x24) == 2) ||
         ((*(int *)(param_4 + 0x24) == 0) !=
          (*(uint *)(param_4 + 0x28) != (*(uint *)(param_4 + 0x20) & uVar2)))) {
        if ((int)uVar4 < *(int *)(param_4 + 0x2c)) {
          GVar1 = param_4[0x34];
joined_r0x007e0ea4:
          if (GVar1 == (GetDensityProcessor)0x0) goto LAB_007e0e08;
        }
        else {
          GVar1 = param_4[0x34];
          if (*(int *)(param_4 + 0x30) < (int)uVar4) goto joined_r0x007e0ea4;
          if (GVar1 != (GetDensityProcessor)0x0) goto LAB_007e0e08;
        }
        if ((*(uint *)(param_4 + 0x38) == 0) || ((*(uint *)(param_4 + 0x38) & uVar4) != 0)) {
          *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
          *(uint *)param_4 =
               (*(int *)(param_4 + 0xc) + uVar4 &
               ((int)(*(int *)(param_4 + 0xc) + uVar4) >> 0x1f ^ 0xffffffffU)) + *(int *)param_4;
        }
      }
LAB_007e0e08:
      uVar4 = *(uint *)(param_3 + 0x5c);
    }
    uVar3 = *(uint *)(param_3 + 0x4c);
    uVar5 = uVar5 + 1;
  } while( true );
}


