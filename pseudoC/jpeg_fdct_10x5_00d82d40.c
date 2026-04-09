// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_10x5
// Entry Point: 00d82d40
// Size: 1252 bytes
// Signature: undefined jpeg_fdct_10x5(void)


void jpeg_fdct_10x5(undefined8 *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar27;
  long lVar25;
  long lVar26;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  long lVar36;
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined auVar55 [16];
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  undefined auVar68 [16];
  
  lVar4 = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar4) + (param_3 & 0xffffffff));
    lVar7 = (ulong)pbVar1[9] + (ulong)*pbVar1;
    lVar6 = (ulong)*pbVar1 - (ulong)pbVar1[9];
    lVar2 = (ulong)pbVar1[8] + (ulong)pbVar1[1];
    lVar9 = (ulong)pbVar1[1] - (ulong)pbVar1[8];
    lVar36 = (ulong)pbVar1[7] + (ulong)pbVar1[2];
    lVar10 = (ulong)pbVar1[2] - (ulong)pbVar1[7];
    lVar25 = (ulong)pbVar1[6] + (ulong)pbVar1[3];
    lVar11 = (ulong)pbVar1[3] - (ulong)pbVar1[6];
    lVar13 = lVar2 - lVar25;
    lVar5 = (ulong)pbVar1[5] + (ulong)pbVar1[4];
    lVar25 = lVar25 + lVar2;
    lVar26 = lVar5 + lVar7;
    lVar7 = lVar7 - lVar5;
    lVar12 = (lVar7 + lVar13) * 0x1a9a + 0x400;
    lVar5 = (ulong)pbVar1[4] - (ulong)pbVar1[5];
    piVar3 = (int *)((long)param_1 + lVar4 * 4);
    piVar3[4] = (int)((lVar26 + lVar36 * -2) * 0x249d + (lVar25 + lVar36 * -2) * -0xdfc + 0x400U >>
                     0xb);
    piVar3[5] = ((int)(lVar5 + lVar6) - ((int)(lVar9 - lVar11) + (int)lVar10)) * 4;
    lVar8 = (lVar9 - lVar11) * 0x19e3 + lVar10 * -0x2000 + (lVar5 + lVar6) * 0x9e3;
    lVar2 = (lVar11 + lVar9) * -0x12cf + (lVar6 - lVar5) * 0x1e6f + 0x400;
    lVar4 = lVar4 + 8;
    *piVar3 = ((int)lVar36 + (int)lVar26 + (int)lVar25) * 4 + -0x1400;
    piVar3[1] = (int)(lVar9 * 0x2853 + lVar6 * 0x2cb3 + lVar10 * 0x2000 + lVar11 * 0x148c +
                      lVar5 * 0x714 + 0x400U >> 0xb);
    piVar3[2] = (int)((ulong)(lVar12 + lVar7 * 0x1071) >> 0xb);
    piVar3[3] = (int)((ulong)(lVar2 + lVar8) >> 0xb);
    piVar3[6] = (int)((ulong)(lVar12 + lVar13 * -0x45a4) >> 0xb);
    piVar3[7] = (int)((ulong)(lVar2 - lVar8) >> 0xb);
  } while (lVar4 != 0x28);
  auVar38 = *(undefined (*) [16])(param_1 + 2);
  iVar16 = (int)param_1[0x11];
  iVar17 = (int)((ulong)param_1[0x11] >> 0x20);
  iVar14 = (int)param_1[0x10];
  iVar15 = (int)((ulong)param_1[0x10] >> 0x20);
  auVar40 = *(undefined (*) [16])(param_1 + 0x12);
  iVar51 = (int)*param_1;
  iVar24 = iVar14 + iVar51;
  iVar52 = (int)((ulong)*param_1 >> 0x20);
  iVar27 = iVar15 + iVar52;
  iVar53 = (int)param_1[1];
  iVar28 = iVar16 + iVar53;
  iVar54 = (int)((ulong)param_1[1] >> 0x20);
  iVar29 = iVar17 + iVar54;
  iVar51 = iVar51 - iVar14;
  iVar52 = iVar52 - iVar15;
  iVar53 = iVar53 - iVar16;
  iVar54 = iVar54 - iVar17;
  auVar55._4_4_ = iVar52;
  auVar55._0_4_ = iVar51;
  auVar55._8_4_ = iVar53;
  auVar55._12_4_ = iVar54;
  auVar68._4_4_ = iVar52;
  auVar68._0_4_ = iVar51;
  auVar68._8_4_ = iVar53;
  auVar68._12_4_ = iVar54;
  auVar55 = NEON_ext(auVar55,auVar68,8,1);
  iVar15 = (int)param_1[0xc];
  iVar20 = (int)param_1[4];
  iVar30 = iVar15 + iVar20;
  iVar17 = (int)((ulong)param_1[0xc] >> 0x20);
  iVar21 = (int)((ulong)param_1[4] >> 0x20);
  iVar32 = iVar17 + iVar21;
  iVar18 = (int)param_1[0xd];
  iVar22 = (int)param_1[5];
  iVar34 = iVar18 + iVar22;
  iVar19 = (int)((ulong)param_1[0xd] >> 0x20);
  iVar23 = (int)((ulong)param_1[5] >> 0x20);
  iVar35 = iVar19 + iVar23;
  lVar7 = (long)iVar30 + (long)iVar24;
  lVar36 = (long)iVar32 + (long)iVar27;
  lVar12 = (long)iVar34 + (long)iVar28;
  lVar41 = (long)iVar35 + (long)iVar29;
  iVar31 = (int)param_1[8];
  iVar33 = (int)((ulong)param_1[8] >> 0x20);
  iVar14 = (int)param_1[9];
  iVar16 = (int)((ulong)param_1[9] >> 0x20);
  lVar4 = lVar7 + (long)iVar31 * -4;
  lVar2 = lVar36 + (long)iVar33 * -4;
  lVar5 = lVar12 + (long)iVar14 * -4;
  lVar6 = lVar41 + (long)iVar16 * -4;
  iVar20 = iVar20 - iVar15;
  iVar21 = iVar21 - iVar17;
  iVar22 = iVar22 - iVar18;
  iVar23 = iVar23 - iVar19;
  lVar13 = ((long)iVar24 - (long)iVar30) * 0x2062 + 0x4000;
  lVar42 = ((long)iVar27 - (long)iVar32) * 0x2062 + 0x4000;
  lVar25 = ((long)iVar28 - (long)iVar34) * 0x2062 + 0x4000;
  lVar8 = ((long)iVar29 - (long)iVar35) * 0x2062 + 0x4000;
  iVar56 = auVar40._0_4_ + auVar38._0_4_;
  iVar57 = auVar40._4_4_ + auVar38._4_4_;
  iVar58 = auVar40._8_4_ + auVar38._8_4_;
  iVar59 = auVar40._12_4_ + auVar38._12_4_;
  iVar18 = (int)param_1[6];
  iVar28 = (int)param_1[0xe];
  iVar60 = iVar28 + iVar18;
  iVar19 = (int)((ulong)param_1[6] >> 0x20);
  iVar29 = (int)((ulong)param_1[0xe] >> 0x20);
  iVar61 = iVar29 + iVar19;
  iVar24 = (int)param_1[7];
  iVar30 = (int)param_1[0xf];
  iVar62 = iVar30 + iVar24;
  iVar27 = (int)((ulong)param_1[7] >> 0x20);
  iVar32 = (int)((ulong)param_1[0xf] >> 0x20);
  iVar63 = iVar32 + iVar27;
  lVar64 = (long)iVar60 + (long)iVar56;
  lVar65 = (long)iVar61 + (long)iVar57;
  lVar66 = (long)iVar62 + (long)iVar58;
  lVar67 = (long)iVar63 + (long)iVar59;
  lVar10 = ((long)iVar20 + (long)iVar51) * 0x220c + 0x4000;
  lVar11 = ((long)iVar21 + (long)iVar52) * 0x220c + 0x4000;
  iVar34 = (int)param_1[10];
  iVar35 = (int)((ulong)param_1[10] >> 0x20);
  iVar15 = (int)param_1[0xb];
  iVar17 = (int)((ulong)param_1[0xb] >> 0x20);
  lVar26 = ((long)iVar22 + (long)iVar53) * 0x220c + 0x4000;
  lVar9 = ((long)iVar23 + (long)iVar54) * 0x220c + 0x4000;
  auVar37._0_4_ = auVar38._0_4_ - auVar40._0_4_;
  auVar37._4_4_ = auVar38._4_4_ - auVar40._4_4_;
  auVar37._8_4_ = auVar38._8_4_ - auVar40._8_4_;
  auVar37._12_4_ = auVar38._12_4_ - auVar40._12_4_;
  auVar39._0_4_ = iVar18 - iVar28;
  auVar39._4_4_ = iVar19 - iVar29;
  auVar39._8_4_ = iVar24 - iVar30;
  auVar39._12_4_ = iVar27 - iVar32;
  lVar49 = lVar66 + (long)iVar15 * -4;
  lVar50 = lVar67 + (long)iVar17 * -4;
  lVar45 = lVar64 + (long)iVar34 * -4;
  lVar47 = lVar65 + (long)iVar35 * -4;
  lVar46 = ((long)iVar56 - (long)iVar60) * 0x2062 + 0x4000;
  lVar48 = ((long)iVar57 - (long)iVar61) * 0x2062 + 0x4000;
  lVar43 = ((long)iVar58 - (long)iVar62) * 0x2062 + 0x4000;
  lVar44 = ((long)iVar59 - (long)iVar63) * 0x2062 + 0x4000;
  param_1[1] = CONCAT44((int)((lVar41 + iVar16) * 0x28f6 + 0x4000U >> 0xf),
                        (int)((lVar12 + iVar14) * 0x28f6 + 0x4000U >> 0xf));
  *param_1 = CONCAT44((int)((lVar36 + iVar33) * 0x28f6 + 0x4000U >> 0xf),
                      (int)((lVar7 + iVar31) * 0x28f6 + 0x4000U >> 0xf));
  param_1[3] = CONCAT44((int)((lVar67 + iVar17) * 0x28f6 + 0x4000U >> 0xf),
                        (int)((lVar66 + iVar15) * 0x28f6 + 0x4000U >> 0xf));
  param_1[2] = CONCAT44((int)((lVar65 + iVar35) * 0x28f6 + 0x4000U >> 0xf),
                        (int)((lVar64 + iVar34) * 0x28f6 + 0x4000U >> 0xf));
  auVar38._4_4_ = iVar21;
  auVar38._0_4_ = iVar20;
  auVar38._8_4_ = iVar22;
  auVar38._12_4_ = iVar23;
  auVar40._4_4_ = iVar21;
  auVar40._0_4_ = iVar20;
  auVar40._8_4_ = iVar22;
  auVar40._12_4_ = iVar23;
  auVar68 = NEON_ext(auVar38,auVar40,8,1);
  lVar12 = ((long)auVar39._0_4_ + (long)auVar37._0_4_) * 0x220c + 0x4000;
  lVar41 = ((long)auVar39._4_4_ + (long)auVar37._4_4_) * 0x220c + 0x4000;
  lVar7 = ((long)auVar39._8_4_ + (long)auVar37._8_4_) * 0x220c + 0x4000;
  lVar36 = ((long)auVar39._12_4_ + (long)auVar37._12_4_) * 0x220c + 0x4000;
  auVar38 = NEON_ext(auVar37,auVar37,8,1);
  param_1[9] = CONCAT44((int)((ulong)(lVar8 + lVar6 * 0xe7b) >> 0xf),
                        (int)((ulong)(lVar25 + lVar5 * 0xe7b) >> 0xf));
  param_1[8] = CONCAT44((int)((ulong)(lVar42 + lVar2 * 0xe7b) >> 0xf),
                        (int)((ulong)(lVar13 + lVar4 * 0xe7b) >> 0xf));
  param_1[0xb] = CONCAT44((int)((ulong)(lVar44 + lVar50 * 0xe7b) >> 0xf),
                          (int)((ulong)(lVar43 + lVar49 * 0xe7b) >> 0xf));
  param_1[10] = CONCAT44((int)((ulong)(lVar48 + lVar47 * 0xe7b) >> 0xf),
                         (int)((ulong)(lVar46 + lVar45 * 0xe7b) >> 0xf));
  param_1[0x11] =
       CONCAT44((int)((ulong)(lVar8 + lVar6 * -0xe7b) >> 0xf),
                (int)((ulong)(lVar25 + lVar5 * -0xe7b) >> 0xf));
  param_1[0x10] =
       CONCAT44((int)((ulong)(lVar42 + lVar2 * -0xe7b) >> 0xf),
                (int)((ulong)(lVar13 + lVar4 * -0xe7b) >> 0xf));
  param_1[0x13] =
       CONCAT44((int)((ulong)(lVar44 + lVar50 * -0xe7b) >> 0xf),
                (int)((ulong)(lVar43 + lVar49 * -0xe7b) >> 0xf));
  param_1[0x12] =
       CONCAT44((int)((ulong)(lVar48 + lVar47 * -0xe7b) >> 0xf),
                (int)((ulong)(lVar46 + lVar45 * -0xe7b) >> 0xf));
  auVar40 = NEON_ext(auVar39,auVar39,8,1);
  param_1[5] = CONCAT44((int)((ulong)(lVar9 + (long)auVar55._4_4_ * 0x150b) >> 0xf),
                        (int)((ulong)(lVar26 + (long)auVar55._0_4_ * 0x150b) >> 0xf));
  param_1[4] = CONCAT44((int)((ulong)(lVar11 + (long)iVar52 * 0x150b) >> 0xf),
                        (int)((ulong)(lVar10 + (long)iVar51 * 0x150b) >> 0xf));
  param_1[7] = CONCAT44((int)((ulong)(lVar36 + (long)auVar38._4_4_ * 0x150b) >> 0xf),
                        (int)((ulong)(lVar7 + (long)auVar38._0_4_ * 0x150b) >> 0xf));
  param_1[6] = CONCAT44((int)((ulong)(lVar41 + (long)auVar37._4_4_ * 0x150b) >> 0xf),
                        (int)((ulong)(lVar12 + (long)auVar37._0_4_ * 0x150b) >> 0xf));
  param_1[0xd] = CONCAT44((int)((ulong)(lVar9 + (long)auVar68._4_4_ * -0x5924) >> 0xf),
                          (int)((ulong)(lVar26 + (long)auVar68._0_4_ * -0x5924) >> 0xf));
  param_1[0xc] = CONCAT44((int)((ulong)(lVar11 + (long)iVar21 * -0x5924) >> 0xf),
                          (int)((ulong)(lVar10 + (long)iVar20 * -0x5924) >> 0xf));
  param_1[0xf] = CONCAT44((int)((ulong)(lVar36 + (long)auVar40._4_4_ * -0x5924) >> 0xf),
                          (int)((ulong)(lVar7 + (long)auVar40._0_4_ * -0x5924) >> 0xf));
  param_1[0xe] = CONCAT44((int)((ulong)(lVar41 + (long)auVar39._4_4_ * -0x5924) >> 0xf),
                          (int)((ulong)(lVar12 + (long)auVar39._0_4_ * -0x5924) >> 0xf));
  return;
}


