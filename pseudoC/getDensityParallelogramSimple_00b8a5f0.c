// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityParallelogramSimple
// Entry Point: 00b8a5f0
// Size: 340 bytes
// Signature: undefined __thiscall getDensityParallelogramSimple(DensityMapOldOperations * this, Parallelogram * param_1, uint param_2, uint param_3)


/* DensityMapOldOperations::getDensityParallelogramSimple(DensityMapOperationShapes::Parallelogram
   const&, unsigned int, unsigned int) */

void __thiscall
DensityMapOldOperations::getDensityParallelogramSimple
          (DensityMapOldOperations *this,Parallelogram *param_1,uint param_2,uint param_3)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  uint uStack_e0;
  uint uStack_dc;
  long *local_d8;
  undefined8 local_d0;
  uint local_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  ParallelogramHelper aPStack_a8 [96];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)0x0;
  if (*(long *)(this + 8) != 0) {
    plVar5 = (long *)(*(long *)(this + 8) + 0x58);
  }
  local_d0 = 2;
  local_d8 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  (**(code **)(*plVar5 + 0x30))(plVar5);
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = *(long **)(this + 8);
  local_b8 = 0;
  local_b4 = 0;
  uStack_b0 = 0;
  IVar1 = *(IntervalRoundingMode *)(this + 0x30);
  local_c0 = 0x7fffffff00000000;
  local_c8 = param_2;
  uStack_c4 = param_3;
  uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
  fVar6 = (float)(ulong)uVar3;
  fVar7 = (float)(ulong)uVar4;
  ParallelogramHelper::ParallelogramHelper
            (aPStack_a8,*(float *)param_1 * fVar6,*(float *)(param_1 + 4) * fVar7,
             *(float *)(param_1 + 8) * fVar6,*(float *)(param_1 + 0xc) * fVar7,
             *(float *)(param_1 + 0x10) * fVar6,*(float *)(param_1 + 0x14) * fVar7,uVar3,uVar4,IVar1
            );
  uVar3 = DensityMapOperations::getDensity<ParallelogramHelper>
                    (aPStack_a8,(DensityMapFilter *)&local_d8,(DensityMapFilter *)0x0,
                     (DensityMapFilter *)0x0,0,&uStack_dc,&uStack_e0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


