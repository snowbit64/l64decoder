// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_VAD_GetSA_Q8_c
// Entry Point: 00e84208
// Size: 3552 bytes
// Signature: undefined silk_VAD_GetSA_Q8_c(void)


undefined8 silk_VAD_GetSA_Q8_c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  short sVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  short *psVar32;
  uint uVar33;
  ulong uVar34;
  short *psVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  ulong uVar39;
  uint uVar40;
  short *psVar41;
  int iVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  short sVar74;
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined8 uStack_a0;
  int local_98 [4];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78 [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar45 = *(int *)(param_1 + 0x11e8);
  iVar44 = iVar45 >> 2;
  iVar42 = iVar45 >> 3;
  iVar25 = iVar42 + iVar44;
  iVar26 = iVar25 + iVar42;
  local_98[3] = iVar26 + iVar44;
  uVar24 = local_98[3] + (iVar45 >> 1);
  local_98[0] = 0;
  psVar41 = (short *)((long)&uStack_a0 -
                     ((-(ulong)(uVar24 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar24 << 1) + 0xf &
                     0xfffffffffffffff0));
  local_98[1] = iVar25;
  local_98[2] = iVar26;
  silk_ana_filt_bank_1(param_2,param_1 + 0x24,psVar41,psVar41 + local_98[3],iVar45);
  silk_ana_filt_bank_1(psVar41,param_1 + 0x2c,psVar41,psVar41 + iVar26,iVar45 >> 1);
  silk_ana_filt_bank_1(psVar41,param_1 + 0x34,psVar41,psVar41 + iVar25,iVar44);
  uVar24 = iVar42 - 1;
  uVar34 = -(ulong)(uVar24 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar24 << 1;
  sVar23 = *(short *)((long)psVar41 + uVar34) >> 1;
  *(short *)((long)psVar41 + uVar34) = sVar23;
  if (0xf < iVar45) {
    psVar32 = psVar41 + uVar24;
    psVar35 = psVar41 + (iVar42 - 2);
    do {
      sVar61 = *psVar35;
      iVar42 = iVar42 + -1;
      sVar60 = *psVar32;
      *psVar35 = sVar61 >> 1;
      *psVar32 = sVar60 - (sVar61 >> 1);
      psVar32 = psVar32 + -1;
      psVar35 = psVar35 + -1;
    } while (1 < iVar42);
  }
  sVar60 = *(short *)(param_1 + 0x5c);
  uVar34 = 0;
  sVar61 = *psVar41;
  *(short *)(param_1 + 0x5c) = sVar23;
  *psVar41 = sVar61 - sVar60;
  do {
    uVar24 = 4 - (int)uVar34;
    if (uVar34 < 2) {
      uVar24 = 3;
    }
    iVar25 = *(int *)(param_1 + 0x11e8) >> (uVar24 & 0x1f);
    puVar38 = (uint *)(param_1 + uVar34 * 4 + 0x3c);
    uVar24 = *puVar38;
    if (iVar25 < 4) {
      uVar43 = 0;
    }
    else {
      uVar3 = iVar25 >> 2;
      iVar25 = local_98[uVar34];
      uVar43 = uVar3;
      if ((int)uVar3 < 2) {
        uVar43 = 1;
      }
      uVar39 = (ulong)uVar43;
      if ((uVar43 < 0x10) || (iVar25 + (int)(uVar39 - 1) < iVar25 || uVar39 - 1 >> 0x20 != 0)) {
        uVar28 = 0;
        iVar26 = 0;
LAB_00e843bc:
        iVar44 = iVar25 + (int)uVar28;
        lVar29 = uVar39 - uVar28;
        do {
          lVar1 = (long)iVar44;
          iVar44 = iVar44 + 1;
          lVar29 = lVar29 + -1;
          iVar26 = iVar26 + ((int)psVar41[lVar1] >> 3) * ((int)psVar41[lVar1] >> 3);
        } while (lVar29 != 0);
      }
      else {
        uVar28 = uVar39 & 0x7ffffff0;
        iVar44 = 0;
        iVar42 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        iVar48 = 0;
        iVar49 = 0;
        iVar50 = 0;
        iVar51 = 0;
        iVar52 = 0;
        iVar53 = 0;
        iVar54 = 0;
        iVar55 = 0;
        iVar56 = 0;
        iVar57 = 0;
        iVar58 = 0;
        uVar30 = uVar28;
        iVar26 = iVar25;
        do {
          puVar2 = (undefined8 *)(psVar41 + iVar26);
          uVar30 = uVar30 - 0x10;
          iVar26 = iVar26 + 0x10;
          uVar12 = puVar2[1];
          uVar11 = *puVar2;
          uVar22 = puVar2[3];
          uVar21 = puVar2[2];
          sVar23 = (short)uVar11 >> 3;
          sVar60 = (short)((ulong)uVar11 >> 0x10) >> 3;
          sVar61 = (short)((ulong)uVar11 >> 0x20) >> 3;
          sVar62 = (short)((long)uVar11 >> 0x33);
          sVar63 = (short)uVar12 >> 3;
          sVar64 = (short)((ulong)uVar12 >> 0x10) >> 3;
          sVar65 = (short)((ulong)uVar12 >> 0x20) >> 3;
          sVar66 = (short)((long)uVar12 >> 0x33);
          sVar67 = (short)uVar21 >> 3;
          sVar68 = (short)((ulong)uVar21 >> 0x10) >> 3;
          sVar69 = (short)((ulong)uVar21 >> 0x20) >> 3;
          sVar70 = (short)((long)uVar21 >> 0x33);
          sVar71 = (short)uVar22 >> 3;
          sVar72 = (short)((ulong)uVar22 >> 0x10) >> 3;
          sVar73 = (short)((ulong)uVar22 >> 0x20) >> 3;
          sVar74 = (short)((long)uVar22 >> 0x33);
          auVar75._2_2_ = sVar60;
          auVar75._0_2_ = sVar23;
          auVar75._4_2_ = sVar61;
          auVar75._6_2_ = sVar62;
          auVar75._8_2_ = sVar63;
          auVar75._10_2_ = sVar64;
          auVar75._12_2_ = sVar65;
          auVar75._14_2_ = sVar66;
          auVar76._2_2_ = sVar60;
          auVar76._0_2_ = sVar23;
          auVar76._4_2_ = sVar61;
          auVar76._6_2_ = sVar62;
          auVar76._8_2_ = sVar63;
          auVar76._10_2_ = sVar64;
          auVar76._12_2_ = sVar65;
          auVar76._14_2_ = sVar66;
          auVar75 = NEON_ext(auVar75,auVar76,8,1);
          iVar44 = iVar44 + (int)sVar23 * (int)sVar23;
          iVar42 = iVar42 + (int)sVar60 * (int)sVar60;
          iVar45 = iVar45 + (int)sVar61 * (int)sVar61;
          iVar46 = iVar46 + (int)sVar62 * (int)sVar62;
          auVar19._2_2_ = sVar68;
          auVar19._0_2_ = sVar67;
          auVar19._4_2_ = sVar69;
          auVar19._6_2_ = sVar70;
          auVar19._8_2_ = sVar71;
          auVar19._10_2_ = sVar72;
          auVar19._12_2_ = sVar73;
          auVar19._14_2_ = sVar74;
          auVar20._2_2_ = sVar68;
          auVar20._0_2_ = sVar67;
          auVar20._4_2_ = sVar69;
          auVar20._6_2_ = sVar70;
          auVar20._8_2_ = sVar71;
          auVar20._10_2_ = sVar72;
          auVar20._12_2_ = sVar73;
          auVar20._14_2_ = sVar74;
          auVar76 = NEON_ext(auVar19,auVar20,8,1);
          iVar51 = iVar51 + (int)sVar67 * (int)sVar67;
          iVar52 = iVar52 + (int)sVar68 * (int)sVar68;
          iVar53 = iVar53 + (int)sVar69 * (int)sVar69;
          iVar54 = iVar54 + (int)sVar70 * (int)sVar70;
          iVar47 = iVar47 + (int)auVar75._0_2_ * (int)auVar75._0_2_;
          iVar48 = iVar48 + (int)auVar75._2_2_ * (int)auVar75._2_2_;
          iVar49 = iVar49 + (int)auVar75._4_2_ * (int)auVar75._4_2_;
          iVar50 = iVar50 + (int)auVar75._6_2_ * (int)auVar75._6_2_;
          iVar55 = iVar55 + (int)auVar76._0_2_ * (int)auVar76._0_2_;
          iVar56 = iVar56 + (int)auVar76._2_2_ * (int)auVar76._2_2_;
          iVar57 = iVar57 + (int)auVar76._4_2_ * (int)auVar76._4_2_;
          iVar58 = iVar58 + (int)auVar76._6_2_ * (int)auVar76._6_2_;
        } while (uVar30 != 0);
        iVar26 = iVar51 + iVar44 + iVar55 + iVar47 + iVar52 + iVar42 + iVar56 + iVar48 +
                 iVar53 + iVar45 + iVar57 + iVar49 + iVar54 + iVar46 + iVar58 + iVar50;
        if (uVar28 != uVar39) goto LAB_00e843bc;
      }
      iVar26 = uVar24 + iVar26;
      if (iVar26 < 0) {
        iVar26 = 0x7fffffff;
      }
      if (uVar43 < 0x10) {
        uVar28 = 0;
        iVar42 = 0;
LAB_00e843f8:
        iVar44 = iVar25 + uVar3 + (int)uVar28;
        lVar29 = uVar39 - uVar28;
        do {
          lVar1 = (long)iVar44;
          iVar44 = iVar44 + 1;
          lVar29 = lVar29 + -1;
          iVar42 = iVar42 + ((int)psVar41[lVar1] >> 3) * ((int)psVar41[lVar1] >> 3);
        } while (lVar29 != 0);
      }
      else {
        uVar28 = 0;
        iVar44 = iVar25 + uVar3;
        iVar42 = 0;
        if ((iVar44 + (int)(uVar39 - 1) < iVar44) || (iVar42 = 0, uVar39 - 1 >> 0x20 != 0))
        goto LAB_00e843f8;
        uVar28 = uVar39 & 0x7ffffff0;
        iVar42 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        iVar48 = 0;
        iVar49 = 0;
        iVar50 = 0;
        iVar51 = 0;
        iVar52 = 0;
        iVar53 = 0;
        iVar54 = 0;
        iVar55 = 0;
        iVar56 = 0;
        iVar57 = 0;
        iVar58 = 0;
        iVar59 = 0;
        uVar30 = uVar28;
        do {
          puVar2 = (undefined8 *)(psVar41 + iVar44);
          uVar30 = uVar30 - 0x10;
          iVar44 = iVar44 + 0x10;
          uVar12 = puVar2[1];
          uVar11 = *puVar2;
          uVar22 = puVar2[3];
          uVar21 = puVar2[2];
          sVar23 = (short)uVar11 >> 3;
          sVar60 = (short)((ulong)uVar11 >> 0x10) >> 3;
          sVar61 = (short)((ulong)uVar11 >> 0x20) >> 3;
          sVar62 = (short)((long)uVar11 >> 0x33);
          sVar63 = (short)uVar12 >> 3;
          sVar64 = (short)((ulong)uVar12 >> 0x10) >> 3;
          sVar65 = (short)((ulong)uVar12 >> 0x20) >> 3;
          sVar66 = (short)((long)uVar12 >> 0x33);
          sVar67 = (short)uVar21 >> 3;
          sVar68 = (short)((ulong)uVar21 >> 0x10) >> 3;
          sVar69 = (short)((ulong)uVar21 >> 0x20) >> 3;
          sVar70 = (short)((long)uVar21 >> 0x33);
          sVar71 = (short)uVar22 >> 3;
          sVar72 = (short)((ulong)uVar22 >> 0x10) >> 3;
          sVar73 = (short)((ulong)uVar22 >> 0x20) >> 3;
          sVar74 = (short)((long)uVar22 >> 0x33);
          auVar9._2_2_ = sVar60;
          auVar9._0_2_ = sVar23;
          auVar9._4_2_ = sVar61;
          auVar9._6_2_ = sVar62;
          auVar9._8_2_ = sVar63;
          auVar9._10_2_ = sVar64;
          auVar9._12_2_ = sVar65;
          auVar9._14_2_ = sVar66;
          auVar10._2_2_ = sVar60;
          auVar10._0_2_ = sVar23;
          auVar10._4_2_ = sVar61;
          auVar10._6_2_ = sVar62;
          auVar10._8_2_ = sVar63;
          auVar10._10_2_ = sVar64;
          auVar10._12_2_ = sVar65;
          auVar10._14_2_ = sVar66;
          auVar75 = NEON_ext(auVar9,auVar10,8,1);
          iVar42 = iVar42 + (int)sVar23 * (int)sVar23;
          iVar45 = iVar45 + (int)sVar60 * (int)sVar60;
          iVar46 = iVar46 + (int)sVar61 * (int)sVar61;
          iVar47 = iVar47 + (int)sVar62 * (int)sVar62;
          auVar17._2_2_ = sVar68;
          auVar17._0_2_ = sVar67;
          auVar17._4_2_ = sVar69;
          auVar17._6_2_ = sVar70;
          auVar17._8_2_ = sVar71;
          auVar17._10_2_ = sVar72;
          auVar17._12_2_ = sVar73;
          auVar17._14_2_ = sVar74;
          auVar18._2_2_ = sVar68;
          auVar18._0_2_ = sVar67;
          auVar18._4_2_ = sVar69;
          auVar18._6_2_ = sVar70;
          auVar18._8_2_ = sVar71;
          auVar18._10_2_ = sVar72;
          auVar18._12_2_ = sVar73;
          auVar18._14_2_ = sVar74;
          auVar76 = NEON_ext(auVar17,auVar18,8,1);
          iVar52 = iVar52 + (int)sVar67 * (int)sVar67;
          iVar53 = iVar53 + (int)sVar68 * (int)sVar68;
          iVar54 = iVar54 + (int)sVar69 * (int)sVar69;
          iVar55 = iVar55 + (int)sVar70 * (int)sVar70;
          iVar48 = iVar48 + (int)auVar75._0_2_ * (int)auVar75._0_2_;
          iVar49 = iVar49 + (int)auVar75._2_2_ * (int)auVar75._2_2_;
          iVar50 = iVar50 + (int)auVar75._4_2_ * (int)auVar75._4_2_;
          iVar51 = iVar51 + (int)auVar75._6_2_ * (int)auVar75._6_2_;
          iVar56 = iVar56 + (int)auVar76._0_2_ * (int)auVar76._0_2_;
          iVar57 = iVar57 + (int)auVar76._2_2_ * (int)auVar76._2_2_;
          iVar58 = iVar58 + (int)auVar76._4_2_ * (int)auVar76._4_2_;
          iVar59 = iVar59 + (int)auVar76._6_2_ * (int)auVar76._6_2_;
        } while (uVar30 != 0);
        iVar42 = iVar52 + iVar42 + iVar56 + iVar48 + iVar53 + iVar45 + iVar57 + iVar49 +
                 iVar54 + iVar46 + iVar58 + iVar50 + iVar55 + iVar47 + iVar59 + iVar51;
        if (uVar28 != uVar39) goto LAB_00e843f8;
      }
      iVar26 = iVar26 + iVar42;
      if (iVar26 < 0) {
        iVar26 = 0x7fffffff;
      }
      if (uVar43 < 0x10) {
        uVar28 = 0;
        iVar42 = 0;
LAB_00e84438:
        lVar29 = uVar39 - uVar28;
        iVar44 = iVar25 + uVar3 * 2 + (int)uVar28;
        do {
          lVar1 = (long)iVar44;
          lVar29 = lVar29 + -1;
          iVar44 = iVar44 + 1;
          iVar42 = iVar42 + ((int)psVar41[lVar1] >> 3) * ((int)psVar41[lVar1] >> 3);
        } while (lVar29 != 0);
      }
      else {
        uVar28 = 0;
        iVar44 = iVar25 + uVar3 * 2;
        iVar42 = 0;
        if ((iVar44 + (int)(uVar39 - 1) < iVar44) || (iVar42 = 0, uVar39 - 1 >> 0x20 != 0))
        goto LAB_00e84438;
        uVar28 = uVar39 & 0x7ffffff0;
        iVar42 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        iVar48 = 0;
        iVar49 = 0;
        iVar50 = 0;
        iVar51 = 0;
        iVar52 = 0;
        iVar53 = 0;
        iVar54 = 0;
        iVar55 = 0;
        iVar56 = 0;
        iVar57 = 0;
        iVar58 = 0;
        iVar59 = 0;
        uVar30 = uVar28;
        do {
          puVar2 = (undefined8 *)(psVar41 + iVar44);
          iVar44 = iVar44 + 0x10;
          uVar30 = uVar30 - 0x10;
          uVar12 = puVar2[1];
          uVar11 = *puVar2;
          uVar22 = puVar2[3];
          uVar21 = puVar2[2];
          sVar23 = (short)uVar11 >> 3;
          sVar60 = (short)((ulong)uVar11 >> 0x10) >> 3;
          sVar61 = (short)((ulong)uVar11 >> 0x20) >> 3;
          sVar62 = (short)((long)uVar11 >> 0x33);
          sVar63 = (short)uVar12 >> 3;
          sVar64 = (short)((ulong)uVar12 >> 0x10) >> 3;
          sVar65 = (short)((ulong)uVar12 >> 0x20) >> 3;
          sVar66 = (short)((long)uVar12 >> 0x33);
          sVar67 = (short)uVar21 >> 3;
          sVar68 = (short)((ulong)uVar21 >> 0x10) >> 3;
          sVar69 = (short)((ulong)uVar21 >> 0x20) >> 3;
          sVar70 = (short)((long)uVar21 >> 0x33);
          sVar71 = (short)uVar22 >> 3;
          sVar72 = (short)((ulong)uVar22 >> 0x10) >> 3;
          sVar73 = (short)((ulong)uVar22 >> 0x20) >> 3;
          sVar74 = (short)((long)uVar22 >> 0x33);
          auVar7._2_2_ = sVar60;
          auVar7._0_2_ = sVar23;
          auVar7._4_2_ = sVar61;
          auVar7._6_2_ = sVar62;
          auVar7._8_2_ = sVar63;
          auVar7._10_2_ = sVar64;
          auVar7._12_2_ = sVar65;
          auVar7._14_2_ = sVar66;
          auVar8._2_2_ = sVar60;
          auVar8._0_2_ = sVar23;
          auVar8._4_2_ = sVar61;
          auVar8._6_2_ = sVar62;
          auVar8._8_2_ = sVar63;
          auVar8._10_2_ = sVar64;
          auVar8._12_2_ = sVar65;
          auVar8._14_2_ = sVar66;
          auVar75 = NEON_ext(auVar7,auVar8,8,1);
          iVar42 = iVar42 + (int)sVar23 * (int)sVar23;
          iVar45 = iVar45 + (int)sVar60 * (int)sVar60;
          iVar46 = iVar46 + (int)sVar61 * (int)sVar61;
          iVar47 = iVar47 + (int)sVar62 * (int)sVar62;
          auVar15._2_2_ = sVar68;
          auVar15._0_2_ = sVar67;
          auVar15._4_2_ = sVar69;
          auVar15._6_2_ = sVar70;
          auVar15._8_2_ = sVar71;
          auVar15._10_2_ = sVar72;
          auVar15._12_2_ = sVar73;
          auVar15._14_2_ = sVar74;
          auVar16._2_2_ = sVar68;
          auVar16._0_2_ = sVar67;
          auVar16._4_2_ = sVar69;
          auVar16._6_2_ = sVar70;
          auVar16._8_2_ = sVar71;
          auVar16._10_2_ = sVar72;
          auVar16._12_2_ = sVar73;
          auVar16._14_2_ = sVar74;
          auVar76 = NEON_ext(auVar15,auVar16,8,1);
          iVar52 = iVar52 + (int)sVar67 * (int)sVar67;
          iVar53 = iVar53 + (int)sVar68 * (int)sVar68;
          iVar54 = iVar54 + (int)sVar69 * (int)sVar69;
          iVar55 = iVar55 + (int)sVar70 * (int)sVar70;
          iVar48 = iVar48 + (int)auVar75._0_2_ * (int)auVar75._0_2_;
          iVar49 = iVar49 + (int)auVar75._2_2_ * (int)auVar75._2_2_;
          iVar50 = iVar50 + (int)auVar75._4_2_ * (int)auVar75._4_2_;
          iVar51 = iVar51 + (int)auVar75._6_2_ * (int)auVar75._6_2_;
          iVar56 = iVar56 + (int)auVar76._0_2_ * (int)auVar76._0_2_;
          iVar57 = iVar57 + (int)auVar76._2_2_ * (int)auVar76._2_2_;
          iVar58 = iVar58 + (int)auVar76._4_2_ * (int)auVar76._4_2_;
          iVar59 = iVar59 + (int)auVar76._6_2_ * (int)auVar76._6_2_;
        } while (uVar30 != 0);
        iVar42 = iVar52 + iVar42 + iVar56 + iVar48 + iVar53 + iVar45 + iVar57 + iVar49 +
                 iVar54 + iVar46 + iVar58 + iVar50 + iVar55 + iVar47 + iVar59 + iVar51;
        if (uVar28 != uVar39) goto LAB_00e84438;
      }
      iVar26 = iVar26 + iVar42;
      if (iVar26 < 0) {
        iVar26 = 0x7fffffff;
      }
      if (uVar43 < 0x10) {
        uVar28 = 0;
        uVar43 = 0;
LAB_00e84478:
        lVar29 = uVar39 - uVar28;
        iVar25 = iVar25 + uVar3 * 3 + (int)uVar28;
        do {
          lVar1 = (long)iVar25;
          lVar29 = lVar29 + -1;
          iVar25 = iVar25 + 1;
          uVar43 = uVar43 + ((int)psVar41[lVar1] >> 3) * ((int)psVar41[lVar1] >> 3);
        } while (lVar29 != 0);
      }
      else {
        uVar43 = 0;
        uVar28 = 0;
        iVar44 = iVar25 + uVar3 * 3;
        if ((iVar44 + (int)(uVar39 - 1) < iVar44) || (uVar39 - 1 >> 0x20 != 0)) goto LAB_00e84478;
        uVar28 = uVar39 & 0x7ffffff0;
        iVar42 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        iVar48 = 0;
        iVar49 = 0;
        iVar50 = 0;
        iVar51 = 0;
        iVar52 = 0;
        iVar53 = 0;
        iVar54 = 0;
        iVar55 = 0;
        iVar56 = 0;
        iVar57 = 0;
        iVar58 = 0;
        iVar59 = 0;
        uVar30 = uVar28;
        do {
          puVar2 = (undefined8 *)(psVar41 + iVar44);
          iVar44 = iVar44 + 0x10;
          uVar30 = uVar30 - 0x10;
          uVar12 = puVar2[1];
          uVar11 = *puVar2;
          uVar22 = puVar2[3];
          uVar21 = puVar2[2];
          sVar23 = (short)uVar11 >> 3;
          sVar60 = (short)((ulong)uVar11 >> 0x10) >> 3;
          sVar61 = (short)((ulong)uVar11 >> 0x20) >> 3;
          sVar62 = (short)((long)uVar11 >> 0x33);
          sVar63 = (short)uVar12 >> 3;
          sVar64 = (short)((ulong)uVar12 >> 0x10) >> 3;
          sVar65 = (short)((ulong)uVar12 >> 0x20) >> 3;
          sVar66 = (short)((long)uVar12 >> 0x33);
          sVar67 = (short)uVar21 >> 3;
          sVar68 = (short)((ulong)uVar21 >> 0x10) >> 3;
          sVar69 = (short)((ulong)uVar21 >> 0x20) >> 3;
          sVar70 = (short)((long)uVar21 >> 0x33);
          sVar71 = (short)uVar22 >> 3;
          sVar72 = (short)((ulong)uVar22 >> 0x10) >> 3;
          sVar73 = (short)((ulong)uVar22 >> 0x20) >> 3;
          sVar74 = (short)((long)uVar22 >> 0x33);
          auVar5._2_2_ = sVar60;
          auVar5._0_2_ = sVar23;
          auVar5._4_2_ = sVar61;
          auVar5._6_2_ = sVar62;
          auVar5._8_2_ = sVar63;
          auVar5._10_2_ = sVar64;
          auVar5._12_2_ = sVar65;
          auVar5._14_2_ = sVar66;
          auVar6._2_2_ = sVar60;
          auVar6._0_2_ = sVar23;
          auVar6._4_2_ = sVar61;
          auVar6._6_2_ = sVar62;
          auVar6._8_2_ = sVar63;
          auVar6._10_2_ = sVar64;
          auVar6._12_2_ = sVar65;
          auVar6._14_2_ = sVar66;
          auVar75 = NEON_ext(auVar5,auVar6,8,1);
          iVar42 = iVar42 + (int)sVar23 * (int)sVar23;
          iVar45 = iVar45 + (int)sVar60 * (int)sVar60;
          iVar46 = iVar46 + (int)sVar61 * (int)sVar61;
          iVar47 = iVar47 + (int)sVar62 * (int)sVar62;
          auVar13._2_2_ = sVar68;
          auVar13._0_2_ = sVar67;
          auVar13._4_2_ = sVar69;
          auVar13._6_2_ = sVar70;
          auVar13._8_2_ = sVar71;
          auVar13._10_2_ = sVar72;
          auVar13._12_2_ = sVar73;
          auVar13._14_2_ = sVar74;
          auVar14._2_2_ = sVar68;
          auVar14._0_2_ = sVar67;
          auVar14._4_2_ = sVar69;
          auVar14._6_2_ = sVar70;
          auVar14._8_2_ = sVar71;
          auVar14._10_2_ = sVar72;
          auVar14._12_2_ = sVar73;
          auVar14._14_2_ = sVar74;
          auVar76 = NEON_ext(auVar13,auVar14,8,1);
          iVar52 = iVar52 + (int)sVar67 * (int)sVar67;
          iVar53 = iVar53 + (int)sVar68 * (int)sVar68;
          iVar54 = iVar54 + (int)sVar69 * (int)sVar69;
          iVar55 = iVar55 + (int)sVar70 * (int)sVar70;
          iVar48 = iVar48 + (int)auVar75._0_2_ * (int)auVar75._0_2_;
          iVar49 = iVar49 + (int)auVar75._2_2_ * (int)auVar75._2_2_;
          iVar50 = iVar50 + (int)auVar75._4_2_ * (int)auVar75._4_2_;
          iVar51 = iVar51 + (int)auVar75._6_2_ * (int)auVar75._6_2_;
          iVar56 = iVar56 + (int)auVar76._0_2_ * (int)auVar76._0_2_;
          iVar57 = iVar57 + (int)auVar76._2_2_ * (int)auVar76._2_2_;
          iVar58 = iVar58 + (int)auVar76._4_2_ * (int)auVar76._4_2_;
          iVar59 = iVar59 + (int)auVar76._6_2_ * (int)auVar76._6_2_;
        } while (uVar30 != 0);
        uVar43 = iVar52 + iVar42 + iVar56 + iVar48 + iVar53 + iVar45 + iVar57 + iVar49 +
                 iVar54 + iVar46 + iVar58 + iVar50 + iVar55 + iVar47 + iVar59 + iVar51;
        if (uVar28 != uVar39) goto LAB_00e84478;
      }
      uVar24 = iVar26 + (uVar43 >> 1);
    }
    *puVar38 = uVar43;
    if ((int)uVar24 < 0) {
      uVar24 = 0x7fffffff;
    }
    local_78[uVar34] = uVar24;
    uVar3 = local_78[3];
    uVar43 = local_78[2];
    uVar24 = local_78[1];
    uVar34 = uVar34 + 1;
    if (uVar34 == 4) {
      iVar25 = *(int *)(param_1 + 0x90);
      if (iVar25 < 1000) {
        iVar44 = (iVar25 >> 4) + 1;
        iVar26 = 0;
        if (iVar44 != 0) {
          iVar26 = 0x7fff / iVar44;
        }
        *(int *)(param_1 + 0x90) = iVar25 + 1;
      }
      else {
        iVar26 = 0;
      }
      iVar25 = *(int *)(param_1 + 0x60);
      uVar40 = *(int *)(param_1 + 0x80) + local_78[0];
      if ((int)uVar40 < 0) {
        uVar40 = 0x7fffffff;
      }
      uVar31 = 0;
      if (uVar40 != 0) {
        uVar31 = 0x7fffffff / uVar40;
      }
      if (uVar40 == iVar25 * 8 || (int)(uVar40 + iVar25 * -8) < 0 != SBORROW4(uVar40,iVar25 * 8)) {
        if ((int)uVar40 < iVar25) {
          iVar25 = 0x400;
        }
        else {
          iVar25 = (int)((long)iVar25 * (ulong)uVar31 >> 0x10) >> 5;
        }
      }
      else {
        iVar25 = 0x80;
      }
      if (iVar25 <= iVar26) {
        iVar25 = iVar26;
      }
      iVar25 = *(int *)(param_1 + 0x70) +
               (int)((ulong)((long)(short)iVar25 * (long)(int)(uVar31 - *(int *)(param_1 + 0x70)))
                    >> 0x10);
      iVar44 = 0;
      if (iVar25 != 0) {
        iVar44 = 0x7fffffff / iVar25;
      }
      uVar40 = *(int *)(param_1 + 0x84) + local_78[1];
      *(int *)(param_1 + 0x70) = iVar25;
      if (0xfffffe < iVar44) {
        iVar44 = 0xffffff;
      }
      if ((int)uVar40 < 0) {
        uVar40 = 0x7fffffff;
      }
      iVar25 = *(int *)(param_1 + 100);
      uVar31 = 0;
      if (uVar40 != 0) {
        uVar31 = 0x7fffffff / uVar40;
      }
      *(int *)(param_1 + 0x60) = iVar44;
      if (uVar40 == iVar25 * 8 || (int)(uVar40 + iVar25 * -8) < 0 != SBORROW4(uVar40,iVar25 * 8)) {
        if ((int)uVar40 < iVar25) {
          iVar25 = 0x400;
        }
        else {
          iVar25 = (int)((long)iVar25 * (ulong)uVar31 >> 0x10) >> 5;
        }
      }
      else {
        iVar25 = 0x80;
      }
      if (iVar25 <= iVar26) {
        iVar25 = iVar26;
      }
      iVar25 = *(int *)(param_1 + 0x74) +
               (int)((ulong)((long)(short)iVar25 * (long)(int)(uVar31 - *(int *)(param_1 + 0x74)))
                    >> 0x10);
      iVar42 = 0;
      if (iVar25 != 0) {
        iVar42 = 0x7fffffff / iVar25;
      }
      *(int *)(param_1 + 0x74) = iVar25;
      uVar40 = *(int *)(param_1 + 0x88) + local_78[2];
      if (0xfffffe < iVar42) {
        iVar42 = 0xffffff;
      }
      if ((int)uVar40 < 0) {
        uVar40 = 0x7fffffff;
      }
      iVar25 = *(int *)(param_1 + 0x68);
      uVar31 = 0;
      if (uVar40 != 0) {
        uVar31 = 0x7fffffff / uVar40;
      }
      *(int *)(param_1 + 100) = iVar42;
      if (uVar40 == iVar25 * 8 || (int)(uVar40 + iVar25 * -8) < 0 != SBORROW4(uVar40,iVar25 * 8)) {
        if ((int)uVar40 < iVar25) {
          iVar25 = 0x400;
        }
        else {
          iVar25 = (int)((long)iVar25 * (ulong)uVar31 >> 0x10) >> 5;
        }
      }
      else {
        iVar25 = 0x80;
      }
      if (iVar25 <= iVar26) {
        iVar25 = iVar26;
      }
      iVar25 = *(int *)(param_1 + 0x78) +
               (int)((ulong)((long)(short)iVar25 * (long)(int)(uVar31 - *(int *)(param_1 + 0x78)))
                    >> 0x10);
      iVar42 = 0;
      if (iVar25 != 0) {
        iVar42 = 0x7fffffff / iVar25;
      }
      uVar40 = *(int *)(param_1 + 0x8c) + local_78[3];
      *(int *)(param_1 + 0x78) = iVar25;
      if (0xfffffe < iVar42) {
        iVar42 = 0xffffff;
      }
      if ((int)uVar40 < 0) {
        uVar40 = 0x7fffffff;
      }
      iVar25 = *(int *)(param_1 + 0x6c);
      uVar31 = 0;
      if (uVar40 != 0) {
        uVar31 = 0x7fffffff / uVar40;
      }
      *(int *)(param_1 + 0x68) = iVar42;
      if (uVar40 == iVar25 * 8 || (int)(uVar40 + iVar25 * -8) < 0 != SBORROW4(uVar40,iVar25 * 8)) {
        if ((int)uVar40 < iVar25) {
          iVar25 = 0x400;
        }
        else {
          iVar25 = (int)((long)iVar25 * (ulong)uVar31 >> 0x10) >> 5;
        }
      }
      else {
        iVar25 = 0x80;
      }
      if (iVar25 <= iVar26) {
        iVar25 = iVar26;
      }
      uVar40 = local_78[0] - iVar44;
      iVar25 = *(int *)(param_1 + 0x7c) +
               (int)((ulong)((long)(short)iVar25 * (long)(int)(uVar31 - *(int *)(param_1 + 0x7c)))
                    >> 0x10);
      iVar26 = 0;
      if (iVar25 != 0) {
        iVar26 = 0x7fffffff / iVar25;
      }
      *(int *)(param_1 + 0x7c) = iVar25;
      if (0xfffffe < iVar26) {
        iVar26 = 0xffffff;
      }
      *(int *)(param_1 + 0x6c) = iVar26;
      if ((int)uVar40 < 1) {
        iVar26 = 0;
        uVar34 = 0;
        iVar44 = 0;
        local_88 = 0x100;
        iVar25 = *(int *)(param_1 + 100);
        uVar40 = local_78[1] - iVar25;
      }
      else {
        uVar31 = local_78[0] << 8;
        if (0x7fffff < local_78[0]) {
          uVar31 = local_78[0];
          iVar44 = iVar44 >> 8;
        }
        local_88 = 0;
        if (iVar44 + 1 != 0) {
          local_88 = (int)uVar31 / (iVar44 + 1);
        }
        sVar23 = silk_lin2log();
        sVar23 = sVar23 + -0x400;
        iVar26 = (int)sVar23 * (int)sVar23;
        if (uVar40 >> 0x14 == 0) {
          uVar34 = LZCOUNT(uVar40);
          uVar31 = (uint)uVar34;
          if (uVar31 - 0x18 != 0) {
            if (uVar40 < 0x80) {
              uVar33 = uVar40 << (ulong)(uVar31 - 0x18 & 0x1f);
              uVar37 = uVar40 >> (ulong)(0x38 - uVar31 & 0x1f);
            }
            else {
              uVar37 = uVar40 << (ulong)(uVar31 + 8 & 0x1f);
              uVar33 = uVar40 >> (ulong)(0x18 - uVar31 & 0x1f);
            }
            uVar40 = uVar37 | uVar33;
          }
          uVar33 = 0xb486;
          if ((uVar34 & 1) != 0) {
            uVar33 = 0x8000;
          }
          uVar33 = uVar33 >> (ulong)(uVar31 >> 1);
          sVar23 = (short)((long)sVar23 *
                           (ulong)((uVar33 + (int)(((ulong)(uVar40 & 0x7f) * 0xd5000000000000 >>
                                                   0x30) * (ulong)uVar33 >> 0x10)) * 0x40) >> 0x10);
        }
        uVar34 = (ulong)((long)sVar23 * 30000) >> 0x10;
        iVar44 = (int)((ulong)((long)sVar23 * 30000) >> 0x10);
        iVar25 = *(int *)(param_1 + 100);
        uVar40 = local_78[1] - iVar25;
      }
      if ((int)uVar40 < 1) {
        uVar40 = (uint)uVar34;
        local_84 = 0x100;
        iVar25 = *(int *)(param_1 + 0x68);
        uVar31 = local_78[2] - iVar25;
      }
      else {
        uVar31 = local_78[1] << 8;
        if (0x7fffff < local_78[1]) {
          uVar31 = local_78[1];
          iVar25 = iVar25 >> 8;
        }
        local_84 = 0;
        if (iVar25 + 1 != 0) {
          local_84 = (int)uVar31 / (iVar25 + 1);
        }
        sVar23 = silk_lin2log();
        sVar23 = sVar23 + -0x400;
        iVar26 = iVar26 + (int)sVar23 * (int)sVar23;
        if (uVar40 >> 0x14 == 0) {
          uVar34 = LZCOUNT(uVar40);
          uVar31 = (uint)uVar34;
          if (uVar31 - 0x18 != 0) {
            if (uVar40 < 0x80) {
              uVar33 = uVar40 << (ulong)(uVar31 - 0x18 & 0x1f);
              uVar37 = uVar40 >> (ulong)(0x38 - uVar31 & 0x1f);
            }
            else {
              uVar37 = uVar40 << (ulong)(uVar31 + 8 & 0x1f);
              uVar33 = uVar40 >> (ulong)(0x18 - uVar31 & 0x1f);
            }
            uVar40 = uVar37 | uVar33;
          }
          uVar33 = 0xb486;
          if ((uVar34 & 1) != 0) {
            uVar33 = 0x8000;
          }
          uVar33 = uVar33 >> (ulong)(uVar31 >> 1);
          sVar23 = (short)((long)sVar23 *
                           (ulong)((uVar33 + (int)(((ulong)(uVar40 & 0x7f) * 0xd5000000000000 >>
                                                   0x30) * (ulong)uVar33 >> 0x10)) * 0x40) >> 0x10);
        }
        uVar40 = iVar44 + (int)((ulong)((long)sVar23 * 6000) >> 0x10);
        uVar34 = (ulong)uVar40;
        iVar25 = *(int *)(param_1 + 0x68);
        uVar31 = local_78[2] - iVar25;
      }
      if ((int)uVar31 < 1) {
        uVar40 = (uint)uVar34;
        local_80 = 0x100;
        iVar25 = *(int *)(param_1 + 0x6c);
        uVar31 = local_78[3] - iVar25;
      }
      else {
        uVar33 = local_78[2] << 8;
        if (0x7fffff < local_78[2]) {
          uVar33 = local_78[2];
          iVar25 = iVar25 >> 8;
        }
        local_80 = 0;
        if (iVar25 + 1 != 0) {
          local_80 = (int)uVar33 / (iVar25 + 1);
        }
        sVar23 = silk_lin2log();
        sVar23 = sVar23 + -0x400;
        iVar26 = iVar26 + (int)sVar23 * (int)sVar23;
        if (uVar31 >> 0x14 == 0) {
          uVar34 = LZCOUNT(uVar31);
          uVar33 = (uint)uVar34;
          if (uVar33 - 0x18 != 0) {
            if (uVar31 < 0x80) {
              uVar37 = uVar31 << (ulong)(uVar33 - 0x18 & 0x1f);
              uVar36 = uVar31 >> (ulong)(0x38 - uVar33 & 0x1f);
            }
            else {
              uVar36 = uVar31 << (ulong)(uVar33 + 8 & 0x1f);
              uVar37 = uVar31 >> (ulong)(0x18 - uVar33 & 0x1f);
            }
            uVar31 = uVar36 | uVar37;
          }
          uVar37 = 0xb486;
          if ((uVar34 & 1) != 0) {
            uVar37 = 0x8000;
          }
          uVar37 = uVar37 >> (ulong)(uVar33 >> 1);
          sVar23 = (short)((long)sVar23 *
                           (ulong)((uVar37 + (int)(((ulong)(uVar31 & 0x7f) * 0xd5000000000000 >>
                                                   0x30) * (ulong)uVar37 >> 0x10)) * 0x40) >> 0x10);
        }
        uVar40 = uVar40 + (int)((ulong)((long)sVar23 * -12000) >> 0x10);
        uVar34 = (ulong)uVar40;
        iVar25 = *(int *)(param_1 + 0x6c);
        uVar31 = local_78[3] - iVar25;
      }
      if ((int)uVar31 < 1) {
        local_7c = 0x100;
        iVar25 = iVar26 + 3;
        if (-1 < iVar26) {
          iVar25 = iVar26;
        }
      }
      else {
        uVar33 = local_78[3] << 8;
        if (0x7fffff < local_78[3]) {
          uVar33 = local_78[3];
          iVar25 = iVar25 >> 8;
        }
        local_7c = 0;
        if (iVar25 + 1 != 0) {
          local_7c = (int)uVar33 / (iVar25 + 1);
        }
        sVar23 = silk_lin2log();
        sVar23 = sVar23 + -0x400;
        iVar26 = iVar26 + (int)sVar23 * (int)sVar23;
        if (uVar31 >> 0x14 == 0) {
          uVar34 = LZCOUNT(uVar31);
          uVar33 = (uint)uVar34;
          if (uVar33 - 0x18 != 0) {
            if (uVar31 < 0x80) {
              uVar37 = uVar31 << (ulong)(uVar33 - 0x18 & 0x1f);
              uVar36 = uVar31 >> (ulong)(0x38 - uVar33 & 0x1f);
            }
            else {
              uVar36 = uVar31 << (ulong)(uVar33 + 8 & 0x1f);
              uVar37 = uVar31 >> (ulong)(0x18 - uVar33 & 0x1f);
            }
            uVar31 = uVar36 | uVar37;
          }
          uVar37 = 0xb486;
          if ((uVar34 & 1) != 0) {
            uVar37 = 0x8000;
          }
          uVar37 = uVar37 >> (ulong)(uVar33 >> 1);
          sVar23 = (short)((long)sVar23 *
                           (ulong)((uVar37 + (int)(((ulong)(uVar31 & 0x7f) * 0xd5000000000000 >>
                                                   0x30) * (ulong)uVar37 >> 0x10)) * 0x40) >> 0x10);
        }
        uVar34 = (ulong)(uVar40 + (int)((ulong)((long)sVar23 * -12000) >> 0x10));
        iVar25 = iVar26 + 3;
        if (-1 < iVar26) {
          iVar25 = iVar26;
        }
      }
      if (iVar26 < 4) {
        iVar25 = -0x80;
      }
      else {
        uVar40 = iVar25 >> 2;
        uVar39 = LZCOUNT(uVar40);
        uVar31 = (uint)uVar39;
        if (uVar31 - 0x18 != 0) {
          if (uVar40 < 0x80) {
            uVar40 = uVar40 >> (ulong)(0x38 - uVar31 & 0x1f) |
                     uVar40 << (ulong)(uVar31 - 0x18 & 0x1f);
          }
          else {
            uVar40 = uVar40 << (ulong)(uVar31 + 8 & 0x1f) | uVar40 >> (ulong)(0x18 - uVar31 & 0x1f);
          }
        }
        uVar33 = 0xb486;
        if ((uVar39 & 1) != 0) {
          uVar33 = 0x8000;
        }
        uVar33 = uVar33 >> (ulong)(uVar31 >> 1);
        iVar25 = (int)((ulong)(((long)((ulong)(uVar33 + (int)(((ulong)(uVar40 & 0x7f) *
                                                               0xd5000000000000 >> 0x30) *
                                                              (ulong)uVar33 >> 0x10)) *
                                      0x3000000000000) >> 0x30) * 45000) >> 0x10) + -0x80;
      }
      iVar25 = silk_sigm_Q15(iVar25);
      iVar26 = silk_sigm_Q15(uVar34 & 0xffffffff);
      uVar24 = (int)(((int)(uVar3 - *(int *)(param_1 + 0x6c)) >> 2 & 0xfffffffcU) +
                    ((int)(uVar43 - *(int *)(param_1 + 0x68)) >> 4) * 3 +
                    ((int)(uVar24 - *(int *)(param_1 + 100)) >> 3 & 0xfffffffeU) +
                    ((int)(local_78[0] - *(int *)(param_1 + 0x60)) >> 4)) >>
               (*(int *)(param_1 + 0x11e8) == *(int *)(param_1 + 0x11e0) * 0x14);
      *(int *)(param_1 + 0x1278) = iVar26 * 2 + -0x8000;
      if ((int)uVar24 < 1) {
        iVar25 = iVar25 >> 1;
      }
      else if (uVar24 >> 0xe == 0) {
        uVar34 = LZCOUNT(uVar24 << 0x10);
        uVar43 = 0xb486;
        if ((uVar34 & 1) != 0) {
          uVar43 = 0x8000;
        }
        uVar43 = uVar43 >> (uVar34 >> 1);
        iVar25 = (int)((long)(short)iVar25 *
                       (ulong)(uVar43 + (int)(((ulong)((uVar24 << 0x10) >>
                                                       (ulong)(0x18U - (int)uVar34 & 0x1f) & 0x7f) *
                                               0xd5000000000000 >> 0x30) * (ulong)uVar43 >> 0x10) +
                              0x8000) >> 0x10);
      }
      iVar26 = iVar25 >> 7;
      if (0xfe < iVar26) {
        iVar26 = 0xff;
      }
      *(int *)(param_1 + 0x11b4) = iVar26;
      lVar29 = (long)((iVar25 * (short)iVar25 >> 0x14) >>
                     (*(int *)(param_1 + 0x11e8) == *(int *)(param_1 + 0x11e0) * 10));
      *(int *)(param_1 + 0x4c) =
           *(int *)(param_1 + 0x4c) +
           (int)((ulong)(lVar29 * ((long)local_88 - (long)*(int *)(param_1 + 0x4c))) >> 0x10);
      iVar25 = silk_lin2log();
      uVar27 = silk_sigm_Q15(iVar25 * 3 + -0x1400 >> 4);
      *(undefined4 *)(param_1 + 0x1268) = uVar27;
      iVar25 = *(int *)(param_1 + 0x50) +
               (int)((ulong)(lVar29 * ((long)local_84 - (long)*(int *)(param_1 + 0x50))) >> 0x10);
      *(int *)(param_1 + 0x50) = iVar25;
      iVar25 = silk_lin2log(iVar25);
      uVar27 = silk_sigm_Q15(iVar25 * 3 + -0x1400 >> 4);
      *(undefined4 *)(param_1 + 0x126c) = uVar27;
      iVar25 = *(int *)(param_1 + 0x54) +
               (int)((ulong)(lVar29 * ((long)local_80 - (long)*(int *)(param_1 + 0x54))) >> 0x10);
      *(int *)(param_1 + 0x54) = iVar25;
      iVar25 = silk_lin2log(iVar25);
      uVar27 = silk_sigm_Q15(iVar25 * 3 + -0x1400 >> 4);
      *(undefined4 *)(param_1 + 0x1270) = uVar27;
      iVar25 = *(int *)(param_1 + 0x58) +
               (int)((ulong)(lVar29 * ((long)local_7c - (long)*(int *)(param_1 + 0x58))) >> 0x10);
      *(int *)(param_1 + 0x58) = iVar25;
      iVar25 = silk_lin2log(iVar25);
      uVar27 = silk_sigm_Q15(iVar25 * 3 + -0x1400 >> 4);
      *(undefined4 *)(param_1 + 0x1274) = uVar27;
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
  } while( true );
}


