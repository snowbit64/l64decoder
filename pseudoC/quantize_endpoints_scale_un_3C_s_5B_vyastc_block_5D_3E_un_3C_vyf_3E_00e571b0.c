// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: quantize_endpoints_scale___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_
// Entry Point: 00e571b0
// Size: 1044 bytes
// Signature: undefined quantize_endpoints_scale___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_(void)


/* WARNING: Type propagation algorithm not settling */

void quantize_endpoints_scale___un_3C_s_5B_vyastc_block_5D__3E_un_3C_vyf_3E_
               (undefined param_1 [16],long param_2,undefined (*param_3) [16])

{
  undefined uVar1;
  undefined auVar4 [16];
  int iVar5;
  int iVar6;
  undefined auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined auVar10 [12];
  undefined auVar11 [14];
  undefined auVar12 [16];
  float fVar13;
  float fVar16;
  float fVar17;
  undefined auVar14 [16];
  undefined auVar15 [16];
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  int iVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  undefined auVar22 [16];
  undefined auVar23 [16];
  int iVar30;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined auVar31 [16];
  undefined auVar32 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  uint uVar49;
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined uVar2;
  undefined uVar3;
  
  auVar14 = *(undefined (*) [16])(param_2 + 0x1a0);
  iVar30 = auVar14._0_4_ * 0x5556 >> 0x10;
  iVar33 = auVar14._4_4_ * 0x5556 >> 0x10;
  iVar34 = auVar14._8_4_ * 0x5556 >> 0x10;
  iVar35 = auVar14._12_4_ * 0x5556 >> 0x10;
  iVar19 = auVar14._0_4_ + iVar30 * -3;
  iVar24 = auVar14._4_4_ + iVar33 * -3;
  iVar26 = auVar14._8_4_ + iVar34 * -3;
  iVar28 = auVar14._12_4_ + iVar35 * -3;
  iVar21 = iVar24 * -2 + 5;
  iVar5 = iVar26 * -2 + 5;
  iVar6 = iVar28 * -2 + 5;
  auVar15._0_4_ = iVar19 + iVar30;
  auVar15._4_4_ = iVar24 + iVar33;
  auVar15._8_4_ = iVar26 + iVar34;
  auVar15._12_4_ = iVar28 + iVar35;
  auVar14[4] = (char)iVar21;
  auVar14._0_4_ = iVar19 * -2 + 5;
  auVar14[5] = (char)((uint)iVar21 >> 8);
  auVar14[6] = (char)((uint)iVar21 >> 0x10);
  auVar14[7] = (char)((uint)iVar21 >> 0x18);
  auVar14[8] = (char)iVar5;
  auVar14[9] = (char)((uint)iVar5 >> 8);
  auVar14[10] = (char)((uint)iVar5 >> 0x10);
  auVar14[11] = (char)((uint)iVar5 >> 0x18);
  auVar14[12] = (char)iVar6;
  auVar14[13] = (char)((uint)iVar6 >> 8);
  auVar14[14] = (char)((uint)iVar6 >> 0x10);
  auVar14[15] = (char)((uint)iVar6 >> 0x18);
  auVar7._8_4_ = 2;
  auVar7._0_8_ = 0x200000002;
  auVar7._12_4_ = 2;
  auVar14 = NEON_smax(auVar7,auVar14,4);
  auVar15 = NEON_ushl(auVar14,auVar15,4);
  uVar49 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
           (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
  auVar7 = *param_3;
  auVar14 = param_3[1];
  auVar53._4_4_ = (auVar15._4_4_ >> 1) + -1;
  auVar53._0_4_ = (auVar15._0_4_ >> 1) + -1;
  auVar53._8_4_ = (auVar15._8_4_ >> 1) + -1;
  auVar53._12_4_ = (auVar15._12_4_ >> 1) + -1;
  auVar15 = NEON_scvtf(auVar53,4);
  uVar41 = *(undefined8 *)(param_3[2] + 8);
  uVar40 = *(undefined8 *)param_3[2];
  auVar53 = param_3[3];
  fVar20 = auVar14._0_4_;
  fVar25 = auVar14._4_4_;
  fVar27 = auVar14._8_4_;
  fVar29 = auVar14._12_4_;
  uVar9 = *(undefined8 *)(param_3[4] + 8);
  uVar8 = *(undefined8 *)param_3[4];
  fVar13 = auVar15._0_4_;
  fVar16 = auVar15._4_4_;
  fVar17 = auVar15._8_4_;
  fVar18 = auVar15._12_4_;
  auVar50._0_4_ = fVar20 * 0.003921569 * fVar13 + 0.5;
  auVar50._4_4_ = fVar25 * 0.003921569 * fVar16 + 0.5;
  auVar50._8_4_ = fVar27 * 0.003921569 * fVar17 + 0.5;
  auVar50._12_4_ = fVar29 * 0.003921569 * fVar18 + 0.5;
  auVar14 = NEON_fmax(auVar50,ZEXT816(0),4);
  auVar14 = NEON_fmin(auVar14,auVar15,4);
  fVar42 = auVar53._0_4_;
  fVar43 = auVar53._4_4_;
  fVar44 = auVar53._8_4_;
  fVar45 = auVar53._12_4_;
  fVar36 = (float)*(undefined8 *)param_3[5];
  fVar37 = (float)((ulong)*(undefined8 *)param_3[5] >> 0x20);
  fVar38 = (float)*(undefined8 *)(param_3[5] + 8);
  fVar39 = (float)((ulong)*(undefined8 *)(param_3[5] + 8) >> 0x20);
  uVar1 = (undefined)(int)auVar14._12_4_;
  uVar2 = (undefined)(int)auVar14._4_4_;
  uVar3 = (undefined)(int)auVar14._8_4_;
  if ((uVar49 & 1) == 0) {
    if ((uVar49 >> 1 & 1) != 0) {
      *(undefined *)(param_2 + 0x1b1) = uVar2;
    }
    if ((uVar49 >> 2 & 1) != 0) {
      *(undefined *)(param_2 + 0x1b2) = uVar3;
    }
    if ((uVar49 >> 3 & 1) != 0) {
      *(undefined *)(param_2 + 0x1b3) = uVar1;
    }
    auVar51._0_4_ = fVar42 * 0.003921569 * fVar13 + 0.5;
    auVar51._4_4_ = fVar43 * 0.003921569 * fVar16 + 0.5;
    auVar51._8_4_ = fVar44 * 0.003921569 * fVar17 + 0.5;
    auVar51._12_4_ = fVar45 * 0.003921569 * fVar18 + 0.5;
    auVar14 = NEON_fmax(auVar51,ZEXT816(0),4);
    auVar14 = NEON_fmin(auVar14,auVar15,4);
    if ((uVar49 >> 1 & 1) != 0) {
      *(char *)(param_2 + 0x1b5) = (char)(int)auVar14._4_4_;
    }
    if ((uVar49 >> 2 & 1) != 0) {
      *(char *)(param_2 + 0x1b6) = (char)(int)auVar14._8_4_;
    }
    if ((uVar49 >> 3 & 1) != 0) {
      *(char *)(param_2 + 0x1b7) = (char)(int)auVar14._12_4_;
    }
    auVar52._0_4_ = fVar36 * 0.003921569 * fVar13 + 0.5;
    auVar52._4_4_ = fVar37 * 0.003921569 * fVar16 + 0.5;
    auVar52._8_4_ = fVar38 * 0.003921569 * fVar17 + 0.5;
    auVar52._12_4_ = fVar39 * 0.003921569 * fVar18 + 0.5;
    auVar14 = NEON_fmax(auVar52,ZEXT816(0),4);
    auVar14 = NEON_fmin(auVar14,auVar15,4);
    auVar10._4_8_ = auVar14._8_8_;
    auVar10._0_4_ = (int)auVar14._4_4_;
    auVar46._0_8_ = auVar10._0_8_ << 0x20;
    auVar46._8_4_ = (int)auVar14._8_4_;
    auVar46._12_4_ = (int)auVar14._12_4_;
    auVar11._2_12_ = auVar46._4_12_;
    auVar11._0_2_ = (short)(int)auVar14._4_4_;
    auVar47._0_4_ = auVar11._0_4_ << 0x10;
    auVar47._4_2_ = (short)auVar46._8_4_;
    auVar47._6_2_ = (short)auVar46._12_4_;
    auVar47._8_8_ = 0;
  }
  else {
    *(char *)(param_2 + 0x1b0) = (char)(int)auVar14._0_4_;
    if ((uVar49 >> 1 & 1) != 0) {
      *(undefined *)(param_2 + 0x1b1) = uVar2;
    }
    if ((uVar49 >> 2 & 1) != 0) {
      *(undefined *)(param_2 + 0x1b2) = uVar3;
    }
    if ((uVar49 >> 3 & 1) != 0) {
      *(undefined *)(param_2 + 0x1b3) = uVar1;
    }
    auVar54._0_4_ = fVar42 * 0.003921569 * fVar13 + 0.5;
    auVar54._4_4_ = fVar43 * 0.003921569 * fVar16 + 0.5;
    auVar54._8_4_ = fVar44 * 0.003921569 * fVar17 + 0.5;
    auVar54._12_4_ = fVar45 * 0.003921569 * fVar18 + 0.5;
    auVar14 = NEON_fmax(auVar54,ZEXT816(0),4);
    auVar14 = NEON_fmin(auVar14,auVar15,4);
    *(char *)(param_2 + 0x1b4) = (char)(int)auVar14._0_4_;
    if ((uVar49 >> 1 & 1) != 0) {
      *(char *)(param_2 + 0x1b5) = (char)(int)auVar14._4_4_;
    }
    if ((uVar49 >> 2 & 1) != 0) {
      *(char *)(param_2 + 0x1b6) = (char)(int)auVar14._8_4_;
    }
    if ((uVar49 >> 3 & 1) != 0) {
      *(char *)(param_2 + 0x1b7) = (char)(int)auVar14._12_4_;
    }
    auVar55._0_4_ = fVar36 * 0.003921569 * fVar13 + 0.5;
    auVar55._4_4_ = fVar37 * 0.003921569 * fVar16 + 0.5;
    auVar55._8_4_ = fVar38 * 0.003921569 * fVar17 + 0.5;
    auVar55._12_4_ = fVar39 * 0.003921569 * fVar18 + 0.5;
    auVar14 = NEON_fmax(auVar55,ZEXT816(0),4);
    auVar14 = NEON_fmin(auVar14,auVar15,4);
    auVar47 = ZEXT616(CONCAT24((short)(int)auVar14._12_4_,
                               CONCAT22((short)(int)auVar14._8_4_,(short)(int)auVar14._4_4_))) <<
              0x10;
    *(char *)(param_2 + 0x1b8) = (char)(int)auVar14._0_4_;
  }
  if ((uVar49 >> 1 & 1) != 0) {
    *(char *)(param_2 + 0x1b9) = auVar47[2];
  }
  if ((uVar49 >> 2 & 1) != 0) {
    *(char *)(param_2 + 0x1ba) = auVar47[4];
  }
  if ((uVar49 >> 3 & 1) != 0) {
    *(char *)(param_2 + 0x1bb) = auVar47[6];
  }
  auVar48._0_4_ = fVar42 * fVar42 + fVar20 * fVar20 + fVar36 * fVar36 + 1e-05;
  auVar48._4_4_ = fVar43 * fVar43 + fVar25 * fVar25 + fVar37 * fVar37 + 1e-05;
  auVar48._8_4_ = fVar44 * fVar44 + fVar27 * fVar27 + fVar38 * fVar38 + 1e-05;
  auVar48._12_4_ = fVar45 * fVar45 + fVar29 * fVar29 + fVar39 * fVar39 + 1e-05;
  auVar53 = NEON_frecpe(auVar48,4);
  auVar14 = NEON_frecps(auVar48,auVar53,4);
  auVar22._0_4_ = auVar53._0_4_ * auVar14._0_4_;
  auVar22._4_4_ = auVar53._4_4_ * auVar14._4_4_;
  auVar22._8_4_ = auVar53._8_4_ * auVar14._8_4_;
  auVar22._12_4_ = auVar53._12_4_ * auVar14._12_4_;
  auVar14 = NEON_frecps(auVar48,auVar22,4);
  auVar31._0_4_ =
       (fVar42 * (float)uVar40 + fVar20 * auVar7._0_4_ + fVar36 * (float)uVar8) *
       auVar22._0_4_ * auVar14._0_4_ * 256.0 * 0.003921569 * fVar13 + 0.5;
  auVar31._4_4_ =
       (fVar43 * (float)((ulong)uVar40 >> 0x20) + fVar25 * auVar7._4_4_ +
       fVar37 * (float)((ulong)uVar8 >> 0x20)) * auVar22._4_4_ * auVar14._4_4_ * 256.0 * 0.003921569
       * fVar16 + 0.5;
  auVar31._8_4_ =
       (fVar44 * (float)uVar41 + fVar27 * auVar7._8_4_ + fVar38 * (float)uVar9) *
       auVar22._8_4_ * auVar14._8_4_ * 256.0 * 0.003921569 * fVar17 + 0.5;
  auVar31._12_4_ =
       (fVar45 * (float)((ulong)uVar41 >> 0x20) + fVar29 * auVar7._12_4_ +
       fVar39 * (float)((ulong)uVar9 >> 0x20)) * auVar22._12_4_ * auVar14._12_4_ * 256.0 *
       0.003921569 * fVar18 + 0.5;
  auVar14 = NEON_fmax(auVar31,ZEXT816(0),4);
  auVar14 = NEON_fmin(auVar14,auVar15,4);
  if ((uVar49 & 1) != 0) {
    *(char *)(param_2 + 0x1bc) = (char)(int)auVar14._0_4_;
  }
  if ((uVar49 >> 1 & 1) != 0) {
    *(char *)(param_2 + 0x1bd) = (char)(int)auVar14._4_4_;
  }
  if ((uVar49 >> 2 & 1) != 0) {
    *(char *)(param_2 + 0x1be) = (char)(int)auVar14._8_4_;
  }
  if ((uVar49 >> 3 & 1) != 0) {
    *(char *)(param_2 + 0x1bf) = (char)(int)auVar14._12_4_;
  }
  auVar23._8_4_ = 8;
  auVar23._0_8_ = 0x800000008;
  auVar23._12_4_ = 8;
  auVar14 = NEON_cmgt(*(undefined (*) [16])(param_2 + 0x160),auVar23,4);
  auVar12[0] = param_1[0] & auVar14[0];
  auVar12[1] = param_1[1] & auVar14[1];
  auVar12[2] = param_1[2] & auVar14[2];
  auVar12[3] = param_1[3] & auVar14[3];
  auVar12[4] = param_1[4] & auVar14[4];
  auVar12[5] = param_1[5] & auVar14[5];
  auVar12[6] = param_1[6] & auVar14[6];
  auVar12[7] = param_1[7] & auVar14[7];
  auVar12[8] = param_1[8] & auVar14[8];
  auVar12[9] = param_1[9] & auVar14[9];
  auVar12[10] = param_1[10] & auVar14[10];
  auVar12[11] = param_1[11] & auVar14[11];
  auVar12[12] = param_1[12] & auVar14[12];
  auVar12[13] = param_1[13] & auVar14[13];
  auVar12[14] = param_1[14] & auVar14[14];
  auVar12[15] = param_1[15] & auVar14[15];
  iVar21 = NEON_umaxv(auVar12,4);
  if (iVar21 != 0) {
    auVar14 = param_3[6];
    auVar32._0_4_ = auVar14._0_4_ * 0.003921569 * fVar13 + 0.5;
    auVar32._4_4_ = auVar14._4_4_ * 0.003921569 * fVar16 + 0.5;
    auVar32._8_4_ = auVar14._8_4_ * 0.003921569 * fVar17 + 0.5;
    auVar32._12_4_ = auVar14._12_4_ * 0.003921569 * fVar18 + 0.5;
    auVar14 = NEON_fmax(auVar32,ZEXT816(0),4);
    auVar14 = NEON_fmin(auVar14,auVar15,4);
    uVar49 = (uint)(auVar12[0] & 1) + (uint)(auVar12[4] & 2) +
             (uint)(auVar12[8] & 4) + (uint)(auVar12[12] & 8);
    if ((uVar49 & 1) != 0) {
      *(char *)(param_2 + 0x1c0) = (char)(int)auVar14._0_4_;
    }
    if ((uVar49 >> 1 & 1) != 0) {
      *(char *)(param_2 + 0x1c1) = (char)(int)auVar14._4_4_;
    }
    if ((uVar49 >> 2 & 1) != 0) {
      *(char *)(param_2 + 0x1c2) = (char)(int)auVar14._8_4_;
    }
    if ((uVar49 >> 3 & 1) != 0) {
      *(char *)(param_2 + 0x1c3) = (char)(int)auVar14._12_4_;
    }
    fVar16 = (float)((ulong)*(undefined8 *)param_3[7] >> 0x20) * 0.003921569 * fVar16 + 0.5;
    fVar17 = (float)*(undefined8 *)(param_3[7] + 8) * 0.003921569 * fVar17 + 0.5;
    fVar18 = (float)((ulong)*(undefined8 *)(param_3[7] + 8) >> 0x20) * 0.003921569 * fVar18 + 0.5;
    auVar4[4] = SUB41(fVar16,0);
    auVar4._0_4_ = (float)*(undefined8 *)param_3[7] * 0.003921569 * fVar13 + 0.5;
    auVar4[5] = (char)((uint)fVar16 >> 8);
    auVar4[6] = (char)((uint)fVar16 >> 0x10);
    auVar4[7] = (char)((uint)fVar16 >> 0x18);
    auVar4[8] = SUB41(fVar17,0);
    auVar4[9] = (char)((uint)fVar17 >> 8);
    auVar4[10] = (char)((uint)fVar17 >> 0x10);
    auVar4[11] = (char)((uint)fVar17 >> 0x18);
    auVar4[12] = SUB41(fVar18,0);
    auVar4[13] = (char)((uint)fVar18 >> 8);
    auVar4[14] = (char)((uint)fVar18 >> 0x10);
    auVar4[15] = (char)((uint)fVar18 >> 0x18);
    auVar14 = NEON_fmax(auVar4,ZEXT816(0),4);
    auVar14 = NEON_fmin(auVar14,auVar15,4);
    if ((uVar49 & 1) != 0) {
      *(char *)(param_2 + 0x1c4) = (char)(int)auVar14._0_4_;
    }
    if ((uVar49 >> 1 & 1) != 0) {
      *(char *)(param_2 + 0x1c5) = (char)(int)auVar14._4_4_;
    }
    if ((uVar49 >> 2 & 1) != 0) {
      *(char *)(param_2 + 0x1c6) = (char)(int)auVar14._8_4_;
    }
    if ((uVar49 >> 3 & 1) != 0) {
      *(char *)(param_2 + 0x1c7) = (char)(int)auVar14._12_4_;
    }
  }
  return;
}


