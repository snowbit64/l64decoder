// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_LP_variable_cutoff
// Entry Point: 00e89f14
// Size: 528 bytes
// Signature: undefined silk_LP_variable_cutoff(void)


void silk_LP_variable_cutoff(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  long local_28;
  
  lVar7 = tpidr_el0;
  local_28 = *(long *)(lVar7 + 0x28);
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar5 = *(int *)(param_1 + 8);
    if ((uint)(iVar5 * -0x400) < 0x7ffc0000) {
      local_38 = 0xaa4fada0552b622;
      local_30 = 0x552b622;
      local_40 = 0x36bdf0a021da4ed;
    }
    else {
      uVar2 = iVar5 * -0x400 & 0xfc00;
      uVar8 = (ulong)uVar2;
      iVar3 = iVar5 * -0x400 + 0x40000 >> 0x10;
      if (uVar2 == 0) {
        local_40 = *(undefined8 *)(silk_Transition_LP_A_Q28 + (long)iVar3 * 8);
        local_38 = *(undefined8 *)(silk_Transition_LP_B_Q28 + (long)iVar3 * 0xc);
        local_30 = *(int *)(silk_Transition_LP_B_Q28 + (long)iVar3 * 0xc + 8);
      }
      else {
        lVar1 = (long)iVar3 * 8;
        lVar6 = (long)iVar3 * 0xc;
        if (uVar2 < 0x8000) {
          iVar3 = *(int *)(silk_Transition_LP_B_Q28 + lVar6);
          iVar4 = *(int *)(silk_Transition_LP_A_Q28 + lVar1);
          local_30 = *(int *)(silk_Transition_LP_B_Q28 + lVar6 + 8) +
                     (int)(((long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 0x18) -
                           (long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 8)) * uVar8 >> 0x10);
          local_38._4_4_ =
               *(int *)(silk_Transition_LP_B_Q28 + lVar6 + 8) +
               (int)(((long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 0x10) -
                     (long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 8)) * uVar8 >> 0x10);
          local_38._0_4_ =
               iVar3 + (int)(((long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 0x10) - (long)iVar3)
                             * uVar8 >> 0x10);
          local_40._4_4_ =
               *(int *)(silk_Transition_LP_A_Q28 + lVar1 + 8) +
               (int)(((long)*(int *)(silk_Transition_LP_A_Q28 + lVar1 + 0xc) -
                     (long)*(int *)(silk_Transition_LP_A_Q28 + lVar1 + 8)) * uVar8 >> 0x10);
          local_40._0_4_ =
               iVar4 + (int)(((long)*(int *)(silk_Transition_LP_A_Q28 + lVar1 + 8) - (long)iVar4) *
                             uVar8 >> 0x10);
        }
        else {
          lVar9 = (long)(short)uVar2;
          local_30 = *(int *)(silk_Transition_LP_B_Q28 + lVar6 + 0x18) +
                     (int)((ulong)(lVar9 * ((long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 0x18)
                                           - (long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 8)))
                          >> 0x10);
          local_38._4_4_ =
               *(int *)(silk_Transition_LP_B_Q28 + lVar6 + 0x10) +
               (int)((ulong)(lVar9 * ((long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 0x10) -
                                     (long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 8))) >> 0x10)
          ;
          local_38._0_4_ =
               *(int *)(silk_Transition_LP_B_Q28 + lVar6 + 0x10) +
               (int)((ulong)(lVar9 * ((long)*(int *)(silk_Transition_LP_B_Q28 + lVar6 + 0x10) -
                                     (long)*(int *)(silk_Transition_LP_B_Q28 + lVar6))) >> 0x10);
          local_40._4_4_ =
               *(int *)(silk_Transition_LP_A_Q28 + lVar1 + 0xc) +
               (int)((ulong)(lVar9 * ((long)*(int *)(silk_Transition_LP_A_Q28 + lVar1 + 0xc) -
                                     (long)*(int *)(silk_Transition_LP_A_Q28 + lVar1 + 8))) >> 0x10)
          ;
          local_40._0_4_ =
               *(int *)(silk_Transition_LP_A_Q28 + lVar1 + 8) +
               (int)((ulong)(lVar9 * ((long)*(int *)(silk_Transition_LP_A_Q28 + lVar1 + 8) -
                                     (long)*(int *)(silk_Transition_LP_A_Q28 + lVar1))) >> 0x10);
        }
      }
    }
    uVar2 = iVar5 + *(int *)(param_1 + 0xc);
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    if (0xff < uVar2) {
      uVar2 = 0x100;
    }
    *(uint *)(param_1 + 8) = uVar2;
    silk_biquad_alt_stride1(param_2,&local_38,&local_40,param_1,param_2,param_3);
  }
  if (*(long *)(lVar7 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


