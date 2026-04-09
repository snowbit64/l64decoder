// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityParallelogramArea
// Entry Point: 00b8a4ec
// Size: 260 bytes
// Signature: undefined __thiscall getDensityParallelogramArea(DensityMapOldOperations * this, Parallelogram * param_1)


/* DensityMapOldOperations::getDensityParallelogramArea(DensityMapOperationShapes::Parallelogram
   const&) */

int __thiscall
DensityMapOldOperations::getDensityParallelogramArea
          (DensityMapOldOperations *this,Parallelogram *param_1)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  ParallelogramHelper aPStack_a8 [72];
  uint local_60;
  uint local_5c;
  int local_50;
  int iStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)(this + 8);
  IVar1 = *(IntervalRoundingMode *)(this + 0x30);
  uVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
  uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
  fVar7 = (float)(ulong)uVar3;
  fVar8 = (float)(ulong)uVar4;
  ParallelogramHelper::ParallelogramHelper
            (aPStack_a8,*(float *)param_1 * fVar7,*(float *)(param_1 + 4) * fVar8,
             *(float *)(param_1 + 8) * fVar7,*(float *)(param_1 + 0xc) * fVar8,
             *(float *)(param_1 + 0x10) * fVar7,*(float *)(param_1 + 0x14) * fVar8,uVar3,uVar4,IVar1
            );
  if (local_60 < local_5c) {
    iVar5 = 0;
    uVar3 = local_60;
    do {
      ParallelogramHelper::startXIteration(aPStack_a8,uVar3);
      uVar3 = uVar3 + 1;
      iVar5 = (iStack_4c + iVar5) - local_50;
    } while (uVar3 < local_5c);
  }
  else {
    iVar5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


