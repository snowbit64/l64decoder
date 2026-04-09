// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e8c294
// Entry Point: 00e8c294
// Size: 1576 bytes
// Signature: undefined FUN_00e8c294(void)


void FUN_00e8c294(long param_1,long param_2,int param_3,undefined8 param_4,uint param_5,int param_6,
                 undefined4 param_7)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  char *pcVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  undefined (*pauVar18) [16];
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined4 auStack_50c [224];
  undefined auStack_18c [12];
  undefined4 auStack_180 [24];
  undefined8 local_120 [2];
  undefined8 auStack_110 [10];
  long local_c0;
  undefined *local_b8;
  undefined8 *local_b0;
  long local_a8;
  ulong uStack_a0;
  long local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  undefined4 local_6c;
  long local_68;
  
  local_c0 = tpidr_el0;
  iVar7 = (int)param_4;
  local_68 = *(long *)(local_c0 + 0x28);
  local_78 = param_1;
  local_6c = param_7;
  if (param_5 == 4) {
    lVar25 = (long)param_6;
    uVar8 = (uint)*(char *)((long)&silk_nb_cbk_searchs_stage3 + lVar25);
    param_2 = param_2 + (long)(iVar7 << 2) * 2;
    lVar16 = (long)param_3;
    local_80 = (long)iVar7;
    if (*(char *)((long)&silk_nb_cbk_searchs_stage3 + lVar25) < '\x01') {
      cVar5 = silk_Lag_range_stage3[lVar25 * 8];
      cVar6 = silk_Lag_range_stage3[lVar25 * 8 + 1];
      celt_pitch_xcorr_c(param_2,param_2 + lVar16 * -2 + (long)(int)cVar6 * -2,auStack_180,param_4,
                         ((int)cVar6 - (int)cVar5) + 1,param_7);
      iVar7 = (int)cVar5;
      if (iVar7 <= cVar6) {
        lVar17 = (long)iVar7;
        iVar23 = (int)cVar6;
        iVar22 = (int)cVar5;
        if (iVar7 <= cVar6) {
          iVar22 = iVar23;
        }
        uVar8 = (iVar22 - cVar5) + 1;
        uVar20 = (ulong)uVar8;
        if (uVar8 < 8) {
          uVar9 = 0;
        }
        else {
          lVar11 = iVar23 - lVar17;
          uVar9 = uVar20 & 0xfffffff8;
          lVar17 = uVar9 + lVar17;
          puVar10 = auStack_110;
          pauVar18 = (undefined (*) [16])(auStack_18c + lVar11 * 4);
          uVar24 = uVar9;
          do {
            pauVar1 = pauVar18 + -1;
            auVar26 = *pauVar18;
            uVar24 = uVar24 - 8;
            pauVar18 = pauVar18 + -2;
            auVar27 = NEON_rev64(*pauVar1,4);
            auVar26 = NEON_rev64(auVar26,4);
            auVar27 = NEON_ext(auVar27,auVar27,8,1);
            auVar26 = NEON_ext(auVar26,auVar26,8,1);
            puVar10[-1] = auVar26._8_8_;
            puVar10[-2] = auVar26._0_8_;
            puVar10[1] = auVar27._8_8_;
            *puVar10 = auVar27._0_8_;
            puVar10 = puVar10 + 4;
          } while (uVar24 != 0);
          if (uVar9 == uVar20) goto LAB_00e8c614;
        }
        lVar11 = uVar20 - uVar9;
        puVar13 = (undefined4 *)((long)local_120 + uVar9 * 4);
        puVar15 = auStack_180 + (iVar23 - lVar17);
        do {
          lVar11 = lVar11 + -1;
          *puVar13 = *puVar15;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + -1;
        } while (lVar11 != 0);
      }
LAB_00e8c614:
      cVar5 = silk_Lag_range_stage3[lVar25 * 8 + 2];
      cVar6 = silk_Lag_range_stage3[lVar25 * 8 + 3];
      param_2 = param_2 + local_80 * 2;
      celt_pitch_xcorr_c(param_2,param_2 + lVar16 * -2 + (long)(int)cVar6 * -2,auStack_180,param_4,
                         ((int)cVar6 - (int)cVar5) + 1,local_6c);
      iVar7 = (int)cVar5;
      if (iVar7 <= cVar6) {
        lVar17 = (long)iVar7;
        iVar23 = (int)cVar6;
        iVar22 = (int)cVar5;
        if (iVar7 <= cVar6) {
          iVar22 = iVar23;
        }
        uVar8 = (iVar22 - cVar5) + 1;
        uVar20 = (ulong)uVar8;
        if (uVar8 < 8) {
          uVar9 = 0;
        }
        else {
          lVar11 = iVar23 - lVar17;
          uVar9 = uVar20 & 0xfffffff8;
          lVar17 = uVar9 + lVar17;
          puVar10 = auStack_110;
          pauVar18 = (undefined (*) [16])(auStack_18c + lVar11 * 4);
          uVar24 = uVar9;
          do {
            pauVar1 = pauVar18 + -1;
            auVar26 = *pauVar18;
            uVar24 = uVar24 - 8;
            pauVar18 = pauVar18 + -2;
            auVar27 = NEON_rev64(*pauVar1,4);
            auVar26 = NEON_rev64(auVar26,4);
            auVar27 = NEON_ext(auVar27,auVar27,8,1);
            auVar26 = NEON_ext(auVar26,auVar26,8,1);
            puVar10[-1] = auVar26._8_8_;
            puVar10[-2] = auVar26._0_8_;
            puVar10[1] = auVar27._8_8_;
            *puVar10 = auVar27._0_8_;
            puVar10 = puVar10 + 4;
          } while (uVar24 != 0);
          if (uVar9 == uVar20) goto LAB_00e8c6f4;
        }
        lVar11 = uVar20 - uVar9;
        puVar13 = (undefined4 *)((long)local_120 + uVar9 * 4);
        puVar15 = auStack_180 + (iVar23 - lVar17);
        do {
          lVar11 = lVar11 + -1;
          *puVar13 = *puVar15;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + -1;
        } while (lVar11 != 0);
      }
LAB_00e8c6f4:
      cVar5 = silk_Lag_range_stage3[lVar25 * 8 + 4];
      cVar6 = silk_Lag_range_stage3[lVar25 * 8 + 5];
      param_2 = param_2 + local_80 * 2;
      celt_pitch_xcorr_c(param_2,param_2 + lVar16 * -2 + (long)(int)cVar6 * -2,auStack_180,param_4,
                         ((int)cVar6 - (int)cVar5) + 1,local_6c);
      iVar7 = (int)cVar5;
      if (iVar7 <= cVar6) {
        lVar17 = (long)iVar7;
        iVar23 = (int)cVar6;
        iVar22 = (int)cVar5;
        if (iVar7 <= cVar6) {
          iVar22 = iVar23;
        }
        uVar8 = (iVar22 - cVar5) + 1;
        uVar20 = (ulong)uVar8;
        if (uVar8 < 8) {
          uVar9 = 0;
        }
        else {
          lVar11 = iVar23 - lVar17;
          uVar9 = uVar20 & 0xfffffff8;
          lVar17 = uVar9 + lVar17;
          puVar10 = auStack_110;
          pauVar18 = (undefined (*) [16])(auStack_18c + lVar11 * 4);
          uVar24 = uVar9;
          do {
            pauVar1 = pauVar18 + -1;
            auVar26 = *pauVar18;
            uVar24 = uVar24 - 8;
            pauVar18 = pauVar18 + -2;
            auVar27 = NEON_rev64(*pauVar1,4);
            auVar26 = NEON_rev64(auVar26,4);
            auVar27 = NEON_ext(auVar27,auVar27,8,1);
            auVar26 = NEON_ext(auVar26,auVar26,8,1);
            puVar10[-1] = auVar26._8_8_;
            puVar10[-2] = auVar26._0_8_;
            puVar10[1] = auVar27._8_8_;
            *puVar10 = auVar27._0_8_;
            puVar10 = puVar10 + 4;
          } while (uVar24 != 0);
          if (uVar9 == uVar20) goto LAB_00e8c7d4;
        }
        lVar11 = uVar20 - uVar9;
        puVar13 = (undefined4 *)((long)local_120 + uVar9 * 4);
        puVar15 = auStack_180 + (iVar23 - lVar17);
        do {
          lVar11 = lVar11 + -1;
          *puVar13 = *puVar15;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + -1;
        } while (lVar11 != 0);
      }
LAB_00e8c7d4:
      cVar5 = silk_Lag_range_stage3[lVar25 * 8 + 6];
      cVar6 = silk_Lag_range_stage3[lVar25 * 8 + 7];
      param_2 = param_2 + local_80 * 2;
      celt_pitch_xcorr_c(param_2,param_2 + lVar16 * -2 + (long)(int)cVar6 * -2,auStack_180,param_4,
                         ((int)cVar6 - (int)cVar5) + 1,local_6c);
      iVar7 = (int)cVar5;
      if (iVar7 <= cVar6) {
        iVar22 = (int)cVar6;
        if (iVar7 <= cVar6) {
          iVar7 = iVar22;
        }
        lVar16 = (long)(int)cVar5;
        uVar8 = (iVar7 - cVar5) + 1;
        uVar20 = (ulong)uVar8;
        if (uVar8 < 8) {
          uVar9 = 0;
        }
        else {
          lVar25 = iVar22 - lVar16;
          uVar9 = uVar20 & 0xfffffff8;
          puVar10 = auStack_110;
          lVar16 = uVar9 + lVar16;
          pauVar18 = (undefined (*) [16])(auStack_18c + lVar25 * 4);
          uVar24 = uVar9;
          do {
            pauVar1 = pauVar18 + -1;
            auVar26 = *pauVar18;
            uVar24 = uVar24 - 8;
            pauVar18 = pauVar18 + -2;
            auVar27 = NEON_rev64(*pauVar1,4);
            auVar26 = NEON_rev64(auVar26,4);
            auVar27 = NEON_ext(auVar27,auVar27,8,1);
            auVar26 = NEON_ext(auVar26,auVar26,8,1);
            puVar10[-1] = auVar26._8_8_;
            puVar10[-2] = auVar26._0_8_;
            puVar10[1] = auVar27._8_8_;
            *puVar10 = auVar27._0_8_;
            puVar10 = puVar10 + 4;
          } while (uVar24 != 0);
          if (uVar9 == uVar20) goto LAB_00e8c504;
        }
        lVar25 = uVar20 - uVar9;
        puVar13 = (undefined4 *)((long)local_120 + uVar9 * 4);
        puVar15 = auStack_180 + (iVar22 - lVar16);
        do {
          lVar25 = lVar25 + -1;
          *puVar13 = *puVar15;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + -1;
        } while (lVar25 != 0);
      }
      goto LAB_00e8c504;
    }
    local_88 = &silk_CB_lags_stage3;
    local_90 = silk_Lag_range_stage3 + (long)param_6 * 8;
    local_98 = 0x22;
  }
  else {
    if ((int)param_5 < 1) goto LAB_00e8c504;
    param_2 = param_2 + (long)(iVar7 << 2) * 2;
    local_98 = 0xc;
    local_88 = silk_CB_lags_stage3_10_ms;
    local_90 = &silk_Lag_range_stage3_10_ms;
    uVar8 = 0xc;
  }
  local_80 = (long)iVar7;
  local_a8 = -(long)param_3;
  local_b0 = auStack_110;
  iVar7 = 0;
  uVar24 = 0;
  uVar20 = 0;
  uStack_a0 = (ulong)param_5;
  local_b8 = auStack_18c;
  do {
    cVar5 = local_90[uVar20 * 2];
    cVar6 = (local_90 + uVar20 * 2)[1];
    celt_pitch_xcorr_c(param_2,param_2 + local_a8 * 2 + (long)(int)cVar6 * -2,auStack_180,param_4,
                       ((int)cVar6 - (int)cVar5) + 1,local_6c);
    iVar22 = (int)cVar5;
    iVar23 = (int)cVar5;
    if (iVar22 <= cVar6) {
      iVar21 = (int)cVar6;
      iVar3 = iVar23;
      if (iVar22 <= cVar6) {
        iVar3 = iVar21;
      }
      lVar16 = (long)iVar22;
      uVar2 = (iVar3 - iVar23) + 1;
      uVar9 = (ulong)uVar2;
      if (uVar2 < 8) {
        uVar14 = 0;
      }
      else {
        lVar25 = iVar21 - lVar16;
        uVar14 = uVar9 & 0xfffffff8;
        lVar16 = uVar14 + lVar16;
        pauVar18 = (undefined (*) [16])(local_b8 + lVar25 * 4);
        uVar19 = uVar14;
        puVar10 = local_b0;
        do {
          pauVar1 = pauVar18 + -1;
          auVar26 = *pauVar18;
          uVar19 = uVar19 - 8;
          pauVar18 = pauVar18 + -2;
          auVar27 = NEON_rev64(*pauVar1,4);
          auVar26 = NEON_rev64(auVar26,4);
          auVar27 = NEON_ext(auVar27,auVar27,8,1);
          auVar26 = NEON_ext(auVar26,auVar26,8,1);
          puVar10[-1] = auVar26._8_8_;
          puVar10[-2] = auVar26._0_8_;
          puVar10[1] = auVar27._8_8_;
          *puVar10 = auVar27._0_8_;
          puVar10 = puVar10 + 4;
        } while (uVar19 != 0);
        if (uVar14 == uVar9) goto LAB_00e8c48c;
      }
      lVar25 = uVar9 - uVar14;
      puVar13 = (undefined4 *)((long)local_120 + uVar14 * 4);
      puVar15 = auStack_180 + (iVar21 - lVar16);
      do {
        lVar25 = lVar25 + -1;
        *puVar13 = *puVar15;
        puVar13 = puVar13 + 1;
        puVar15 = puVar15 + -1;
      } while (lVar25 != 0);
    }
LAB_00e8c48c:
    puVar10 = (undefined8 *)(local_78 + (long)iVar7 * 0x14);
    pcVar12 = local_88 + (uVar24 >> 1 & 0x7fffffff) * 2;
    uVar9 = (ulong)uVar8;
    do {
      uVar9 = uVar9 - 1;
      lVar16 = ((long)*pcVar12 - (long)iVar23) * 4;
      auVar26 = *(undefined (*) [16])((long)local_120 + lVar16);
      uVar4 = *(undefined4 *)((long)auStack_110 + lVar16);
      puVar10[1] = auVar26._8_8_;
      *puVar10 = auVar26._0_8_;
      *(undefined4 *)(puVar10 + 2) = uVar4;
      puVar10 = (undefined8 *)((long)puVar10 + 0x14);
      pcVar12 = pcVar12 + 1;
    } while (uVar9 != 0);
    uVar20 = uVar20 + 1;
    iVar7 = iVar7 + uVar8;
    param_2 = param_2 + local_80 * 2;
    uVar24 = uVar24 + local_98;
  } while (uVar20 != uStack_a0);
LAB_00e8c504:
  if (*(long *)(local_c0 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


