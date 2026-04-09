// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParallelogramWorldCoords
// Entry Point: 00768394
// Size: 592 bytes
// Signature: undefined __thiscall updateParallelogramWorldCoords(DensityMapMultiModifierLua * this, MethodInvocation * param_1)


/* DensityMapMultiModifierLua::updateParallelogramWorldCoords(MethodInvocation*) */

void __thiscall
DensityMapMultiModifierLua::updateParallelogramWorldCoords
          (DensityMapMultiModifierLua *this,MethodInvocation *param_1)

{
  IntervalRoundingMode IVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  long *local_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *local_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *local_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  fVar15 = *(float *)param_1;
  fVar16 = *(float *)(param_1 + 0x10);
  fVar17 = *(float *)(param_1 + 0x20);
  fVar18 = *(float *)(param_1 + 0x30);
  fVar19 = *(float *)(param_1 + 0x40);
  fVar20 = *(float *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x60) == 0) {
    fVar17 = fVar17 - fVar15;
    fVar18 = fVar18 - fVar16;
    fVar19 = fVar19 - fVar15;
    fVar20 = fVar20 - fVar16;
  }
  lVar5 = *(long *)this;
  lVar6 = *(long *)(this + 8);
  if (lVar6 != lVar5) {
    uVar12 = 0;
    do {
      lVar8 = uVar12 * 0x20;
      if (*(long *)(lVar5 + lVar8) != 0) {
        DensityMapOperationShapes::Parallelogram::Parallelogram((Parallelogram *)&local_118);
        DensityMapOperationShapes::localPointToUV
                  (*(BaseTerrain **)(*(long *)this + lVar8),fVar15,fVar16,&local_118,
                   (float *)((ulong)&local_118 | 4));
        DensityMapOperationShapes::localVectorToUV
                  (*(BaseTerrain **)(*(long *)this + lVar8),fVar17,fVar18,&local_110,&fStack_10c);
        DensityMapOperationShapes::localVectorToUV
                  (*(BaseTerrain **)(*(long *)this + lVar8),fVar19,fVar20,&local_108,&fStack_104);
        lVar5 = *(long *)this;
        lVar6 = *(long *)(lVar5 + lVar8 + 8);
        if (*(long *)(lVar5 + lVar8 + 0x10) != lVar6) {
          uVar9 = 0;
          do {
            pplVar10 = (long **)(lVar6 + uVar9 * 0xb0);
            plVar11 = *pplVar10;
            IVar1 = *(IntervalRoundingMode *)(pplVar10 + 0xd);
            uVar3 = (**(code **)(*plVar11 + 0x48))(plVar11);
            uVar4 = (**(code **)(*plVar11 + 0x50))(plVar11);
            fVar13 = (float)(ulong)uVar3;
            fVar14 = (float)(ulong)uVar4;
            ParallelogramHelper::ParallelogramHelper
                      ((ParallelogramHelper *)&local_100,local_118 * fVar13,fStack_114 * fVar14,
                       local_110 * fVar13,fStack_10c * fVar14,local_108 * fVar13,fStack_104 * fVar14
                       ,uVar3,uVar4,IVar1);
            uVar9 = (ulong)((int)uVar9 + 1);
            pplVar10[2] = plStack_f8;
            pplVar10[1] = local_100;
            pplVar10[4] = plStack_e8;
            pplVar10[3] = plStack_f0;
            pplVar10[0xc] = plStack_a8;
            pplVar10[0xb] = plStack_b0;
            pplVar10[10] = plStack_b8;
            pplVar10[9] = local_c0;
            pplVar10[6] = plStack_d8;
            pplVar10[5] = local_e0;
            pplVar10[8] = plStack_c8;
            pplVar10[7] = plStack_d0;
            lVar5 = *(long *)this;
            lVar8 = lVar5 + uVar12 * 0x20;
            lVar6 = *(long *)(lVar8 + 8);
            uVar7 = (*(long *)(lVar8 + 0x10) - lVar6 >> 4) * 0x2e8ba2e8ba2e8ba3;
          } while (uVar9 <= uVar7 && uVar7 - uVar9 != 0);
        }
        lVar6 = *(long *)(this + 8);
      }
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < (ulong)(lVar6 - lVar5 >> 5));
  }
  if (*(long *)(lVar2 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


