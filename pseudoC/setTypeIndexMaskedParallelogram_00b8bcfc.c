// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTypeIndexMaskedParallelogram
// Entry Point: 00b8bcfc
// Size: 516 bytes
// Signature: undefined __thiscall setTypeIndexMaskedParallelogram(DensityMapOldOperations * this, Parallelogram * param_1, DensityMap * param_2, uint param_3, uint param_4, OPERATION param_5, uint param_6, int param_7, int param_8, uint param_9, uint param_10, uint param_11, uint * param_12, uint * param_13)


/* DensityMapOldOperations::setTypeIndexMaskedParallelogram(DensityMapOperationShapes::Parallelogram
   const&, DensityMap*, unsigned int, unsigned int, DensityMapFilter::OPERATION, unsigned int, int,
   int, unsigned int, unsigned int, unsigned int, unsigned int&, unsigned int&) */

void __thiscall
DensityMapOldOperations::setTypeIndexMaskedParallelogram
          (DensityMapOldOperations *this,Parallelogram *param_1,DensityMap *param_2,uint param_3,
          uint param_4,OPERATION param_5,uint param_6,int param_7,int param_8,uint param_9,
          uint param_10,uint param_11,uint *param_12,uint *param_13)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
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
  undefined8 local_f8;
  undefined4 local_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  ParallelogramHelper aPStack_d0 [96];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)0x0;
  if (*(long *)(this + 8) != 0) {
    plVar7 = (long *)(*(long *)(this + 8) + 0x58);
  }
  local_f8 = 2;
  local_100 = plVar7;
  uVar3 = (**(code **)(*plVar7 + 0x28))(plVar7);
  iVar4 = (**(code **)(*plVar7 + 0x30))(plVar7);
  iStack_ec = (**(code **)(*plVar7 + 0x28))(plVar7);
  plVar7 = (long *)0x0;
  if (param_2 != (DensityMap *)0x0) {
    plVar7 = (long *)(param_2 + 0x58);
  }
  local_dc = 0;
  uStack_d8 = 0;
  iStack_ec = iVar4 - iStack_ec;
  local_e0 = 0;
  local_e8 = 0x7fffffff00000000;
  local_130 = plVar7;
  local_f0 = uVar3;
  (**(code **)(*plVar7 + 0x28))(plVar7);
  (**(code **)(*plVar7 + 0x30))(plVar7);
  (**(code **)(*plVar7 + 0x28))(plVar7);
  local_110 = 0;
  local_10c = param_9;
  uStack_108 = param_10;
  plVar7 = *(long **)(this + 8);
  IVar1 = *(IntervalRoundingMode *)(this + 0x30);
  iStack_114 = param_8;
  local_128 = param_5;
  uStack_124 = param_6;
  local_120 = param_3;
  uStack_11c = param_4;
  local_118 = param_7;
  uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
  uVar6 = (**(code **)(*plVar7 + 0x50))(plVar7);
  fVar8 = (float)(ulong)uVar5;
  fVar9 = (float)(ulong)uVar6;
  ParallelogramHelper::ParallelogramHelper
            (aPStack_d0,*(float *)param_1 * fVar8,*(float *)(param_1 + 4) * fVar9,
             *(float *)(param_1 + 8) * fVar8,*(float *)(param_1 + 0xc) * fVar9,
             *(float *)(param_1 + 0x10) * fVar8,*(float *)(param_1 + 0x14) * fVar9,uVar5,uVar6,IVar1
            );
  DensityMapOperations::setTypeIndex<ParallelogramHelper>
            (aPStack_d0,(DensityMapFilter *)&local_100,(DensityMapFilter *)&local_130,
             (DensityMapFilter *)0x0,param_11,param_12,param_13);
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


