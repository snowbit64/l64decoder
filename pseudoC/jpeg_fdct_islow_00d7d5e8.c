// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_islow
// Entry Point: 00d7d5e8
// Size: 2016 bytes
// Signature: undefined jpeg_fdct_islow(void)


void jpeg_fdct_islow(undefined8 *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int *piVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  int iVar25;
  long lVar24;
  long lVar26;
  long lVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar44 [16];
  long lVar45;
  long lVar47;
  undefined auVar46 [16];
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar71;
  long lVar70;
  long lVar72;
  long lVar73;
  undefined auVar74 [16];
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  undefined auVar80 [16];
  undefined auVar81 [16];
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  undefined auVar86 [16];
  undefined auVar87 [16];
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  long lVar104;
  long lVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  long lVar110;
  long lVar112;
  undefined auVar111 [16];
  
  lVar6 = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar6) + (param_3 & 0xffffffff));
    lVar14 = (ulong)pbVar1[7] + (ulong)*pbVar1;
    lVar13 = (ulong)*pbVar1 - (ulong)pbVar1[7];
    lVar15 = (ulong)pbVar1[6] + (ulong)pbVar1[1];
    lVar16 = (ulong)pbVar1[1] - (ulong)pbVar1[6];
    lVar18 = (ulong)pbVar1[5] + (ulong)pbVar1[2];
    lVar17 = (ulong)pbVar1[2] - (ulong)pbVar1[5];
    lVar7 = lVar15 - lVar18;
    lVar19 = (ulong)pbVar1[4] + (ulong)pbVar1[3];
    lVar5 = (ulong)pbVar1[3] - (ulong)pbVar1[4];
    lVar21 = lVar14 - lVar19;
    iVar35 = (int)lVar19 + (int)lVar14;
    iVar37 = (int)lVar18 + (int)lVar15;
    lVar14 = (lVar21 + lVar7) * 0x1151 + 0x400;
    lVar19 = (lVar5 + lVar16 + lVar17 + lVar13) * 0x25a1 + 0x400;
    lVar15 = (lVar5 + lVar13) * -0x1ccd;
    lVar18 = lVar19 + (lVar17 + lVar13) * -0xc7c;
    lVar19 = lVar19 + (lVar5 + lVar16) * -0x3ec5;
    lVar20 = (lVar17 + lVar16) * -0x5203;
    piVar2 = (int *)((long)param_1 + lVar6 * 4);
    *piVar2 = (iVar35 + iVar37) * 4 + -0x1000;
    piVar2[1] = (int)((ulong)(lVar15 + lVar13 * 0x300b + lVar18) >> 0xb);
    lVar6 = lVar6 + 8;
    piVar2[2] = (int)((ulong)(lVar14 + lVar21 * 0x187e) >> 0xb);
    piVar2[3] = (int)((ulong)(lVar20 + lVar16 * 0x6254 + lVar19) >> 0xb);
    piVar2[4] = (iVar35 - iVar37) * 4;
    piVar2[5] = (int)((ulong)(lVar20 + lVar17 * 0x41b3 + lVar18) >> 0xb);
    piVar2[6] = (int)((ulong)(lVar14 + lVar7 * -0x3b21) >> 0xb);
    piVar2[7] = (int)((ulong)(lVar15 + lVar5 * 0x98e + lVar19) >> 0xb);
  } while (lVar6 != 0x40);
  iVar90 = (int)param_1[3];
  iVar91 = (int)((ulong)param_1[3] >> 0x20);
  iVar88 = (int)param_1[2];
  iVar89 = (int)((ulong)param_1[2] >> 0x20);
  iVar65 = (int)*param_1;
  iVar35 = (int)param_1[0x1c];
  iVar30 = iVar35 + iVar65;
  iVar66 = (int)((ulong)*param_1 >> 0x20);
  iVar37 = (int)((ulong)param_1[0x1c] >> 0x20);
  iVar32 = iVar37 + iVar66;
  iVar67 = (int)param_1[1];
  iVar23 = (int)param_1[0x1d];
  iVar34 = iVar23 + iVar67;
  iVar68 = (int)((ulong)param_1[1] >> 0x20);
  iVar25 = (int)((ulong)param_1[0x1d] >> 0x20);
  iVar36 = iVar25 + iVar68;
  auVar87 = *(undefined (*) [16])(param_1 + 0xe);
  auVar29 = *(undefined (*) [16])(param_1 + 0x10);
  iVar31 = (int)param_1[0xc];
  iVar38 = auVar29._0_4_ + iVar31;
  iVar33 = (int)((ulong)param_1[0xc] >> 0x20);
  iVar41 = auVar29._4_4_ + iVar33;
  iVar69 = (int)param_1[0xd];
  iVar42 = auVar29._8_4_ + iVar69;
  iVar71 = (int)((ulong)param_1[0xd] >> 0x20);
  iVar43 = auVar29._12_4_ + iVar71;
  lVar54 = (long)iVar30 - (long)iVar38;
  lVar56 = (long)iVar32 - (long)iVar41;
  lVar48 = (long)iVar34 - (long)iVar42;
  lVar51 = (long)iVar36 - (long)iVar43;
  auVar46 = *(undefined (*) [16])(param_1 + 4);
  iVar98 = (int)param_1[7];
  iVar99 = (int)((ulong)param_1[7] >> 0x20);
  iVar96 = (int)param_1[6];
  iVar97 = (int)((ulong)param_1[6] >> 0x20);
  lVar104 = (long)iVar30 + (long)iVar38 + 2;
  lVar105 = (long)iVar32 + (long)iVar41 + 2;
  iVar65 = iVar65 - iVar35;
  iVar66 = iVar66 - iVar37;
  iVar67 = iVar67 - iVar23;
  iVar68 = iVar68 - iVar25;
  auVar39._0_4_ = iVar31 - auVar29._0_4_;
  auVar39._4_4_ = iVar33 - auVar29._4_4_;
  auVar39._8_4_ = iVar69 - auVar29._8_4_;
  auVar39._12_4_ = iVar71 - auVar29._12_4_;
  iVar35 = (int)param_1[0x18];
  iVar69 = iVar35 + auVar46._0_4_;
  iVar37 = (int)((ulong)param_1[0x18] >> 0x20);
  iVar71 = iVar37 + auVar46._4_4_;
  iVar23 = (int)param_1[0x19];
  iVar30 = iVar23 + auVar46._8_4_;
  iVar25 = (int)((ulong)param_1[0x19] >> 0x20);
  iVar32 = iVar25 + auVar46._12_4_;
  auVar28._0_4_ = auVar46._0_4_ - iVar35;
  auVar28._4_4_ = auVar46._4_4_ - iVar37;
  auVar28._8_4_ = auVar46._8_4_ - iVar23;
  auVar28._12_4_ = auVar46._12_4_ - iVar25;
  lVar7 = (long)iVar34 + (long)iVar42 + 2;
  lVar13 = (long)iVar36 + (long)iVar43 + 2;
  auVar81._4_4_ = iVar66;
  auVar81._0_4_ = iVar65;
  auVar81._8_4_ = iVar67;
  auVar81._12_4_ = iVar68;
  auVar40._4_4_ = iVar66;
  auVar40._0_4_ = iVar65;
  auVar40._8_4_ = iVar67;
  auVar40._12_4_ = iVar68;
  auVar74 = NEON_ext(auVar81,auVar40,8,1);
  auVar44 = NEON_ext(auVar39,auVar39,8,1);
  auVar81 = *(undefined (*) [16])(param_1 + 10);
  iVar23 = (int)param_1[0x14];
  iVar31 = (int)param_1[8];
  iVar38 = iVar23 + iVar31;
  iVar25 = (int)((ulong)param_1[0x14] >> 0x20);
  iVar33 = (int)((ulong)param_1[8] >> 0x20);
  iVar41 = iVar25 + iVar33;
  iVar34 = (int)param_1[0x15];
  iVar35 = (int)param_1[9];
  iVar42 = iVar34 + iVar35;
  iVar36 = (int)((ulong)param_1[0x15] >> 0x20);
  iVar37 = (int)((ulong)param_1[9] >> 0x20);
  iVar43 = iVar36 + iVar37;
  iVar31 = iVar31 - iVar23;
  iVar33 = iVar33 - iVar25;
  iVar35 = iVar35 - iVar34;
  iVar37 = iVar37 - iVar36;
  lVar16 = (long)iVar38 + (long)iVar69;
  lVar17 = (long)iVar41 + (long)iVar71;
  lVar20 = (long)iVar42 + (long)iVar30;
  lVar59 = (long)iVar43 + (long)iVar32;
  lVar6 = (long)iVar30 - (long)iVar42;
  lVar14 = (long)iVar32 - (long)iVar43;
  lVar70 = (long)iVar69 - (long)iVar38;
  lVar72 = (long)iVar71 - (long)iVar41;
  lVar76 = (lVar54 + lVar70) * 0x1151 + 0x4000;
  lVar77 = (lVar56 + lVar72) * 0x1151 + 0x4000;
  lVar26 = (lVar48 + lVar6) * 0x1151 + 0x4000;
  lVar27 = (lVar51 + lVar14) * 0x1151 + 0x4000;
  lVar9 = ((long)auVar39._8_4_ + (long)iVar67) * -0x1ccd;
  lVar18 = ((long)auVar39._0_4_ + (long)iVar65) * -0x1ccd;
  lVar55 = ((long)auVar39._8_4_ + (long)auVar28._8_4_ + (long)iVar35 + (long)iVar67) * 0x25a1 +
           0x4000;
  lVar57 = ((long)auVar39._12_4_ + (long)auVar28._12_4_ + (long)iVar37 + (long)iVar68) * 0x25a1 +
           0x4000;
  lVar21 = ((long)auVar39._12_4_ + (long)iVar68) * -0x1ccd;
  lVar10 = ((long)auVar39._4_4_ + (long)iVar66) * -0x1ccd;
  lVar78 = ((long)auVar39._0_4_ + (long)auVar28._0_4_ + (long)iVar31 + (long)iVar65) * 0x25a1 +
           0x4000;
  lVar79 = ((long)auVar39._4_4_ + (long)auVar28._4_4_ + (long)iVar33 + (long)iVar66) * 0x25a1 +
           0x4000;
  lVar11 = ((long)iVar31 + (long)auVar28._0_4_) * -0x5203;
  lVar19 = ((long)iVar35 + (long)auVar28._8_4_) * -0x5203;
  lVar49 = lVar78 + ((long)iVar31 + (long)iVar65) * -0xc7c;
  lVar52 = lVar79 + ((long)iVar33 + (long)iVar66) * -0xc7c;
  lVar78 = lVar78 + ((long)auVar39._0_4_ + (long)auVar28._0_4_) * -0x3ec5;
  lVar79 = lVar79 + ((long)auVar39._4_4_ + (long)auVar28._4_4_) * -0x3ec5;
  lVar8 = ((long)iVar33 + (long)auVar28._4_4_) * -0x5203;
  lVar61 = lVar55 + ((long)iVar35 + (long)iVar67) * -0xc7c;
  lVar63 = lVar57 + ((long)iVar37 + (long)iVar68) * -0xc7c;
  lVar55 = lVar55 + ((long)auVar39._8_4_ + (long)auVar28._8_4_) * -0x3ec5;
  lVar57 = lVar57 + ((long)auVar39._12_4_ + (long)auVar28._12_4_) * -0x3ec5;
  lVar12 = ((long)iVar37 + (long)auVar28._12_4_) * -0x5203;
  auVar40 = NEON_ext(auVar28,auVar28,8,1);
  auVar29._4_4_ = iVar33;
  auVar29._0_4_ = iVar31;
  auVar29._8_4_ = iVar35;
  auVar29._12_4_ = iVar37;
  auVar46._4_4_ = iVar33;
  auVar46._0_4_ = iVar31;
  auVar46._8_4_ = iVar35;
  auVar46._12_4_ = iVar37;
  auVar29 = NEON_ext(auVar29,auVar46,8,1);
  iVar106 = (int)param_1[0x1e];
  iVar35 = iVar106 + iVar88;
  iVar107 = (int)((ulong)param_1[0x1e] >> 0x20);
  iVar37 = iVar107 + iVar89;
  iVar108 = (int)param_1[0x1f];
  iVar23 = iVar108 + iVar90;
  iVar109 = (int)((ulong)param_1[0x1f] >> 0x20);
  iVar25 = iVar109 + iVar91;
  iVar82 = (int)param_1[0x12];
  iVar38 = iVar82 + auVar87._0_4_;
  iVar83 = (int)((ulong)param_1[0x12] >> 0x20);
  iVar41 = iVar83 + auVar87._4_4_;
  iVar84 = (int)param_1[0x13];
  iVar42 = iVar84 + auVar87._8_4_;
  iVar85 = (int)((ulong)param_1[0x13] >> 0x20);
  iVar43 = iVar85 + auVar87._12_4_;
  iVar100 = (int)param_1[0x1a];
  iVar67 = iVar100 + iVar96;
  iVar101 = (int)((ulong)param_1[0x1a] >> 0x20);
  iVar68 = iVar101 + iVar97;
  iVar102 = (int)param_1[0x1b];
  iVar69 = iVar102 + iVar98;
  iVar103 = (int)((ulong)param_1[0x1b] >> 0x20);
  iVar71 = iVar103 + iVar99;
  iVar92 = (int)param_1[0x16];
  iVar30 = iVar92 + auVar81._0_4_;
  iVar93 = (int)((ulong)param_1[0x16] >> 0x20);
  iVar32 = iVar93 + auVar81._4_4_;
  iVar94 = (int)param_1[0x17];
  iVar34 = iVar94 + auVar81._8_4_;
  iVar95 = (int)((ulong)param_1[0x17] >> 0x20);
  iVar36 = iVar95 + auVar81._12_4_;
  iVar88 = iVar88 - iVar106;
  iVar89 = iVar89 - iVar107;
  iVar90 = iVar90 - iVar108;
  iVar91 = iVar91 - iVar109;
  lVar15 = (long)iVar35 + (long)iVar38 + 2;
  lVar5 = (long)iVar37 + (long)iVar41 + 2;
  lVar110 = (long)iVar23 + (long)iVar42 + 2;
  lVar112 = (long)iVar25 + (long)iVar43 + 2;
  lVar45 = (long)iVar23 - (long)iVar42;
  lVar47 = (long)iVar25 - (long)iVar43;
  lVar62 = (long)iVar69 - (long)iVar34;
  lVar64 = (long)iVar71 - (long)iVar36;
  lVar22 = (long)iVar35 - (long)iVar38;
  lVar24 = (long)iVar37 - (long)iVar41;
  lVar73 = (long)iVar30 + (long)iVar67;
  lVar75 = (long)iVar32 + (long)iVar68;
  lVar58 = (long)iVar34 + (long)iVar69;
  lVar60 = (long)iVar36 + (long)iVar71;
  lVar50 = (long)iVar67 - (long)iVar30;
  lVar53 = (long)iVar68 - (long)iVar32;
  iVar96 = iVar96 - iVar100;
  iVar97 = iVar97 - iVar101;
  iVar98 = iVar98 - iVar102;
  iVar99 = iVar99 - iVar103;
  auVar86._0_4_ = auVar81._0_4_ - iVar92;
  auVar86._4_4_ = auVar81._4_4_ - iVar93;
  auVar86._8_4_ = auVar81._8_4_ - iVar94;
  auVar86._12_4_ = auVar81._12_4_ - iVar95;
  param_1[0x11] = CONCAT44((int)((ulong)(lVar13 - lVar59) >> 2),(int)((ulong)(lVar7 - lVar20) >> 2))
  ;
  param_1[0x10] =
       CONCAT44((int)((ulong)(lVar105 - lVar17) >> 2),(int)((ulong)(lVar104 - lVar16) >> 2));
  param_1[0x13] =
       CONCAT44((int)((ulong)(lVar112 - lVar60) >> 2),(int)((ulong)(lVar110 - lVar58) >> 2));
  param_1[0x12] = CONCAT44((int)((ulong)(lVar5 - lVar75) >> 2),(int)((ulong)(lVar15 - lVar73) >> 2))
  ;
  auVar80._0_4_ = auVar87._0_4_ - iVar82;
  auVar80._4_4_ = auVar87._4_4_ - iVar83;
  auVar80._8_4_ = auVar87._8_4_ - iVar84;
  auVar80._12_4_ = auVar87._12_4_ - iVar85;
  param_1[1] = CONCAT44((int)((ulong)(lVar13 + lVar59) >> 2),(int)((ulong)(lVar7 + lVar20) >> 2));
  *param_1 = CONCAT44((int)((ulong)(lVar105 + lVar17) >> 2),(int)((ulong)(lVar104 + lVar16) >> 2));
  param_1[3] = CONCAT44((int)((ulong)(lVar112 + lVar60) >> 2),(int)((ulong)(lVar110 + lVar58) >> 2))
  ;
  param_1[2] = CONCAT44((int)((ulong)(lVar5 + lVar75) >> 2),(int)((ulong)(lVar15 + lVar73) >> 2));
  lVar73 = (lVar22 + lVar50) * 0x1151 + 0x4000;
  lVar75 = (lVar24 + lVar53) * 0x1151 + 0x4000;
  lVar59 = (lVar45 + lVar62) * 0x1151 + 0x4000;
  lVar60 = (lVar47 + lVar64) * 0x1151 + 0x4000;
  lVar13 = ((long)auVar80._8_4_ + (long)iVar90) * -0x1ccd;
  lVar17 = ((long)auVar80._12_4_ + (long)iVar91) * -0x1ccd;
  lVar15 = ((long)auVar80._0_4_ + (long)iVar88) * -0x1ccd;
  lVar7 = ((long)auVar80._4_4_ + (long)iVar89) * -0x1ccd;
  lVar58 = ((long)auVar86._8_4_ + (long)iVar98) * -0x5203;
  lVar16 = ((long)auVar86._12_4_ + (long)iVar99) * -0x5203;
  lVar20 = ((long)auVar86._0_4_ + (long)iVar96) * -0x5203;
  auVar87._4_4_ = iVar89;
  auVar87._0_4_ = iVar88;
  auVar87._8_4_ = iVar90;
  auVar87._12_4_ = iVar91;
  auVar111._4_4_ = iVar89;
  auVar111._0_4_ = iVar88;
  auVar111._8_4_ = iVar90;
  auVar111._12_4_ = iVar91;
  auVar111 = NEON_ext(auVar87,auVar111,8,1);
  lVar5 = ((long)auVar86._4_4_ + (long)iVar97) * -0x5203;
  param_1[0x19] =
       CONCAT44((int)((ulong)(lVar27 + lVar14 * -0x3b21) >> 0xf),
                (int)((ulong)(lVar26 + lVar6 * -0x3b21) >> 0xf));
  param_1[0x18] =
       CONCAT44((int)((ulong)(lVar77 + lVar72 * -0x3b21) >> 0xf),
                (int)((ulong)(lVar76 + lVar70 * -0x3b21) >> 0xf));
  param_1[0x1b] =
       CONCAT44((int)((ulong)(lVar60 + lVar64 * -0x3b21) >> 0xf),
                (int)((ulong)(lVar59 + lVar62 * -0x3b21) >> 0xf));
  param_1[0x1a] =
       CONCAT44((int)((ulong)(lVar75 + lVar53 * -0x3b21) >> 0xf),
                (int)((ulong)(lVar73 + lVar50 * -0x3b21) >> 0xf));
  lVar50 = ((long)auVar80._8_4_ + (long)iVar98 + (long)auVar86._8_4_ + (long)iVar90) * 0x25a1 +
           0x4000;
  lVar53 = ((long)auVar80._12_4_ + (long)iVar99 + (long)auVar86._12_4_ + (long)iVar91) * 0x25a1 +
           0x4000;
  lVar62 = ((long)auVar80._0_4_ + (long)iVar96 + (long)auVar86._0_4_ + (long)iVar88) * 0x25a1 +
           0x4000;
  lVar64 = ((long)auVar80._4_4_ + (long)iVar97 + (long)auVar86._4_4_ + (long)iVar89) * 0x25a1 +
           0x4000;
  auVar3._4_4_ = iVar97;
  auVar3._0_4_ = iVar96;
  auVar3._8_4_ = iVar98;
  auVar3._12_4_ = iVar99;
  auVar4._4_4_ = iVar97;
  auVar4._0_4_ = iVar96;
  auVar4._8_4_ = iVar98;
  auVar4._12_4_ = iVar99;
  auVar46 = NEON_ext(auVar3,auVar4,8,1);
  lVar6 = lVar62 + ((long)auVar80._0_4_ + (long)iVar96) * -0x3ec5;
  lVar14 = lVar64 + ((long)auVar80._4_4_ + (long)iVar97) * -0x3ec5;
  lVar62 = lVar62 + ((long)auVar86._0_4_ + (long)iVar88) * -0xc7c;
  lVar64 = lVar64 + ((long)auVar86._4_4_ + (long)iVar89) * -0xc7c;
  lVar70 = lVar50 + ((long)auVar86._8_4_ + (long)iVar90) * -0xc7c;
  lVar72 = lVar53 + ((long)auVar86._12_4_ + (long)iVar91) * -0xc7c;
  lVar50 = lVar50 + ((long)auVar80._8_4_ + (long)iVar98) * -0x3ec5;
  lVar53 = lVar53 + ((long)auVar80._12_4_ + (long)iVar99) * -0x3ec5;
  auVar87 = NEON_ext(auVar86,auVar86,8,1);
  auVar81 = NEON_ext(auVar80,auVar80,8,1);
  param_1[0xd] = CONCAT44((int)((ulong)(lVar12 + (long)auVar40._4_4_ * 0x6254 + lVar57) >> 0xf),
                          (int)((ulong)(lVar19 + (long)auVar40._0_4_ * 0x6254 + lVar55) >> 0xf));
  param_1[0xc] = CONCAT44((int)((ulong)(lVar8 + (long)auVar28._4_4_ * 0x6254 + lVar79) >> 0xf),
                          (int)((ulong)(lVar11 + (long)auVar28._0_4_ * 0x6254 + lVar78) >> 0xf));
  param_1[0xf] = CONCAT44((int)((ulong)(lVar16 + (long)auVar46._4_4_ * 0x6254 + lVar53) >> 0xf),
                          (int)((ulong)(lVar58 + (long)auVar46._0_4_ * 0x6254 + lVar50) >> 0xf));
  param_1[0xe] = CONCAT44((int)((ulong)(lVar5 + (long)iVar97 * 0x6254 + lVar14) >> 0xf),
                          (int)((ulong)(lVar20 + (long)iVar96 * 0x6254 + lVar6) >> 0xf));
  param_1[9] = CONCAT44((int)((ulong)(lVar27 + lVar51 * 0x187e) >> 0xf),
                        (int)((ulong)(lVar26 + lVar48 * 0x187e) >> 0xf));
  param_1[8] = CONCAT44((int)((ulong)(lVar77 + lVar56 * 0x187e) >> 0xf),
                        (int)((ulong)(lVar76 + lVar54 * 0x187e) >> 0xf));
  param_1[0xb] = CONCAT44((int)((ulong)(lVar60 + lVar47 * 0x187e) >> 0xf),
                          (int)((ulong)(lVar59 + lVar45 * 0x187e) >> 0xf));
  param_1[10] = CONCAT44((int)((ulong)(lVar75 + lVar24 * 0x187e) >> 0xf),
                         (int)((ulong)(lVar73 + lVar22 * 0x187e) >> 0xf));
  param_1[5] = CONCAT44((int)((ulong)(lVar21 + (long)auVar74._4_4_ * 0x300b + lVar63) >> 0xf),
                        (int)((ulong)(lVar9 + (long)auVar74._0_4_ * 0x300b + lVar61) >> 0xf));
  param_1[4] = CONCAT44((int)((ulong)(lVar10 + (long)iVar66 * 0x300b + lVar52) >> 0xf),
                        (int)((ulong)(lVar18 + (long)iVar65 * 0x300b + lVar49) >> 0xf));
  param_1[7] = CONCAT44((int)((ulong)(lVar17 + (long)auVar111._4_4_ * 0x300b + lVar72) >> 0xf),
                        (int)((ulong)(lVar13 + (long)auVar111._0_4_ * 0x300b + lVar70) >> 0xf));
  param_1[6] = CONCAT44((int)((ulong)(lVar7 + (long)iVar89 * 0x300b + lVar64) >> 0xf),
                        (int)((ulong)(lVar15 + (long)iVar88 * 0x300b + lVar62) >> 0xf));
  param_1[0x15] =
       CONCAT44((int)((ulong)(lVar12 + (long)auVar29._4_4_ * 0x41b3 + lVar63) >> 0xf),
                (int)((ulong)(lVar19 + (long)auVar29._0_4_ * 0x41b3 + lVar61) >> 0xf));
  param_1[0x14] =
       CONCAT44((int)((ulong)(lVar8 + (long)iVar33 * 0x41b3 + lVar52) >> 0xf),
                (int)((ulong)(lVar11 + (long)iVar31 * 0x41b3 + lVar49) >> 0xf));
  param_1[0x17] =
       CONCAT44((int)((ulong)(lVar16 + (long)auVar87._4_4_ * 0x41b3 + lVar72) >> 0xf),
                (int)((ulong)(lVar58 + (long)auVar87._0_4_ * 0x41b3 + lVar70) >> 0xf));
  param_1[0x16] =
       CONCAT44((int)((ulong)(lVar5 + (long)auVar86._4_4_ * 0x41b3 + lVar64) >> 0xf),
                (int)((ulong)(lVar20 + (long)auVar86._0_4_ * 0x41b3 + lVar62) >> 0xf));
  param_1[0x1d] =
       CONCAT44((int)((ulong)(lVar21 + (long)auVar44._4_4_ * 0x98e + lVar57) >> 0xf),
                (int)((ulong)(lVar9 + (long)auVar44._0_4_ * 0x98e + lVar55) >> 0xf));
  param_1[0x1c] =
       CONCAT44((int)((ulong)(lVar10 + (long)auVar39._4_4_ * 0x98e + lVar79) >> 0xf),
                (int)((ulong)(lVar18 + (long)auVar39._0_4_ * 0x98e + lVar78) >> 0xf));
  param_1[0x1f] =
       CONCAT44((int)((ulong)(lVar17 + (long)auVar81._4_4_ * 0x98e + lVar53) >> 0xf),
                (int)((ulong)(lVar13 + (long)auVar81._0_4_ * 0x98e + lVar50) >> 0xf));
  param_1[0x1e] =
       CONCAT44((int)((ulong)(lVar7 + (long)auVar80._4_4_ * 0x98e + lVar14) >> 0xf),
                (int)((ulong)(lVar15 + (long)auVar80._0_4_ * 0x98e + lVar6) >> 0xf));
  return;
}


