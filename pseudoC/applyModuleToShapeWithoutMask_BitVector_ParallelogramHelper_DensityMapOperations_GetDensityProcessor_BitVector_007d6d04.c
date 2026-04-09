// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyModuleToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
// Entry Point: 007d6d04
// Size: 504 bytes
// Signature: bool __cdecl applyModuleToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>(IDensityPixelSource * param_1, BitVector * param_2, ParallelogramHelper * param_3, GetDensityProcessor * param_4)


/* bool DensityMapModifier::applyModuleToShapeWithoutMask<BitVector, ParallelogramHelper,
   DensityMapOperations::GetDensityProcessor<BitVector> >(IDensityPixelSource*, BitVector*,
   ParallelogramHelper&, DensityMapOperations::GetDensityProcessor<BitVector>&) */

bool DensityMapModifier::
     applyModuleToShapeWithoutMask<BitVector,ParallelogramHelper,DensityMapOperations::GetDensityProcessor<BitVector>>
               (IDensityPixelSource *param_1,BitVector *param_2,ParallelogramHelper *param_3,
               GetDensityProcessor *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  
  iVar3 = (**(code **)(*(long *)param_1 + 0x18))();
  (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar4 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  uVar10 = *(uint *)(param_3 + 0x48);
  if (uVar10 < *(uint *)(param_3 + 0x4c)) {
    iVar11 = iVar3 * uVar10;
    do {
      ParallelogramHelper::startXIteration(param_3,uVar10);
      uVar7 = *(uint *)(param_3 + 0x58);
      if (uVar7 < *(uint *)(param_3 + 0x5c)) {
        uVar2 = uVar4 * (uVar7 + iVar11);
        iVar5 = *(uint *)(param_3 + 0x5c) - uVar7;
        lVar6 = *(long *)param_2;
        do {
          uVar9 = (ulong)(uVar2 >> 3) & 0xffff;
          lVar8 = *(long *)(lVar6 + (ulong)(uVar2 >> 0x13) * 8);
          if ((uint)uVar9 < 0xfffd) {
            uVar7 = *(uint *)(lVar8 + uVar9);
          }
          else {
            uVar7 = (uVar2 >> 3) + 1;
            uVar1 = (uVar2 >> 3) + 2;
            uVar7 = (uint)CONCAT12(*(undefined *)
                                    (*(long *)(lVar6 + (ulong)(uVar1 >> 0x10) * 8) +
                                    ((ulong)uVar1 & 0xffff)),
                                   CONCAT11(*(undefined *)
                                             (*(long *)(lVar6 + (ulong)(uVar7 >> 0x10) * 8) +
                                             ((ulong)uVar7 & 0xffff)),*(undefined *)(lVar8 + uVar9))
                                  );
          }
          uVar7 = uVar7 >> (ulong)(uVar2 & 7) & ~(-1 << (ulong)(uVar4 & 0x1f)) & 0xffffU;
          uVar1 = uVar7 & *(uint *)(param_4 + 0x20);
          uVar7 = uVar7 >> (ulong)(*(uint *)(param_4 + 0x14) & 0x1f) & *(uint *)(param_4 + 0x1c);
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
          *(uint *)(param_4 + 0x40) = uVar7;
          *(uint *)(param_4 + 0x44) = uVar1;
          if ((*(int *)(param_4 + 0x24) == 2) ||
             ((*(int *)(param_4 + 0x24) == 0) != (*(uint *)(param_4 + 0x28) != uVar1))) {
            if (((int)uVar7 < *(int *)(param_4 + 0x2c)) || (*(int *)(param_4 + 0x30) < (int)uVar7))
            {
              if (param_4[0x34] != (GetDensityProcessor)0x0) goto LAB_007d6ec4;
            }
            else if (param_4[0x34] == (GetDensityProcessor)0x0) {
LAB_007d6ec4:
              if ((*(uint *)(param_4 + 0x38) == 0) || ((*(uint *)(param_4 + 0x38) & uVar7) != 0)) {
                *(uint *)param_4 =
                     (*(int *)(param_4 + 0xc) + uVar7 &
                     ((int)(*(int *)(param_4 + 0xc) + uVar7) >> 0x1f ^ 0xffffffffU)) +
                     *(int *)param_4;
                *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
              }
            }
          }
          iVar5 = iVar5 + -1;
          uVar2 = uVar2 + uVar4;
        } while (iVar5 != 0);
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + iVar3;
    } while (uVar10 < *(uint *)(param_3 + 0x4c));
  }
  return true;
}


