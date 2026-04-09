// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_pitch_analysis_core
// Entry Point: 00e8adc4
// Size: 5328 bytes
// Signature: undefined silk_pitch_analysis_core(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12)


void silk_pitch_analysis_core
               (ulong param_1,undefined8 *param_2,short *param_3,undefined *param_4,int *param_5,
               uint param_6,size_t param_7,undefined4 param_8,int param_9,int param_10,uint param_11
               ,undefined4 param_12)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  undefined6 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ushort uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  char *pcVar24;
  uint uVar25;
  ushort *puVar26;
  ushort uVar27;
  ulong uVar28;
  undefined *puVar29;
  int *piVar30;
  uint *puVar31;
  long lVar32;
  short *psVar33;
  undefined6 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  ulong uVar37;
  long lVar38;
  undefined1 *puVar39;
  char *pcVar40;
  char *pcVar41;
  long lVar42;
  uint uVar43;
  undefined6 *puVar44;
  undefined uVar45;
  long lVar46;
  ulong uVar47;
  uint uVar48;
  int iVar49;
  ulong uVar50;
  ushort *puVar51;
  ushort *puVar52;
  undefined auVar53 [16];
  char cVar55;
  undefined auVar54 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined2 auStack_1fa [13];
  undefined8 uStack_1e0;
  int local_1d8;
  uint local_1d4;
  undefined8 local_1d0;
  uint local_1c4;
  undefined8 local_1c0;
  short *local_1b8;
  undefined *local_1b0;
  undefined8 *local_1a8;
  int local_19c;
  int local_198;
  int local_194;
  ulong local_190;
  undefined8 local_188;
  size_t local_180;
  undefined8 local_178;
  int *local_170;
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulong local_130;
  undefined8 local_128;
  uint local_11c;
  int local_118;
  int local_114 [4];
  ushort auStack_102 [13];
  int local_e8;
  undefined auStack_e4 [4];
  int aiStack_e0 [22];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  
  local_168 = (undefined1 *)CONCAT44(local_168._4_4_,param_8);
  local_130 = (ulong)param_11;
  iVar15 = param_11 * 5;
  iVar21 = iVar15 + 0x14;
  local_1c0 = tpidr_el0;
  uVar48 = iVar21 * param_9;
  uVar47 = (ulong)uVar48;
  local_70 = *(long *)(local_1c0 + 0x28);
  local_1b8 = param_3;
  local_1b0 = param_4;
  local_180 = param_7;
  local_170 = param_5;
  local_15c = param_6;
  silk_sum_sqr_shift(&local_118,&local_11c,param_1,uVar47);
  iVar14 = local_11c - (int)LZCOUNT(local_118);
  local_11c = iVar14 + 3;
  uVar50 = (long)&uStack_1e0 -
           ((-(ulong)(uVar48 >> 0x1f) & 0xfffffffe00000000 | uVar47 << 1) + 0xf & 0xfffffffffffffff0
           );
  uVar23 = param_1;
  if ((0 < (int)local_11c) &&
     (uVar25 = iVar14 + 4U >> 1, uVar23 = uVar50, local_11c = uVar25, 0 < (int)uVar48)) {
    if (uVar48 < 0x10) {
      uVar28 = 0;
    }
    else {
      auVar53._4_4_ = uVar25;
      auVar53._0_4_ = uVar25;
      auVar53._8_4_ = uVar25;
      auVar53._12_4_ = uVar25;
      uVar28 = uVar47 & 0xfffffff0;
      lVar32 = 0;
      auVar53 = NEON_neg(auVar53,4);
      uVar19 = uVar28;
      do {
        uVar19 = uVar19 - 0x10;
        auVar54 = *(undefined (*) [16])(param_1 + lVar32);
        auVar57 = ((undefined (*) [16])(param_1 + lVar32))[1];
        puVar36 = (undefined8 *)(uVar50 + lVar32);
        lVar32 = lVar32 + 0x20;
        auVar58._0_4_ = (int)auVar54._8_2_;
        auVar58._4_4_ = (int)auVar54._10_2_;
        auVar58._8_4_ = (int)auVar54._12_2_;
        auVar58._12_4_ = (int)auVar54._14_2_;
        auVar60._0_4_ = (int)auVar54._0_2_;
        auVar60._4_4_ = (int)auVar54._2_2_;
        auVar60._8_4_ = (int)auVar54._4_2_;
        auVar60._12_4_ = (int)auVar54._6_2_;
        auVar59._0_4_ = (int)auVar57._8_2_;
        auVar59._4_4_ = (int)auVar57._10_2_;
        auVar59._8_4_ = (int)auVar57._12_2_;
        auVar59._12_4_ = (int)auVar57._14_2_;
        auVar56._0_4_ = (int)auVar57._0_2_;
        auVar56._4_4_ = (int)auVar57._2_2_;
        auVar56._8_4_ = (int)auVar57._4_2_;
        auVar56._12_4_ = (int)auVar57._6_2_;
        auVar58 = NEON_sshl(auVar58,auVar53,4);
        auVar54 = NEON_sshl(auVar60,auVar53,4);
        auVar60 = NEON_sshl(auVar59,auVar53,4);
        auVar57 = NEON_sshl(auVar56,auVar53,4);
        auVar54._0_8_ =
             CONCAT26(auVar54._12_2_,CONCAT24(auVar54._8_2_,CONCAT22(auVar54._4_2_,auVar54._0_2_)));
        auVar54._8_2_ = auVar58._0_2_;
        auVar54._10_2_ = auVar58._4_2_;
        auVar54._12_2_ = auVar58._8_2_;
        auVar54._14_2_ = auVar58._12_2_;
        puVar36[1] = auVar54._8_8_;
        *puVar36 = auVar54._0_8_;
        *(short *)(puVar36 + 4) = auVar60._0_2_;
        *(short *)((long)puVar36 + 0x22) = auVar60._4_2_;
        *(short *)((long)puVar36 + 0x24) = auVar60._8_2_;
        *(short *)((long)puVar36 + 0x26) = auVar60._12_2_;
        *(short *)(puVar36 + 2) = auVar57._0_2_;
        *(short *)((long)puVar36 + 0x12) = auVar57._4_2_;
        *(short *)((long)puVar36 + 0x14) = auVar57._8_2_;
        *(short *)((long)puVar36 + 0x16) = auVar57._12_2_;
      } while (uVar19 != 0);
      if (uVar28 == uVar47) goto LAB_00e8af38;
    }
    do {
      lVar32 = uVar28 * 2;
      uVar28 = uVar28 + 1;
      *(short *)(uVar50 + lVar32) = (short)((int)*(short *)(param_1 + lVar32) >> (uVar25 & 0x1f));
    } while (uVar47 != uVar28);
  }
