// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityParallelogram
// Entry Point: 00b8a744
// Size: 392 bytes
// Signature: undefined __thiscall getDensityParallelogram(DensityMapOldOperations * this, Parallelogram * param_1, uint param_2, uint param_3, int param_4, OPERATION param_5, uint param_6, int param_7, int param_8, uint param_9, uint param_10, uint * param_11, uint * param_12)


/* DensityMapOldOperations::getDensityParallelogram(DensityMapOperationShapes::Parallelogram const&,
   unsigned int, unsigned int, int, DensityMapFilter::OPERATION, unsigned int, int, int, unsigned
   int, unsigned int, unsigned int&, unsigned int&) */

void __thiscall
DensityMapOldOperations::getDensityParallelogram
          (DensityMapOldOperations *this,Parallelogram *param_1,uint param_2,uint param_3,
          int param_4,OPERATION param_5,uint param_6,int param_7,int param_8,uint param_9,
          uint param_10,uint *param_11,uint *param_12)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long *local_100;
  OPERATION local_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  int local_e8;
  int iStack_e4;
  undefined local_e0;
  uint local_dc;
  uint uStack_d8;
  ParallelogramHelper aPStack_d0 [96];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)0x0;
  if (*(long *)(this + 8) != 0) {
    plVar5 = (long *)(*(long *)(this + 8) + 0x58);
  }
  local_100 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  (**(code **)(*plVar5 + 0x30))(plVar5);
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = *(long **)(this + 8);
  iStack_e4 = param_8;
  local_e0 = 0;
  IVar1 = *(IntervalRoundingMode *)(this + 0x30);
  local_dc = param_9;
  uStack_d8 = param_10;
  local_f8 = param_5;
  uStack_f4 = param_6;
  local_f0 = param_2;
  uStack_ec = param_3;
  local_e8 = param_7;
  uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
  fVar6 = (float)(ulong)uVar3;
  fVar7 = (float)(ulong)uVar4;
  ParallelogramHelper::ParallelogramHelper
            (aPStack_d0,*(float *)param_1 * fVar6,*(float *)(param_1 + 4) * fVar7,
             *(float *)(param_1 + 8) * fVar6,*(float *)(param_1 + 0xc) * fVar7,
             *(float *)(param_1 + 0x10) * fVar6,*(float *)(param_1 + 0x14) * fVar7,uVar3,uVar4,IVar1
            );
  uVar3 = DensityMapOperations::getDensity<ParallelogramHelper>
                    (aPStack_d0,(DensityMapFilter *)&local_100,(DensityMapFilter *)0x0,
                     (DensityMapFilter *)0x0,param_4,param_11,param_12);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


