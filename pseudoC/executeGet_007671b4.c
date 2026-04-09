// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeGet
// Entry Point: 007671b4
// Size: 288 bytes
// Signature: undefined __thiscall executeGet(DensityMapModifierLua * this, MethodInvocation * param_1)


/* DensityMapModifierLua::executeGet(MethodInvocation*) */

void __thiscall
DensityMapModifierLua::executeGet(DensityMapModifierLua *this,MethodInvocation *param_1)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  uint local_c8;
  uint uStack_c4;
  DensityMapFilter *local_c0;
  DensityMapFilter *local_b8;
  DensityMapFilter *pDStack_b0;
  ParallelogramHelper aPStack_a8 [96];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = getFilters(this,param_1,0,"DensityMapModifier:executeGet",&pDStack_b0,&local_b8,&local_c0)
  ;
  if ((uVar5 & 1) != 0) {
    plVar6 = *(long **)this;
    IVar1 = *(IntervalRoundingMode *)(this + 0x20);
    uVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
    uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
    fVar7 = (float)(ulong)uVar3;
    fVar8 = (float)(ulong)uVar4;
    ParallelogramHelper::ParallelogramHelper
              (aPStack_a8,*(float *)(this + 8) * fVar7,*(float *)(this + 0xc) * fVar8,
               *(float *)(this + 0x10) * fVar7,*(float *)(this + 0x14) * fVar8,
               *(float *)(this + 0x18) * fVar7,*(float *)(this + 0x1c) * fVar8,uVar3,uVar4,IVar1);
    uVar3 = DensityMapOperations::getDensity<ParallelogramHelper>
                      (aPStack_a8,pDStack_b0,local_b8,local_c0,*(int *)(this + 0x38),&local_c8,
                       &uStack_c4);
    *(uint *)(param_1 + 0x100) = uVar3;
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(uint *)(param_1 + 0x110) = uStack_c4;
    *(undefined4 *)(param_1 + 0x118) = 1;
    *(uint *)(param_1 + 0x120) = local_c8;
    *(undefined4 *)(param_1 + 0x128) = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


