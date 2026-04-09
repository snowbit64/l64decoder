// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_warped_autocorrelation_FIX_c
// Entry Point: 00e8ef28
// Size: 816 bytes
// Signature: undefined silk_warped_autocorrelation_FIX_c(void)


void silk_warped_autocorrelation_FIX_c
               (undefined4 *param_1,int *param_2,short *param_3,short param_4,uint param_5,
               int param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined (*pauVar17) [16];
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  long local_180 [5];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_180[4] = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_180[1] = 0;
  local_180[0] = 0;
  local_180[3] = 0;
  local_180[2] = 0;
  if (0 < (int)param_5) {
    lVar9 = (long)param_6;
    if (param_6 < 1) {
      uVar10 = (ulong)param_5;
      lVar8 = local_180[lVar9];
      do {
        sVar5 = *param_3;
        uVar10 = uVar10 - 1;
        *(int *)((long)&local_b0 + lVar9 * 4) = (int)((long)sVar5 * 0x2000);
        lVar8 = lVar8 + ((long)(int)local_b0 * (long)sVar5 * 0x2000 >> 0x10);
        param_3 = param_3 + 1;
      } while (uVar10 != 0);
      local_180[lVar9] = lVar8;
    }
    else {
      uVar19 = 0;
      uVar10 = 0;
      do {
        iVar11 = (int)param_3[uVar10] << 0xd;
        lVar8 = 0;
        do {
          lVar1 = lVar8 * 4;
          lVar2 = lVar8 + 2;
          iVar4 = *(int *)((long)&local_b0 + lVar1 + 4);
          *(int *)((long)&local_b0 + lVar1) = iVar11;
          lVar21 = (long)(int)local_b0;
          lVar7 = (long)iVar11;
          iVar3 = (int)uVar19 + (int)((ulong)((long)param_4 * (long)(iVar4 - iVar11)) >> 0x10);
          uVar14 = *(uint *)((long)&uStack_a8 + lVar1);
          uVar19 = (ulong)uVar14;
          *(int *)((long)&local_b0 + lVar1 + 4) = iVar3;
          iVar11 = iVar4 + (int)((ulong)((long)param_4 * (long)(int)(uVar14 - iVar3)) >> 0x10);
          local_180[lVar8] = local_180[lVar8] + (lVar21 * lVar7 >> 0x10);
          local_180[lVar8 + 1] = local_180[lVar8 + 1] + (iVar3 * lVar21 >> 0x10);
          lVar8 = lVar2;
        } while (lVar2 < lVar9);
        uVar19 = (ulong)(int)local_b0;
        lVar8 = local_180[lVar9];
        uVar10 = uVar10 + 1;
        *(int *)((long)&local_b0 + lVar9 * 4) = iVar11;
        local_180[lVar9] = lVar8 + ((long)(uVar19 * (long)iVar11) >> 0x10);
      } while (uVar10 != param_5);
    }
  }
  uVar14 = (int)LZCOUNT((int)local_180[0]) + 0x20;
  iVar11 = (int)((ulong)local_180[0] >> 0x20);
  if (iVar11 != 0) {
    uVar14 = (uint)LZCOUNT(iVar11);
  }
  if (uVar14 < 0xe) {
    uVar14 = 0xd;
  }
  if (0x36 < uVar14) {
    uVar14 = 0x37;
  }
  *param_2 = 0x19 - uVar14;
  if (uVar14 < 0x23) {
    if (-1 < param_6) {
      uVar10 = CONCAT44(0,0x23 - uVar14);
      *param_1 = (int)(local_180[0] >> (uVar10 & 0x3f));
      if (param_6 != 0) {
        uVar19 = (ulong)(param_6 + 1) - 1;
        if (uVar19 < 8) {
          uVar12 = 1;
        }
        else {
          auVar22._8_4_ = 0x23 - uVar14;
          auVar22._0_8_ = uVar10;
          auVar22._12_4_ = 0;
          uVar16 = uVar19 & 0xfffffffffffffff8;
          uVar12 = uVar16 | 1;
          auVar22 = NEON_neg(auVar22,8);
          puVar18 = (undefined8 *)(param_1 + 5);
          pauVar17 = (undefined (*) [16])&uStack_158;
          uVar20 = uVar16;
          do {
            uVar20 = uVar20 - 8;
            auVar25 = NEON_sshl(pauVar17[-2],auVar22,8);
            auVar23 = NEON_sshl(pauVar17[-1],auVar22,8);
            auVar28 = NEON_sshl(*pauVar17,auVar22,8);
            auVar26 = NEON_sshl(pauVar17[1],auVar22,8);
            auVar25._0_8_ = CONCAT44(auVar25._8_4_,auVar25._0_4_);
            auVar25._8_4_ = auVar23._0_4_;
            auVar25._12_4_ = auVar23._8_4_;
            auVar23._0_8_ = CONCAT44(auVar28._8_4_,auVar28._0_4_);
            auVar23._8_4_ = auVar26._0_4_;
            auVar23._12_4_ = auVar26._8_4_;
            puVar18[-1] = auVar25._8_8_;
            puVar18[-2] = auVar25._0_8_;
            puVar18[1] = auVar23._8_8_;
            *puVar18 = auVar23._0_8_;
            puVar18 = puVar18 + 4;
            pauVar17 = pauVar17 + 4;
          } while (uVar20 != 0);
          if (uVar19 == uVar16) goto LAB_00e8f22c;
        }
        lVar9 = (param_6 + 1) - uVar12;
        plVar13 = local_180 + uVar12;
        puVar15 = param_1 + uVar12;
        do {
          lVar9 = lVar9 + -1;
          *puVar15 = (int)(*plVar13 >> (uVar10 & 0x3f));
          plVar13 = plVar13 + 1;
          puVar15 = puVar15 + 1;
        } while (lVar9 != 0);
      }
    }
  }
  else if (-1 < param_6) {
    uVar10 = CONCAT44(0,uVar14 - 0x23);
    *param_1 = (int)(local_180[0] << (uVar10 & 0x3f));
    if (param_6 != 0) {
      uVar19 = (ulong)(param_6 + 1) - 1;
      if (uVar19 < 8) {
        uVar12 = 1;
      }
      else {
        uVar16 = uVar19 & 0xfffffffffffffff8;
        uVar12 = uVar16 | 1;
        puVar18 = (undefined8 *)(param_1 + 5);
        auVar26._8_4_ = uVar14 - 0x23;
        auVar26._0_8_ = uVar10;
        auVar26._12_4_ = 0;
        pauVar17 = (undefined (*) [16])&uStack_158;
        uVar20 = uVar16;
        do {
          uVar20 = uVar20 - 8;
          auVar22 = NEON_ushl(pauVar17[-2],auVar26,8);
          auVar23 = NEON_ushl(pauVar17[-1],auVar26,8);
          auVar25 = NEON_ushl(*pauVar17,auVar26,8);
          auVar27 = NEON_ushl(pauVar17[1],auVar26,8);
          auVar28._0_8_ = CONCAT44(auVar22._8_4_,auVar22._0_4_);
          auVar28._8_4_ = auVar23._0_4_;
          auVar28._12_4_ = auVar23._8_4_;
          auVar24._0_8_ = CONCAT44(auVar25._8_4_,auVar25._0_4_);
          auVar24._8_4_ = auVar27._0_4_;
          auVar24._12_4_ = auVar27._8_4_;
          puVar18[-1] = auVar28._8_8_;
          puVar18[-2] = auVar28._0_8_;
          puVar18[1] = auVar24._8_8_;
          *puVar18 = auVar24._0_8_;
          puVar18 = puVar18 + 4;
          pauVar17 = pauVar17 + 4;
        } while (uVar20 != 0);
        if (uVar19 == uVar16) goto LAB_00e8f22c;
      }
      lVar9 = (param_6 + 1) - uVar12;
      plVar13 = local_180 + uVar12;
      puVar15 = param_1 + uVar12;
      do {
        lVar9 = lVar9 + -1;
        *puVar15 = (int)(*plVar13 << (uVar10 & 0x3f));
        plVar13 = plVar13 + 1;
        puVar15 = puVar15 + 1;
      } while (lVar9 != 0);
    }
  }
LAB_00e8f22c:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


