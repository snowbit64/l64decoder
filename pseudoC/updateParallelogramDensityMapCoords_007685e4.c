// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParallelogramDensityMapCoords
// Entry Point: 007685e4
// Size: 628 bytes
// Signature: undefined __thiscall updateParallelogramDensityMapCoords(DensityMapMultiModifierLua * this, MethodInvocation * param_1)


/* DensityMapMultiModifierLua::updateParallelogramDensityMapCoords(MethodInvocation*) */

void __thiscall
DensityMapMultiModifierLua::updateParallelogramDensityMapCoords
          (DensityMapMultiModifierLua *this,MethodInvocation *param_1)

{
  long lVar1;
  IntervalRoundingMode IVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long **pplVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
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
  
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  fVar16 = *(float *)param_1;
  fVar17 = *(float *)(param_1 + 0x10);
  fVar18 = *(float *)(param_1 + 0x20);
  fVar19 = *(float *)(param_1 + 0x30);
  fVar20 = *(float *)(param_1 + 0x40);
  fVar21 = *(float *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x60) == 0) {
    fVar18 = fVar18 - fVar16;
    fVar19 = fVar19 - fVar17;
    fVar20 = fVar20 - fVar16;
    fVar21 = fVar21 - fVar17;
  }
  lVar7 = *(long *)this;
  lVar8 = *(long *)(this + 8);
  if (lVar8 != lVar7) {
    uVar11 = 0;
    do {
      lVar1 = lVar7 + uVar11 * 0x20;
      lVar9 = *(long *)(lVar1 + 8);
      if (*(long *)(lVar1 + 0x10) != lVar9) {
        uVar12 = 0;
        do {
          DensityMapOperationShapes::Parallelogram::Parallelogram((Parallelogram *)&local_118);
          pplVar13 = (long **)(lVar9 + uVar12 * 0xb0);
          plVar10 = *pplVar13;
          uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
          local_118 = fVar16 / (float)(uVar6 & 0xffffffff);
          uVar6 = (**(code **)(*plVar10 + 0x50))(plVar10);
          local_114 = fVar17 / (float)(uVar6 & 0xffffffff);
          plVar10 = *pplVar13;
          uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
          local_110 = fVar18 / (float)(uVar6 & 0xffffffff);
          uVar6 = (**(code **)(*plVar10 + 0x50))(plVar10);
          local_10c = fVar19 / (float)(uVar6 & 0xffffffff);
          plVar10 = *pplVar13;
          uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10);
          local_108 = fVar20 / (float)(uVar6 & 0xffffffff);
          uVar6 = (**(code **)(*plVar10 + 0x50))(plVar10);
          local_104 = fVar21 / (float)(uVar6 & 0xffffffff);
          plVar10 = *pplVar13;
          IVar2 = *(IntervalRoundingMode *)(pplVar13 + 0xd);
          uVar4 = (**(code **)(*plVar10 + 0x48))(plVar10);
          uVar5 = (**(code **)(*plVar10 + 0x50))(plVar10);
          fVar14 = (float)(ulong)uVar4;
          fVar15 = (float)(ulong)uVar5;
          ParallelogramHelper::ParallelogramHelper
                    ((ParallelogramHelper *)&local_100,local_118 * fVar14,local_114 * fVar15,
                     local_110 * fVar14,local_10c * fVar15,local_108 * fVar14,local_104 * fVar15,
                     uVar4,uVar5,IVar2);
          uVar12 = (ulong)((int)uVar12 + 1);
          pplVar13[2] = plStack_f8;
          pplVar13[1] = local_100;
          pplVar13[4] = plStack_e8;
          pplVar13[3] = plStack_f0;
          pplVar13[0xc] = plStack_a8;
          pplVar13[0xb] = plStack_b0;
          pplVar13[10] = plStack_b8;
          pplVar13[9] = local_c0;
          pplVar13[6] = plStack_d8;
          pplVar13[5] = local_e0;
          pplVar13[8] = plStack_c8;
          pplVar13[7] = plStack_d0;
          lVar7 = *(long *)this;
          lVar8 = lVar7 + uVar11 * 0x20;
          lVar9 = *(long *)(lVar8 + 8);
          uVar6 = (*(long *)(lVar8 + 0x10) - lVar9 >> 4) * 0x2e8ba2e8ba2e8ba3;
        } while (uVar12 <= uVar6 && uVar6 - uVar12 != 0);
        lVar8 = *(long *)(this + 8);
      }
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (uVar11 < (ulong)(lVar8 - lVar7 >> 5));
  }
  if (*(long *)(lVar3 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


