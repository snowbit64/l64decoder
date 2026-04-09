// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e8c8bc
// Entry Point: 00e8c8bc
// Size: 1268 bytes
// Signature: undefined FUN_00e8c8bc(void)


void FUN_00e8c8bc(long param_1,long param_2,int param_3,ulong param_4,uint param_5,int param_6,
                 undefined4 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  short *psVar13;
  char *pcVar14;
  ulong uVar15;
  short *psVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined4 auStack_51c [251];
  uint local_130;
  uint uStack_12c;
  undefined8 uStack_128;
  undefined4 auStack_120 [22];
  long local_c8;
  long local_c0;
  uint *local_b8;
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  ulong local_80;
  long local_78;
  int local_70;
  undefined4 uStack_6c;
  long local_68;
  
  local_c8 = tpidr_el0;
  local_68 = *(long *)(local_c8 + 0x28);
  iVar7 = (int)param_4;
  local_70 = param_3;
  uStack_6c = param_7;
  if (param_5 == 4) {
    local_78 = (long)param_6;
    uVar9 = (ulong)*(char *)((long)&silk_nb_cbk_searchs_stage3 + local_78);
    lVar21 = (long)iVar7;
    lVar6 = param_2 + (long)(iVar7 << 2) * 2;
    if (*(char *)((long)&silk_nb_cbk_searchs_stage3 + local_78) < '\x01') {
      lVar5 = local_78 * 8;
      lVar22 = (long)(iVar7 << 2);
      iVar19 = (int)(char)silk_Lag_range_stage3[lVar5];
      lVar10 = lVar6 + (long)(iVar19 + param_3) * -2;
      local_80 = param_4;
      uVar4 = silk_inner_prod_aligned(lVar10,lVar10,param_4 & 0xffffffff,param_7);
      iVar7 = (char)silk_Lag_range_stage3[lVar5 + 1] - iVar19;
      if (iVar7 != 0 && iVar19 <= (char)silk_Lag_range_stage3[lVar5 + 1]) {
        psVar13 = (short *)(param_2 + (lVar22 - (iVar19 + param_3)) * 2);
        lVar5 = (ulong)(iVar7 + 1) - 1;
        puVar12 = &uStack_12c;
        do {
          psVar13 = psVar13 + -1;
          iVar7 = uVar4 - (int)psVar13[lVar21] * (int)psVar13[lVar21];
          uVar4 = iVar7 + (int)*psVar13 * (int)*psVar13;
          uVar1 = 0x7fffffff;
          if (iVar7 < 0) {
            uVar1 = uVar4;
          }
          if ((int)uVar4 < 0) {
            uVar4 = uVar1;
          }
          lVar5 = lVar5 + -1;
          *puVar12 = uVar4;
          puVar12 = puVar12 + 1;
        } while (lVar5 != 0);
      }
      lVar6 = lVar6 + lVar21 * 2;
      lVar5 = local_78 * 8;
      iVar20 = (int)(char)silk_Lag_range_stage3[lVar5 + 2];
      iVar7 = iVar20 + local_70;
      lVar10 = lVar6 + (long)iVar7 * -2;
      uVar4 = silk_inner_prod_aligned(lVar10,lVar10,local_80,uStack_6c);
      iVar19 = (char)silk_Lag_range_stage3[lVar5 + 3] - iVar20;
      if (iVar19 != 0 && iVar20 <= (char)silk_Lag_range_stage3[lVar5 + 3]) {
        psVar13 = (short *)(param_2 + ((lVar21 + lVar22) - (long)iVar7) * 2);
        psVar16 = (short *)(param_2 + ((lVar22 + lVar21 * 2) - (long)iVar7) * 2);
        lVar5 = (ulong)(iVar19 + 1) - 1;
        puVar12 = &uStack_12c;
        do {
          psVar16 = psVar16 + -1;
          psVar13 = psVar13 + -1;
          iVar7 = uVar4 - (int)*psVar16 * (int)*psVar16;
          uVar4 = iVar7 + (int)*psVar13 * (int)*psVar13;
          uVar1 = 0x7fffffff;
          if (iVar7 < 0) {
            uVar1 = uVar4;
          }
          if ((int)uVar4 < 0) {
            uVar4 = uVar1;
          }
          lVar5 = lVar5 + -1;
          *puVar12 = uVar4;
          puVar12 = puVar12 + 1;
        } while (lVar5 != 0);
      }
      lVar6 = lVar6 + lVar21 * 2;
      lVar5 = local_78 * 8;
      iVar20 = (int)(char)silk_Lag_range_stage3[lVar5 + 4];
      iVar7 = iVar20 + local_70;
      lVar10 = lVar6 + (long)iVar7 * -2;
      uVar4 = silk_inner_prod_aligned(lVar10,lVar10,local_80,uStack_6c);
      iVar19 = (char)silk_Lag_range_stage3[lVar5 + 5] - iVar20;
      if (iVar19 != 0 && iVar20 <= (char)silk_Lag_range_stage3[lVar5 + 5]) {
        lVar5 = (ulong)(iVar19 + 1) - 1;
        psVar13 = (short *)(param_2 + ((lVar21 * 2 + lVar22) - (long)iVar7) * 2);
        psVar16 = (short *)(param_2 + ((lVar21 * 3 + lVar22) - (long)iVar7) * 2);
        puVar12 = &uStack_12c;
        do {
          psVar16 = psVar16 + -1;
          psVar13 = psVar13 + -1;
          iVar7 = uVar4 - (int)*psVar16 * (int)*psVar16;
          uVar4 = iVar7 + (int)*psVar13 * (int)*psVar13;
          uVar1 = 0x7fffffff;
          if (iVar7 < 0) {
            uVar1 = uVar4;
          }
          if ((int)uVar4 < 0) {
            uVar4 = uVar1;
          }
          lVar5 = lVar5 + -1;
          *puVar12 = uVar4;
          puVar12 = puVar12 + 1;
        } while (lVar5 != 0);
      }
      lVar5 = local_78 * 8;
      iVar20 = (int)(char)silk_Lag_range_stage3[lVar5 + 6];
      iVar7 = iVar20 + local_70;
      lVar6 = lVar6 + lVar21 * 2 + (long)iVar7 * -2;
      local_130 = silk_inner_prod_aligned(lVar6,lVar6,local_80,uStack_6c);
      iVar19 = (char)silk_Lag_range_stage3[lVar5 + 7] - iVar20;
      if (iVar19 != 0 && iVar20 <= (char)silk_Lag_range_stage3[lVar5 + 7]) {
        psVar13 = (short *)(param_2 + ((lVar21 * 3 + lVar22) - (long)iVar7) * 2);
        psVar16 = (short *)(param_2 + ((lVar22 + lVar21 * 4) - (long)iVar7) * 2);
        lVar6 = (ulong)(iVar19 + 1) - 1;
        puVar12 = &uStack_12c;
        uVar4 = local_130;
        do {
          psVar16 = psVar16 + -1;
          psVar13 = psVar13 + -1;
          iVar7 = uVar4 - (int)*psVar16 * (int)*psVar16;
          uVar4 = iVar7 + (int)*psVar13 * (int)*psVar13;
          uVar1 = 0x7fffffff;
          if (iVar7 < 0) {
            uVar1 = uVar4;
          }
          if ((int)uVar4 < 0) {
            uVar4 = uVar1;
          }
          lVar6 = lVar6 + -1;
          *puVar12 = uVar4;
          puVar12 = puVar12 + 1;
        } while (lVar6 != 0);
      }
      if (*(long *)(local_c8 + 0x28) == local_68) {
        return;
      }
      goto LAB_00e8cdac;
    }
    local_90 = silk_Lag_range_stage3 + (long)param_6 * 8;
    local_88 = &silk_CB_lags_stage3;
    local_98 = 0x22;
LAB_00e8c98c:
    local_a8 = uVar9 & 0xffffffff;
    local_b8 = &uStack_12c;
    local_b0 = (long)iVar7 * 2;
    iVar7 = 0;
    uVar17 = 0;
    uVar9 = 0;
    local_a0 = (ulong)param_5;
    lVar21 = lVar6 + -2;
    local_c0 = local_b0 + -2;
    local_80 = param_4;
    local_78 = param_1;
    do {
      pcVar14 = local_90 + uVar9 * 2;
      cVar3 = *pcVar14;
      iVar18 = (int)cVar3;
      iVar19 = iVar18 + local_70;
      lVar5 = lVar6 + (long)iVar19 * -2;
      uVar4 = silk_inner_prod_aligned(lVar5,lVar5,local_80 & 0xffffffff,uStack_6c);
      local_130 = uVar4;
      iVar8 = (int)pcVar14[1];
      iVar20 = iVar8 - iVar18;
      if (iVar20 != 0 && iVar18 <= iVar8) {
        lVar10 = local_c0 + (long)iVar19 * -2;
        lVar5 = (ulong)(iVar20 + 1) - 1;
        psVar13 = (short *)(lVar21 + (long)iVar19 * -2);
        puVar12 = local_b8;
        do {
          psVar16 = (short *)(lVar6 + lVar10);
          lVar10 = lVar10 + -2;
          iVar19 = uVar4 - (int)*psVar16 * (int)*psVar16;
          uVar4 = iVar19 + (int)*psVar13 * (int)*psVar13;
          uVar1 = 0x7fffffff;
          if (iVar19 < 0) {
            uVar1 = uVar4;
          }
          if ((int)uVar4 < 0) {
            uVar4 = uVar1;
          }
          lVar5 = lVar5 + -1;
          *puVar12 = uVar4;
          psVar13 = psVar13 + -1;
          puVar12 = puVar12 + 1;
        } while (lVar5 != 0);
      }
      puVar11 = (undefined8 *)(local_78 + (long)iVar7 * 0x14);
      pcVar14 = local_88 + (uVar17 >> 1 & 0x7fffffff) * 2;
      uVar15 = local_a8;
      do {
        uVar15 = uVar15 - 1;
        lVar5 = (long)*pcVar14 - (long)(int)cVar3;
        uVar23 = *(undefined8 *)(&local_130 + lVar5);
        uVar2 = auStack_120[lVar5];
        puVar11[1] = *(undefined8 *)((long)&uStack_128 + lVar5 * 4);
        *puVar11 = uVar23;
        *(undefined4 *)(puVar11 + 2) = uVar2;
        puVar11 = (undefined8 *)((long)puVar11 + 0x14);
        pcVar14 = pcVar14 + 1;
      } while (uVar15 != 0);
      uVar9 = uVar9 + 1;
      iVar7 = iVar7 + (int)local_a8;
      lVar6 = lVar6 + local_b0;
      lVar21 = lVar21 + local_b0;
      uVar17 = uVar17 + local_98;
    } while (uVar9 != local_a0);
  }
  else {
    local_78 = param_1;
    if (0 < (int)param_5) {
      lVar6 = param_2 + (long)(iVar7 << 2) * 2;
      local_98 = 0xc;
      local_88 = silk_CB_lags_stage3_10_ms;
      local_90 = &silk_Lag_range_stage3_10_ms;
      uVar9 = 0xc;
      goto LAB_00e8c98c;
    }
  }
  if (*(long *)(local_c8 + 0x28) == local_68) {
    return;
  }
LAB_00e8cdac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


