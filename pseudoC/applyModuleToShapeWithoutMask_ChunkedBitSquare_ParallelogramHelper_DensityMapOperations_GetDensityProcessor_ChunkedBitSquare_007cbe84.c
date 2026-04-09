// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
// Entry Point: 007cbe84
// Size: 584 bytes
// Signature: bool __cdecl applyModuleToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>(IDensityPixelSource * param_1, ChunkedBitSquare * param_2, ParallelogramHelper * param_3, GetDensityProcessor * param_4)


/* bool DensityMapModifier::applyModuleToShapeWithoutMask<ChunkedBitSquare, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare> >(IDensityPixelSource*,
   ChunkedBitSquare*, ParallelogramHelper&,
   DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>&) */

bool DensityMapModifier::
     applyModuleToShapeWithoutMask<ChunkedBitSquare,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<ChunkedBitSquare>>
               (IDensityPixelSource *param_1,ChunkedBitSquare *param_2,ParallelogramHelper *param_3,
               GetDensityProcessor *param_4)

{
  uint *puVar1;
  int iVar2;
  GetDensityProcessor GVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  code **ppcVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  
  (**(code **)(*(long *)param_1 + 0x18))();
  (**(code **)(*(long *)param_1 + 0x20))(param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1);
  uVar8 = *(uint *)(param_3 + 0x48);
  if (uVar8 < *(uint *)(param_3 + 0x4c)) {
    do {
      ParallelogramHelper::startXIteration(param_3,uVar8);
      uVar12 = *(uint *)(param_3 + 0x58);
      if (uVar12 < *(uint *)(param_3 + 0x5c)) {
        uVar11 = (ulong)*(uint *)(param_2 + 0x34);
        do {
          iVar2 = ((uVar8 >> 5) << (ulong)(*(uint *)param_2 & 0x1f)) + (uVar12 >> 5);
          iVar10 = (int)uVar11;
          ppcVar7 = *(code ***)(*(long *)(param_2 + 0x28) + (ulong)(uint)(iVar2 * iVar10) * 8);
          uVar4 = uVar12 & 0x1f | (uVar8 & 0x1f) << 5;
          uVar5 = (**ppcVar7)(ppcVar7,uVar4,0,*(undefined4 *)(param_2 + 0x3c));
          if (*(uint *)(param_2 + 0x34) < 2) {
            uVar11 = (ulong)*(uint *)(param_2 + 0x34);
          }
          else {
            uVar13 = 1;
            puVar9 = (undefined4 *)(param_2 + 0x44);
            do {
              ppcVar7 = *(code ***)
                         (*(long *)(param_2 + 0x28) +
                         (ulong)(uint)(iVar10 * iVar2 + (int)uVar13) * 8);
              iVar6 = (**ppcVar7)(ppcVar7,uVar4,0,*puVar9);
              puVar1 = puVar9 + -1;
              uVar13 = uVar13 + 1;
              uVar11 = (ulong)*(uint *)(param_2 + 0x34);
              puVar9 = puVar9 + 2;
              uVar5 = iVar6 << (ulong)(*puVar1 & 0x1f) | uVar5;
            } while (uVar13 < uVar11);
          }
          uVar4 = uVar5 >> (ulong)(*(uint *)(param_4 + 0x14) & 0x1f) & *(uint *)(param_4 + 0x1c);
          *(uint *)(param_4 + 0x40) = uVar4;
          *(uint *)(param_4 + 0x44) = *(uint *)(param_4 + 0x20) & uVar5;
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
          if ((*(int *)(param_4 + 0x24) == 2) ||
             ((*(int *)(param_4 + 0x24) == 0) !=
              (*(uint *)(param_4 + 0x28) != (*(uint *)(param_4 + 0x20) & uVar5)))) {
            if ((int)uVar4 < *(int *)(param_4 + 0x2c)) {
              GVar3 = param_4[0x34];
joined_r0x007cc088:
              if (GVar3 == (GetDensityProcessor)0x0) goto LAB_007cbf5c;
            }
            else {
              GVar3 = param_4[0x34];
              if (*(int *)(param_4 + 0x30) < (int)uVar4) goto joined_r0x007cc088;
              if (GVar3 != (GetDensityProcessor)0x0) goto LAB_007cbf5c;
            }
            if ((*(uint *)(param_4 + 0x38) == 0) || ((*(uint *)(param_4 + 0x38) & uVar4) != 0)) {
              *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
              *(uint *)param_4 =
                   (*(int *)(param_4 + 0xc) + uVar4 &
                   ((int)(*(int *)(param_4 + 0xc) + uVar4) >> 0x1f ^ 0xffffffffU)) + *(int *)param_4
              ;
            }
          }
LAB_007cbf5c:
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(param_3 + 0x5c));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_3 + 0x4c));
  }
  return true;
}


