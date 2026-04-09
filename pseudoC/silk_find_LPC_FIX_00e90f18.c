// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_find_LPC_FIX
// Entry Point: 00e90f18
// Size: 712 bytes
// Signature: undefined silk_find_LPC_FIX(void)


void silk_find_LPC_FIX(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  undefined auStack_160 [8];
  long local_158;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int iStack_13c;
  int local_138;
  int local_134;
  undefined auStack_130 [32];
  undefined auStack_110 [32];
  undefined auStack_f0 [64];
  undefined auStack_b0 [64];
  long local_70;
  
  local_158 = tpidr_el0;
  local_70 = *(long *)(local_158 + 0x28);
  pcVar2 = (char *)(param_1 + 0x12af);
  *pcVar2 = '\x04';
  uVar1 = *(int *)(param_1 + 0x1220) + *(int *)(param_1 + 0x11ec);
  uVar6 = (ulong)uVar1;
  silk_burg_modified_c
            (&local_144,&local_14c,auStack_b0,param_3,param_4,uVar6,
             *(undefined4 *)(param_1 + 0x11e4),*(int *)(param_1 + 0x1220),
             *(undefined4 *)(param_1 + 0x13f4));
  if (((*(int *)(param_1 + 0x1218) != 0) && (*(int *)(param_1 + 0x1238) == 0)) &&
     (*(int *)(param_1 + 0x11e4) == 4)) {
    silk_burg_modified_c
              (&local_148,&local_150,auStack_f0,param_3 + (long)(int)uVar1 * 4,param_4,uVar6,2,
               *(undefined4 *)(param_1 + 0x1220),*(undefined4 *)(param_1 + 0x13f4));
    uVar5 = local_150 - local_14c;
    if ((int)uVar5 < 0) {
      local_14c = local_150;
      local_144 = (local_144 >> (-uVar5 & 0x1f)) - local_148;
    }
    else if (uVar5 < 0x20) {
      local_144 = local_144 - (local_148 >> (uVar5 & 0x1f));
    }
    silk_A2NLSF(param_2,auStack_f0,*(undefined4 *)(param_1 + 0x1220));
    puVar7 = auStack_160 +
             -((-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | uVar6 << 1) * 2 + 0xf &
              0xfffffffffffffff0);
    iVar8 = 3;
    do {
      silk_interpolate(auStack_130,param_1 + 0x1194,param_2,iVar8,*(undefined4 *)(param_1 + 0x1220))
      ;
      silk_NLSF2A(auStack_110,auStack_130,*(undefined4 *)(param_1 + 0x1220),
                  *(undefined4 *)(param_1 + 0x13f4));
      silk_LPC_analysis_filter
                (puVar7,param_3,auStack_110,uVar6 << 1 & 0xffffffff,
                 *(undefined4 *)(param_1 + 0x1220),*(undefined4 *)(param_1 + 0x13f4));
      silk_sum_sqr_shift(&local_134,&iStack_13c,puVar7 + (long)*(int *)(param_1 + 0x1220) * 2,
                         uVar1 - *(int *)(param_1 + 0x1220));
      silk_sum_sqr_shift(&local_138,&local_140,
                         puVar7 + (long)*(int *)(param_1 + 0x1220) * 2 + (long)(int)uVar1 * 2,
                         uVar1 - *(int *)(param_1 + 0x1220));
      uVar5 = iStack_13c - local_140;
      if ((int)uVar5 < 0) {
        local_134 = local_134 >> (-uVar5 & 0x1f);
        iVar3 = -local_140;
        iVar4 = local_138 + local_134;
        uVar5 = iVar3 - local_14c;
        if (-1 < (int)uVar5) goto LAB_00e9112c;
LAB_00e9116c:
        if ((0xffffffe0 < uVar5) && (iVar4 < local_144 >> (-uVar5 & 0x1f))) {
LAB_00e9106c:
          local_14c = iVar3;
          *pcVar2 = (char)iVar8;
          local_144 = iVar4;
        }
      }
      else {
        local_138 = local_138 >> (uVar5 & 0x1f);
        iVar3 = -iStack_13c;
        iVar4 = local_138 + local_134;
        uVar5 = iVar3 - local_14c;
        if ((int)uVar5 < 0) goto LAB_00e9116c;
LAB_00e9112c:
        if (iVar4 >> (uVar5 & 0x1f) < local_144) goto LAB_00e9106c;
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != -1);
  }
  if (*pcVar2 == '\x04') {
    silk_A2NLSF(param_2,auStack_b0,*(undefined4 *)(param_1 + 0x1220));
  }
  if (*(long *)(local_158 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