LAB_00e8af38:
  uVar48 = iVar21 * 8;
  if (param_9 == 8) {
    uVar48 = 1;
  }
  uVar25 = iVar21 * 4;
  uVar50 = uVar50 - ((-(ulong)(uVar48 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar48 << 1) + 0xf &
                    0xfffffffffffffff0);
  if (param_9 == 0x10) {
    local_88 = 0;
    silk_resampler_down2(&local_88,uVar50,uVar23,uVar47);
    local_178 = uVar50;
  }
  else {
    local_178 = uVar23;
    if (param_9 == 0xc) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      silk_resampler_down2_3(&local_88,uVar50,uVar23,uVar47);
      local_178 = uVar50;
    }
  }
  local_88 = 0;
  local_128 = CONCAT44(local_128._4_4_,param_12);
  lVar32 = uVar50 - ((-(ulong)(uVar25 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar25 << 1) + 0xf &
                    0xfffffffffffffff0);
  local_1d0 = uVar23;
  local_1a8 = param_2;
  silk_resampler_down2(&local_88,lVar32,local_178,iVar21 * 8);
  if (iVar15 + 0x13 < 0 == SCARRY4(iVar15,0x13)) {
    iVar21 = uVar25 + 1;
    psVar33 = (short *)(lVar32 + (ulong)(uVar25 - 4) * 2 + 6);
    do {
      iVar21 = iVar21 + -1;
      iVar14 = (int)*psVar33 + (int)psVar33[-1];
      if (0x7ffe < iVar14) {
        iVar14 = 0x7fff;
      }
      if (iVar14 == -0x8000 || iVar14 + 0x8000 < 0 != SCARRY4(iVar14,0x8000)) {
        iVar14 = -0x8000;
      }
      *psVar33 = (short)iVar14;
      psVar33 = psVar33 + -1;
    } while (2 < iVar21);
  }
  iVar21 = (int)local_130;
  uVar50 = -(ulong)((uint)(iVar21 * 0x84) >> 0x1f) & 0xfffffffe00000000 |
           (ulong)(uint)(iVar21 * 0x84) << 1;
  puVar52 = (ushort *)(lVar32 - (uVar50 + 0xf & 0xfffffffffffffff0));
  uVar48 = iVar21 >> 1;
  memset(puVar52,0,
         -(ulong)(uVar48 * 0x41 >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar48 * 0x41) << 1);
  uVar23 = local_128;
  local_198 = param_9;
  local_19c = param_10;
  if (iVar21 < 2) {
LAB_00e8b390:
    iVar14 = local_198;
    iVar21 = local_19c;
    lVar32 = -0x480000000000000;
    lVar42 = 0x40;
    do {
      uVar23 = lVar42 + 8;
      puVar52[lVar42] =
           (short)((short)puVar52[lVar42] * 2) +
           (short)((uint)((short)puVar52[lVar42] * 2 * (int)(short)((ulong)lVar32 >> 0x30)) >> 0x10)
      ;
      lVar32 = lVar32 + 0x10000000000000;
      lVar42 = lVar42 + -1;
    } while (8 < uVar23);
    uVar48 = 0;
  }
  else {
    puVar18 = (undefined1 *)0x0;
    if ((int)uVar48 < 2) {
      uVar48 = 1;
    }
    local_158 = (undefined1 *)(ulong)uVar48;
    puVar51 = (ushort *)(lVar32 + 0xde);
    iVar21 = 1;
    lVar32 = lVar32 + 0xa0;
    local_188 = uVar50;
    do {
      local_150 = CONCAT44(local_150._4_4_,iVar21);
      local_148 = puVar51;
      local_138 = puVar18;
      celt_pitch_xcorr_c(lVar32,lVar32 + -0x90,puVar52 + -0x88,0x28,0x41,uVar23 & 0xffffffff);
      iVar15 = *(int *)(puVar52 + -8);
      local_140 = lVar32;
      iVar12 = silk_inner_prod_aligned(lVar32,lVar32,0x28,uVar23 & 0xffffffff);
      iVar13 = silk_inner_prod_aligned(lVar32 + -0x10,lVar32 + -0x10,0x28,uVar23 & 0xffffffff);
      uVar50 = local_130;
      puVar18 = local_138;
      lVar32 = local_140;
      puVar51 = local_148;
      iVar14 = iVar12 + iVar13 + 160000;
      iVar21 = -iVar15;
      if (-1 < iVar15) {
        iVar21 = iVar15;
      }
      iVar49 = iVar14;
      if (iVar14 < 0) {
        iVar49 = -160000 - (iVar12 + iVar13);
      }
      iVar13 = (int)LZCOUNT(iVar21) - (int)LZCOUNT(iVar49);
      iVar15 = iVar15 << (ulong)((int)LZCOUNT(iVar21) - 1U & 0x1f);
      iVar12 = iVar14 << (ulong)((int)LZCOUNT(iVar49) - 1U & 0x1f);
      iVar21 = iVar12 >> 0x10;
      sVar11 = 0;
      if (iVar21 != 0) {
        sVar11 = (short)(0x1fffffff / iVar21);
      }
      lVar42 = (long)sVar11 * (long)iVar15;
      uVar48 = (int)((ulong)((long)sVar11 *
                            (long)(int)(iVar15 - ((uint)((ulong)((lVar42 >> 0x10) * (long)iVar12) >>
                                                        0x1d) & 0xfffffff8))) >> 0x10) +
               (int)((ulong)lVar42 >> 0x10);
      if (iVar13 == -0x10 || iVar13 + 0x10 < 0 != SCARRY4(iVar13,0x10)) {
        uVar43 = -iVar13 - 0xf;
        uVar25 = -0x80000000 >> (uVar43 & 0x1f);
        uVar22 = 0x7fffffff >> (ulong)(uVar43 & 0x1f);
        if ((int)uVar25 <= (int)uVar48) {
          uVar25 = uVar48;
        }
        if ((int)uVar48 <= (int)uVar22) {
          uVar22 = uVar25;
        }
        uVar27 = (ushort)(uVar22 << (ulong)(uVar43 & 0x1f));
      }
      else {
        uVar27 = (ushort)((int)uVar48 >> (iVar13 + 0xfU & 0x1f));
        if (0x2d < iVar13 + 0x1dU) {
          uVar27 = 0;
        }
      }
      lVar42 = 0xfc;
      iVar21 = (int)local_150;
      puVar52[(uint)((int)local_138 * 0x41)] = uVar27;
      puVar26 = puVar51;
      iVar15 = iVar21;
      do {
        uVar27 = *puVar26;
        puVar1 = puVar26 + -0x28;
        puVar26 = puVar26 + -1;
        iVar13 = *(int *)((long)(puVar52 + -0x88) + lVar42);
        lVar42 = lVar42 + -4;
        iVar14 = ((int)(short)*puVar1 * (int)(short)*puVar1 -
                 (int)(short)uVar27 * (int)(short)uVar27) + iVar14;
        iVar12 = -iVar13;
        if (-1 < iVar13) {
          iVar12 = iVar13;
        }
        iVar49 = -iVar14;
        if (-1 < iVar14) {
          iVar49 = iVar14;
        }
        iVar8 = (int)LZCOUNT(iVar12) - (int)LZCOUNT(iVar49);
        iVar13 = iVar13 << (ulong)((int)LZCOUNT(iVar12) - 1U & 0x1f);
        uVar48 = -iVar8 - 0xf;
        iVar49 = iVar14 << (ulong)((int)LZCOUNT(iVar49) - 1U & 0x1f);
        iVar12 = iVar49 >> 0x10;
        sVar11 = 0;
        if (iVar12 != 0) {
          sVar11 = (short)(0x1fffffff / iVar12);
        }
        lVar46 = (long)sVar11 * (long)iVar13;
        uVar22 = -0x80000000 >> (uVar48 & 0x1f);
        uVar25 = (int)((ulong)((long)sVar11 *
                              (long)(int)(iVar13 - ((uint)((ulong)((lVar46 >> 0x10) * (long)iVar49)
                                                          >> 0x1d) & 0xfffffff8))) >> 0x10) +
                 (int)((ulong)lVar46 >> 0x10);
        uVar43 = 0x7fffffff >> (ulong)(uVar48 & 0x1f);
        uVar27 = (ushort)((int)uVar25 >> (iVar8 + 0xfU & 0x1f));
        if (0x2d < iVar8 + 0x1dU) {
          uVar27 = 0;
        }
        if ((int)uVar22 <= (int)uVar25) {
          uVar22 = uVar25;
        }
        if ((int)uVar25 <= (int)uVar43) {
          uVar43 = uVar22;
        }
        if (iVar8 == -0x10 || iVar8 + 0x10 < 0 != SCARRY4(iVar8,0x10)) {
          uVar27 = (ushort)(uVar43 << (ulong)(uVar48 & 0x1f));
        }
        puVar52[iVar15] = uVar27;
        iVar15 = iVar15 + 1;
      } while (lVar42 != -4);
      lVar32 = lVar32 + 0x50;
      puVar18 = puVar18 + 1;
      iVar21 = iVar21 + 0x41;
      puVar51 = puVar51 + 0x28;
    } while (puVar18 != local_158);
    bVar10 = (int)uVar50 == 4;
    uVar48 = (uint)bVar10;
    uVar50 = local_188;
    if (!bVar10) goto LAB_00e8b390;
    lVar32 = -0x480000000000000;
    lVar42 = 0;
    do {
      uVar23 = lVar42 + 0x48;
      puVar52[lVar42 + 0x40] =
           (short)((int)(short)puVar52[lVar42 + 0x81] + (int)(short)puVar52[lVar42 + 0x40]) +
           (short)((uint)(((int)(short)puVar52[lVar42 + 0x81] + (int)(short)puVar52[lVar42 + 0x40])
                         * (int)(short)((ulong)lVar32 >> 0x30)) >> 0x10);
      lVar32 = lVar32 + 0x10000000000000;
      lVar42 = lVar42 + -1;
      iVar14 = local_198;
      iVar21 = local_19c;
    } while (8 < uVar23);
  }
  iVar21 = iVar21 * 2;
  uVar25 = iVar21 + 4;
  silk_insertion_sort_decreasing_int16(puVar52,&local_e8,0x41,(ulong)uVar25);
  uVar27 = *puVar52;
  uVar23 = local_130;
  if (0xccc < (short)uVar27) {
    local_1d8 = iVar14 * 5;
    local_1d4 = iVar14 << 1;
    uStack_1e0._4_4_ = iVar14 * 0x12 - 1;
    if (iVar21 == -4 || iVar21 + 4 < 0 != SCARRY4(iVar21,4)) {
      uVar16 = (undefined4)local_128;
      uVar27 = 0;
      *(undefined8 *)(puVar52 + -0x8e) = 0;
      *(undefined8 *)(puVar52 + -0x92) = 0;
      *(undefined8 *)(puVar52 + -0x9c) = 0;
      *(undefined8 *)(puVar52 + -0xa0) = 0;
      *(undefined8 *)(puVar52 + -0x94) = 0;
      *(undefined8 *)(puVar52 + -0x98) = 0;
      *(undefined8 *)(puVar52 + -0xac) = 0;
      *(undefined8 *)(puVar52 + -0xb0) = 0;
      *(undefined8 *)(puVar52 + -0xa4) = 0;
      *(undefined8 *)(puVar52 + -0xa8) = 0;
      *(undefined8 *)(puVar52 + -0xbc) = 0;
      *(undefined8 *)(puVar52 + -0xc0) = 0;
      *(undefined8 *)(puVar52 + -0xb4) = 0;
      *(undefined8 *)(puVar52 + -0xb8) = 0;
      *(undefined8 *)(puVar52 + -0xcc) = 0;
      *(undefined8 *)(puVar52 + -0xd0) = 0;
      *(undefined8 *)(puVar52 + -0xc4) = 0;
      *(undefined8 *)(puVar52 + -200) = 0;
      *(undefined8 *)(puVar52 + -0xdc) = 0;
      *(undefined8 *)(puVar52 + -0xe0) = 0;
      *(undefined8 *)(puVar52 + -0xd4) = 0;
      *(undefined8 *)(puVar52 + -0xd8) = 0;
      *(undefined8 *)(puVar52 + -0xec) = 0;
      *(undefined8 *)(puVar52 + -0xf0) = 0;
      *(undefined8 *)(puVar52 + -0xe4) = 0;
      *(undefined8 *)(puVar52 + -0xe8) = 0;
      *(undefined8 *)(puVar52 + -0xfc) = 0;
      *(undefined8 *)(puVar52 + -0x100) = 0;
      *(undefined8 *)(puVar52 + -0xf4) = 0;
      *(undefined8 *)(puVar52 + -0xf8) = 0;
      *(undefined8 *)(puVar52 + -0x104) = 0;
      *(undefined8 *)(puVar52 + -0x108) = 0;
      *(undefined8 *)(puVar52 + -0x10c) = 0;
      *(undefined8 *)(puVar52 + -0x110) = 0;
    }
    else {
      iVar21 = (int)((ulong)uVar27 * (long)(int)local_180 >> 0x10);
      if (iVar21 < (short)uVar27) {
        lVar32 = 0;
        do {
          *(int *)(auStack_e4 + lVar32 * 4 + -4) = *(int *)(auStack_e4 + lVar32 * 4 + -4) * 2 + 0x10
          ;
          if ((ulong)uVar25 - 1 == lVar32) goto LAB_00e8b4e4;
          lVar42 = lVar32 + 1;
          lVar32 = lVar32 + 1;
        } while (iVar21 < (short)puVar52[lVar42]);
      }
      else {
        lVar32 = 0;
      }
      uVar25 = (uint)lVar32;
LAB_00e8b4e4:
      puVar36 = (undefined8 *)(puVar52 + -0x110);
      *(undefined8 *)(puVar52 + -0x8e) = 0;
      *(undefined8 *)(puVar52 + -0x92) = 0;
      *(undefined8 *)(puVar52 + -0x9c) = 0;
      *(undefined8 *)(puVar52 + -0xa0) = 0;
      *(undefined8 *)(puVar52 + -0x94) = 0;
      *(undefined8 *)(puVar52 + -0x98) = 0;
      *(undefined8 *)(puVar52 + -0xac) = 0;
      *(undefined8 *)(puVar52 + -0xb0) = 0;
      *(undefined8 *)(puVar52 + -0xa4) = 0;
      *(undefined8 *)(puVar52 + -0xa8) = 0;
      *(undefined8 *)(puVar52 + -0xbc) = 0;
      *(undefined8 *)(puVar52 + -0xc0) = 0;
      *(undefined8 *)(puVar52 + -0xb4) = 0;
      *(undefined8 *)(puVar52 + -0xb8) = 0;
      *(undefined8 *)(puVar52 + -0xcc) = 0;
      *(undefined8 *)(puVar52 + -0xd0) = 0;
      *(undefined8 *)(puVar52 + -0xc4) = 0;
      *(undefined8 *)(puVar52 + -200) = 0;
      *(undefined8 *)(puVar52 + -0xdc) = 0;
      *(undefined8 *)(puVar52 + -0xe0) = 0;
      *(undefined8 *)(puVar52 + -0xd4) = 0;
      *(undefined8 *)(puVar52 + -0xd8) = 0;
      *(undefined8 *)(puVar52 + -0xec) = 0;
      *(undefined8 *)(puVar52 + -0xf0) = 0;
      *(undefined8 *)(puVar52 + -0xe4) = 0;
      *(undefined8 *)(puVar52 + -0xe8) = 0;
      *(undefined8 *)(puVar52 + -0xfc) = 0;
      *(undefined8 *)(puVar52 + -0x100) = 0;
      *(undefined8 *)(puVar52 + -0xf4) = 0;
      *(undefined8 *)(puVar52 + -0xf8) = 0;
      *(undefined8 *)(puVar52 + -0x104) = 0;
      *(undefined8 *)(puVar52 + -0x108) = 0;
      *(undefined8 *)(puVar52 + -0x10c) = 0;
      *puVar36 = 0;
      uVar16 = (undefined4)local_128;
      if ((int)uVar25 < 1) {
        uVar27 = 0;
      }
      else {
        uVar23 = (ulong)uVar25;
        if (uVar25 == 1) {
          uVar28 = 0;
LAB_00e8b588:
          lVar32 = uVar23 - uVar28;
          piVar30 = (int *)(auStack_e4 + uVar28 * 4 + -4);
          do {
            lVar32 = lVar32 + -1;
            *(undefined2 *)((long)puVar36 + (long)*piVar30 * 2 + -0x1a) = 1;
            piVar30 = piVar30 + 1;
          } while (lVar32 != 0);
        }
        else {
          uVar28 = uVar23 & 0xfffffffe;
          puVar29 = auStack_e4;
          uVar47 = uVar28;
          do {
            piVar30 = (int *)(puVar29 + -4);
            iVar21 = *(int *)(puVar29 + 4);
            puVar29 = puVar29 + 8;
            uVar47 = uVar47 - 2;
            *(undefined2 *)((long)puVar36 + (long)*piVar30 * 2 + -0x1a) = 1;
            *(undefined2 *)((long)puVar36 + (long)iVar21 * 2 + -0x1a) = 1;
          } while (uVar47 != 0);
          uVar16 = (undefined4)local_128;
          if (uVar28 != uVar23) goto LAB_00e8b588;
        }
        uVar27 = puVar52[-0x8c];
      }
    }
    puVar51 = puVar52 + -0x110;
    lVar32 = 0;
    do {
      uVar23 = lVar32 + 0x92;
      lVar42 = lVar32 + 0x83;
      puVar51[lVar32 + 0x85] = puVar51[lVar42] + uVar27 + puVar51[lVar32 + 0x85];
      lVar32 = lVar32 + -1;
      uVar27 = puVar51[lVar42];
    } while (0x10 < uVar23);
    lVar32 = 0;
    iVar21 = 0;
    do {
      if (0 < (short)puVar52[lVar32 + -0x10c]) {
        *(int *)(auStack_e4 + (long)iVar21 * 4 + -4) = (int)lVar32 + 0x10;
        iVar21 = iVar21 + 1;
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != 0x80);
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,iVar21);
    lVar32 = 0;
    uVar27 = puVar52[-0x8c];
    uVar20 = puVar52[-0x8d];
    do {
      uVar23 = lVar32 + 0x92;
      lVar42 = lVar32 + 0x82;
      puVar51[lVar32 + 0x85] = uVar20 + uVar27 + puVar51[lVar42] + puVar51[lVar32 + 0x85];
      lVar32 = lVar32 + -1;
      uVar27 = uVar20;
      uVar20 = puVar51[lVar42];
    } while (0x10 < uVar23);
    lVar32 = 0;
    uVar25 = 0;
    do {
      if (0 < (short)puVar52[lVar32 + -0x10d]) {
        puVar51[(int)uVar25] = (short)lVar32 + 0xe;
        uVar25 = uVar25 + 1;
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != 0x83);
    local_140 = CONCAT44(local_140._4_4_,iVar14 * 0x12);
    local_1c4 = uVar48;
    local_148 = puVar51;
    memset(puVar52,0,uVar50);
    if (0 < (int)local_130) {
      iVar21 = 0;
      local_138 = (undefined1 *)CONCAT44(local_138._4_4_,uVar25);
      lVar32 = local_178 + 0x140;
      local_150 = (ulong)uVar25;
      do {
        iVar14 = silk_inner_prod_aligned(lVar32,lVar32,0x28,uVar16);
        if (0 < (int)uVar25) {
          uVar23 = local_150;
          puVar26 = local_148;
          do {
            uVar27 = *puVar26;
            lVar42 = lVar32 + (long)(short)uVar27 * -2;
            iVar15 = silk_inner_prod_aligned(lVar32,lVar42,0x28,uVar16);
            if (iVar15 < 1) {
              uVar20 = 0;
            }
            else {
              iVar12 = silk_inner_prod_aligned(lVar42,lVar42,0x28,uVar16);
              iVar12 = iVar14 + 1 + iVar12;
              iVar13 = -iVar12;
              if (-1 < iVar12) {
                iVar13 = iVar12;
              }
              iVar12 = iVar12 << (ulong)((int)LZCOUNT(iVar13) - 1U & 0x1f);
              iVar49 = iVar12 >> 0x10;
              sVar11 = 0;
              if (iVar49 != 0) {
                sVar11 = (short)(0x1fffffff / iVar49);
              }
              iVar13 = (int)LZCOUNT(iVar15) - (int)LZCOUNT(iVar13);
              iVar15 = iVar15 << (ulong)((int)LZCOUNT(iVar15) - 1U & 0x1f);
              lVar42 = (long)sVar11 * (long)iVar15;
              uVar22 = -iVar13 - 0xf;
              uVar48 = (int)((ulong)((long)sVar11 *
                                    (long)(int)(iVar15 - ((uint)((ulong)((lVar42 >> 0x10) *
                                                                        (long)iVar12) >> 0x1d) &
                                                         0xfffffff8))) >> 0x10) +
                       (int)((ulong)lVar42 >> 0x10);
              uVar20 = (ushort)((int)uVar48 >> (iVar13 + 0xfU & 0x1f));
              uVar25 = -0x80000000 >> (uVar22 & 0x1f);
              if (0x2d < iVar13 + 0x1dU) {
                uVar20 = 0;
              }
              uVar43 = 0x7fffffff >> (ulong)(uVar22 & 0x1f);
              if ((int)uVar25 <= (int)uVar48) {
                uVar25 = uVar48;
              }
              if ((int)uVar48 <= (int)uVar43) {
                uVar43 = uVar25;
              }
              if (iVar13 == -0x10 || iVar13 + 0x10 < 0 != SCARRY4(iVar13,0x10)) {
                uVar20 = (ushort)(uVar43 << (ulong)(uVar22 & 0x1f));
              }
            }
            puVar26 = puVar26 + 1;
            uVar23 = uVar23 - 1;
            uVar16 = (undefined4)local_128;
            puVar52[(int)(short)uVar27 + iVar21 * 0x84 + -0xe] = uVar20;
          } while (uVar23 != 0);
        }
        lVar32 = lVar32 + 0x50;
        iVar21 = iVar21 + 1;
        uVar25 = (uint)local_138;
      } while (iVar21 != (int)local_130);
    }
    iVar14 = local_198;
    iVar21 = local_19c;
    uVar48 = local_1c4;
    if ((int)local_15c < 1) {
      local_178 = local_178 & 0xffffffff00000000;
    }
    else {
      if (local_198 == 0xc) {
        local_15c = (int)(local_15c << 1) / 3;
      }
      else {
        local_15c = local_15c >> (ulong)(local_198 == 0x10);
      }
      uVar16 = silk_lin2log();
      local_178 = CONCAT44(local_178._4_4_,uVar16);
    }
    puVar18 = local_158;
    uVar25 = 0xb;
    if (uVar48 == 0) {
      uVar25 = 3;
    }
    uVar23 = (ulong)uVar25;
    puVar6 = (undefined6 *)silk_CB_lags_stage2;
    if (uVar48 == 0) {
      puVar6 = &silk_CB_lags_stage2_10_ms;
    }
    if (0 < (int)local_158) {
      local_190 = 0;
      puVar39 = (undefined1 *)0x0;
      uVar50 = local_130 & 0xfffffffe;
      lVar32 = 0xb;
      if ((uVar48 & (iVar14 == 8 && 0 < iVar21)) == 0) {
        lVar32 = 3;
      }
      local_150 = CONCAT44(local_150._4_4_,(int)local_130 * 0x6660000 >> 0x10);
      local_158 = (undefined1 *)
                  CONCAT44(local_158._4_4_,(int)(short)local_130 * (int)(short)local_168);
      local_180 = lVar32 << 2;
      local_168 = (undefined1 *)((ulong)puVar18 & 0xffffffff);
      local_188 = CONCAT44(local_188._4_4_,0xffffffff);
      local_148 = (ushort *)CONCAT44(local_148._4_4_,0x80000000);
      local_194 = -0x80000000;
      do {
        local_138 = puVar39;
        iVar21 = *(int *)(auStack_e4 + (long)puVar39 * 4 + -4);
        if ((int)(uint)local_130 < 1) {
          memset(local_114,0,local_180);
        }
        else {
          lVar42 = 0;
          puVar34 = puVar6;
          uVar47 = uVar23;
          do {
            if ((uint)local_130 < 2) {
              iVar12 = 0;
              uVar28 = 0;
LAB_00e8ba70:
              iVar14 = iVar21 + -0xe + (int)uVar28 * 0x84;
              puVar44 = (undefined6 *)((long)puVar34 + uVar23 * uVar28);
              lVar46 = local_130 - uVar28;
              do {
                cVar55 = *(char *)puVar44;
                puVar44 = (undefined6 *)((long)puVar44 + uVar23);
                lVar46 = lVar46 + -1;
                iVar15 = iVar14 + cVar55;
                iVar14 = iVar14 + 0x84;
                iVar12 = iVar12 + (short)puVar52[iVar15];
              } while (lVar46 != 0);
            }
            else {
              iVar15 = 0;
              iVar12 = 0;
              uVar28 = uVar50;
              puVar44 = puVar6;
              iVar14 = iVar21 + 0x76;
              do {
                pcVar24 = (char *)((long)puVar44 + lVar42);
                uVar28 = uVar28 - 2;
                pcVar4 = (char *)((long)puVar44 + uVar47);
                puVar44 = (undefined6 *)((long)puVar44 + uVar23 * 2);
                iVar13 = iVar14 + *pcVar24;
                iVar49 = iVar14 + *pcVar4;
                iVar14 = iVar14 + 0x108;
                iVar12 = iVar12 + (short)puVar52[iVar49];
                iVar15 = iVar15 + (short)puVar52[iVar13 + -0x84];
              } while (uVar28 != 0);
              iVar12 = iVar12 + iVar15;
              uVar28 = uVar50;
              if (uVar50 != local_130) goto LAB_00e8ba70;
            }
            local_114[lVar42] = iVar12;
            lVar42 = lVar42 + 1;
            uVar47 = uVar47 + 1;
            puVar34 = (undefined6 *)((long)puVar34 + 1);
          } while (lVar42 != lVar32);
        }
        lVar42 = 0;
        uVar48 = 0;
        iVar14 = -0x80000000;
        do {
          iVar15 = local_114[lVar42];
          uVar25 = (uint)lVar42;
          if (local_114[lVar42] <= iVar14) {
            iVar15 = iVar14;
            uVar25 = uVar48;
          }
          uVar48 = uVar25;
          lVar42 = lVar42 + 1;
          iVar14 = iVar15;
        } while (lVar32 != lVar42);
        sVar11 = silk_lin2log(iVar21);
        uVar19 = local_128;
        uVar28 = local_130;
        iVar13 = local_19c;
        puVar36 = local_1a8;
        uVar47 = local_1d0;
        uVar25 = local_1d4;
        iVar12 = local_1d8;
        iVar14 = iVar15 - (sVar11 * (int)local_150 >> 7);
        if (0 < (int)local_15c) {
          iVar49 = (int)(short)(sVar11 - (short)local_178);
          uVar22 = (uint)(iVar49 * iVar49) >> 7;
          iVar49 = uVar22 + 0x40;
          iVar8 = 0;
          if (iVar49 != 0) {
            iVar8 = (int)((*(short *)local_170 * (int)local_150 >> 0xf) * uVar22) / iVar49;
          }
          iVar14 = iVar14 - iVar8;
        }
        bVar10 = false;
        if ((int)local_148 < iVar14) {
          bVar10 = iVar15 - (int)local_158 < 0;
        }
        if ((((int)local_148 < iVar14 && iVar15 != (int)local_158) &&
             bVar10 == ((int)local_148 < iVar14 && SBORROW4(iVar15,(int)local_158))) &&
           ((char)silk_CB_lags_stage2[(int)uVar48] < '\x11')) {
          local_148 = (ushort *)CONCAT44(local_148._4_4_,iVar14);
          local_190 = (ulong)uVar48;
          local_188 = CONCAT44(local_188._4_4_,iVar21);
          local_194 = iVar15;
        }
        puVar39 = local_138 + 1;
      } while (puVar39 != local_168);
      if ((int)local_188 != -1) {
        iVar21 = 0;
        uVar48 = (uint)local_130;
        if (uVar48 != 0) {
          iVar21 = local_194 / (int)uVar48;
        }
        *local_170 = iVar21 << 2;
        sVar11 = (short)local_188;
        iVar21 = (int)local_190;
        if (local_198 < 9) {
          if (0 < (int)uVar48) {
            pcVar24 = (char *)((long)puVar6 + (long)iVar21);
            uVar50 = local_130;
            do {
              cVar55 = *pcVar24;
              pcVar24 = pcVar24 + uVar23;
              uVar48 = (int)local_188 + cVar55;
              if ((int)uVar48 < 0x11) {
                uVar48 = 0x10;
              }
              if (0x8f < uVar48) {
                uVar48 = 0x90;
              }
              uVar50 = uVar50 - 1;
              *(uint *)puVar36 = uVar48;
              puVar36 = (undefined8 *)((long)puVar36 + 4);
            } while (uVar50 != 0);
          }
          sVar11 = sVar11 + -0x10;
        }
        else {
          if (local_198 == 0xc) {
            uVar22 = (int)sVar11 + sVar11 * 2 >> 1;
            if ((int)local_1d4 < (int)(uint)local_140) goto LAB_00e8bd58;
LAB_00e8bc2c:
            uVar43 = local_1d4;
            if (((int)uVar22 <= (int)local_1d4) &&
               (uVar43 = uStack_1e0._4_4_, (int)uStack_1e0._4_4_ <= (int)uVar22)) {
              uVar43 = uVar22;
            }
          }
          else {
            if (local_198 == 0x10) {
              uVar22 = (int)local_188 << 1;
            }
            else {
              uVar22 = (int)sVar11 + sVar11 * 2;
            }
            if ((int)(uint)local_140 <= (int)local_1d4) goto LAB_00e8bc2c;
LAB_00e8bd58:
            uVar43 = uStack_1e0._4_4_;
            if (((int)uVar22 < (int)(uint)local_140) &&
               (uVar43 = local_1d4, (int)local_1d4 <= (int)uVar22)) {
              uVar43 = uVar22;
            }
          }
          uVar22 = uVar43 - 2;
          if ((int)(uVar43 - 2) <= (int)local_1d4) {
            uVar22 = local_1d4;
          }
          local_15c = uVar43 + 2;
          if ((int)uStack_1e0._4_4_ <= (int)(uVar43 + 2)) {
            local_15c = uStack_1e0._4_4_;
          }
          if (0 < (int)uVar48) {
            lVar32 = (long)iVar21;
            if ((uVar48 < 4) ||
               ((local_1a8 < silk_CB_lags_stage3_10_ms + lVar32 + local_130 * 0xb + 0x12 &&
                (silk_CB_lags_stage2 + lVar32 < (uint *)((long)local_1a8 + local_130 * 4))))) {
              uVar23 = 0;
            }
            else {
              uVar23 = local_130 & 0xfffffffc;
              pcVar24 = silk_CB_lags_stage2 + lVar32 + 0x16;
              puVar35 = local_1a8;
              uVar50 = uVar23;
              do {
                pcVar40 = pcVar24 + -0x16;
                uVar50 = uVar50 - 4;
                pcVar41 = pcVar24 + -0xb;
                pcVar4 = pcVar24 + 0xb;
                cVar55 = *pcVar24;
                pcVar24 = pcVar24 + 0x2c;
                auVar57._0_8_ = CONCAT44(*pcVar41 * 2 + uVar43,*pcVar40 * 2 + uVar43);
                auVar57._8_4_ = cVar55 * 2 + uVar43;
                auVar57._12_4_ = *pcVar4 * 2 + uVar43;
                puVar35[1] = auVar57._8_8_;
                *puVar35 = auVar57._0_8_;
                puVar35 = puVar35 + 2;
              } while (uVar50 != 0);
              if (uVar23 == local_130) goto LAB_00e8be08;
            }
            lVar42 = local_130 - uVar23;
            pcVar24 = silk_CB_lags_stage2 + lVar32 + uVar23 * 0xb;
            puVar31 = (uint *)((long)local_1a8 + uVar23 * 4);
            do {
              lVar42 = lVar42 + -1;
              *puVar31 = uVar43 + *pcVar24 * 2;
              pcVar24 = pcVar24 + 0xb;
              puVar31 = puVar31 + 1;
            } while (lVar42 != 0);
          }
LAB_00e8be08:
          local_138 = (undefined1 *)CONCAT44(local_138._4_4_,uVar43);
          if (local_1c4 == 0) {
            uVar43 = 0xc;
            local_168 = silk_CB_lags_stage3_10_ms;
            local_158 = (undefined1 *)0xc;
          }
          else {
            uVar43 = (uint)*(char *)((long)&silk_nb_cbk_searchs_stage3 + (long)local_19c);
            local_168 = &silk_CB_lags_stage3;
            local_158 = (undefined1 *)0x22;
          }
          local_150 = (long)(int)(uVar43 * uVar48) * 0x14 + 0xfU & 0xfffffffffffffff0;
          puVar51 = (ushort *)((long)puVar51 - local_150);
          local_150 = (long)puVar51 - local_150;
          FUN_00e8c294(local_150,local_1d0,uVar22,local_1d8,local_130,local_19c,
                       local_128 & 0xffffffff);
          local_148 = puVar51;
          FUN_00e8c8bc(puVar51,uVar47,uVar22,iVar12,uVar28 & 0xffffffff,iVar13,uVar19 & 0xffffffff);
          lVar32 = uVar47 + (long)(local_198 * 0x14) * 2;
          iVar14 = silk_inner_prod_aligned(lVar32,lVar32,iVar12 * uVar48,uVar19 & 0xffffffff);
          iVar21 = 0;
          iVar15 = (int)local_130;
          if (((int)uVar22 <= (int)local_15c) && (0 < (int)uVar43)) {
            local_128 = (ulong)((local_15c - uVar22) + 1);
            iVar12 = 0;
            if ((uint)local_138 != 0) {
              iVar12 = 0x666 / (int)(uint)local_138;
            }
            uVar23 = 0;
            uVar47 = 0;
            lVar32 = (ulong)uVar43 + (ulong)uVar43 * 4;
            iVar14 = iVar14 + 1;
            uVar28 = local_130 & 0xfffffffe;
            lVar42 = lVar32 * 4;
            uVar48 = 0x80000000;
            uVar50 = local_150;
            puVar52 = local_148;
            do {
              local_148 = puVar52;
              local_150 = uVar50;
              uVar50 = 0;
              uVar19 = local_150;
              puVar52 = local_148;
              do {
                local_118 = iVar14;
                if (iVar15 < 1) {
                  uVar25 = 0;
                  if (0x7fffffff < uVar48) goto LAB_00e8c144;
                }
                else {
                  if (iVar15 == 1) {
                    iVar49 = 0;
                    uVar37 = 0;
LAB_00e8c044:
                    lVar46 = lVar42 * uVar37;
                    lVar38 = local_130 - uVar37;
                    do {
                      piVar30 = (int *)(uVar19 + lVar46);
                      lVar38 = lVar38 + -1;
                      piVar3 = (int *)((long)puVar52 + lVar46);
                      lVar46 = lVar46 + lVar42;
                      iVar49 = *piVar30 + iVar49;
                      local_118 = *piVar3 + local_118;
                    } while (lVar38 != 0);
                  }
                  else {
                    lVar46 = 0;
                    iVar21 = 0;
                    iVar49 = 0;
                    local_118 = 0;
                    uVar37 = uVar28;
                    iVar13 = iVar14;
                    do {
                      piVar30 = (int *)(uVar19 + lVar46);
                      uVar37 = uVar37 - 2;
                      piVar3 = (int *)(uVar19 + lVar42 + lVar46);
                      piVar2 = (int *)((long)puVar52 + lVar46);
                      lVar38 = lVar46 + lVar42;
                      lVar46 = lVar46 + lVar32 * 8;
                      iVar21 = *piVar30 + iVar21;
                      iVar49 = *piVar3 + iVar49;
                      iVar13 = *piVar2 + iVar13;
                      local_118 = *(int *)((long)puVar52 + lVar38) + local_118;
                    } while (uVar37 != 0);
                    local_118 = local_118 + iVar13;
                    iVar49 = iVar49 + iVar21;
                    uVar37 = uVar28;
                    if (uVar28 != local_130) goto LAB_00e8c044;
                  }
                  if (iVar49 < 1) {
                    uVar25 = 0;
                    if ((int)uVar48 < 0) goto LAB_00e8c144;
                  }
                  else {
                    iVar21 = -local_118;
                    if (-1 < local_118) {
                      iVar21 = local_118;
                    }
                    iVar8 = local_118 << (ulong)((int)LZCOUNT(iVar21) - 1U & 0x1f);
                    iVar13 = iVar8 >> 0x10;
                    sVar11 = 0;
                    if (iVar13 != 0) {
                      sVar11 = (short)(0x1fffffff / iVar13);
                    }
                    iVar13 = (int)LZCOUNT(iVar49) - (int)LZCOUNT(iVar21);
                    uVar9 = -iVar13 - 0xf;
                    iVar49 = iVar49 << (ulong)((int)LZCOUNT(iVar49) - 1U & 0x1f);
                    lVar46 = (long)sVar11 * (long)iVar49;
                    uVar5 = -0x80000000 >> (uVar9 & 0x1f);
                    uVar25 = (int)((ulong)((long)sVar11 *
                                          (long)(int)(iVar49 - ((uint)((ulong)((lVar46 >> 0x10) *
                                                                              (long)iVar8) >> 0x1d)
                                                               & 0xfffffff8))) >> 0x10) +
                             (int)((ulong)lVar46 >> 0x10);
                    uVar7 = 0x7fffffff >> (ulong)(uVar9 & 0x1f);
                    iVar21 = (int)uVar25 >> (iVar13 + 0xfU & 0x1f);
                    if ((int)uVar5 <= (int)uVar25) {
                      uVar5 = uVar25;
                    }
                    if ((int)uVar25 <= (int)uVar7) {
                      uVar7 = uVar5;
                    }
                    if (0x2d < iVar13 + 0x1dU) {
                      iVar21 = 0;
                    }
                    iVar49 = uVar7 << (ulong)(uVar9 & 0x1f);
                    if (iVar13 + 0xf < 0 == SCARRY4(iVar13,0xf)) {
                      iVar49 = iVar21;
                    }
                    uVar25 = (uint)((ulong)(((long)(0x7fff000000000000 -
                                                   ((ulong)(uint)(iVar12 * (int)uVar50) << 0x30)) >>
                                            0x30) * (long)iVar49) >> 0x10);
                    if ((int)uVar48 < (int)uVar25) {
LAB_00e8c144:
                      if ((int)(uVar22 + (int)(char)(&silk_CB_lags_stage3)[uVar50]) <
                          (int)(uint)local_140) {
                        uVar47 = uVar50 & 0xffffffff;
                        local_138 = (undefined1 *)CONCAT44(local_138._4_4_,uVar22);
                        uVar48 = uVar25;
                      }
                    }
                  }
                }
                iVar21 = (int)uVar47;
                uVar50 = uVar50 + 1;
                puVar52 = puVar52 + 10;
                uVar19 = uVar19 + 0x14;
              } while (uVar50 != uVar43);
              uVar23 = uVar23 + 1;
              uVar22 = uVar22 + 1;
              uVar50 = local_150 + 4;
              puVar52 = local_148 + 2;
            } while (uVar23 != local_128);
            uVar25 = local_1d4;
            puVar36 = local_1a8;
          }
          if (0 < iVar15) {
            pcVar24 = local_168 + iVar21;
            uVar23 = local_130;
            do {
              uVar48 = (uint)local_138 + (int)*pcVar24;
              if ((int)(uint)local_140 < (int)uVar25) {
                uVar22 = uVar25;
                if (((int)uVar48 <= (int)uVar25) &&
                   (uVar22 = (uint)local_140, (int)(uint)local_140 <= (int)uVar48)) {
                  uVar22 = uVar48;
                }
              }
              else {
                uVar22 = (uint)local_140;
                if (((int)uVar48 <= (int)(uint)local_140) &&
                   (uVar22 = uVar25, (int)uVar25 <= (int)uVar48)) {
                  uVar22 = uVar48;
                }
              }
              pcVar24 = pcVar24 + (long)local_158;
              uVar23 = uVar23 - 1;
              *(uint *)puVar36 = uVar22;
              puVar36 = (undefined8 *)((long)puVar36 + 4);
            } while (uVar23 != 0);
          }
          sVar11 = (short)(uint)local_138 - (short)uVar25;
        }
        uVar45 = (undefined)iVar21;
        uVar17 = 0;
        *local_1b8 = sVar11;
        goto LAB_00e8bc7c;
      }
    }
    uVar23 = local_130 & 0xffffffff;
  }
  memset(local_1a8,0,-(uVar23 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar23 & 0xffffffff) << 2);
  uVar45 = 0;
  uVar17 = 1;
  *local_170 = 0;
  *local_1b8 = 0;
LAB_00e8bc7c:
  *local_1b0 = uVar45;
  if (*(long *)(local_1c0 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar17);
  }
  return;
}


