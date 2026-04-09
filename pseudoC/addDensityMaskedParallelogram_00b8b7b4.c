// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDensityMaskedParallelogram
// Entry Point: 00b8b7b4
// Size: 596 bytes
// Signature: undefined __thiscall addDensityMaskedParallelogram(DensityMapOldOperations * this, Parallelogram * param_1, uint param_2, uint param_3, int param_4, OPERATION param_5, uint param_6, int param_7, int param_8, uint param_9, uint param_10, DensityMap * param_11, uint param_12, uint param_13, OPERATION param_14, uint param_15, int param_16, int param_17, uint param_18, uint param_19, int param_20, uint param_21, uint * param_22, uint * param_23, int * param_24)


/* DensityMapOldOperations::addDensityMaskedParallelogram(DensityMapOperationShapes::Parallelogram
   const&, unsigned int, unsigned int, int, DensityMapFilter::OPERATION, unsigned int, int, int,
   unsigned int, unsigned int, DensityMap*, unsigned int, unsigned int, DensityMapFilter::OPERATION,
   unsigned int, int, int, unsigned int, unsigned int, int, unsigned int, unsigned int&, unsigned
   int&, int&) */

void __thiscall
DensityMapOldOperations::addDensityMaskedParallelogram
          (DensityMapOldOperations *this,Parallelogram *param_1,uint param_2,uint param_3,
          int param_4,OPERATION param_5,uint param_6,int param_7,int param_8,uint param_9,
          uint param_10,DensityMap *param_11,uint param_12,uint param_13,OPERATION param_14,
          uint param_15,int param_16,int param_17,uint param_18,uint param_19,int param_20,
          uint param_21,uint *param_22,uint *param_23,int *param_24)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long *local_130;
  OPERATION local_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  int local_118;
  int iStack_114;
  undefined local_110;
  uint local_10c;
  uint uStack_108;
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
  local_dc = param_9;
  uStack_d8 = param_10;
  local_e0 = 0;
  plVar5 = (long *)0x0;
  if (param_11 != (DensityMap *)0x0) {
    plVar5 = (long *)(param_11 + 0x58);
  }
  iStack_e4 = param_8;
  local_130 = plVar5;
  local_f8 = param_5;
  uStack_f4 = param_6;
  local_f0 = param_2;
  uStack_ec = param_3;
  local_e8 = param_7;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  (**(code **)(*plVar5 + 0x30))(plVar5);
  (**(code **)(*plVar5 + 0x28))(plVar5);
  local_128 = param_14;
  uStack_124 = param_15;
  local_110 = 0;
  plVar5 = *(long **)(this + 8);
  IVar1 = *(IntervalRoundingMode *)(this + 0x30);
  local_118 = param_16;
  iStack_114 = param_17;
  local_10c = param_18;
  uStack_108 = param_19;
  local_120 = param_12;
  uStack_11c = param_13;
  uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
  fVar6 = (float)(ulong)uVar3;
  fVar7 = (float)(ulong)uVar4;
  ParallelogramHelper::ParallelogramHelper
            (aPStack_d0,*(float *)param_1 * fVar6,*(float *)(param_1 + 4) * fVar7,
             *(float *)(param_1 + 8) * fVar6,*(float *)(param_1 + 0xc) * fVar7,
             *(float *)(param_1 + 0x10) * fVar6,*(float *)(param_1 + 0x14) * fVar7,uVar3,uVar4,IVar1
            );
  uVar3 = DensityMapOperations::addDensity<ParallelogramHelper>
                    (aPStack_d0,(DensityMapFilter *)&local_100,(DensityMapFilter *)&local_130,
                     (DensityMapFilter *)0x0,param_20,param_21,param_4,param_22,param_23,param_24);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


