// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_residual_energy_FIX
// Entry Point: 00e951b4
// Size: 772 bytes
// Signature: undefined silk_residual_energy_FIX(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)


void silk_residual_energy_FIX
               (undefined (*param_1) [16],undefined (*param_2) [16],long param_3,long param_4,
               undefined (*param_5) [16],int param_6,uint param_7,int param_8,undefined4 param_9)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined (*pauVar6) [16];
  int *piVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  undefined (*pauVar11) [16];
  undefined (*pauVar12) [16];
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auStack_b0 [8];
  undefined (*local_a8) [16];
  long local_a0;
  uint local_94;
  undefined (*local_90) [16];
  undefined (*pauStack_88) [16];
  undefined4 local_7c;
  undefined *local_78;
  int local_70;
  int local_6c;
  long local_68;
  
  local_a0 = tpidr_el0;
  uVar15 = (param_8 + param_6) * 2;
  local_68 = *(long *)(local_a0 + 0x28);
  local_78 = auStack_b0 +
             -((-(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1) + 0xf &
              0xfffffffffffffff0);
  local_a8 = param_5;
  local_94 = param_7;
  local_90 = param_2;
  pauStack_88 = param_1;
  local_70 = param_8;
  if (1 < (int)param_7) {
    local_7c = param_9;
    puVar1 = local_78 + (long)param_8 * 2;
    uVar14 = (ulong)(param_7 >> 1);
    piVar5 = (int *)(*param_2 + 4);
    do {
      silk_LPC_analysis_filter(local_78,param_3,param_4,uVar15,local_70,local_7c);
      silk_sum_sqr_shift(param_1,&local_6c,puVar1,param_6);
      piVar5[-1] = -local_6c;
      silk_sum_sqr_shift(*param_1 + 4,&local_6c,puVar1 + (long)(param_8 + param_6) * 2,param_6);
      param_1 = (undefined (*) [16])(*param_1 + 8);
      param_4 = param_4 + 0x20;
      uVar14 = uVar14 - 1;
      param_3 = param_3 + (long)(int)uVar15 * 2;
      *piVar5 = -local_6c;
      piVar5 = piVar5 + 2;
    } while (uVar14 != 0);
  }
  if (0 < (int)local_94) {
    uVar14 = (ulong)local_94;
    if (local_94 < 4) {
      uVar4 = 0;
    }
    else {
      lVar3 = uVar14 * 4;
      uVar4 = 0;
      if ((((undefined (*) [16])(*local_90 + lVar3) <= pauStack_88 ||
            (undefined (*) [16])(*pauStack_88 + lVar3) <= local_90) &&
          ((undefined (*) [16])(*local_a8 + lVar3) <= pauStack_88 ||
           (undefined (*) [16])(*pauStack_88 + lVar3) <= local_a8)) &&
         ((undefined (*) [16])(*local_a8 + lVar3) <= local_90 ||
          (undefined (*) [16])(*local_90 + lVar3) <= local_a8)) {
        uVar4 = uVar14 & 0xfffffffc;
        pauVar6 = local_90;
        uVar8 = uVar4;
        pauVar11 = local_a8;
        pauVar12 = pauStack_88;
        do {
          uVar8 = uVar8 - 4;
          auVar20 = NEON_clz(*pauVar11,4);
          auVar23 = NEON_clz(*pauVar12,4);
          auVar21._0_4_ = auVar20._0_4_ + -1;
          auVar21._4_4_ = auVar20._4_4_ + -1;
          auVar21._8_4_ = auVar20._8_4_ + -1;
          auVar21._12_4_ = auVar20._12_4_ + -1;
          auVar18 = NEON_ushl(*pauVar11,auVar21,4);
          auVar20._4_4_ = auVar23._4_4_ + -1;
          auVar20._0_4_ = auVar23._0_4_ + -1;
          auVar20._8_4_ = auVar23._8_4_ + -1;
          auVar20._12_4_ = auVar23._12_4_ + -1;
          auVar22 = NEON_ushl(*pauVar12,auVar20,4);
          uVar15 = (uint)((ulong)((long)auVar18._0_4_ * (long)auVar18._0_4_) >> 0x20);
          uVar16 = (uint)((ulong)((long)auVar18._4_4_ * (long)auVar18._4_4_) >> 0x20);
          auVar19._4_4_ = uVar16;
          auVar19._0_4_ = uVar15;
          auVar19._8_4_ = (int)((ulong)((long)auVar18._8_4_ * (long)auVar18._8_4_) >> 0x20);
          uVar17 = (uint)((ulong)((long)auVar18._12_4_ * (long)auVar18._12_4_) >> 0x20);
          auVar19._12_4_ = uVar17;
          auVar20 = *pauVar6;
          *(int *)pauVar6[1] = auVar23._8_4_ + auVar20._8_4_ + auVar21._8_4_ * 2 + -0x41;
          *(int *)(pauVar6[1] + 4) = auVar23._12_4_ + auVar20._12_4_ + auVar21._12_4_ * 2 + -0x41;
          *(int *)*pauVar6 = auVar23._0_4_ + auVar20._0_4_ + auVar21._0_4_ * 2 + -0x41;
          *(int *)(*pauVar6 + 4) = auVar23._4_4_ + auVar20._4_4_ + auVar21._4_4_ * 2 + -0x41;
          *(ulong *)(*pauVar12 + 8) =
               CONCAT44((int)((ulong)uVar17 * (long)auVar22._12_4_ >> 0x20),
                        (int)((auVar19._8_8_ & 0xffffffff) * (long)auVar22._8_4_ >> 0x20));
          *(ulong *)*pauVar12 =
               CONCAT44((int)((ulong)uVar16 * (long)auVar22._4_4_ >> 0x20),
                        (int)((ulong)uVar15 * (long)auVar22._0_4_ >> 0x20));
          pauVar6 = pauVar6 + 1;
          pauVar11 = pauVar11 + 1;
          pauVar12 = pauVar12 + 1;
        } while (uVar8 != 0);
        if (uVar4 == uVar14) goto LAB_00e95354;
      }
    }
    lVar9 = uVar4 * 4;
    lVar3 = uVar14 - uVar4;
    piVar5 = (int *)(*local_90 + lVar9);
    piVar7 = (int *)(*local_a8 + lVar9);
    piVar10 = (int *)(*pauStack_88 + lVar9);
    do {
      lVar3 = lVar3 + -1;
      uVar15 = (int)LZCOUNT(*piVar7) - 1;
      iVar13 = (int)LZCOUNT(*piVar10);
      iVar2 = *piVar7 << (ulong)(uVar15 & 0x1f);
      *piVar10 = (int)(((ulong)((long)iVar2 * (long)iVar2) >> 0x20) *
                       (long)(*piVar10 << (ulong)(iVar13 - 1U & 0x1f)) >> 0x20);
      *piVar5 = iVar13 + *piVar5 + uVar15 * 2 + -0x41;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
      piVar10 = piVar10 + 1;
    } while (lVar3 != 0);
  }
LAB_00e95354:
  if (*(long *)(local_a0 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


