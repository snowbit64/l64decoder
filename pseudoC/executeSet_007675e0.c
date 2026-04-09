// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeSet
// Entry Point: 007675e0
// Size: 312 bytes
// Signature: undefined __thiscall executeSet(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::executeSet(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::executeSet(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  uint local_d8;
  uint uStack_d4;
  DensityMapFilter *local_d0;
  DensityMapFilter *local_c8;
  DensityMapFilter *pDStack_c0;
  ParallelogramHelper aPStack_b8 [96];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = getFilters(this,param_1,1,"DensityMapModifier:executeSet",&pDStack_c0,&local_c8,&local_d0)
  ;
  if ((uVar6 & 1) != 0) {
    plVar7 = *(long **)this;
    uVar5 = *(uint *)param_1;
    IVar1 = *(IntervalRoundingMode *)(this + 0x20);
    uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
    uVar4 = (**(code **)(*plVar7 + 0x50))(plVar7);
    fVar8 = (float)(ulong)uVar3;
    fVar9 = (float)(ulong)uVar4;
    ParallelogramHelper::ParallelogramHelper
              (aPStack_b8,*(float *)(this + 8) * fVar8,*(float *)(this + 0xc) * fVar9,
               *(float *)(this + 0x10) * fVar8,*(float *)(this + 0x14) * fVar9,
               *(float *)(this + 0x18) * fVar8,*(float *)(this + 0x1c) * fVar9,uVar3,uVar4,IVar1);
    uVar5 = DensityMapOperations::setDensity<ParallelogramHelper>
                      (aPStack_b8,pDStack_c0,local_c8,local_d0,uVar5,*(uint *)(this + 0x30),
                       *(int *)(this + 0x38),&local_d8,&uStack_d4);
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 0x118) = 1;
    *(uint *)(param_1 + 0x100) = uVar5;
    *(uint *)(param_1 + 0x110) = uStack_d4;
    *(uint *)(param_1 + 0x120) = local_d8;
    *(undefined4 *)(param_1 + 0x128) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


