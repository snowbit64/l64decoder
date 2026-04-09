// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: opus_encode_native
// Entry Point: 00e7de5c
// Size: 10724 bytes
// Signature: undefined opus_encode_native(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined8 param_12, undefined4 param_13)


/* WARNING: Removing unreachable block (ram,0x00e7e3d8) */

int opus_encode_native(int *param_1,short *param_2,int param_3,byte *param_4,int param_5,int param_6
                      ,undefined8 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
                      undefined4 param_11,undefined8 param_12,undefined4 param_13)

{
  undefined8 uVar1;
  void *pvVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined8 uVar15;
  void *pvVar16;
  size_t __n;
  byte bVar17;
  int iVar18;
  float *pfVar19;
  ulong uVar20;
  byte *pbVar21;
  short *psVar22;
  void *pvVar23;
  short *psVar24;
  byte bVar25;
  uint uVar26;
  undefined (*pauVar27) [16];
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  byte bVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  undefined auVar38 [16];
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined8 local_1f0;
  int *piStack_1e8;
  short *local_1e0;
  uint local_1d4;
  uint local_1d0;
  int local_1cc;
  byte *local_1c8;
  int *local_1c0;
  byte *local_1b8;
  long local_1b0;
  uint local_1a4;
  int local_1a0;
  int local_19c;
  uint local_198;
  uint local_194;
  undefined8 local_190;
  uint local_188;
  uint local_184;
  long local_180;
  uint local_174;
  uint *local_170;
  undefined8 local_168;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined auStack_130 [24];
  int local_118;
  uint local_110;
  long local_c8;
  uint local_c0;
  int local_bc;
  ulong local_b8;
  int local_b0 [5];
  float local_9c [3];
  uint local_90;
  float local_8c;
  long local_70;
  
  lVar28 = tpidr_el0;
  local_70 = *(long *)(lVar28 + 0x28);
  iVar18 = param_5;
  if (0x4fb < param_5) {
    iVar18 = 0x4fc;
  }
  local_c0 = 0;
  param_1[0xfd6] = 0;
  iVar8 = -1;
  if ((param_3 < 1) || (iVar18 < 1)) goto LAB_00e7f554;
  if ((iVar18 == 1) && (param_1[0x24] == param_3 * 10)) {
    iVar8 = -2;
    goto LAB_00e7f554;
  }
  local_158 = (ulong *)(param_1 + 0x775);
  lVar36 = (long)param_1 + (long)*param_1;
  if (param_1[0x1b] == 0x803) {
    local_174 = 0;
  }
  else {
    local_174 = param_1[0x1d];
  }
  local_168 = (ulong)param_1[1];
  if (param_1[0x2a] <= param_6) {
    param_6 = param_1[0x2a];
  }
  local_138 = (void *)CONCAT44(local_138._4_4_,param_6);
  opus_custom_encoder_ctl(lVar36,0x271f,&local_c8);
  local_b0[0] = 0;
  if ((param_1[0xb] < 10) || (param_1[0x24] < 16000)) {
    if (param_1[0x778] != 0) {
      tonality_analysis_reset(param_1 + 0x2f);
    }
    uVar29 = 0xffffffffffffffff;
    uVar15 = 0xffffffffffffffff;
LAB_00e7dfdc:
    uVar26 = 0;
    uVar13 = 0;
    param_1[0x23] = -1;
    param_1[0xfd2] = 0;
    uVar20 = local_150;
    uVar1 = uStack_148;
  }
  else {
    uVar29 = (ulong)(uint)(param_1[0x1c] * param_3);
    if (param_1[0x1c] * param_3 < 1) {
      uVar13 = 0;
      uVar26 = 0;
    }
    else {
      uVar26 = 0;
      uVar13 = 0;
      psVar22 = param_2;
      do {
        uVar12 = (uint)*psVar22;
        if ((int)uVar13 <= (int)*psVar22) {
          uVar13 = uVar12;
        }
        if ((int)uVar12 <= (int)uVar26) {
          uVar26 = uVar12;
        }
        uVar13 = uVar13 & 0xffff;
        uVar29 = uVar29 - 1;
        psVar22 = psVar22 + 1;
      } while (uVar29 != 0);
    }
    if (uVar13 == -uVar26 || (int)(uVar13 + uVar26) < 0 != SBORROW4(uVar13,-uVar26)) {
      uVar13 = -uVar26;
    }
    local_150 = *local_158;
    uStack_148 = 0;
    piStack_1e8 = local_b0;
    local_1f0 = param_12;
    local_160 = lVar36;
    run_analysis(param_1 + 0x2f,local_c8,param_7,param_8,param_3,param_9,param_10,param_11,
                 param_1[0x24],(undefined4)local_138);
    lVar36 = local_160;
    uVar29 = local_150;
    uVar15 = uStack_148;
    if ((uVar13 != 0) && (0.1 < local_8c)) {
      uVar13 = param_1[0x1c] * param_3;
      uVar20 = (ulong)uVar13;
      iVar8 = (int)((ulong)((long)param_1[0xfd4] * 0x7fdf) >> 0xf);
      if ((int)uVar13 < 1) {
        uVar26 = 0;
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        uVar26 = 0;
        psVar22 = param_2;
        uVar31 = uVar20;
        do {
          uVar33 = (uint)*psVar22;
          if ((int)uVar26 <= (int)*psVar22) {
            uVar26 = uVar33;
          }
          if ((int)uVar33 <= (int)uVar12) {
            uVar12 = uVar33;
          }
          uVar26 = uVar26 & 0xffff;
          uVar31 = uVar31 - 1;
          psVar22 = psVar22 + 1;
        } while (uVar31 != 0);
      }
      if (uVar26 == -uVar12 || (int)(uVar26 + uVar12) < 0 != SBORROW4(uVar26,-uVar12)) {
        uVar26 = -uVar12;
      }
      iVar9 = (int)LZCOUNT(uVar13) + (int)LZCOUNT(uVar26) * 2;
      iVar11 = -iVar9;
      uVar26 = 0;
      if (iVar11 + 0x41 < 0 == SCARRY4(iVar11,0x41)) {
        uVar26 = 0x41 - iVar9;
      }
      if ((int)uVar13 < 1) {
        if (iVar8 < 1) {
          uVar26 = 0;
          uVar12 = 0;
          goto LAB_00e7e748;
        }
      }
      else {
        if (uVar13 < 0x10) {
          uVar30 = 0;
          iVar9 = 0;
LAB_00e7e6e8:
          lVar34 = uVar20 - uVar30;
          psVar22 = param_2 + uVar30;
          do {
            lVar34 = lVar34 + -1;
            iVar9 = ((uint)((int)*psVar22 * (int)*psVar22) >> (ulong)(uVar26 & 0x1f)) + iVar9;
            psVar22 = psVar22 + 1;
          } while (lVar34 != 0);
        }
        else {
          auVar38._4_4_ = uVar26;
          auVar38._0_4_ = uVar26;
          auVar38._8_4_ = uVar26;
          auVar38._12_4_ = uVar26;
          uVar30 = uVar20 & 0xfffffff0;
          iVar9 = 0;
          iVar11 = 0;
          iVar37 = 0;
          iVar39 = 0;
          pauVar27 = (undefined (*) [16])(param_2 + 8);
          auVar38 = NEON_neg(auVar38,4);
          iVar7 = 0;
          iVar40 = 0;
          iVar41 = 0;
          iVar42 = 0;
          iVar43 = 0;
          iVar44 = 0;
          iVar45 = 0;
          iVar46 = 0;
          iVar47 = 0;
          iVar48 = 0;
          iVar50 = 0;
          iVar49 = 0;
          uVar31 = uVar30;
          do {
            auVar52 = pauVar27[-1];
            auVar54 = *pauVar27;
            pauVar27 = pauVar27 + 2;
            uVar31 = uVar31 - 0x10;
            auVar55._0_4_ = (int)auVar52._8_2_ * (int)auVar52._8_2_;
            auVar55._4_4_ = (int)auVar52._10_2_ * (int)auVar52._10_2_;
            auVar55._8_4_ = (int)auVar52._12_2_ * (int)auVar52._12_2_;
            auVar55._12_4_ = (int)auVar52._14_2_ * (int)auVar52._14_2_;
            auVar57._0_4_ = (int)auVar52._0_2_ * (int)auVar52._0_2_;
            auVar57._4_4_ = (int)auVar52._2_2_ * (int)auVar52._2_2_;
            auVar57._8_4_ = (int)auVar52._4_2_ * (int)auVar52._4_2_;
            auVar57._12_4_ = (int)auVar52._6_2_ * (int)auVar52._6_2_;
            auVar58._0_4_ = (int)auVar54._8_2_ * (int)auVar54._8_2_;
            auVar58._4_4_ = (int)auVar54._10_2_ * (int)auVar54._10_2_;
            auVar58._8_4_ = (int)auVar54._12_2_ * (int)auVar54._12_2_;
            auVar58._12_4_ = (int)auVar54._14_2_ * (int)auVar54._14_2_;
            auVar60._0_4_ = (int)auVar54._0_2_ * (int)auVar54._0_2_;
            auVar60._4_4_ = (int)auVar54._2_2_ * (int)auVar54._2_2_;
            auVar60._8_4_ = (int)auVar54._4_2_ * (int)auVar54._4_2_;
            auVar60._12_4_ = (int)auVar54._6_2_ * (int)auVar54._6_2_;
            auVar55 = NEON_ushl(auVar55,auVar38,4);
            auVar52 = NEON_ushl(auVar57,auVar38,4);
            auVar57 = NEON_ushl(auVar58,auVar38,4);
            auVar54 = NEON_ushl(auVar60,auVar38,4);
            iVar7 = auVar55._0_4_ + iVar7;
            iVar40 = auVar55._4_4_ + iVar40;
            iVar41 = auVar55._8_4_ + iVar41;
            iVar42 = auVar55._12_4_ + iVar42;
            iVar9 = auVar52._0_4_ + iVar9;
            iVar11 = auVar52._4_4_ + iVar11;
            iVar37 = auVar52._8_4_ + iVar37;
            iVar39 = auVar52._12_4_ + iVar39;
            iVar47 = auVar57._0_4_ + iVar47;
            iVar48 = auVar57._4_4_ + iVar48;
            iVar50 = auVar57._8_4_ + iVar50;
            iVar49 = auVar57._12_4_ + iVar49;
            iVar43 = auVar54._0_4_ + iVar43;
            iVar44 = auVar54._4_4_ + iVar44;
            iVar45 = auVar54._8_4_ + iVar45;
            iVar46 = auVar54._12_4_ + iVar46;
          } while (uVar31 != 0);
          iVar9 = iVar43 + iVar9 + iVar47 + iVar7 + iVar44 + iVar11 + iVar48 + iVar40 +
                  iVar45 + iVar37 + iVar50 + iVar41 + iVar46 + iVar39 + iVar49 + iVar42;
          if (uVar30 != uVar20) goto LAB_00e7e6e8;
        }
        iVar11 = 0;
        if (uVar13 != 0) {
          iVar11 = iVar9 / (int)uVar13;
        }
        if (iVar8 <= iVar11 << (ulong)(uVar26 & 0x1f)) {
          uVar12 = 0;
          uVar26 = 0;
          psVar22 = param_2;
          uVar31 = uVar20;
          do {
            uVar33 = (uint)*psVar22;
            if ((int)uVar26 <= (int)*psVar22) {
              uVar26 = uVar33;
            }
            if ((int)uVar33 <= (int)uVar12) {
              uVar12 = uVar33;
            }
            uVar26 = uVar26 & 0xffff;
            uVar31 = uVar31 - 1;
            psVar22 = psVar22 + 1;
          } while (uVar31 != 0);
LAB_00e7e748:
          if (uVar26 == -uVar12 || (int)(uVar26 + uVar12) < 0 != SBORROW4(uVar26,-uVar12)) {
            uVar26 = -uVar12;
          }
          iVar8 = (int)LZCOUNT(uVar13) + (int)LZCOUNT(uVar26) * 2;
          iVar9 = -iVar8;
          uVar26 = 0;
          if (iVar9 + 0x41 < 0 == SCARRY4(iVar9,0x41)) {
            uVar26 = 0x41 - iVar8;
          }
          if ((int)uVar13 < 1) {
            iVar9 = 0;
          }
          else {
            if (uVar13 < 0x10) {
              uVar30 = 0;
              iVar9 = 0;
            }
            else {
              auVar52._4_4_ = uVar26;
              auVar52._0_4_ = uVar26;
              auVar52._8_4_ = uVar26;
              auVar52._12_4_ = uVar26;
              uVar30 = uVar20 & 0xfffffff0;
              iVar8 = 0;
              iVar9 = 0;
              iVar11 = 0;
              iVar37 = 0;
              pauVar27 = (undefined (*) [16])(param_2 + 8);
              auVar38 = NEON_neg(auVar52,4);
              iVar39 = 0;
              iVar7 = 0;
              iVar40 = 0;
              iVar41 = 0;
              iVar42 = 0;
              iVar43 = 0;
              iVar44 = 0;
              iVar45 = 0;
              iVar46 = 0;
              iVar47 = 0;
              iVar48 = 0;
              iVar50 = 0;
              uVar31 = uVar30;
              do {
                auVar52 = pauVar27[-1];
                auVar54 = *pauVar27;
                pauVar27 = pauVar27 + 2;
                uVar31 = uVar31 - 0x10;
                auVar56._0_4_ = (int)auVar52._8_2_ * (int)auVar52._8_2_;
                auVar56._4_4_ = (int)auVar52._10_2_ * (int)auVar52._10_2_;
                auVar56._8_4_ = (int)auVar52._12_2_ * (int)auVar52._12_2_;
                auVar56._12_4_ = (int)auVar52._14_2_ * (int)auVar52._14_2_;
                auVar51._0_4_ = (int)auVar52._0_2_ * (int)auVar52._0_2_;
                auVar51._4_4_ = (int)auVar52._2_2_ * (int)auVar52._2_2_;
                auVar51._8_4_ = (int)auVar52._4_2_ * (int)auVar52._4_2_;
                auVar51._12_4_ = (int)auVar52._6_2_ * (int)auVar52._6_2_;
                auVar59._0_4_ = (int)auVar54._8_2_ * (int)auVar54._8_2_;
                auVar59._4_4_ = (int)auVar54._10_2_ * (int)auVar54._10_2_;
                auVar59._8_4_ = (int)auVar54._12_2_ * (int)auVar54._12_2_;
                auVar59._12_4_ = (int)auVar54._14_2_ * (int)auVar54._14_2_;
                auVar53._0_4_ = (int)auVar54._0_2_ * (int)auVar54._0_2_;
                auVar53._4_4_ = (int)auVar54._2_2_ * (int)auVar54._2_2_;
                auVar53._8_4_ = (int)auVar54._4_2_ * (int)auVar54._4_2_;
                auVar53._12_4_ = (int)auVar54._6_2_ * (int)auVar54._6_2_;
                auVar57 = NEON_ushl(auVar56,auVar38,4);
                auVar52 = NEON_ushl(auVar51,auVar38,4);
                auVar60 = NEON_ushl(auVar59,auVar38,4);
                auVar54 = NEON_ushl(auVar53,auVar38,4);
                iVar39 = auVar57._0_4_ + iVar39;
                iVar7 = auVar57._4_4_ + iVar7;
                iVar40 = auVar57._8_4_ + iVar40;
                iVar41 = auVar57._12_4_ + iVar41;
                iVar8 = auVar52._0_4_ + iVar8;
                iVar9 = auVar52._4_4_ + iVar9;
                iVar11 = auVar52._8_4_ + iVar11;
                iVar37 = auVar52._12_4_ + iVar37;
                iVar46 = auVar60._0_4_ + iVar46;
                iVar47 = auVar60._4_4_ + iVar47;
                iVar48 = auVar60._8_4_ + iVar48;
                iVar50 = auVar60._12_4_ + iVar50;
                iVar42 = auVar54._0_4_ + iVar42;
                iVar43 = auVar54._4_4_ + iVar43;
                iVar44 = auVar54._8_4_ + iVar44;
                iVar45 = auVar54._12_4_ + iVar45;
              } while (uVar31 != 0);
              iVar9 = iVar42 + iVar8 + iVar46 + iVar39 + iVar43 + iVar9 + iVar47 + iVar7 +
                      iVar44 + iVar11 + iVar48 + iVar40 + iVar45 + iVar37 + iVar50 + iVar41;
              if (uVar30 == uVar20) goto LAB_00e7ef10;
            }
            lVar34 = uVar20 - uVar30;
            psVar22 = param_2 + uVar30;
            do {
              lVar34 = lVar34 + -1;
              iVar9 = ((uint)((int)*psVar22 * (int)*psVar22) >> (ulong)(uVar26 & 0x1f)) + iVar9;
              psVar22 = psVar22 + 1;
            } while (lVar34 != 0);
          }
LAB_00e7ef10:
          iVar8 = 0;
          if (uVar13 != 0) {
            iVar8 = iVar9 / (int)uVar13;
          }
          iVar8 = iVar8 << (ulong)(uVar26 & 0x1f);
        }
      }
      param_1[0xfd4] = iVar8;
      goto LAB_00e7dfdc;
    }
    if (uVar13 != 0) goto LAB_00e7dfdc;
    uVar26 = 1;
    uVar13 = 1;
    param_1[0xfd2] = 0;
    uVar20 = local_150;
    uVar1 = uStack_148;
  }
  uStack_148 = uVar15;
  local_150 = uVar29;
  if (local_b0[0] != 0) {
    if (param_1[0x1f] == -1000) {
      if (param_1[0xde5] == 0x3ea) {
        pfVar19 = local_9c + 2;
      }
      else if (param_1[0xde5] == 0) {
        pfVar19 = local_9c;
      }
      else {
        pfVar19 = local_9c + 1;
      }
      param_1[0x23] = (int)((1.0 - *pfVar19) * 100.0 + 0.5);
    }
    if ((int)local_90 < 0xd) {
      iVar8 = 0x44d;
    }
    else if (local_90 < 0xf) {
      iVar8 = 0x44e;
    }
    else if (local_90 < 0x11) {
      iVar8 = 0x44f;
    }
    else {
      iVar8 = 0x450;
      if (0x12 < local_90) {
        iVar8 = 0x451;
      }
    }
    param_1[0xfd2] = iVar8;
    uVar13 = uVar26;
  }
  if ((param_1[0x1c] == 2) && (param_1[0x1e] != 1)) {
    sVar5 = compute_stereo_width(param_2,param_3,param_1[0x24],param_1 + 0xdee);
    uVar29 = local_150;
    uVar15 = uStack_148;
    if (param_3 != 0) goto LAB_00e7e1ac;
LAB_00e7e224:
    iVar9 = param_1[0x24] / 400;
    iVar8 = param_1[0x29];
    if (iVar8 != -1000) goto LAB_00e7e1b8;
LAB_00e7e24c:
    iVar11 = param_1[0x24];
    iVar37 = param_1[0x25];
    iVar8 = 0;
    if (iVar9 != 0) {
      iVar8 = (iVar11 * 0x3c) / iVar9;
    }
    iVar8 = iVar8 + param_1[0x1c] * iVar11;
    uVar26 = 0;
    if (param_3 != 0) {
      uVar26 = iVar11 / param_3;
    }
    param_1[0x28] = iVar8;
joined_r0x00e7e1ec:
    if (iVar37 != 0) goto LAB_00e7e2d8;
LAB_00e7e270:
    iVar8 = iVar8 * 0xc;
    iVar9 = 0;
    if (param_3 != 0) {
      iVar9 = (iVar11 * 0xc) / param_3;
    }
    iVar39 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar39 = iVar8;
    }
    iVar8 = iVar9;
    if (iVar9 < 0) {
      iVar8 = iVar9 + 1;
    }
    iVar7 = 0;
    if (iVar9 != 0) {
      iVar7 = ((iVar8 >> 1) + (iVar39 >> 3)) / iVar9;
    }
    if (iVar18 <= iVar7) {
      iVar7 = iVar18;
    }
    iVar8 = (iVar9 * iVar7 * 8) / 0xc;
    param_1[0x28] = iVar8;
    iVar18 = iVar7;
    if (1 < iVar7) goto LAB_00e7e2d8;
    iVar18 = 1;
  }
  else {
    sVar5 = 0;
    uVar29 = local_150;
    uVar15 = uStack_148;
    local_150 = uVar20;
    uStack_148 = uVar1;
    if (param_3 == 0) goto LAB_00e7e224;
LAB_00e7e1ac:
    iVar8 = param_1[0x29];
    iVar9 = param_3;
    if (iVar8 == -1000) goto LAB_00e7e24c;
LAB_00e7e1b8:
    if (iVar8 != -1) {
      iVar11 = param_1[0x24];
      iVar37 = param_1[0x25];
      uVar26 = 0;
      if (param_3 != 0) {
        uVar26 = iVar11 / param_3;
      }
      param_1[0x28] = iVar8;
      goto joined_r0x00e7e1ec;
    }
    iVar11 = param_1[0x24];
    iVar37 = param_1[0x25];
    iVar8 = 0;
    if (iVar9 != 0) {
      iVar8 = (iVar18 * iVar11 * 8) / iVar9;
    }
    uVar26 = 0;
    if (param_3 != 0) {
      uVar26 = iVar11 / param_3;
    }
    param_1[0x28] = iVar8;
    if (iVar37 == 0) goto LAB_00e7e270;
LAB_00e7e2d8:
    uVar20 = local_168;
    if ((2 < iVar18) && ((int)(iVar8 + uVar26 * -0x18) < 0 == SBORROW4(iVar8,uVar26 * 0x18))) {
      iVar9 = iVar8;
      if ((int)uVar26 < 0x32) {
        if (((int)(iVar18 * uVar26) < 300) || (iVar8 < 0x960)) goto LAB_00e7e348;
        iVar7 = param_1[10];
        iVar40 = param_1[0xb];
        iVar39 = param_1[0x1c];
        uVar33 = 0;
        uVar12 = 0;
      }
      else {
        iVar7 = param_1[10];
        iVar40 = param_1[0xb];
        iVar39 = param_1[0x1c];
        bVar3 = uVar26 - 0x32 != 0;
        if (bVar3) {
          iVar9 = iVar8 + (iVar39 * -0x28 + -0x14) * (uVar26 - 0x32);
        }
        uVar33 = (uint)bVar3;
        uVar12 = (uint)bVar3;
      }
      if (iVar37 == 0) {
        iVar9 = ((int)((long)iVar9 * -0x2aaaaaab >> 0x21) - (iVar9 / -0x66666666 + (iVar9 >> 0x1f)))
                + iVar9;
        uVar12 = uVar33;
      }
      if (param_1[0x1f] == 0xbb9) {
        iVar41 = 0x7f;
      }
      else if (param_1[0x1f] == 0xbba) {
        iVar41 = 0;
      }
      else if (param_1[0x23] < 0) {
        iVar41 = 0x73;
        if (param_1[0x1b] != 0x800) {
          iVar41 = 0x30;
        }
      }
      else {
        iVar41 = param_1[0x23] * 0x147 >> 8;
        if ((param_1[0x1b] == 0x801) && (0x72 < iVar41)) {
          iVar41 = 0x73;
        }
      }
      iVar44 = param_1[0x1e];
      iVar42 = iVar40 + 0x5a;
      iVar43 = iVar7 * 0xc + 0x14;
      if (iVar44 == -1000) {
        if (iVar39 == 2) {
          iVar44 = (iVar9 * iVar42) / 100;
          iVar9 = 16000;
          if (param_1[0xddc] != 2) {
            iVar9 = 18000;
          }
          iVar45 = 0;
          if (iVar43 != 0) {
            iVar45 = (iVar44 * iVar7) / iVar43;
          }
          iVar39 = 1;
          if ((int)(iVar9 + ((uint)(iVar41 * iVar41 * 2000) >> 0xe)) < iVar44 - iVar45) {
            iVar39 = 2;
          }
        }
LAB_00e7e82c:
        param_1[0xddc] = iVar39;
        iVar44 = iVar39;
      }
      else {
        if (iVar39 != 2) goto LAB_00e7e82c;
        param_1[0xddc] = iVar44;
      }
      iVar9 = iVar8;
      if (uVar12 != 0) {
        iVar9 = iVar8 + (iVar44 * -0x28 + -0x14) * (uVar26 - 0x32);
      }
      if (iVar37 == 0) {
        iVar9 = ((int)((long)iVar9 * -0x2aaaaaab >> 0x21) - (iVar9 / -0x66666666 + (iVar9 >> 0x1f)))
                + iVar9;
      }
      uVar33 = (uint)(param_1[0x2e] != 0) & (uint)(local_b0[0] == 0) & (uVar13 ^ 0xffffffff);
      param_1[0xe] = uVar33;
      if (param_1[0x1b] == 0x803) {
        uVar6 = 0x3ea;
        param_1[0xde4] = 0x3ea;
        bVar3 = param_3 < iVar11 / 100;
      }
      else {
        uVar6 = param_1[0x22];
        if (uVar6 == 0xfffffc18) {
          iVar39 = (int)((ulong)((long)(short)(0x7fff - sVar5) * 10000) >> 0xf) +
                   (int)((ulong)((long)sVar5 * 10000) >> 0xf);
          iVar45 = (iVar9 * iVar42) / 100;
          iVar39 = iVar39 + (iVar41 * iVar41 *
                             (((int)((ulong)((long)(short)(0x7fff - sVar5) * 64000) >> 0xf) +
                              (int)((ulong)((long)sVar5 * 44000) >> 0xf)) - iVar39) >> 0xe);
          iVar9 = 0;
          if (iVar43 != 0) {
            iVar9 = (iVar45 * iVar7) / iVar43;
          }
          iVar46 = iVar39 + 8000;
          if (param_1[0x1b] != 0x800) {
            iVar46 = iVar39;
          }
          iVar39 = iVar46 + 4000;
          if (param_1[0xde5] < 1) {
            iVar39 = iVar46;
          }
          iVar46 = iVar46 + -4000;
          if (param_1[0xde5] != 0x3ea) {
            iVar46 = iVar39;
          }
          uVar6 = 1000;
          if (iVar46 <= iVar45 - iVar9) {
            uVar6 = 0x3ea;
          }
          param_1[0xde4] = uVar6;
          if ((param_1[0xc] != 0) && (0x80 - iVar41 >> 4 < iVar7)) {
            uVar6 = 1000;
            param_1[0xde4] = 1000;
          }
          iVar9 = 9000;
          if (uVar12 == 0) {
            iVar9 = 6000;
          }
          iVar39 = 0;
          if (iVar11 << 3 != 0) {
            iVar39 = (iVar9 * param_3) / (iVar11 << 3);
          }
          if (((uVar33 & 100 < iVar41) != 0) || (iVar18 < iVar39)) {
            uVar6 = 0x3ea;
            if (iVar39 <= iVar18) {
              uVar6 = 1000;
            }
            param_1[0xde4] = uVar6;
          }
        }
        else {
          param_1[0xde4] = uVar6;
        }
        bVar3 = param_3 < iVar11 / 100;
        if ((uVar6 != 0x3ea) && (param_3 < iVar11 / 100)) {
          uVar6 = 0x3ea;
          param_1[0xde4] = 0x3ea;
        }
      }
      local_170 = (uint *)(param_1 + 0xde4);
      if (param_1[0x2c] != 0) {
        uVar6 = 0x3ea;
        *local_170 = 0x3ea;
      }
      uVar33 = param_1[0xde5];
      if ((int)uVar33 < 1) {
LAB_00e7eb08:
        local_168 = (ulong)local_168._4_4_ << 0x20;
        local_190 = (void *)((ulong)local_190._4_4_ << 0x20);
        local_19c = 1;
joined_r0x00e7eb30:
        local_184 = 0;
        if (iVar44 == 1) goto LAB_00e7ebb0;
LAB_00e7ebc4:
        param_1[0x11] = 0;
      }
      else {
        if ((uVar6 == 0x3ea) || (uVar33 != 0x3ea)) {
          if (uVar6 != 0x3ea) goto LAB_00e7eb08;
          if (uVar33 != 0x3ea) goto LAB_00e7eac8;
LAB_00e7eb3c:
          local_184 = 0;
          local_190 = (void *)((ulong)local_190._4_4_ << 0x20);
          uVar6 = 0x3ea;
        }
        else {
LAB_00e7eac8:
          if (uVar6 == 0x3ea) {
            if (bVar3) goto LAB_00e7eb3c;
            local_19c = 0;
            local_168 = CONCAT44(local_168._4_4_,1);
            local_190 = (void *)CONCAT44(local_190._4_4_,1);
            *local_170 = uVar33;
            uVar6 = uVar33;
            goto joined_r0x00e7eb30;
          }
          local_184 = 1;
          local_190 = (void *)CONCAT44(local_190._4_4_,1);
        }
        local_168 = (ulong)local_168._4_4_ << 0x20;
        local_19c = 1;
        if (iVar44 != 1) goto LAB_00e7ebc4;
LAB_00e7ebb0:
        if ((((param_1[0xde6] != 2) || (param_1[0x11] != 0)) || (uVar6 == 0x3ea)) ||
           (uVar33 == 0x3ea)) goto LAB_00e7ebc4;
        iVar44 = 2;
        param_1[0x11] = 1;
        param_1[0xddc] = 2;
      }
      if (uVar12 != 0) {
        iVar8 = iVar8 + (iVar44 * -0x28 + -0x14) * (uVar26 - 0x32);
      }
      lVar34 = (long)param_1 + uVar20;
      if (iVar37 == 0) {
        iVar8 = ((int)((long)iVar8 * -0x2aaaaaab >> 0x21) - (iVar8 / -0x66666666 + (iVar8 >> 0x1f)))
                + iVar8;
      }
      iVar8 = (iVar8 * iVar42) / 100;
      local_198 = uVar13;
      local_180 = lVar28;
      local_160 = lVar36;
      local_150 = uVar29;
      uStack_148 = uVar15;
      if ((uVar6 & 0xfffffffe) == 1000) {
        if (iVar40 < 2) {
          iVar8 = (iVar8 * 4) / 5;
        }
        iVar9 = iVar7 * 6 + 10;
        iVar11 = 0;
        if (iVar9 != 0) {
          iVar11 = (iVar8 * iVar7) / iVar9;
        }
        iVar8 = iVar8 - iVar11;
joined_r0x00e7ed4c:
        if (uVar33 == 0x3ea) {
          local_1a0 = param_5;
          silk_InitEncoder(lVar34,param_1[0x2d],auStack_130);
          uVar6 = param_1[0xde4];
          param_5 = local_1a0;
        }
        local_188 = (uint)(uVar33 == 0x3ea);
        if (uVar6 == 0x3ea) goto LAB_00e7ed80;
        if ((param_1[0xdeb] != 0) || (param_1[0x15] != 0)) {
          bVar3 = false;
          goto LAB_00e7ed84;
        }
        iVar9 = param_1[0xde8];
        bVar3 = false;
      }
      else {
        if (uVar6 != 0x3ea) {
          iVar9 = 0;
          if (iVar43 != 0) {
            iVar9 = (iVar8 * iVar7) / iVar43;
          }
          iVar8 = iVar8 - iVar9;
          goto joined_r0x00e7ed4c;
        }
        if (iVar40 < 5) {
          iVar8 = (iVar8 * 9) / 10;
        }
        local_188 = 0;
        uVar6 = 0x3ea;
LAB_00e7ed80:
        bVar3 = true;
LAB_00e7ed84:
        iVar39 = param_1[0xdeb];
        iVar9 = iVar41 * iVar41 * 0x9c4 >> 0xe;
        iVar11 = iVar9 + 11000;
        iVar37 = (iVar41 * iVar41 * 2000 >> 0xe) + 12000;
        if (iVar39 == 0) {
          iVar11 = -2000;
          if (param_1[0xde9] < 0x451) {
            iVar11 = 2000;
          }
          if (iVar8 < iVar37 + iVar11) {
            if (param_1[0xde9] < 0x450) {
              iVar11 = iVar9 + 12000;
            }
            else {
              iVar11 = iVar9 + 10000;
            }
            goto LAB_00e7ef2c;
          }
          iVar9 = 0x451;
          bVar4 = 1;
LAB_00e7effc:
          param_1[0xde9] = iVar9;
          param_1[0xde8] = iVar9;
          if (((bool)(bVar3 | iVar39 != 0)) || ((bool)(param_1[0x16] != 0 | bVar4 ^ 1)))
          goto LAB_00e7f034;
          iVar9 = 0x44f;
        }
        else {
          if (iVar8 < iVar37) {
LAB_00e7ef2c:
            if (iVar8 < iVar11) {
              iVar11 = 9000;
              if (iVar39 == 0) {
                iVar9 = -700;
                if (param_1[0xde9] < 0x44f) {
                  iVar9 = 700;
                }
                if (iVar9 + 9000 <= iVar8) {
                  bVar4 = 0;
                  iVar9 = 0x44f;
                  goto LAB_00e7effc;
                }
                if (param_1[0xde9] < 0x44e) {
                  iVar11 = 0x25e4;
                }
                else {
                  iVar11 = 0x206c;
                }
              }
              else if (8999 < iVar8) {
                iVar9 = 0x44f;
                param_1[0xde9] = 0x44f;
                goto LAB_00e7f030;
              }
              bVar4 = 0;
              iVar9 = 0x44d;
              if (iVar11 <= iVar8) {
                iVar9 = 0x44f;
              }
            }
            else {
              iVar9 = 0x450;
              bVar4 = 1;
            }
            goto LAB_00e7effc;
          }
          iVar9 = 0x451;
          param_1[0xde9] = 0x451;
        }
LAB_00e7f030:
        param_1[0xde8] = iVar9;
      }
LAB_00e7f034:
      iVar11 = param_1[0x21];
      if (iVar11 < iVar9) {
        param_1[0xde8] = iVar11;
        iVar37 = param_1[0x20];
      }
      else {
        iVar37 = param_1[0x20];
        iVar11 = iVar9;
      }
      if (iVar37 != -1000) {
        param_1[0xde8] = iVar37;
        iVar11 = iVar37;
      }
      if ((uVar6 != 0x3ea) && ((int)(iVar18 * uVar26) < 0x753)) {
        if (0x44e < iVar11) {
          iVar11 = 0x44f;
        }
        param_1[0xde8] = iVar11;
      }
      local_1a0 = iVar18 * uVar26;
      iVar9 = param_1[0x24];
      if (iVar9 < 0x5dc1) {
        if (iVar11 < 0x451) {
          if (iVar9 < 0x3e81) {
            if (0x44f < iVar11) goto LAB_00e7f0e0;
            if (iVar9 < 0x2ee1) {
              if (0x44e < iVar11) goto LAB_00e7f0f4;
              if ((iVar9 < 0x1f41) && (iVar11 == 0x44e)) goto LAB_00e7f108;
            }
          }
        }
        else {
          iVar11 = 0x450;
          param_1[0xde8] = 0x450;
          if (iVar9 < 0x3e81) {
LAB_00e7f0e0:
            iVar11 = 0x44f;
            param_1[0xde8] = 0x44f;
            if (iVar9 < 0x2ee1) {
LAB_00e7f0f4:
              iVar11 = 0x44e;
              param_1[0xde8] = 0x44e;
              if (iVar9 < 0x1f41) {
LAB_00e7f108:
                iVar11 = 0x44d;
                param_1[0xde8] = 0x44d;
              }
            }
          }
        }
      }
      iVar9 = param_1[0xfd2];
      if ((iVar9 != 0) && (iVar37 == -1000)) {
        iVar37 = param_1[0xddc];
        if (iVar37 * 18000 < iVar8) {
          if ((bool)(bVar3 & iVar8 <= iVar37 * 24000)) {
            iVar39 = 0x44e;
          }
          else {
LAB_00e7f18c:
            if (iVar37 * 30000 < iVar8) {
              iVar39 = 0x450;
              if (iVar37 * 44000 < iVar8) {
                iVar39 = 0x451;
              }
            }
            else {
              iVar39 = 0x44f;
            }
          }
        }
        else {
          if (!bVar3) goto LAB_00e7f18c;
          iVar39 = 0x44d;
        }
        if (iVar9 <= iVar39) {
          iVar9 = iVar39;
        }
        if (iVar9 <= iVar11) {
          iVar11 = iVar9;
        }
        param_1[0xfd2] = iVar9;
        param_1[0xde8] = iVar11;
      }
      iVar9 = param_1[10];
      if ((bool)(bVar3 | (param_1[0xc] == 0 || iVar9 == 0))) {
        uVar13 = 0;
      }
      else {
        iVar37 = iVar9;
        if (0x18 < iVar9) {
          iVar37 = 0x19;
        }
        iVar39 = param_1[0xd];
        if (iVar9 < 6) {
          iVar7 = (&DAT_00568e30)[iVar11 * 2 + -0x899];
          iVar9 = iVar7;
          if (iVar39 != 1) {
            iVar9 = 0;
          }
          if (iVar39 != 0) {
            iVar7 = 0;
          }
          uVar13 = (uint)((int)((ulong)((long)((((&DAT_00568e30)[iVar11 * 2 + -0x89a] - iVar9) +
                                               iVar7) * (0x7d - iVar37)) * 0x28f) >> 0x10) < iVar8);
        }
        else {
          lVar28 = (long)iVar11;
          iVar9 = iVar11 * 2 + -0x89a;
          iVar7 = iVar11;
          while( true ) {
            iVar7 = iVar7 + -1;
            iVar41 = (&DAT_00568e30)[iVar9 + 1];
            iVar40 = iVar41;
            if (iVar39 != 1) {
              iVar40 = 0;
            }
            if (iVar39 != 0) {
              iVar41 = 0;
            }
            if ((int)((ulong)((long)((((&DAT_00568e30)[iVar9] - iVar40) + iVar41) * (0x7d - iVar37))
                             * 0x28f) >> 0x10) < iVar8) {
              uVar13 = 1;
              goto LAB_00e7f2fc;
            }
            if (lVar28 < 0x44e) break;
            lVar28 = lVar28 + -1;
            param_1[0xde8] = iVar7;
            iVar9 = iVar9 + -2;
          }
          uVar13 = 0;
          param_1[0xde8] = iVar11;
        }
      }
LAB_00e7f2fc:
      param_1[0xd] = uVar13;
      local_194 = uVar12;
      opus_custom_encoder_ctl(local_160,0xfc4,(ulong)local_138 & 0xffffffff);
      uVar13 = local_174;
      iVar9 = param_1[0xde4];
      if ((iVar9 == 0x3ea) && (param_1[0xde8] == 0x44e)) {
        param_1[0xde8] = 0x44f;
      }
      if (param_1[0x2c] == 0) {
        iVar11 = param_1[0xde8];
        if ((iVar9 != 1000) || (iVar11 < 0x450)) goto LAB_00e7f344;
        iVar37 = param_1[0x24];
        param_1[0xde4] = 0x3e9;
        iVar39 = iVar37 / 0x32;
        if ((param_3 <= iVar39) && (param_3 <= (iVar37 * 3) / 0x32)) {
          iVar9 = 0x3e9;
          goto LAB_00e7f458;
        }
      }
      else {
        iVar11 = 0x44d;
        param_1[0xde8] = 0x44d;
LAB_00e7f344:
        if ((iVar9 == 0x3e9) && (iVar11 < 0x450)) {
          iVar9 = 1000;
          *local_170 = 1000;
        }
        iVar37 = param_1[0x24];
        iVar7 = iVar37 / 0x32;
        iVar39 = iVar7;
        if ((param_3 <= iVar7) || (iVar9 == 1000)) {
          iVar40 = (iVar37 * 3) / 0x32;
          if (param_3 <= iVar40) {
LAB_00e7f458:
            local_150 = CONCAT44(local_150._4_4_,iVar11);
            iVar11 = (uint)local_190;
            if (param_1[0xdea] != 0) {
              param_1[0xdea] = 0;
              local_188 = 2;
              local_184 = 1;
              iVar11 = 1;
            }
            iVar39 = param_1[0x28];
            iVar7 = 0;
            local_1b0 = lVar34;
            if (iVar11 == 0) {
              local_1a4 = 0;
            }
            else {
              local_1a4 = 0;
              if (iVar9 != 0x3ea) {
                iVar7 = FUN_00e80c64(iVar18,iVar39,uVar26,param_1[0xddc]);
                if (iVar7 == 0) {
                  local_1a4 = 0;
                }
                else {
                  local_1a4 = 1;
                }
              }
            }
            local_1c8 = param_4 + 1;
            iVar9 = 0;
            if (iVar37 << 3 != 0) {
              iVar9 = (iVar39 * param_3) / (iVar37 << 3);
            }
            local_190 = (void *)CONCAT44(local_190._4_4_,iVar7);
            iVar11 = iVar18 - iVar7;
            if (iVar9 <= iVar18 - iVar7) {
              iVar11 = iVar9;
            }
            local_168 = CONCAT44(local_168._4_4_,iVar18 + -1);
            ec_enc_init(auStack_130);
            iVar9 = param_1[0x1c];
            local_1cc = uVar13 + param_3;
            lVar36 = -((-(ulong)((uint)(iVar9 * local_1cc) >> 0x1f) & 0xfffffffe00000000 |
                       (ulong)(uint)(iVar9 * local_1cc) << 1) + 0xf & 0xfffffffffffffff0);
            pvVar23 = (void *)((long)&local_1e0 + lVar36);
            local_1c0 = param_1 + 0xdf2;
            local_138 = pvVar23;
            memcpy(pvVar23,(void *)((long)local_1c0 +
                                   (long)(int)((param_1[0x2b] - uVar13) * iVar9) * 2),
                   -(ulong)(iVar9 * uVar13 >> 0x1f) & 0xfffffffe00000000 |
                   (ulong)(iVar9 * uVar13) << 1);
            if (param_1[0xde4] == 0x3ea) {
              iVar9 = silk_lin2log(0x3c);
              iVar9 = iVar9 << 8;
            }
            else {
              iVar9 = *(int *)(local_1b0 + 8);
            }
            iVar9 = param_1[0xdde] + (int)((ulong)((long)(iVar9 - param_1[0xdde]) * 0x3d7) >> 0x10);
            param_1[0xdde] = iVar9;
            uVar10 = silk_log2lin(iVar9 >> 8);
            lVar28 = local_180;
            pvVar16 = (void *)((long)local_138 + (long)(int)(param_1[0x1c] * uVar13) * 2);
            if (param_1[0x1b] == 0x800) {
              FUN_00e80cf4(param_2,uVar10,pvVar16,param_1 + 0xde0,param_3);
            }
            else {
              FUN_00e80dd4(param_2,pvVar16,param_1 + 0xde0,param_3,param_1[0x1c],param_1[0x24]);
            }
            uVar12 = *local_170;
            local_1b8 = param_4;
            if (uVar12 == 0x3ea) {
              local_1d0 = 0x7fff;
              iVar9 = (int)local_150;
              uVar12 = (uint)local_190;
              goto LAB_00e7f70c;
            }
            iVar9 = (iVar11 * 8 + -8) * uVar26;
            local_1d4 = (uint)(0.1 <= local_8c);
            if (local_b0[0] == 0) {
              local_1d4 = 0xffffffff;
            }
            local_1e0 = param_2;
            if (uVar12 == 0x3e9) {
              iVar11 = FUN_00e80ea4(iVar9,local_150 & 0xffffffff,param_1[0x24] == param_3 * 0x32,
                                    param_1[0x25],param_1[0xd],param_1[0xddc]);
              psVar22 = *(short **)(param_1 + 0xdec);
              param_1[9] = iVar11;
              if (psVar22 == (short *)0x0) {
                uVar13 = FUN_00e80fbc(iVar11 - iVar9);
                local_1d0 = 0x7fff - (uVar13 >> 1);
                uVar29 = local_150 & 0xffffffff;
                uVar13 = (uint)local_190;
                iVar9 = iVar11;
              }
              else {
                iVar9 = iVar11;
LAB_00e7f894:
                uVar29 = local_150 & 0xffffffff;
                if ((param_1[0x25] != 0) && (param_1[0x2c] == 0)) {
                  uVar13 = param_1[0xde8];
                  if (uVar13 == 0x44d) {
                    iVar11 = 8000;
                    lVar34 = 0xd;
                  }
                  else if (uVar13 == 0x44e) {
                    iVar11 = 12000;
                    lVar34 = 0xf;
                  }
                  else {
                    iVar11 = 16000;
                    lVar34 = 0x11;
                  }
                  uVar33 = param_1[0x1c];
                  if ((int)uVar33 < 1) {
                    iVar37 = 0;
                  }
                  else {
                    uVar20 = 0;
                    iVar37 = 0;
                    lVar35 = lVar34;
                    psVar24 = psVar22;
                    do {
                      do {
                        sVar5 = *psVar22;
                        if (sVar5 + 0x7ff < 0 == SCARRY4((int)sVar5,0x7ff)) {
                          if (sVar5 < 0x200) {
                            if (0 < sVar5) {
                              sVar5 = sVar5 >> 1;
                            }
                          }
                          else {
                            sVar5 = 0x100;
                          }
                        }
                        else {
                          sVar5 = -0x800;
                        }
                        iVar37 = iVar37 + sVar5;
                        psVar22 = psVar22 + 1;
                        lVar35 = lVar35 + -1;
                      } while (lVar35 != 0);
                      uVar20 = uVar20 + 1;
                      psVar22 = psVar24 + 0x15;
                      lVar35 = lVar34;
                      psVar24 = psVar22;
                    } while (uVar20 != uVar33);
                  }
                  iVar39 = 0;
                  if ((int)lVar34 != 0) {
                    iVar39 = iVar37 / (int)lVar34;
                  }
                  iVar11 = ((int)(uVar33 * iVar39 * 0x10000 + 0xcd0000) >> 0x10) * iVar11 + 0x200 >>
                           10;
                  iVar37 = (iVar9 * -2) / 3;
                  if (iVar11 <= iVar37) {
                    iVar11 = iVar37;
                  }
                  if ((uVar13 & 0xfffffffe) == 0x450) {
                    iVar11 = (iVar11 * 3) / 5;
                  }
                  iVar9 = iVar11 + iVar9;
                  param_1[9] = iVar9;
                }
                local_1d0 = 0x7fff;
                uVar13 = (uint)local_190;
              }
            }
            else {
              psVar22 = *(short **)(param_1 + 0xdec);
              param_1[9] = iVar9;
              if (psVar22 != (short *)0x0) goto LAB_00e7f894;
              uVar29 = local_150 & 0xffffffff;
              local_1d0 = 0x7fff;
              uVar13 = (uint)local_190;
            }
            uVar33 = local_188;
            iVar11 = param_1[0x24];
            iVar37 = param_1[0x1c];
            iVar39 = 0;
            if (iVar11 != 0) {
              iVar39 = (param_3 * 1000) / iVar11;
            }
            param_1[2] = iVar37;
            param_1[3] = param_1[0xddc];
            param_1[8] = iVar39;
            if ((int)uVar29 == 0x44d) {
              iVar7 = 8000;
              iVar39 = 8000;
            }
            else if ((int)uVar29 == 0x44e) {
              iVar7 = 12000;
              iVar39 = 12000;
            }
            else {
              iVar39 = 12000;
              iVar7 = 16000;
            }
            param_1[7] = iVar7;
            if (uVar12 == 0x3e9) {
              *(undefined8 *)(param_1 + 5) = 0x3e8000003e80;
            }
            else {
              *(undefined8 *)(param_1 + 5) = 0x1f4000003e80;
              if (uVar12 == 1000) {
                if (local_194 == 0) {
                  iVar7 = local_1a0 << 3;
                }
                else {
                  iVar7 = (local_1a0 << 4) / 3;
                }
                if (iVar7 < 8000) {
                  param_1[7] = iVar39;
                  param_1[5] = 12000;
                  if (iVar7 < 7000) {
                    param_1[5] = 8000;
                    param_1[7] = 8000;
                  }
                }
              }
            }
            iVar7 = param_1[0x25];
            iVar39 = (int)local_168 * 8;
            param_1[0xf] = (uint)(iVar7 == 0);
            param_1[0x10] = iVar39;
            if ((local_1a4 & 1 < (int)uVar13) == 1) {
              iVar39 = iVar39 + (uVar13 << 3 ^ 0xffffffff);
              param_1[0x10] = iVar39;
              if (uVar12 == 0x3e9) {
                iVar39 = iVar39 + -0x14;
                param_1[0x10] = iVar39;
                if (iVar7 == 0) {
LAB_00e805e8:
                  iVar7 = 0;
                  if (iVar11 != 0) {
                    iVar7 = (iVar9 * param_3) / iVar11;
                  }
                  if (iVar7 <= iVar39) {
                    iVar39 = iVar7;
                  }
                }
                else {
LAB_00e805b0:
                  iVar9 = 0;
                  if (param_3 != 0) {
                    iVar9 = (iVar39 * iVar11) / param_3;
                  }
                  iVar9 = FUN_00e80ea4(iVar9,uVar29,iVar11 == param_3 * 0x32,iVar7,param_1[0xd]);
                  iVar39 = 0;
                  if (iVar11 != 0) {
                    iVar39 = (iVar9 * param_3) / iVar11;
                  }
                }
                param_1[0x10] = iVar39;
              }
            }
            else if (iVar7 == 0) {
              if (uVar12 == 0x3e9) goto LAB_00e805e8;
            }
            else if (uVar12 == 0x3e9) goto LAB_00e805b0;
            lVar34 = local_1b0;
            uVar12 = local_1d4;
            if (uVar33 != 0) {
              local_b8 = local_b8 & 0xffffffff00000000;
              uVar13 = (param_1[0x2b] - (iVar11 / 400 + param_1[0x1d])) * iVar37;
              uVar10 = *(undefined4 *)(local_c8 + 4);
              uVar29 = -(ulong)(uVar13 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar13 << 1;
              uVar15 = *(undefined8 *)(local_c8 + 0x40);
              lVar34 = (long)param_1 + uVar29 + 0x37c8;
              *(int *)((long)&local_1f0 + lVar36) = iVar11;
              FUN_00e81044(lVar34,lVar34,0,0x7fff,uVar10,iVar11 / 400,iVar37,uVar15);
              piVar14 = local_1c0;
              memset(local_1c0,0,uVar29);
              lVar34 = local_1b0;
              uVar12 = local_1d4;
              silk_Encode(local_1b0,param_1 + 2,piVar14,param_1[0x2b],0,&local_b8,uVar33,local_1d4);
              iVar37 = param_1[0x1c];
              param_1[0x12] = 0;
            }
            uVar13 = local_174;
            iVar9 = silk_Encode(lVar34,param_1 + 2,
                                (void *)((long)local_138 + (long)(int)(iVar37 * local_174) * 2),
                                param_3,auStack_130,&local_bc,0,uVar12);
            pbVar21 = local_1b8;
            param_2 = local_1e0;
            if (iVar9 == 0) {
              uVar33 = *local_170;
              iVar9 = (int)local_150;
              if (uVar33 == 1000) {
                iVar11 = param_1[0x14];
                if (iVar11 == 8000) {
                  iVar9 = 0x44d;
                }
                else if (iVar11 == 16000) {
                  iVar9 = 0x44f;
                }
                else if (iVar11 == 12000) {
                  iVar9 = 0x44e;
                }
              }
              uVar12 = (uint)local_190;
              if (param_1[0x18] == 0) {
                param_1[0x12] = 0;
                if (local_bc == 0) goto LAB_00e80818;
              }
              else {
                param_1[0x12] = (uint)(param_1[0xfd5] == 0);
                if (local_bc == 0) {
LAB_00e80818:
                  param_1[0xfd6] = 0;
                  iVar18 = 0;
                  if (param_3 != 0) {
                    iVar18 = param_1[0x24] / param_3;
                  }
                  bVar4 = FUN_00e808b4(uVar33,iVar18,iVar9,param_1[0xddc]);
                  *pbVar21 = bVar4;
                  iVar8 = 1;
                  goto LAB_00e7f554;
                }
                if (param_1[0xfd5] == 0) {
                  uVar12 = FUN_00e80c64(iVar18,param_1[0x28],uVar26,param_1[0xddc]);
                  local_184 = 0;
                  local_1a4 = (uint)(uVar12 != 0);
                  param_1[0xdea] = 1;
                }
              }
LAB_00e7f70c:
              lVar28 = local_160;
              local_150 = CONCAT44(local_150._4_4_,iVar9);
              if (iVar9 - 0x44dU < 4) {
                uVar10 = (&DAT_004c3430)[(int)(iVar9 - 0x44dU)];
              }
              else {
                uVar10 = 0x15;
              }
              opus_custom_encoder_ctl(local_160,0x271c,uVar10);
              opus_custom_encoder_ctl(lVar28,0x2718,param_1[0xddc]);
              opus_custom_encoder_ctl(lVar28,0xfa2,0xffffffff);
              lVar28 = local_160;
              if (param_1[0xde4] != 1000) {
                opus_custom_encoder_ctl(local_160,0xfa6,0);
                opus_custom_encoder_ctl(lVar28,0x2712,(ulong)(param_1[0x13] == 0) << 1);
                lVar28 = local_160;
                if (param_1[0xde4] == 0x3e9) {
                  if (param_1[0x25] != 0) {
                    opus_custom_encoder_ctl(local_160,0xfa2,param_1[0x28] - param_1[9]);
                    uVar15 = 0xfb4;
                    iVar9 = 0;
LAB_00e7f8f0:
                    opus_custom_encoder_ctl(lVar28,uVar15,iVar9);
                  }
                }
                else if (param_1[0x25] != 0) {
                  opus_custom_encoder_ctl(local_160,0xfa6,1);
                  opus_custom_encoder_ctl(lVar28,0xfb4,param_1[0x26]);
                  iVar9 = param_1[0x28];
                  uVar15 = 0xfa2;
                  goto LAB_00e7f8f0;
                }
              }
              iVar9 = param_1[0x1c];
              uVar26 = (param_1[0x24] * iVar9) / 400;
              uVar29 = -(ulong)(uVar26 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar26 << 1;
              pvVar23 = (void *)((long)pvVar23 - (uVar29 + 0xf & 0xfffffffffffffff0));
              local_190 = pvVar23;
              if (((param_1[0xde4] != 1000) && (param_1[0xde4] != param_1[0xde5])) &&
                 (0 < param_1[0xde5])) {
                iVar11 = (int)((ulong)((long)param_1[0x24] * -0x51eb851f) >> 0x20);
                memcpy(pvVar23,(void *)((long)param_1 +
                                       (long)(int)(((((iVar11 >> 7) - (iVar11 >> 0x1f)) - uVar13) +
                                                   param_1[0x2b]) * iVar9) * 2 + 0x37c8),uVar29);
              }
              iVar37 = local_1cc;
              iVar11 = param_1[0x2b];
              uVar13 = (iVar11 - local_1cc) * iVar9;
              if ((int)uVar13 < 1) {
                __n = -(ulong)((uint)(iVar11 * iVar9) >> 0x1f) & 0xfffffffe00000000 |
                      (ulong)(uint)(iVar11 * iVar9) << 1;
                pvVar16 = (void *)((long)local_138 + (long)((local_1cc - iVar11) * iVar9) * 2);
                piVar14 = local_1c0;
              }
              else {
                memmove(local_1c0,(void *)((long)param_1 + (long)(iVar9 * param_3) * 2 + 0x37c8),
                        (ulong)uVar13 << 1);
                uVar13 = param_1[0x1c] * iVar37;
                __n = -(ulong)(uVar13 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar13 << 1;
                piVar14 = (int *)((long)param_1 +
                                 (long)((param_1[0x2b] - iVar37) * param_1[0x1c]) * 2 + 0x37c8);
                pvVar16 = local_138;
              }
              pvVar2 = local_138;
              memcpy(piVar14,pvVar16,__n);
              uVar13 = local_1d0;
              sVar5 = *(short *)(local_158 + 0x335);
              if ((sVar5 != 0x7fff) || ((local_1d0 & 0xffff) != 0x7fff)) {
                iVar9 = param_1[0x1c];
                uVar10 = *(undefined4 *)(local_c8 + 4);
                uVar15 = *(undefined8 *)(local_c8 + 0x40);
                *(int *)((long)pvVar23 + -0x10) = param_1[0x24];
                FUN_00e81044(pvVar2,pvVar2,sVar5,uVar13,uVar10,param_3,iVar9,uVar15);
              }
              lVar28 = local_160;
              *(short *)(local_158 + 0x335) = (short)uVar13;
              uVar13 = *local_170;
              if ((uVar13 != 0x3e9) || (param_1[0xddc] == 1)) {
                if (iVar8 < 0x7d01) {
                  if (iVar8 < 16000) {
                    iVar8 = 0;
                  }
                  else {
                    uVar26 = 0;
                    if (iVar8 - 14000U != 0) {
                      uVar26 = (iVar8 * -0x800 + 0x3e80000U) / (iVar8 - 14000U);
                    }
                    iVar8 = 0x4000 - uVar26;
                  }
                }
                else {
                  iVar8 = 0x4000;
                }
                param_1[0x17] = iVar8;
              }
              if ((*(long *)(param_1 + 0xdec) == 0) && (param_1[0x1c] == 2)) {
                sVar5 = *(short *)(local_158 + 0x334);
                uVar26 = param_1[0x17];
                if ((sVar5 < 0x4000) || ((int)uVar26 < 0x4000)) {
                  iVar8 = 0x7fff;
                  if (sVar5 != 0x4000) {
                    iVar8 = (int)sVar5 << 1;
                  }
                  uVar10 = *(undefined4 *)(local_c8 + 4);
                  uVar15 = *(undefined8 *)(local_c8 + 0x40);
                  iVar9 = 0x7fff;
                  if ((uVar26 & 0xffff) != 0x4000) {
                    iVar9 = uVar26 << 1;
                  }
                  *(int *)((long)pvVar23 + -0x10) = param_1[0x24];
                  FUN_00e81488(pvVar2,pvVar2,iVar8,iVar9,uVar10,param_3,2,uVar15);
                  uVar13 = param_1[0xde4];
                  *(short *)(local_158 + 0x334) = (short)param_1[0x17];
                }
              }
              if (uVar13 == 0x3ea) {
LAB_00e7fc90:
                uVar26 = 0;
                local_158 = (ulong *)((ulong)local_158 & 0xffffffff00000000);
                local_188 = 1;
                param_1[0xdea] = 0;
                uVar13 = local_184;
              }
              else {
                iVar8 = 5;
                if (uVar13 != 0x3e9) {
                  iVar8 = -0xf;
                }
                iVar8 = iVar8 + local_118 + (int)LZCOUNT(local_110);
                if (iVar8 != (int)local_168 * 8 &&
                    iVar8 + (int)local_168 * -8 < 0 == SBORROW4(iVar8,(int)local_168 * 8))
                goto LAB_00e7fc90;
                if (uVar13 == 0x3e9) {
                  ec_enc_bit_logp(auStack_130,local_1a4,0xc);
                }
                uVar13 = local_184;
                if (local_1a4 == 0) goto LAB_00e7fc90;
                local_158 = (ulong *)CONCAT44(local_158._4_4_,1);
                ec_enc_bit_logp(auStack_130,local_184,1);
                iVar8 = -0x15;
                if (*local_170 != 0x3e9) {
                  iVar8 = -0x20;
                }
                uVar26 = (int)local_168 - (local_118 + iVar8 + (int)LZCOUNT(local_110) + 7 >> 3);
                if ((int)uVar12 <= (int)uVar26) {
                  uVar26 = uVar12;
                }
                if ((int)uVar26 < 3) {
                  uVar26 = 2;
                }
                if (0x100 < uVar26) {
                  uVar26 = 0x101;
                }
                if (*local_170 == 0x3e9) {
                  ec_enc_uint(auStack_130,uVar26 - 2,0x100);
                  local_188 = 0;
                  local_158 = (ulong *)CONCAT44(local_158._4_4_,1);
                }
                else {
                  local_188 = 0;
                }
              }
              uVar10 = 0;
              if (*local_170 != 0x3ea) {
                uVar10 = 0x11;
              }
              if (*local_170 == 1000) {
                uVar12 = local_118 + (int)LZCOUNT(local_110) + -0x19 >> 3;
                ec_enc_done(auStack_130);
                local_174 = uVar12;
              }
              else {
                local_174 = (int)local_168 - uVar26;
                ec_enc_shrink(auStack_130);
                uVar12 = 0;
              }
              if ((((ulong)local_158 & 1) != 0) || (*local_170 != 1000)) {
                opus_custom_encoder_ctl(lVar28,0x2726,local_b0);
                if (*local_170 == 0x3e9) {
                  local_b8 = *(ulong *)(param_1 + 0x19);
                  opus_custom_encoder_ctl(lVar28,0x272c,&local_b8);
                }
                uVar33 = (uint)(uVar13 != 0);
                if ((uVar13 != 0 & (uint)local_158) != 1) {
                  bVar3 = false;
                  goto LAB_00e7fe44;
                }
                opus_custom_encoder_ctl(lVar28,0x271a,0);
                opus_custom_encoder_ctl(lVar28,0xfa6,0);
                opus_custom_encoder_ctl(lVar28,0xfa2,0xffffffff);
                iVar8 = celt_encode_with_ec(lVar28,local_138,param_1[0x24] / 200,
                                            local_1c8 + (int)local_174,uVar26,0);
                if (-1 < iVar8) {
                  opus_custom_encoder_ctl(lVar28,0xfbf,&local_c0);
                  opus_custom_encoder_ctl(lVar28,0xfbc);
                  bVar3 = true;
                  uVar33 = 1;
                  goto LAB_00e7fe44;
                }
LAB_00e80144:
                lVar28 = local_180;
                iVar8 = -3;
                goto LAB_00e7f554;
              }
              bVar3 = false;
              uVar33 = (uint)(uVar13 != 0);
LAB_00e7fe44:
              opus_custom_encoder_ctl(local_160,0x271a,uVar10);
              lVar28 = local_160;
              if (*local_170 != 1000) {
                if ((*local_170 != param_1[0xde5]) && (0 < param_1[0xde5])) {
                  opus_custom_encoder_ctl(local_160,0xfbc);
                  celt_encode_with_ec(lVar28,local_190,param_1[0x24] / 400,&local_b8,2,0);
                  opus_custom_encoder_ctl(lVar28,0x2712,0);
                }
                iVar8 = local_118 + (int)LZCOUNT(local_110) + -0x20;
                lVar28 = local_160;
                if (iVar8 == local_174 * 8 ||
                    (int)(iVar8 + local_174 * -8) < 0 != SBORROW4(iVar8,local_174 * 8)) {
                  if (((bVar3) && (*local_170 == 0x3e9)) && (param_1[0x25] != 0)) {
                    opus_custom_encoder_ctl(local_160,0xfa2,param_1[0x28] - param_1[9]);
                  }
                  lVar28 = local_160;
                  opus_custom_encoder_ctl(local_160,0xfa6,param_1[0x25]);
                  uVar12 = celt_encode_with_ec(lVar28,local_138,param_3,0,local_174,auStack_130);
                  lVar28 = local_160;
                  uVar13 = local_174;
                  if ((int)uVar12 < 0) goto LAB_00e80144;
                  if (((bVar3) && (*local_170 == 0x3e9)) && (param_1[0x25] != 0)) {
                    memmove(local_1c8 + uVar12,local_1c8 + (int)local_174,(ulong)uVar26);
                    local_174 = uVar13 + uVar26;
                  }
                }
              }
              if ((local_188 & 1 | uVar33) == 0) {
                iVar8 = param_1[0x24] / 200;
                iVar9 = param_1[0x24] / 400;
                local_184 = uVar26;
                opus_custom_encoder_ctl(lVar28,0xfbc);
                opus_custom_encoder_ctl(lVar28,0x271a,0);
                opus_custom_encoder_ctl(lVar28,0x2712,0);
                opus_custom_encoder_ctl(lVar28,0xfa6,0);
                opus_custom_encoder_ctl(lVar28,0xfa2,0xffffffff);
                if (param_1[0xde4] == 0x3e9) {
                  ec_enc_shrink(auStack_130,uVar12);
                  local_174 = uVar12;
                }
                pvVar23 = local_138;
                lVar28 = local_160;
                iVar11 = param_3 - iVar8;
                celt_encode_with_ec(local_160,
                                    (void *)((long)local_138 +
                                            (long)(param_1[0x1c] * (iVar11 - iVar9)) * 2),iVar9,
                                    &local_b8,2,0);
                uVar26 = local_184;
                iVar8 = celt_encode_with_ec(lVar28,(void *)((long)pvVar23 +
                                                           (long)(param_1[0x1c] * iVar11) * 2),iVar8
                                            ,local_1c8 + (int)local_174,local_184,0);
                if (iVar8 < 0) goto LAB_00e80144;
                opus_custom_encoder_ctl(lVar28,0xfbf,&local_c0);
              }
              uVar29 = local_150;
              iVar8 = 0;
              if (param_3 != 0) {
                iVar8 = param_1[0x24] / param_3;
              }
              bVar4 = FUN_00e808b4(param_1[0xde4],iVar8,local_150 & 0xffffffff,param_1[0xddc]);
              *local_1b8 = bVar4;
              param_1[0xfd6] = local_c0 ^ local_110;
              if (local_19c == 0) {
                uVar13 = 0x3ea;
              }
              else {
                uVar13 = *local_170;
              }
              param_1[0xde5] = uVar13;
              param_1[0xde7] = param_3;
              param_1[0xdeb] = 0;
              param_1[0xde6] = param_1[0xddc];
              if ((param_1[0x2e] == 0) ||
                 (((uint)(local_b0[0] == 0) & (local_198 ^ 0xffffffff)) != 0)) {
                param_1[0xfd3] = 0;
              }
              else {
                iVar8 = FUN_00e815b4(local_8c,param_1 + 0xfd3,param_1[0xfd4],param_2,param_3,
                                     param_1[0x1c]);
                if (iVar8 != 0) {
                  param_1[0xfd6] = 0;
                  iVar18 = 0;
                  if (param_3 != 0) {
                    iVar18 = param_1[0x24] / param_3;
                  }
                  bVar4 = FUN_00e808b4(param_1[0xde4],iVar18,uVar29 & 0xffffffff,param_1[0xddc]);
                  *local_1b8 = bVar4;
                  lVar28 = local_180;
                  iVar8 = 1;
                  goto LAB_00e7f554;
                }
              }
              lVar28 = local_180;
              iVar8 = local_118 + (int)LZCOUNT(local_110) + -0x20;
              if (iVar8 == (int)local_168 * 8 ||
                  iVar8 + (int)local_168 * -8 < 0 != SBORROW4(iVar8,(int)local_168 * 8)) {
                if ((((uint)local_158 | *local_170 != 1000) != 1) && (2 < (int)uVar12)) {
                  pbVar21 = local_1b8 + uVar12;
                  do {
                    if (*pbVar21 != 0) goto LAB_00e80224;
                    pbVar21 = pbVar21 + -1;
                    bVar3 = 3 < (int)uVar12;
                    uVar12 = uVar12 - 1;
                  } while (bVar3);
                  uVar12 = 2;
                }
              }
              else {
                uVar12 = 1;
                *local_1c8 = 0;
                param_1[0xfd6] = 0;
              }
LAB_00e80224:
              iVar8 = uVar26 + uVar12 + 1;
              if ((param_1[0x25] != 0) ||
                 (iVar9 = opus_packet_pad(local_1b8,iVar8,iVar18), iVar8 = iVar18, iVar9 == 0))
              goto LAB_00e7f554;
            }
            iVar8 = -3;
            goto LAB_00e7f554;
          }
          if (iVar9 == 1000) {
            if ((iVar37 << 1) / 0x19 == param_3) {
              iVar39 = iVar37 / 0x19;
            }
            else {
              iVar39 = iVar40;
              if ((iVar37 * 3) / 0x19 != param_3) {
                iVar39 = iVar7;
              }
            }
          }
        }
      }
      iVar18 = 0;
      if (iVar39 != 0) {
        iVar18 = param_3 / iVar39;
      }
      if ((int)local_150 != -1) {
        *local_158 = local_150;
      }
      local_1f0 = CONCAT44(local_1f0._4_4_,param_13);
      iVar8 = FUN_00e80938(param_1,param_2,iVar18,iVar39,param_4,param_5,local_168 & 0xffffffff,
                           (ulong)local_138 & 0xffffffff);
      lVar28 = local_180;
      goto LAB_00e7f554;
    }
  }
LAB_00e7e348:
  iVar8 = 0x44d;
  if (param_1[0xde8] != 0) {
    iVar8 = param_1[0xde8];
  }
  iVar9 = 1000;
  if (param_1[0xde4] != 0) {
    iVar9 = param_1[0xde4];
  }
  iVar11 = 0x3ea;
  if ((int)uVar26 < 0x65) {
    iVar11 = iVar9;
  }
  bVar4 = uVar26 == 0x19 && iVar11 != 1000;
  uVar13 = 0x32;
  if (uVar26 != 0x19 || iVar11 == 1000) {
    uVar13 = uVar26;
  }
  if ((int)uVar13 < 0x11) {
    if ((param_5 == 1) || ((iVar11 == 1000 && (uVar13 != 10)))) {
      bVar4 = (int)uVar13 < 0xd;
      uVar26 = 0x19;
      if (uVar13 != 0xc) {
        uVar26 = 0x10;
      }
      iVar11 = 1000;
      uVar13 = uVar26;
      bVar25 = 0;
    }
    else {
      bVar4 = 3;
      bVar17 = 0;
      if (uVar13 != 0) {
        bVar17 = (byte)(0x32 / (int)uVar13);
      }
      uVar13 = 0x32;
      bVar25 = bVar17;
      if (iVar11 != 1000) goto LAB_00e7e4e8;
    }
LAB_00e7e494:
    bVar17 = bVar25;
    if (iVar8 < 0x450) goto LAB_00e7e4e8;
    iVar9 = 0x44f;
joined_r0x00e7e530:
    if (uVar13 < 400) goto LAB_00e7e4a8;
LAB_00e7e534:
    bVar25 = 0;
    iVar37 = param_1[0xddc];
    bVar32 = 0;
    if (iVar11 != 0x3ea) goto LAB_00e7e4c8;
LAB_00e7e544:
    if (iVar9 < 0x44f) {
      iVar9 = 0x44e;
    }
    bVar25 = (char)iVar9 * ' ' + 0x40U & 0x60 | bVar32 | 0x80;
  }
  else {
    bVar17 = 0;
    bVar25 = 0;
    if (iVar11 == 1000) goto LAB_00e7e494;
LAB_00e7e4e8:
    if ((iVar11 != 0x3ea) || (iVar8 != 0x44e)) {
      iVar9 = 0x450;
      if (0x450 < iVar8 || iVar11 != 0x3e9) {
        iVar9 = iVar8;
      }
      goto joined_r0x00e7e530;
    }
    iVar9 = 0x44d;
    if (399 < uVar13) goto LAB_00e7e534;
LAB_00e7e4a8:
    bVar25 = 0;
    do {
      uVar13 = uVar13 * 2;
      bVar25 = bVar25 + 8;
    } while ((int)uVar13 < 400);
    iVar37 = param_1[0xddc];
    bVar32 = bVar25;
    if (iVar11 == 0x3ea) goto LAB_00e7e544;
LAB_00e7e4c8:
    if (iVar11 == 1000) {
      bVar25 = bVar25 - 0x10 | (char)iVar9 * ' ' + 0x60U;
    }
    else {
      bVar25 = bVar25 - 0x10 | (byte)(iVar9 << 4) | 0x60;
    }
  }
  iVar8 = 1;
  if (1 < bVar4) {
    iVar8 = 2;
  }
  if (iVar18 <= iVar8) {
    iVar18 = iVar8;
  }
  *param_4 = bVar4 | (iVar37 == 2) << 2 | bVar25;
  if (bVar4 == 3) {
    param_4[1] = bVar17;
  }
  if ((param_1[0x25] == 0) &&
     (iVar9 = opus_packet_pad(param_4,iVar8,iVar18), iVar8 = iVar18, iVar9 != 0)) {
    iVar8 = -3;
  }
LAB_00e7f554:
  if (*(long *)(lVar28 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}


