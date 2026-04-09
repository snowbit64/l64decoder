// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDensityParallelogramSimple
// Entry Point: 00b8adcc
// Size: 364 bytes
// Signature: undefined __thiscall setDensityParallelogramSimple(DensityMapOldOperations * this, Parallelogram * param_1, uint param_2, uint param_3, uint param_4)


/* DensityMapOldOperations::setDensityParallelogramSimple(DensityMapOperationShapes::Parallelogram
   const&, unsigned int, unsigned int, unsigned int) */

void __thiscall
DensityMapOldOperations::setDensityParallelogramSimple
          (DensityMapOldOperations *this,Parallelogram *param_1,uint param_2,uint param_3,
          uint param_4)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  uint uStack_f0;
  uint uStack_ec;
  long *local_e8;
  undefined8 local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  ParallelogramHelper aPStack_b8 [96];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)0x0;
  if (*(long *)(this + 8) != 0) {
    plVar5 = (long *)(*(long *)(this + 8) + 0x58);
  }
  local_e0 = 2;
  local_e8 = plVar5;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  (**(code **)(*plVar5 + 0x30))(plVar5);
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = *(long **)(this + 8);
  local_c8 = 0;
  local_c4 = 0;
  uStack_c0 = 0;
  IVar1 = *(IntervalRoundingMode *)(this + 0x30);
  local_d0 = 0x7fffffff00000000;
  local_d8 = param_2;
  uStack_d4 = param_3;
  uVar3 = (**(code **)(*plVar5 + 0x48))(plVar5);
  uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
  fVar6 = (float)(ulong)uVar3;
  fVar7 = (float)(ulong)uVar4;
  ParallelogramHelper::ParallelogramHelper
            (aPStack_b8,*(float *)param_1 * fVar6,*(float *)(param_1 + 4) * fVar7,
             *(float *)(param_1 + 8) * fVar6,*(float *)(param_1 + 0xc) * fVar7,
             *(float *)(param_1 + 0x10) * fVar6,*(float *)(param_1 + 0x14) * fVar7,uVar3,uVar4,IVar1
            );
  uVar3 = DensityMapOperations::setDensity<ParallelogramHelper>
                    (aPStack_b8,(DensityMapFilter *)&local_e8,(DensityMapFilter *)0x0,
                     (DensityMapFilter *)0x0,param_4,0xffffffff,0,&uStack_ec,&uStack_f0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


