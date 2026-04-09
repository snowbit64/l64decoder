// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_noise_shape_analysis_FIX
// Entry Point: 00e8d850
// Size: 5848 bytes
// Signature: undefined silk_noise_shape_analysis_FIX(void)


void silk_noise_shape_analysis_FIX
               (long param_1,long param_2,long param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  long lVar14;
  undefined *puVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  undefined (*pauVar24) [16];
  int iVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  int *piVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  undefined2 *puVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  int iVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  undefined8 *puVar45;
  ulong uVar46;
  long lVar47;
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  undefined auVar54 [16];
  ushort uVar58;
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auStack_2e0 [12];
  int local_2d4;
  long local_2d0;
  long local_2c8;
  char *local_2c0;
  long local_2b8;
  undefined8 *local_2b0;
  long local_2a8;
  undefined4 local_29c;
  long local_298;
  long local_290;
  uint local_284;
  long local_280;
  undefined *local_278;
  int local_26c;
  long local_268;
  undefined (*local_260) [16];
  ulong local_258;
  ulong local_250;
  long local_248;
  ulong local_240;
  long local_238;
  ulong local_230;
  ulong local_228;
  uint local_220;
  uint local_21c;
  ulong local_218;
  undefined (*local_210) [16];
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long local_1d0;
  long lStack_1c8;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined auStack_198 [8];
  uint uStack_190;
  undefined8 auStack_18c [11];
  undefined auStack_134 [96];
  uint local_d4 [25];
  long local_70;
  
  local_2d0 = tpidr_el0;
  local_70 = *(long *)(local_2d0 + 0x28);
  pcVar1 = (char *)(param_1 + 0x12ad);
  iVar25 = *(int *)(param_1 + 0x127c);
  auStack_198._0_4_ = 0;
  lVar47 = (long)*(int *)(param_1 + 0x11f8);
  *(int *)(param_2 + 0x180) = *(int *)(param_1 + 0x126c) + *(int *)(param_1 + 0x1268) >> 2;
  local_29c = param_5;
  iVar17 = silk_sigm_Q15((iVar25 + -0xa00 >> 3) + 1 >> 1);
  uVar22 = iVar17 >> 1;
  *(uint *)(param_2 + 0x184) = uVar22;
  local_2c0 = pcVar1;
  local_298 = param_1;
  local_268 = param_2;
  if (*(int *)(param_1 + 0x1244) == 0) {
    iVar17 = 0x100 - *(int *)(param_1 + 0x11b4);
    iVar25 = iVar25 + (int)((ulong)(((long)((-((ulong)(uVar22 >> 0xf) & 1) & 0xffff000000000000 |
                                            ((ulong)uVar22 & 0xffff) << 0x20) *
                                           ((long)*(int *)(param_2 + 0x180) + 0x4000)) >> 0x30) *
                                   (long)((iVar17 * (short)iVar17 * 0x100 >> 0x10) * -8)) >> 0x10);
    if (*pcVar1 == '\x02') goto LAB_00e8d8fc;
LAB_00e8d96c:
    uVar35 = *(short *)(param_1 + 0x11e4) * 5;
    uVar22 = uVar35;
    if ((int)uVar35 < 0) {
      uVar22 = uVar35 + 1;
    }
    iVar17 = (int)((ulong)((((long)*(short *)(param_1 + 0x127c) * -0x1999a >> 0x10) + 0xc00) *
                          ((long)(0x4000000000000000 - ((ulong)*(uint *)(param_2 + 0x180) << 0x30))
                          >> 0x30)) >> 0x10);
    local_1b0 = lVar47;
    local_1a8 = param_4;
    if ((int)uVar35 < 2) {
LAB_00e8da08:
      iVar21 = 0;
    }
    else {
      iVar20 = *(int *)(param_1 + 0x11e0) << 1;
      silk_sum_sqr_shift((long)&uStack_1a0 + 4,auStack_198,param_3,iVar20);
      uStack_1a0._4_4_ = uStack_1a0._4_4_ + (iVar20 >> (auStack_198._0_4_ & 0x1f));
      iVar18 = silk_lin2log();
      if ((uVar35 & 0xfffffffe) == 2) goto LAB_00e8da08;
      iVar21 = 0;
      iVar41 = ((int)uVar22 >> 1) + -1;
      param_3 = param_3 + (long)iVar20 * 2;
      do {
        silk_sum_sqr_shift((long)&uStack_1a0 + 4,auStack_198,param_3,iVar20);
        uStack_1a0._4_4_ = uStack_1a0._4_4_ + (iVar20 >> (auStack_198._0_4_ & 0x1f));
        iVar19 = silk_lin2log();
        iVar18 = iVar19 - iVar18;
        param_3 = param_3 + (long)iVar20 * 2;
        iVar2 = -iVar18;
        if (-1 < iVar18) {
          iVar2 = iVar18;
        }
        iVar41 = iVar41 + -1;
        iVar21 = iVar2 + iVar21;
        iVar18 = iVar19;
      } while (iVar41 != 0);
    }
    param_4 = local_1a8;
    lVar47 = local_1b0;
    if (((int)uVar22 >> 1) * 0x4d + -0x4d < iVar21) {
      local_2c0[1] = '\0';
    }
    else {
      local_2c0[1] = '\x01';
    }
  }
  else {
    if (*pcVar1 != '\x02') goto LAB_00e8d96c;
LAB_00e8d8fc:
    *(undefined *)(param_1 + 0x12ae) = 0;
    iVar17 = (int)((long)((ulong)*(uint *)(param_1 + 0x21c8) << 0x30) >> 0x37);
  }
  lVar36 = (long)*(int *)(local_268 + 0x188) * 0x42 >> 0x10;
  iVar20 = (int)((ulong)(lVar36 * lVar36) >> 0x10);
  uVar22 = iVar20 + 0x10000;
  uVar35 = uVar22;
  if ((int)uVar22 < 0) {
    uVar35 = -iVar20 - 0x10000;
  }
  iVar21 = (int)LZCOUNT(uVar35);
  iVar18 = uVar22 << (ulong)(iVar21 - 1U & 0x1f);
  iVar20 = iVar18 >> 0x10;
  sVar6 = 0;
  if (iVar20 != 0) {
    sVar6 = (short)(0x1fffffff / iVar20);
  }
  lVar36 = (long)sVar6 * 0x78520000;
  uVar22 = (int)((ulong)(((long)(0x7852000000000000 -
                                ((lVar36 >> 0xd) * (long)iVar18 & 0xfffffff800000000U)) >> 0x20) *
                        (long)sVar6) >> 0x10) + (int)((ulong)lVar36 >> 0x10);
  if (uVar35 < 4) {
    uVar26 = iVar21 - 0x1d;
    uVar35 = -0x80000000 >> (uVar26 & 0x1f);
    uVar31 = 0x7fffffff >> (ulong)(uVar26 & 0x1f);
    if ((int)uVar35 <= (int)uVar22) {
      uVar35 = uVar22;
    }
    if ((int)uVar22 <= (int)uVar31) {
      uVar31 = uVar35;
    }
    local_26c = uVar31 << (ulong)(uVar26 & 0x1f);
    iVar20 = *(int *)(local_298 + 0x1240);
    if (0 < iVar20) goto LAB_00e8db80;
LAB_00e8db58:
    local_284 = 0;
  }
  else {
    local_26c = (int)uVar22 >> (0x1dU - iVar21 & 0x1f);
    iVar20 = *(int *)(local_298 + 0x1240);
    if (iVar20 < 1) goto LAB_00e8db58;
LAB_00e8db80:
    local_284 = iVar20 + (int)((ulong)((long)*(int *)(local_268 + 0x184) * 0xa3d) >> 0x10);
  }
  local_2d4 = iVar25 + iVar17;
  uVar23 = (ulong)*(int *)(local_298 + 0x11fc);
  lVar36 = (long)(short)local_284;
  iVar20 = (int)((ulong)(lVar36 * (int)-local_284) >> 0x10);
  iVar25 = iVar20 + 0x10000;
  iVar17 = iVar25;
  if (iVar25 < 0) {
    iVar17 = -0x10000 - iVar20;
  }
  lVar37 = local_298;
  lVar40 = local_268;
  if (0 < *(int *)(local_298 + 0x11e4)) {
    local_280 = (long)-((ulong)local_284 << 0x30) >> 0x30;
    param_4 = param_4 + lVar47 * -2;
    lVar44 = (long)(short)-local_284;
    local_1a8 = CONCAT44(local_1a8._4_4_,(int)LZCOUNT(iVar17));
    local_2b0 = &uStack_1a0;
    local_1b0 = (long)(iVar25 << (ulong)((int)LZCOUNT(iVar17) - 1U & 0x1f));
    local_210 = (undefined (*) [16])&uStack_190;
    lVar47 = 0;
    local_230 = 0;
    local_2b8 = local_268 + 0x8e;
    auVar48._8_4_ = 0xfbfffc00;
    auVar48._0_8_ = 0xfbfffc00fbfffc00;
    auVar48._12_4_ = 0xfbfffc00;
    local_2c8 = local_268 + 0x8c;
    auVar50._8_4_ = 0x3fffbff;
    auVar50._0_8_ = 0x3fffbff03fffbff;
    auVar50._12_4_ = 0x3fffbff;
    uStack_1e8 = auVar48._8_8_;
    local_1f0 = 0xfbfffc00fbfffc00;
    uStack_1d8 = auVar50._8_8_;
    uStack_1e0 = 0x3fffbff03fffbff;
    local_278 = auStack_2e0 + -(uVar23 * 2 + 0xf & 0xfffffffffffffff0);
    local_1d0 = lVar36;
    lStack_1c8 = lVar36;
    local_1c0 = lVar44;
    lStack_1b8 = lVar44;
    do {
      puVar15 = local_278;
      iVar25 = *(int *)(lVar37 + 0x11e0);
      uVar35 = (int)uVar23 + iVar25 * -3 >> 1;
      silk_apply_sine_window(local_278,param_4,1,(ulong)uVar35);
      uVar23 = -(ulong)(uVar35 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar35 << 1;
      memcpy(puVar15 + uVar23,(void *)(param_4 + uVar23),(long)iVar25 * 6);
      uVar22 = uVar35 + iVar25 * 3;
      uVar23 = -(ulong)(uVar22 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar22 << 1;
      local_248 = param_4;
      silk_apply_sine_window(puVar15 + uVar23,param_4 + uVar23,2,uVar35);
      lVar42 = (long)*(int *)(lVar37 + 0x11ec);
      if (*(int *)(lVar37 + 0x1240) < 1) {
        silk_autocorr(local_d4,auStack_198,puVar15,*(undefined4 *)(lVar37 + 0x11fc),
                      *(int *)(lVar37 + 0x121c) + 1,local_29c);
      }
      else {
        silk_warped_autocorrelation_FIX_c(local_d4,auStack_198,puVar15,local_284);
      }
      iVar25 = (int)((-(ulong)((uint)((int)local_d4[0] >> 4) >> 0x1f) & 0xffffffe000000000 |
                     (ulong)(uint)((int)local_d4[0] >> 4) << 5) -
                     ((long)((ulong)local_d4[0] << 0x20) >> 0x24) >> 0x10);
      if (iVar25 < 2) {
        iVar25 = 1;
      }
      local_d4[0] = iVar25 + local_d4[0];
      uStack_1a0._4_4_ = silk_schur64(auStack_134,local_d4,*(undefined4 *)(lVar37 + 0x121c));
      silk_k2a_Q16(auStack_198 + 4,auStack_134,*(undefined4 *)(lVar37 + 0x121c));
      lVar40 = local_268;
      uVar22 = -auStack_198._0_4_;
      if ((uVar22 & 1) == 0) {
        if ((int)uStack_1a0._4_4_ < 1) goto LAB_00e8dde4;
LAB_00e8dd90:
        uVar31 = (uint)LZCOUNT(uStack_1a0._4_4_);
        uVar35 = uStack_1a0._4_4_;
        if (uVar31 - 0x18 != 0) {
          if (uStack_1a0._4_4_ < 0x80) {
            uVar35 = uStack_1a0._4_4_ >> (ulong)(0x38 - uVar31 & 0x1f) |
                     uStack_1a0._4_4_ << (ulong)(uVar31 - 0x18 & 0x1f);
          }
          else {
            uVar35 = uStack_1a0._4_4_ << (ulong)(uVar31 + 8 & 0x1f) |
                     uStack_1a0._4_4_ >> (ulong)(0x18 - uVar31 & 0x1f);
          }
        }
        uVar26 = 0xb486;
        if ((LZCOUNT(uStack_1a0._4_4_) & 1U) != 0) {
          uVar26 = 0x8000;
        }
        uVar26 = uVar26 >> (ulong)(uVar31 >> 1);
        uVar26 = uVar26 + (int)(((ulong)(uVar35 & 0x7f) * 0xd5000000000000 >> 0x30) * (ulong)uVar26
                               >> 0x10);
      }
      else {
        uStack_1a0._4_4_ = (int)uStack_1a0._4_4_ >> 1;
        uVar22 = ~auStack_198._0_4_;
        if (0 < (int)uStack_1a0._4_4_) goto LAB_00e8dd90;
LAB_00e8dde4:
        uVar26 = 0;
      }
      uVar35 = 0x10 - ((int)uVar22 >> 1);
      uVar22 = 0x7fffffff >> (ulong)(uVar35 & 0x1f);
      if (uVar26 <= uVar22) {
        uVar22 = uVar26;
      }
      uVar22 = uVar22 << (ulong)(uVar35 & 0x1f);
      *(uint *)(local_268 + lVar47 * 4) = uVar22;
      if (0 < *(int *)(lVar37 + 0x1240)) {
        iVar17 = *(int *)(lVar37 + 0x121c);
        iVar25 = *(int *)(auStack_198 + ((long)(iVar17 + -1) + 1) * 4);
        if (1 < iVar17) {
          lVar33 = (ulong)(iVar17 - 2) << 2;
          do {
            lVar14 = lVar33 + 4;
            lVar33 = lVar33 + -4;
            iVar25 = *(int *)(auStack_198 + lVar14) + (int)((ulong)(local_280 * iVar25) >> 0x10);
          } while (lVar33 != -4);
        }
        iVar25 = (int)((ulong)(lVar36 * iVar25) >> 0x10);
        uVar35 = iVar25 + 0x1000000;
        uVar31 = uVar35;
        if ((int)uVar35 < 0) {
          uVar31 = -iVar25 - 0x1000000;
        }
        iVar20 = (int)LZCOUNT(uVar31);
        iVar17 = uVar35 << (ulong)(iVar20 - 1U & 0x1f);
        iVar25 = iVar17 >> 0x10;
        uVar35 = 0;
        if (iVar25 != 0) {
          uVar35 = 0x1fffffff / iVar25;
        }
        uVar7 = iVar20 - 0x16;
        uVar35 = (int)((ulong)(((long)-((-((ulong)(uVar35 >> 0xf) & 1) & 0xfffffff800000000 |
                                        ((ulong)uVar35 & 0xffff) << 0x13) * (long)iVar17 &
                                       0xfffffff800000000) >> 0x20) * (long)(int)uVar35) >> 0x10) +
                 uVar35 * 0x10000;
        uVar26 = -0x80000000 >> (uVar7 & 0x1f);
        uVar32 = 0x7fffffff >> (ulong)(uVar7 & 0x1f);
        if ((int)uVar26 <= (int)uVar35) {
          uVar26 = uVar35;
        }
        if ((int)uVar35 <= (int)uVar32) {
          uVar32 = uVar26;
        }
        iVar25 = (int)uVar35 >> (0x16U - iVar20 & 0x1f);
        if (uVar31 < 0x400) {
          iVar25 = uVar32 << (ulong)(uVar7 & 0x1f);
        }
        if ((int)uVar22 < 0x4000) {
          iVar25 = (int)((ulong)((long)iVar25 * (long)(int)uVar22) >> 0x10);
        }
        else {
          iVar17 = (int)((long)iVar25 * (ulong)((uVar22 & 1) + (uVar22 >> 1)) >> 0x10);
          iVar25 = 0x7fffffff;
          if (iVar17 < 0x3fffffff) {
            iVar25 = iVar17 << 1;
          }
          *(int *)(local_268 + lVar47 * 4) = iVar17;
        }
        *(int *)(local_268 + lVar47 * 4) = iVar25;
      }
      silk_bwexpander_32(auStack_198 + 4,*(undefined4 *)(lVar37 + 0x121c),local_26c);
      local_238 = lVar47;
      if (*(int *)(lVar37 + 0x1240) < 1) {
        silk_LPC_fit(lVar40 + (ulong)(uint)((int)lVar47 * 0x18) * 2 + 0x8c,auStack_198 + 4,0xd,0x18,
                     *(undefined4 *)(lVar37 + 0x121c));
      }
      else {
        uVar22 = *(uint *)(lVar37 + 0x121c);
        uVar46 = (ulong)uVar22;
        uVar35 = uVar22 - 1;
        uVar23 = (ulong)uVar35;
        if (1 < (int)uVar22) {
          uVar27 = (uVar23 - (uVar35 != 0)) + 1;
          uVar28 = uVar23;
          if (3 < uVar27) {
            uVar43 = uVar23 - (uVar35 != 0);
            bVar16 = uVar43 >> 0x3e == 0;
            if ((((((uint)uVar43 <= uVar22 - 2) && (uVar43 >> 0x20 == 0)) &&
                 (auStack_198 + ((ulong)(uVar22 - 2) + 1) * 4 + uVar43 * -4 <=
                  auStack_198 + ((ulong)(uVar22 - 2) + 1) * 4)) &&
                ((bVar16 &&
                 (auStack_198 + (uVar23 + 1) * 4 + uVar43 * -4 <= auStack_198 + (uVar23 + 1) * 4))))
               && (bVar16)) {
              uVar43 = (ulong)(uVar22 - 2);
              uVar28 = uVar43;
              if (uVar35 != 0) {
                uVar28 = uVar43 + 1;
              }
              if ((*local_210 + uVar23 * 4 <= auStack_198 + ((uVar28 - uVar23) + 1) * 4) ||
                 (uVar28 = uVar23,
                 *local_210 + uVar43 * 4 <= auStack_198 + ((ulong)(uVar35 != 0) + 1) * 4)) {
                uVar39 = uVar27 & 0xfffffffffffffffc;
                uVar28 = uVar23 + 0xffffffff;
                pauVar24 = (undefined (*) [16])((long)local_2b0 + uVar23 * 4);
                uVar43 = uVar39;
                do {
                  uVar43 = uVar43 - 4;
                  auVar48 = NEON_rev64(*pauVar24,4);
                  auVar48 = NEON_ext(auVar48,auVar48,8,1);
                  uVar38 = uVar28 & 0xffffffff;
                  lVar47 = uVar38 * 4;
                  uVar28 = uVar28 - 4;
                  auVar54._4_4_ = (int)((ulong)(lStack_1b8 * auVar48._4_4_) >> 0x10);
                  auVar54._0_4_ = (int)((ulong)(local_1c0 * auVar48._0_4_) >> 0x10);
                  auVar54._12_4_ = (int)((ulong)(lStack_1b8 * auVar48._12_4_) >> 0x10);
                  auVar54._8_4_ = (int)((ulong)(local_1c0 * auVar48._8_4_) >> 0x10);
                  auVar48 = *(undefined (*) [16])((long)&uStack_1a0 + lVar47);
                  auVar50 = NEON_rev64(auVar54,4);
                  auVar50 = NEON_ext(auVar50,auVar50,8,1);
                  auVar59._0_8_ =
                       CONCAT44(auVar48._4_4_ + auVar50._4_4_,auVar48._0_4_ + auVar50._0_4_);
                  auVar59._8_4_ = auVar48._8_4_ + auVar50._8_4_;
                  auVar59._12_4_ = auVar48._12_4_ + auVar50._12_4_;
                  *(long *)(auStack_198 + uVar38 * 4) = auVar59._8_8_;
                  *(undefined8 *)((long)&uStack_1a0 + lVar47) = auVar59._0_8_;
                  pauVar24 = pauVar24 + -1;
                } while (uVar43 != 0);
                uVar28 = uVar23 - uVar39;
                if (uVar27 == uVar39) goto LAB_00e8dff8;
              }
            }
          }
          do {
            bVar16 = uVar28 != 0;
            uVar27 = uVar28 - 1;
            *(int *)(auStack_198 + ((uVar27 & 0xffffffff) + 1) * 4) =
                 *(int *)(auStack_198 + ((uVar27 & 0xffffffff) + 1) * 4) +
                 (int)((ulong)(lVar44 * *(int *)(auStack_198 + (uVar28 + 1) * 4)) >> 0x10);
            uVar28 = uVar27;
          } while (bVar16 && uVar27 != 0);
        }
LAB_00e8dff8:
        iVar20 = (int)((ulong)(lVar36 * (int)auStack_198._4_4_) >> 0x10);
        iVar25 = iVar20 + 0x1000000;
        iVar17 = iVar25;
        if (iVar25 < 0) {
          iVar17 = -0x1000000 - iVar20;
        }
        iVar25 = iVar25 << (ulong)((int)LZCOUNT(iVar17) - 1U & 0x1f);
        iVar20 = iVar25 >> 0x10;
        sVar6 = 0;
        if (iVar20 != 0) {
          sVar6 = (short)(0x1fffffff / iVar20);
        }
        lVar47 = sVar6 * local_1b0;
        iVar17 = (int)local_1a8 - (int)LZCOUNT(iVar17);
        uVar32 = -iVar17 - 5;
        uVar35 = (int)((ulong)((long)sVar6 *
                              (long)(int)((int)local_1b0 -
                                         ((uint)((ulong)((lVar47 >> 0x10) * (long)iVar25) >> 0x1d) &
                                         0xfffffff8))) >> 0x10) + (int)((ulong)lVar47 >> 0x10);
        uVar31 = (int)uVar35 >> (iVar17 + 5U & 0x1f);
        uVar26 = -0x80000000 >> (uVar32 & 0x1f);
        if (0x1f < iVar17 + 5U) {
          uVar31 = 0;
        }
        uVar7 = 0x7fffffff >> (ulong)(uVar32 & 0x1f);
        if ((int)uVar26 <= (int)uVar35) {
          uVar26 = uVar35;
        }
        if ((int)uVar35 <= (int)uVar7) {
          uVar7 = uVar26;
        }
        if (iVar17 == -6 || iVar17 + 6 < 0 != SCARRY4(iVar17,6)) {
          uVar31 = uVar7 << (ulong)(uVar32 & 0x1f);
        }
        if (0 < (int)uVar22) {
          lVar47 = (long)(int)uVar31;
          uVar27 = (int)auStack_198._4_4_ * lVar47;
          uVar28 = uVar27 >> 0x10;
          auStack_198._4_4_ = (int)(uVar27 >> 0x10);
          if (uVar22 == 1) {
            uVar23 = 0;
            uVar46 = 1;
            local_1f8 = 1;
          }
          else {
            uVar27 = uVar46 - 1;
            if (uVar27 < 4) {
              uVar39 = 1;
LAB_00e8e218:
              lVar33 = uVar46 - uVar39;
              piVar29 = (int *)(auStack_198 + (uVar39 + 1) * 4);
              do {
                lVar33 = lVar33 + -1;
                *piVar29 = (int)((ulong)(*piVar29 * lVar47) >> 0x10);
                piVar29 = piVar29 + 1;
              } while (lVar33 != 0);
            }
            else {
              uVar38 = uVar27 & 0xfffffffffffffffc;
              uVar39 = uVar38 | 1;
              uVar43 = uVar38;
              pauVar24 = local_210;
              do {
                auVar48 = *pauVar24;
                uVar43 = uVar43 - 4;
                *(ulong *)(*pauVar24 + 8) =
                     CONCAT44((int)((ulong)(lVar47 * auVar48._12_4_) >> 0x10),
                              (int)((ulong)(lVar47 * auVar48._8_4_) >> 0x10));
                *(ulong *)*pauVar24 =
                     CONCAT44((int)((ulong)(lVar47 * auVar48._4_4_) >> 0x10),
                              (int)((ulong)(lVar47 * auVar48._0_4_) >> 0x10));
                pauVar24 = pauVar24 + 1;
              } while (uVar43 != 0);
              if (uVar27 != uVar38) goto LAB_00e8e218;
            }
            local_1f8 = (ulong)(uVar22 == 1);
            if ((int)uVar22 < 1) goto LAB_00e8ea30;
          }
          local_250 = uVar23 + 0xffffffff;
          uVar43 = uVar46 - 1;
          local_200 = uVar43 & 0xfffffffffffffffc;
          local_2a8 = (local_230 & 0x1fffffff) << 3;
          lVar47 = 0;
          puVar45 = (undefined8 *)(local_2b8 + (local_230 & 0x1fffffff) * 0x10);
          uVar27 = uVar23;
          if (uVar23 != 0) {
            uVar27 = 1;
          }
          uVar35 = (int)uVar23 - 1;
          uVar39 = uVar23 - uVar27;
          local_208 = uVar39 + 1;
          bVar16 = uVar39 >> 0x3e != 0;
          local_240 = local_200 | 1;
          local_21c = (uint)(((uVar35 < (uint)uVar39 || uVar39 >> 0x20 != 0) ||
                             (auStack_198 + ((ulong)uVar35 + 1) * 4 <
                              auStack_198 + ((ulong)uVar35 + 1) * 4 + uVar39 * -4 || bVar16)) ||
                            (auStack_198 + (uVar23 + 1) * 4 <
                             auStack_198 + (uVar23 + 1) * 4 + uVar39 * -4 || bVar16));
          uVar39 = uVar46 & 0xfffffffc;
          local_220 = (uint)(auStack_198 + (((uVar27 + (local_250 & 0xffffffff)) - uVar23) + 1) * 4
                             < *local_210 + uVar23 * 4 &&
                            auStack_198 + (uVar27 + 1) * 4 <
                            *local_210 + (local_250 & 0xffffffff) * 4);
          local_228 = local_208 & 0xfffffffffffffffc;
          local_258 = uVar23 - local_228;
          local_260 = (undefined (*) [16])((long)local_2b0 + uVar23 * 4);
          local_290 = lVar42;
          local_218 = uVar23;
          do {
            uVar26 = (uint)uVar28;
            uVar35 = -uVar26;
            if (-1 < (int)uVar26) {
              uVar35 = uVar26;
            }
            if (uVar46 == 1) {
              iVar25 = 0;
            }
            else {
              iVar25 = 0;
              uVar23 = 1;
              uVar32 = uVar35;
              do {
                uVar7 = *(uint *)(auStack_198 + (uVar23 + 1) * 4);
                uVar35 = -uVar7;
                if (-1 < (int)uVar7) {
                  uVar35 = uVar7;
                }
                iVar17 = (int)uVar23;
                if ((int)uVar35 <= (int)uVar32) {
                  uVar35 = uVar32;
                  iVar17 = iVar25;
                }
                iVar25 = iVar17;
                uVar23 = uVar23 + 1;
                uVar32 = uVar35;
              } while (uVar46 != uVar23);
            }
            if (uVar35 < 0x3ffbe80) break;
            if (1 < (int)uVar22) {
              if (uVar43 < 4) {
                uVar23 = 1;
              }
              else {
                auVar60._4_4_ = uVar26;
                auVar60._0_4_ = uVar26;
                auVar60._8_4_ = uVar26;
                auVar60._12_4_ = uVar26;
                uVar23 = local_200;
                pauVar24 = local_210;
                do {
                  auVar48 = *pauVar24;
                  uVar23 = uVar23 - 4;
                  auVar50 = NEON_ext(auVar60,auVar48,0xc,1);
                  auVar62._0_8_ =
                       CONCAT44(auVar50._4_4_ + (int)((ulong)(lStack_1c8 * auVar48._4_4_) >> 0x10),
                                auVar50._0_4_ + (int)((ulong)(local_1d0 * auVar48._0_4_) >> 0x10));
                  auVar62._8_4_ = auVar50._8_4_ + (int)((ulong)(local_1d0 * auVar48._8_4_) >> 0x10);
                  auVar62._12_4_ =
                       auVar50._12_4_ + (int)((ulong)(lStack_1c8 * (int)auVar48._12_4_) >> 0x10);
                  *(long *)(*pauVar24 + 4) = auVar62._8_8_;
                  *(undefined8 *)(pauVar24[-1] + 0xc) = auVar62._0_8_;
                  pauVar24 = pauVar24 + 1;
                  auVar60 = auVar48;
                } while (uVar23 != 0);
                if (uVar43 == local_200) goto LAB_00e8e48c;
                uVar28 = (ulong)auVar48._12_4_;
                uVar23 = local_240;
              }
              puVar30 = (uint *)(auStack_198 + (uVar23 + 1) * 4);
              lVar40 = uVar46 - uVar23;
              do {
                uVar26 = *puVar30;
                lVar40 = lVar40 + -1;
                puVar30[-1] = (int)uVar28 + (int)((ulong)(lVar36 * (int)uVar26) >> 0x10);
                puVar30 = puVar30 + 1;
                uVar28 = (ulong)uVar26;
              } while (lVar40 != 0);
            }
LAB_00e8e48c:
            uVar26 = -uVar31;
            if (-1 < (int)uVar31) {
              uVar26 = uVar31;
            }
            iVar21 = (int)LZCOUNT(uVar26);
            iVar20 = uVar31 << (ulong)(iVar21 - 1U & 0x1f);
            iVar17 = iVar20 >> 0x10;
            iVar18 = 0;
            if (iVar17 != 0) {
              iVar18 = 0x1fffffff / iVar17;
            }
            uVar8 = iVar21 - 0x1e;
            uVar31 = (int)((ulong)(((long)-((long)iVar20 * (long)(short)iVar18 * 0x80000 &
                                           0xfffffff800000000U) >> 0x20) * (long)iVar18) >> 0x10) +
                     iVar18 * 0x10000;
            uVar32 = -0x80000000 >> (uVar8 & 0x1f);
            uVar7 = 0x7fffffff >> (ulong)(uVar8 & 0x1f);
            if ((int)uVar32 <= (int)uVar31) {
              uVar32 = uVar31;
            }
            if ((int)uVar31 <= (int)uVar7) {
              uVar7 = uVar32;
            }
            iVar17 = (int)uVar31 >> (0x1eU - iVar21 & 0x1f);
            if (uVar26 < 4) {
              iVar17 = uVar7 << (ulong)(uVar8 & 0x1f);
            }
            lVar40 = (long)iVar17;
            if (uVar46 < 4) {
              uVar23 = 0;
LAB_00e8e580:
              lVar37 = uVar46 - uVar23;
              piVar29 = (int *)(auStack_198 + (uVar23 + 1) * 4);
              do {
                lVar37 = lVar37 + -1;
                *piVar29 = (int)((ulong)(*piVar29 * lVar40) >> 0x10);
                piVar29 = piVar29 + 1;
              } while (lVar37 != 0);
            }
            else {
              pauVar24 = (undefined (*) [16])(auStack_198 + 4);
              uVar23 = uVar39;
              do {
                auVar48 = *pauVar24;
                uVar23 = uVar23 - 4;
                *(ulong *)(*pauVar24 + 8) =
                     CONCAT44((int)((ulong)(lVar40 * auVar48._12_4_) >> 0x10),
                              (int)((ulong)(lVar40 * auVar48._8_4_) >> 0x10));
                *(ulong *)*pauVar24 =
                     CONCAT44((int)((ulong)(lVar40 * auVar48._4_4_) >> 0x10),
                              (int)((ulong)(lVar40 * auVar48._0_4_) >> 0x10));
                pauVar24 = pauVar24 + 1;
              } while (uVar23 != 0);
              uVar23 = uVar39;
              if (uVar46 != uVar39) goto LAB_00e8e580;
            }
            uVar35 = uVar35 >> 4;
            iVar20 = uVar35 + uVar35 * iVar25;
            iVar17 = (int)((lVar47 * 0x66000000000000 + 0x333000000000000U >> 0x30) *
                           (ulong)(uVar35 - 0x3ffbe7) >> 0x10);
            iVar25 = -iVar17;
            if (-1 < iVar17) {
              iVar25 = iVar17;
            }
            iVar18 = -iVar20;
            if (-1 < iVar20) {
              iVar18 = iVar20;
            }
            iVar17 = iVar17 << (ulong)((int)LZCOUNT(iVar25) - 1U & 0x1f);
            iVar20 = iVar20 << (ulong)((int)LZCOUNT(iVar18) - 1U & 0x1f);
            iVar21 = iVar20 >> 0x10;
            sVar6 = 0;
            if (iVar21 != 0) {
              sVar6 = (short)(0x1fffffff / iVar21);
            }
            lVar40 = (long)sVar6 * (long)iVar17;
            iVar18 = (int)LZCOUNT(iVar25) - (int)LZCOUNT(iVar18);
            uVar32 = -iVar18 - 7;
            uVar31 = -0x80000000 >> (uVar32 & 0x1f);
            uVar35 = (int)((ulong)((long)sVar6 *
                                  (long)(int)(iVar17 - ((uint)((ulong)((lVar40 >> 0x10) *
                                                                      (long)iVar20) >> 0x1d) &
                                                       0xfffffff8))) >> 0x10) +
                     (int)((ulong)lVar40 >> 0x10);
            uVar26 = 0x7fffffff >> (ulong)(uVar32 & 0x1f);
            iVar25 = (int)uVar35 >> (iVar18 + 7U & 0x1f);
            if (0x1f < iVar18 + 7U) {
              iVar25 = 0;
            }
            if ((int)uVar31 <= (int)uVar35) {
              uVar31 = uVar35;
            }
            if ((int)uVar35 <= (int)uVar26) {
              uVar26 = uVar31;
            }
            if (iVar18 == -8 || iVar18 + 8 < 0 != SCARRY4(iVar18,8)) {
              iVar25 = uVar26 << (ulong)(uVar32 & 0x1f);
            }
            silk_bwexpander_32(auStack_198 + 4,uVar22,0xfd71 - iVar25);
            if (1 < (int)uVar22) {
              uVar23 = local_218;
              pauVar24 = local_260;
              uVar27 = local_250;
              uVar28 = local_228;
              if (((local_208 < 4 | local_21c | local_220) & 1) == 0) {
                do {
                  uVar28 = uVar28 - 4;
                  auVar48 = NEON_rev64(*pauVar24,4);
                  auVar48 = NEON_ext(auVar48,auVar48,8,1);
                  lVar40 = (uVar27 & 0xffffffff) * 4;
                  auVar49._4_4_ = (int)((ulong)(lStack_1b8 * auVar48._4_4_) >> 0x10);
                  auVar49._0_4_ = (int)((ulong)(local_1c0 * auVar48._0_4_) >> 0x10);
                  auVar49._12_4_ = (int)((ulong)(lStack_1b8 * auVar48._12_4_) >> 0x10);
                  auVar49._8_4_ = (int)((ulong)(local_1c0 * auVar48._8_4_) >> 0x10);
                  auVar48 = *(undefined (*) [16])((long)&uStack_1a0 + lVar40);
                  auVar50 = NEON_rev64(auVar49,4);
                  auVar50 = NEON_ext(auVar50,auVar50,8,1);
                  auVar51._0_8_ =
                       CONCAT44(auVar48._4_4_ + auVar50._4_4_,auVar48._0_4_ + auVar50._0_4_);
                  auVar51._8_4_ = auVar48._8_4_ + auVar50._8_4_;
                  auVar51._12_4_ = auVar48._12_4_ + auVar50._12_4_;
                  *(long *)(auStack_198 + (uVar27 & 0xffffffff) * 4) = auVar51._8_8_;
                  *(undefined8 *)((long)&uStack_1a0 + lVar40) = auVar51._0_8_;
                  pauVar24 = pauVar24 + -1;
                  uVar27 = uVar27 - 4;
                } while (uVar28 != 0);
                uVar23 = local_258;
                if (local_208 == local_228) goto LAB_00e8e784;
              }
              do {
                uVar27 = uVar23 - 1;
                *(int *)(auStack_198 + ((uVar27 & 0xffffffff) + 1) * 4) =
                     *(int *)(auStack_198 + ((uVar27 & 0xffffffff) + 1) * 4) +
                     (int)((ulong)(lVar44 * *(int *)(auStack_198 + (uVar23 + 1) * 4)) >> 0x10);
                bVar16 = 0 < (long)uVar23;
                uVar23 = uVar27;
              } while (uVar27 != 0 && bVar16);
            }
LAB_00e8e784:
            iVar20 = (int)((ulong)(lVar36 * (int)auStack_198._4_4_) >> 0x10);
            iVar25 = iVar20 + 0x1000000;
            iVar17 = iVar25;
            if (iVar25 < 0) {
              iVar17 = -0x1000000 - iVar20;
            }
            iVar25 = iVar25 << (ulong)((int)LZCOUNT(iVar17) - 1U & 0x1f);
            iVar20 = iVar25 >> 0x10;
            sVar6 = 0;
            if (iVar20 != 0) {
              sVar6 = (short)(0x1fffffff / iVar20);
            }
            lVar40 = sVar6 * local_1b0;
            iVar17 = (int)local_1a8 - (int)LZCOUNT(iVar17);
            uVar32 = -iVar17 - 5;
            uVar35 = (int)((ulong)((long)sVar6 *
                                  (long)(int)((int)local_1b0 -
                                             ((uint)((ulong)((lVar40 >> 0x10) * (long)iVar25) >>
                                                    0x1d) & 0xfffffff8))) >> 0x10) +
                     (int)((ulong)lVar40 >> 0x10);
            uVar31 = (int)uVar35 >> (iVar17 + 5U & 0x1f);
            uVar26 = -0x80000000 >> (uVar32 & 0x1f);
            if (0x1f < iVar17 + 5U) {
              uVar31 = 0;
            }
            uVar7 = 0x7fffffff >> (ulong)(uVar32 & 0x1f);
            if ((int)uVar26 <= (int)uVar35) {
              uVar26 = uVar35;
            }
            if ((int)uVar35 <= (int)uVar7) {
              uVar7 = uVar26;
            }
            if (iVar17 == -6 || iVar17 + 6 < 0 != SCARRY4(iVar17,6)) {
              uVar31 = uVar7 << (ulong)(uVar32 & 0x1f);
            }
            lVar40 = (long)(int)uVar31;
            uVar23 = (int)auStack_198._4_4_ * lVar40;
            uVar28 = uVar23 >> 0x10;
            auStack_198._4_4_ = (int)(uVar23 >> 0x10);
            if ((local_1f8 & 1) == 0) {
              uVar23 = local_200;
              pauVar24 = local_210;
              if (uVar43 < 4) {
                uVar23 = 1;
              }
              else {
                do {
                  auVar48 = *pauVar24;
                  uVar23 = uVar23 - 4;
                  *(ulong *)(*pauVar24 + 8) =
                       CONCAT44((int)((ulong)(lVar40 * auVar48._12_4_) >> 0x10),
                                (int)((ulong)(lVar40 * auVar48._8_4_) >> 0x10));
                  *(ulong *)*pauVar24 =
                       CONCAT44((int)((ulong)(lVar40 * auVar48._4_4_) >> 0x10),
                                (int)((ulong)(lVar40 * auVar48._0_4_) >> 0x10));
                  pauVar24 = pauVar24 + 1;
                } while (uVar23 != 0);
                uVar23 = local_240;
                if (uVar43 == local_200) goto LAB_00e8e35c;
              }
              lVar37 = uVar46 - uVar23;
              piVar29 = (int *)(auStack_198 + (uVar23 + 1) * 4);
              do {
                lVar37 = lVar37 + -1;
                *piVar29 = (int)((ulong)(*piVar29 * lVar40) >> 0x10);
                piVar29 = piVar29 + 1;
              } while (lVar37 != 0);
            }
LAB_00e8e35c:
            lVar47 = lVar47 + 1;
          } while (lVar47 != 10);
          uVar22 = *(uint *)(local_298 + 0x121c);
          lVar42 = local_290;
          lVar37 = local_298;
          lVar40 = local_268;
          if (0 < (int)uVar22) {
            uVar3 = 0x8000;
            if (-0x4000401 < (int)uVar28) {
              uVar3 = (short)(((uint)(uVar28 >> 10) & 0x3fffff) + 1 >> 1);
            }
            uVar4 = 0x7fff;
            if ((int)uVar28 < 0x3fffc00) {
              uVar4 = uVar3;
            }
            *(undefined2 *)(local_268 + (ulong)(uint)((int)local_238 * 0x18) * 2 + 0x8c) = uVar4;
            if (uVar22 != 1) {
              uVar23 = (ulong)uVar22 - 1;
              if (uVar23 < 8) {
                uVar27 = 1;
              }
              else {
                uVar28 = uVar23 & 0xfffffffffffffff8;
                uVar27 = uVar28 | 1;
                uVar46 = uVar28;
                pauVar24 = local_210;
                do {
                  uVar46 = uVar46 - 8;
                  auVar48 = *pauVar24;
                  auVar50 = pauVar24[1];
                  auVar12._8_8_ = uStack_1e8;
                  auVar12._0_8_ = local_1f0;
                  auVar62 = NEON_cmgt(auVar12,auVar48,4);
                  auVar13._8_8_ = uStack_1e8;
                  auVar13._0_8_ = local_1f0;
                  auVar60 = NEON_cmgt(auVar13,auVar50,4);
                  auVar52._2_2_ = (short)((auVar48._4_4_ >> 10) + 1 >> 1);
                  auVar52._0_2_ = (short)((auVar48._0_4_ >> 10) + 1 >> 1);
                  auVar52._4_2_ = (short)((auVar48._8_4_ >> 10) + 1 >> 1);
                  auVar52._6_2_ = (short)((auVar48._12_4_ >> 10) + 1 >> 1);
                  auVar10._8_8_ = uStack_1d8;
                  auVar10._0_8_ = uStack_1e0;
                  auVar59 = NEON_cmgt(auVar50,auVar10,4);
                  auVar11._8_8_ = uStack_1d8;
                  auVar11._0_8_ = uStack_1e0;
                  auVar54 = NEON_cmgt(auVar48,auVar11,4);
                  auVar61._2_2_ = auVar62._4_2_;
                  auVar61._0_2_ = auVar62._0_2_;
                  auVar61._4_2_ = auVar62._8_2_;
                  auVar61._6_2_ = auVar62._12_2_;
                  auVar61._8_2_ = auVar60._0_2_;
                  auVar61._10_2_ = auVar60._4_2_;
                  auVar61._12_2_ = auVar60._8_2_;
                  auVar61._14_2_ = auVar60._12_2_;
                  auVar52._10_2_ = (short)((auVar50._4_4_ >> 10) + 1 >> 1);
                  auVar52._8_2_ = (short)((auVar50._0_4_ >> 10) + 1 >> 1);
                  auVar52._12_2_ = (short)((auVar50._8_4_ >> 10) + 1 >> 1);
                  auVar52._14_2_ = (short)((auVar50._12_4_ >> 10) + 1 >> 1);
                  auVar9._8_2_ = 0x8000;
                  auVar9._0_8_ = 0x8000800080008000;
                  auVar9._10_2_ = 0x8000;
                  auVar9._12_2_ = 0x8000;
                  auVar9._14_2_ = 0x8000;
                  auVar48 = NEON_bit(auVar52,auVar9,auVar61,1);
                  uVar43 = CONCAT26(auVar54._12_2_,
                                    CONCAT24(auVar54._8_2_,CONCAT22(auVar54._4_2_,auVar54._0_2_))) &
                           0x7fff7fff7fff7fff;
                  uVar55 = auVar59._0_2_ & 0x7fff;
                  uVar56 = auVar59._4_2_ & 0x7fff;
                  uVar57 = auVar59._8_2_ & 0x7fff;
                  uVar58 = auVar59._12_2_ & 0x7fff;
                  auVar53._0_8_ =
                       CONCAT17((byte)(uVar43 >> 0x38) | auVar48[7] & ~auVar54[13],
                                CONCAT16((byte)(uVar43 >> 0x30) | auVar48[6] & ~auVar54[12],
                                         CONCAT15((byte)(uVar43 >> 0x28) | auVar48[5] & ~auVar54[9],
                                                  CONCAT14((byte)(uVar43 >> 0x20) |
                                                           auVar48[4] & ~auVar54[8],
                                                           CONCAT13((byte)(uVar43 >> 0x18) |
                                                                    auVar48[3] & ~auVar54[5],
                                                                    CONCAT12((byte)(uVar43 >> 0x10)
                                                                             | auVar48[2] &
                                                                               ~auVar54[4],
                                                                             CONCAT11((byte)(uVar43 
                                                  >> 8) | auVar48[1] & ~auVar54[1],
                                                  (byte)uVar43 | auVar48[0] & ~auVar54[0])))))));
                  auVar53[8] = (byte)uVar55 | auVar48[8] & ~auVar59[0];
                  auVar53[9] = (byte)(uVar55 >> 8) | auVar48[9] & ~auVar59[1];
                  auVar53[10] = (byte)uVar56 | auVar48[10] & ~auVar59[4];
                  auVar53[11] = (byte)(uVar56 >> 8) | auVar48[11] & ~auVar59[5];
                  auVar53[12] = (byte)uVar57 | auVar48[12] & ~auVar59[8];
                  auVar53[13] = (byte)(uVar57 >> 8) | auVar48[13] & ~auVar59[9];
                  auVar53[14] = (byte)uVar58 | auVar48[14] & ~auVar59[12];
                  auVar53[15] = (byte)(uVar58 >> 8) | auVar48[15] & ~auVar59[13];
                  puVar45[1] = auVar53._8_8_;
                  *puVar45 = auVar53._0_8_;
                  pauVar24 = pauVar24 + 2;
                  puVar45 = puVar45 + 2;
                } while (uVar46 != 0);
                if (uVar23 == uVar28) goto LAB_00e8ea30;
              }
              lVar47 = uVar22 - uVar27;
              puVar30 = (uint *)(auStack_198 + (uVar27 + 1) * 4);
              puVar34 = (undefined2 *)(local_2c8 + (uVar27 + local_2a8) * 2);
              do {
                uVar22 = *puVar30;
                uVar3 = 0x8000;
                if (-0x4000401 < (int)uVar22) {
                  uVar3 = (short)((uVar22 >> 10) + 1 >> 1);
                }
                uVar4 = 0x7fff;
                if ((int)uVar22 < 0x3fffc00) {
                  uVar4 = uVar3;
                }
                lVar47 = lVar47 + -1;
                *puVar34 = uVar4;
                puVar30 = puVar30 + 1;
                puVar34 = puVar34 + 1;
              } while (lVar47 != 0);
            }
          }
        }
      }
LAB_00e8ea30:
      lVar47 = local_238 + 1;
      if (*(int *)(lVar37 + 0x11e4) <= lVar47) break;
      uVar23 = (ulong)*(uint *)(lVar37 + 0x11fc);
      local_230 = (ulong)((int)local_230 + 3);
      param_4 = local_248 + lVar42 * 2;
    } while( true );
  }
  iVar17 = silk_log2lin(0x800 - (int)((ulong)((long)local_2d4 * 0x28f6) >> 0x10));
  iVar20 = silk_log2lin(0x828);
  iVar25 = *(int *)(lVar37 + 0x11e4);
  if (0 < iVar25) {
    lVar47 = 0;
    do {
      lVar36 = lVar47 * 4;
      lVar47 = lVar47 + 1;
      iVar25 = iVar20 + (int)((ulong)((long)*(int *)(lVar40 + lVar36) * (long)iVar17) >> 0x10);
      if (iVar25 < 0) {
        iVar25 = 0x7fffffff;
      }
      *(int *)(lVar40 + lVar36) = iVar25;
      iVar25 = *(int *)(lVar37 + 0x11e4);
    } while (lVar47 < iVar25);
  }
  iVar20 = *(int *)(lVar37 + 0x11b4);
  cVar5 = *local_2c0;
  uVar22 = *(uint *)(lVar37 + 0x1268) ^ 0x8000;
  iVar18 = *(int *)(lVar37 + 0x11e0);
  iVar17 = (int)(((-(uVar22 >> 0xf & 1) & 0xfffc0000 | (uVar22 & 0xffff) << 2) + 0x40000 &
                 0xffffffc0) * iVar20) >> 8;
  if (cVar5 == '\x02') {
    if (0 < iVar25) {
      lVar47 = 0;
      iVar25 = 0;
      if (iVar18 != 0) {
        iVar25 = 0xccd / iVar18;
      }
      do {
        lVar36 = lVar40 + lVar47 * 4;
        lVar47 = lVar47 + 1;
        iVar18 = *(int *)(lVar36 + 0x7c);
        iVar20 = 0;
        if (iVar18 != 0) {
          iVar20 = 0xc000 / iVar18;
        }
        iVar20 = iVar20 + iVar25;
        *(uint *)(lVar36 + 0x14c) =
             ((iVar20 + 0xc000U & 0xffff) -
             (iVar17 * (short)iVar20 + iVar20 * 0x10000 & 0xffff0000U)) + 0x40000000;
      } while (lVar47 < *(int *)(lVar37 + 0x11e4));
      iVar20 = *(int *)(lVar37 + 0x11b4);
    }
    iVar25 = -0x4000 - (int)((ulong)(((long)(short)iVar20 * 0x59999a00000000 >> 0x30) * 3) >> 2);
    bVar16 = false;
  }
  else {
    iVar25 = 0;
    if (iVar18 != 0) {
      iVar25 = 0x5333 / iVar18;
    }
    iVar25 = ((iVar25 + 0xc000U & 0xffff) -
             (iVar17 * (short)((ulong)((long)(short)iVar25 * 0x999a00000000) >> 0x30) +
              iVar25 * 0x10000 & 0xffff0000U)) + 0x40000000;
    *(int *)(lVar40 + 0x14c) = iVar25;
    if (*(int *)(lVar37 + 0x11e4) < 2) {
      iVar17 = 0;
      iVar25 = -0x4000;
      goto LAB_00e8ed9c;
    }
    lVar47 = 0x54;
    do {
      *(int *)(lVar40 + lVar47 * 4) = iVar25;
      lVar36 = lVar47 + -0x52;
      lVar47 = lVar47 + 1;
    } while (lVar36 < *(int *)(lVar37 + 0x11e4));
    iVar25 = -0x4000;
    bVar16 = cVar5 != '\x02';
  }
  if (bVar16) {
    iVar17 = 0;
  }
  else {
    uVar22 = *(int *)(lVar37 + 0x21c8) * 0x8000;
    if ((int)uVar22 < 1) {
      lVar47 = 0;
    }
    else {
      uVar23 = LZCOUNT(uVar22);
      uVar35 = 0xb486;
      if ((uVar23 & 1) != 0) {
        uVar35 = 0x8000;
      }
      uVar35 = uVar35 >> (uVar23 >> 1);
      lVar47 = (long)(short)((short)uVar35 +
                            (short)(uVar35 * (ushort)((ulong)(uVar22 >> (ulong)(0x18U - (int)uVar23
                                                                               & 0x1f) & 0x7f) *
                                                      0xd5000000000000 >> 0x30) >> 0x10));
    }
    iVar17 = (int)(lVar47 * (((long)(0x1000000000000 -
                                    ((long)(*(int *)(lVar40 + 0x184) * -0x10 + 0x40000) *
                                     (long)*(short *)(lVar40 + 0x180) * 0x10000 &
                                    0xffffffff00000000U)) >> 0x20) * 0x66660000 + 0x999a00000000 >>
                             0x20 & 0xfffffffffffffffeU) >> 0x10);
  }
LAB_00e8ed9c:
  iVar20 = *(int *)(lVar37 + 0x1c20) +
           (int)((ulong)((long)(iVar17 - *(int *)(lVar37 + 0x1c20)) * 0x6666) >> 0x10);
  *(int *)(lVar37 + 0x1c20) = iVar20;
  *(int *)(lVar37 + 0x1c24) =
       *(int *)(lVar37 + 0x1c24) +
       (int)((ulong)((long)(iVar25 - *(int *)(lVar37 + 0x1c24)) * 0x6666) >> 0x10);
  *(int *)(lVar40 + 0x16c) = (iVar20 >> 1) + 1 >> 1;
  *(int *)(lVar40 + 0x15c) = (*(int *)(lVar37 + 0x1c24) >> 1) + 1 >> 1;
  iVar20 = *(int *)(lVar37 + 0x1c20) +
           (int)((ulong)((long)(iVar17 - *(int *)(lVar37 + 0x1c20)) * 0x6666) >> 0x10);
  *(int *)(lVar37 + 0x1c20) = iVar20;
  *(int *)(lVar37 + 0x1c24) =
       *(int *)(lVar37 + 0x1c24) +
       (int)((ulong)((long)(iVar25 - *(int *)(lVar37 + 0x1c24)) * 0x6666) >> 0x10);
  *(int *)(lVar40 + 0x170) = (iVar20 >> 1) + 1 >> 1;
  *(int *)(lVar40 + 0x160) = (*(int *)(lVar37 + 0x1c24) >> 1) + 1 >> 1;
  iVar20 = *(int *)(lVar37 + 0x1c20) +
           (int)((ulong)((long)(iVar17 - *(int *)(lVar37 + 0x1c20)) * 0x6666) >> 0x10);
  *(int *)(lVar37 + 0x1c20) = iVar20;
  *(int *)(lVar37 + 0x1c24) =
       *(int *)(lVar37 + 0x1c24) +
       (int)((ulong)((long)(iVar25 - *(int *)(lVar37 + 0x1c24)) * 0x6666) >> 0x10);
  *(int *)(lVar40 + 0x174) = (iVar20 >> 1) + 1 >> 1;
  *(int *)(lVar40 + 0x164) = (*(int *)(lVar37 + 0x1c24) >> 1) + 1 >> 1;
  iVar17 = *(int *)(lVar37 + 0x1c20) +
           (int)((ulong)((long)(iVar17 - *(int *)(lVar37 + 0x1c20)) * 0x6666) >> 0x10);
  *(int *)(lVar37 + 0x1c20) = iVar17;
  *(int *)(lVar37 + 0x1c24) =
       *(int *)(lVar37 + 0x1c24) +
       (int)((ulong)((long)(iVar25 - *(int *)(lVar37 + 0x1c24)) * 0x6666) >> 0x10);
  *(int *)(lVar40 + 0x178) = (iVar17 >> 1) + 1 >> 1;
  *(int *)(lVar40 + 0x168) = (*(int *)(lVar37 + 0x1c24) >> 1) + 1 >> 1;
  if (*(long *)(local_2d0 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


