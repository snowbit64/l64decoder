// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeAdd
// Entry Point: 00767a6c
// Size: 328 bytes
// Signature: undefined __thiscall executeAdd(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::executeAdd(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::executeAdd(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  int iVar1;
  IntervalRoundingMode IVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  int local_dc;
  uint local_d8;
  uint uStack_d4;
  DensityMapFilter *local_d0;
  DensityMapFilter *local_c8;
  DensityMapFilter *pDStack_c0;
  ParallelogramHelper aPStack_b8 [96];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar6 = getFilters(this,param_1,1,"DensityMapModifier:executeAdd",&pDStack_c0,&local_c8,&local_d0)
  ;
  if ((uVar6 & 1) != 0) {
    plVar7 = *(long **)this;
    iVar1 = *(int *)param_1;
    IVar2 = *(IntervalRoundingMode *)(this + 0x20);
    uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
    uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
    fVar8 = (float)(ulong)uVar4;
    fVar9 = (float)(ulong)uVar5;
    ParallelogramHelper::ParallelogramHelper
              (aPStack_b8,*(float *)(this + 8) * fVar8,*(float *)(this + 0xc) * fVar9,
               *(float *)(this + 0x10) * fVar8,*(float *)(this + 0x14) * fVar9,
               *(float *)(this + 0x18) * fVar8,*(float *)(this + 0x1c) * fVar9,uVar4,uVar5,IVar2);
    uVar4 = DensityMapOperations::addDensity<ParallelogramHelper>
                      (aPStack_b8,pDStack_c0,local_c8,local_d0,iVar1,*(uint *)(this + 0x30),
                       *(int *)(this + 0x38),&local_d8,&uStack_d4,&local_dc);
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 0x118) = 1;
    *(uint *)(param_1 + 0x100) = uVar4;
    *(uint *)(param_1 + 0x110) = uStack_d4;
    *(int *)(param_1 + 0x120) = local_dc;
    *(undefined4 *)(param_1 + 0x128) = 1;
    *(uint *)(param_1 + 0x130) = local_d8;
    *(undefined4 *)(param_1 + 0x138) = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


