// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_16x8
// Entry Point: 00d81464
// Size: 2352 bytes
// Signature: undefined jpeg_fdct_16x8(void)


void jpeg_fdct_16x8(undefined8 *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  int *piVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
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
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined auVar33 [16];
  undefined auVar34 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
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
  long lVar51;
  undefined auVar52 [16];
  int iVar53;
  long lVar54;
  long lVar55;
  int iVar57;
  long lVar56;
  int iVar58;
  long lVar59;
  long lVar60;
  int iVar62;
  long lVar61;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  undefined auVar75 [16];
  long lVar76;
  long lVar77;
  undefined auVar78 [16];
  long lVar79;
  int iVar80;
  int iVar82;
  int iVar83;
  int iVar84;
  undefined auVar81 [16];
  undefined auVar85 [16];
  int iVar86;
  int iVar88;
  long lVar87;
  int iVar89;
  int iVar91;
  long lVar90;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  undefined auVar108 [16];
  long lVar109;
  long lVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  undefined auVar117 [16];
  
  lVar16 = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar16) + (param_3 & 0xffffffff));
    lVar30 = (ulong)pbVar1[0xf] + (ulong)*pbVar1;
    lVar21 = (ulong)*pbVar1 - (ulong)pbVar1[0xf];
    lVar31 = (ulong)pbVar1[0xe] + (ulong)pbVar1[1];
    lVar32 = (ulong)pbVar1[0xc] + (ulong)pbVar1[3];
    lVar22 = (ulong)pbVar1[1] - (ulong)pbVar1[0xe];
    lVar64 = (ulong)pbVar1[0xb] + (ulong)pbVar1[4];
    lVar18 = lVar32 - lVar64;
    lVar14 = (ulong)pbVar1[3] - (ulong)pbVar1[0xc];
    lVar2 = (ulong)pbVar1[8] + (ulong)pbVar1[7];
    lVar17 = (ulong)pbVar1[9] + (ulong)pbVar1[6];
    lVar19 = lVar2 + lVar30;
    lVar29 = (ulong)pbVar1[0xd] + (ulong)pbVar1[2];
    lVar30 = lVar30 - lVar2;
    lVar63 = lVar17 + lVar31;
    lVar31 = lVar31 - lVar17;
    lVar2 = (ulong)pbVar1[10] + (ulong)pbVar1[5];
    lVar17 = lVar2 + lVar29;
    lVar29 = lVar29 - lVar2;
    lVar64 = lVar64 + lVar32;
    lVar13 = (ulong)pbVar1[2] - (ulong)pbVar1[0xd];
    lVar20 = (ulong)pbVar1[4] - (ulong)pbVar1[0xb];
    lVar15 = (ulong)pbVar1[5] - (ulong)pbVar1[10];
    lVar32 = (lVar18 - lVar31) * 0x8d4 + (lVar30 - lVar29) * 0x2c63 + 0x400;
    lVar24 = (ulong)pbVar1[6] - (ulong)pbVar1[9];
    lVar25 = (ulong)pbVar1[7] - (ulong)pbVar1[8];
    lVar12 = (lVar22 + lVar21) * 0x2b4e + (lVar24 - lVar25) * 0xd23;
    lVar26 = (lVar13 + lVar21) * 0x27e9 + (lVar25 + lVar15) * 0x1555;
    lVar23 = (lVar14 + lVar21) * 0x22fc + (lVar20 - lVar25) * 0x1cb6;
    lVar27 = (lVar14 + lVar22) * -0x1555 + (lVar24 + lVar20) * -0x27e9;
    lVar28 = (lVar13 + lVar22) * 0x470 + (lVar24 - lVar15) * 0x2d09;
    piVar3 = (int *)((long)param_1 + lVar16 * 4);
    lVar16 = lVar16 + 8;
    lVar2 = (lVar14 + lVar13) * -0x2b4e + (lVar15 - lVar20) * 0xd23 + 0x400;
    *piVar3 = ((int)lVar17 + (int)lVar64 + (int)lVar63 + (int)lVar19) * 4 + -0x2000;
    piVar3[1] = (int)(lVar12 + lVar21 * -0x492a + lVar25 * 0x18f3 + lVar23 + lVar26 + 0x400U >> 0xb)
    ;
    piVar3[2] = (int)((ulong)(lVar32 + lVar29 * 0x4587 + lVar31 * 0x2e75) >> 0xb);
    piVar3[3] = (int)(lVar27 + lVar22 * 0x24d + lVar24 * -0x353f + lVar28 + lVar12 + 0x400U >> 0xb);
    piVar3[4] = (int)((lVar19 - lVar64) * 0x29cf + (lVar63 - lVar17) * 0x1151 + 0x400U >> 0xb);
    piVar3[5] = (int)((ulong)(lVar2 + lVar13 * -0x2406 + lVar15 * 0x2747 + lVar28 + lVar26) >> 0xb);
    piVar3[6] = (int)((ulong)(lVar32 + lVar18 * -0x21f9 + lVar30 * -0x6c2) >> 0xb);
    piVar3[7] = (int)((ulong)(lVar2 + lVar14 * 0x2218 + lVar20 * 0x4560 + lVar27 + lVar23) >> 0xb);
  } while (lVar16 != 0x40);
  auVar4 = *(undefined (*) [16])(param_1 + 0xe);
  auVar5 = *(undefined (*) [16])(param_1 + 10);
  iVar113 = (int)param_1[3];
  iVar114 = (int)((ulong)param_1[3] >> 0x20);
  iVar111 = (int)param_1[2];
  iVar112 = (int)((ulong)param_1[2] >> 0x20);
  iVar53 = (int)param_1[0x10];
  iVar47 = (int)param_1[0xc];
  iVar80 = iVar53 + iVar47;
  iVar57 = (int)((ulong)param_1[0x10] >> 0x20);
  iVar48 = (int)((ulong)param_1[0xc] >> 0x20);
  iVar82 = iVar57 + iVar48;
  iVar58 = (int)param_1[0x11];
  iVar49 = (int)param_1[0xd];
  iVar83 = iVar58 + iVar49;
  iVar62 = (int)((ulong)param_1[0x11] >> 0x20);
  iVar50 = (int)((ulong)param_1[0xd] >> 0x20);
  iVar84 = iVar62 + iVar50;
  auVar34 = *(undefined (*) [16])(param_1 + 0x1c);
  iVar102 = (int)param_1[0x1f];
  iVar103 = (int)((ulong)param_1[0x1f] >> 0x20);
  iVar100 = (int)param_1[0x1e];
  iVar101 = (int)((ulong)param_1[0x1e] >> 0x20);
  iVar36 = (int)*param_1;
  iVar35 = auVar34._0_4_ + iVar36;
  iVar38 = (int)((ulong)*param_1 >> 0x20);
  iVar37 = auVar34._4_4_ + iVar38;
  iVar40 = (int)param_1[1];
  iVar39 = auVar34._8_4_ + iVar40;
  iVar42 = (int)((ulong)param_1[1] >> 0x20);
  iVar41 = auVar34._12_4_ + iVar42;
  iVar45 = (int)param_1[5];
  iVar46 = (int)((ulong)param_1[5] >> 0x20);
  iVar43 = (int)param_1[4];
  iVar44 = (int)((ulong)param_1[4] >> 0x20);
  iVar106 = (int)param_1[7];
  iVar107 = (int)((ulong)param_1[7] >> 0x20);
  iVar104 = (int)param_1[6];
  iVar105 = (int)((ulong)param_1[6] >> 0x20);
  lVar92 = (long)iVar83 + (long)iVar39;
  lVar94 = (long)iVar84 + (long)iVar41;
  lVar96 = (long)iVar80 + (long)iVar35;
  lVar98 = (long)iVar82 + (long)iVar37;
  lVar2 = (long)iVar39 - (long)iVar83;
  lVar31 = (long)iVar41 - (long)iVar84;
  lVar54 = (long)iVar35 - (long)iVar80;
  lVar59 = (long)iVar37 - (long)iVar82;
  iVar39 = (int)param_1[0x19];
  iVar41 = (int)((ulong)param_1[0x19] >> 0x20);
  iVar35 = (int)param_1[0x18];
  iVar37 = (int)((ulong)param_1[0x18] >> 0x20);
  iVar36 = iVar36 - auVar34._0_4_;
  iVar38 = iVar38 - auVar34._4_4_;
  iVar40 = iVar40 - auVar34._8_4_;
  iVar42 = iVar42 - auVar34._12_4_;
  iVar80 = iVar35 + iVar43;
  iVar82 = iVar37 + iVar44;
  iVar83 = iVar39 + iVar45;
  iVar84 = iVar41 + iVar46;
  auVar33._0_4_ = iVar43 - iVar35;
  auVar33._4_4_ = iVar44 - iVar37;
  auVar33._8_4_ = iVar45 - iVar39;
  auVar33._12_4_ = iVar46 - iVar41;
  auVar34._4_4_ = iVar38;
  auVar34._0_4_ = iVar36;
  auVar34._8_4_ = iVar40;
  auVar34._12_4_ = iVar42;
  auVar52._4_4_ = iVar38;
  auVar52._0_4_ = iVar36;
  auVar52._8_4_ = iVar40;
  auVar52._12_4_ = iVar42;
  auVar81 = NEON_ext(auVar34,auVar52,8,1);
  iVar35 = (int)param_1[0x14];
  iVar43 = (int)param_1[8];
  iVar86 = iVar35 + iVar43;
  iVar37 = (int)((ulong)param_1[0x14] >> 0x20);
  iVar44 = (int)((ulong)param_1[8] >> 0x20);
  iVar88 = iVar37 + iVar44;
  iVar39 = (int)param_1[0x15];
  iVar45 = (int)param_1[9];
  iVar89 = iVar39 + iVar45;
  iVar41 = (int)((ulong)param_1[0x15] >> 0x20);
  iVar46 = (int)((ulong)param_1[9] >> 0x20);
  iVar91 = iVar41 + iVar46;
  lVar63 = (long)iVar89 + (long)iVar83;
  lVar21 = (long)iVar91 + (long)iVar84;
  lVar16 = (long)iVar86 + (long)iVar80;
  lVar32 = (long)iVar88 + (long)iVar82;
  lVar65 = (long)iVar83 - (long)iVar89;
  lVar67 = (long)iVar84 - (long)iVar91;
  lVar87 = (long)iVar80 - (long)iVar86;
  lVar90 = (long)iVar82 - (long)iVar88;
  iVar43 = iVar43 - iVar35;
  iVar44 = iVar44 - iVar37;
  iVar45 = iVar45 - iVar39;
  iVar46 = iVar46 - iVar41;
  iVar47 = iVar47 - iVar53;
  iVar48 = iVar48 - iVar57;
  iVar49 = iVar49 - iVar58;
  iVar50 = iVar50 - iVar62;
  lVar27 = (lVar54 + lVar87) * 0x1151 + 0x8000;
  lVar51 = (lVar59 + lVar90) * 0x1151 + 0x8000;
  lVar30 = ((long)iVar49 + (long)auVar33._8_4_ + (long)iVar45 + (long)iVar40) * 0x25a1;
  lVar29 = ((long)iVar47 + (long)auVar33._0_4_ + (long)iVar43 + (long)iVar36) * 0x25a1;
  lVar17 = ((long)iVar50 + (long)auVar33._12_4_ + (long)iVar46 + (long)iVar42) * 0x25a1;
  lVar19 = ((long)iVar48 + (long)auVar33._4_4_ + (long)iVar44 + (long)iVar38) * 0x25a1;
  lVar14 = (lVar2 + lVar65) * 0x1151 + 0x8000;
  lVar18 = (lVar31 + lVar67) * 0x1151 + 0x8000;
  lVar66 = ((long)iVar47 + (long)iVar36) * -0x1ccd + 0x8000;
  lVar68 = ((long)iVar48 + (long)iVar38) * -0x1ccd + 0x8000;
  lVar97 = lVar29 + ((long)iVar43 + (long)iVar36) * -0xc7c;
  lVar99 = lVar19 + ((long)iVar44 + (long)iVar38) * -0xc7c;
  lVar29 = lVar29 + ((long)iVar47 + (long)auVar33._0_4_) * -0x3ec5;
  lVar19 = lVar19 + ((long)iVar48 + (long)auVar33._4_4_) * -0x3ec5;
  lVar55 = ((long)iVar49 + (long)iVar40) * -0x1ccd + 0x8000;
  lVar60 = ((long)iVar50 + (long)iVar42) * -0x1ccd + 0x8000;
  lVar69 = ((long)iVar43 + (long)auVar33._0_4_) * -0x5203 + 0x8000;
  lVar70 = ((long)iVar44 + (long)auVar33._4_4_) * -0x5203 + 0x8000;
  lVar93 = lVar30 + ((long)iVar45 + (long)iVar40) * -0xc7c;
  lVar95 = lVar17 + ((long)iVar46 + (long)iVar42) * -0xc7c;
  lVar30 = lVar30 + ((long)iVar49 + (long)auVar33._8_4_) * -0x3ec5;
  lVar17 = lVar17 + ((long)iVar50 + (long)auVar33._12_4_) * -0x3ec5;
  lVar71 = ((long)iVar45 + (long)auVar33._8_4_) * -0x5203 + 0x8000;
  lVar72 = ((long)iVar46 + (long)auVar33._12_4_) * -0x5203 + 0x8000;
  auVar85 = NEON_ext(auVar33,auVar33,8,1);
  auVar75._4_4_ = iVar44;
  auVar75._0_4_ = iVar43;
  auVar75._8_4_ = iVar45;
  auVar75._12_4_ = iVar46;
  auVar78._4_4_ = iVar44;
  auVar78._0_4_ = iVar43;
  auVar78._8_4_ = iVar45;
  auVar78._12_4_ = iVar46;
  auVar78 = NEON_ext(auVar75,auVar78,8,1);
  auVar108._4_4_ = iVar48;
  auVar108._0_4_ = iVar47;
  auVar108._8_4_ = iVar49;
  auVar108._12_4_ = iVar50;
  auVar117._4_4_ = iVar48;
  auVar117._0_4_ = iVar47;
  auVar117._8_4_ = iVar49;
  auVar117._12_4_ = iVar50;
  auVar75 = NEON_ext(auVar108,auVar117,8,1);
  iVar35 = iVar100 + iVar111;
  iVar37 = iVar101 + iVar112;
  iVar39 = iVar102 + iVar113;
  iVar41 = iVar103 + iVar114;
  iVar49 = (int)param_1[0x12];
  iVar83 = iVar49 + auVar4._0_4_;
  iVar50 = (int)((ulong)param_1[0x12] >> 0x20);
  iVar84 = iVar50 + auVar4._4_4_;
  iVar80 = (int)param_1[0x13];
  iVar86 = iVar80 + auVar4._8_4_;
  iVar82 = (int)((ulong)param_1[0x13] >> 0x20);
  iVar88 = iVar82 + auVar4._12_4_;
  iVar89 = (int)param_1[0x1a];
  iVar53 = iVar89 + iVar104;
  iVar91 = (int)((ulong)param_1[0x1a] >> 0x20);
  iVar57 = iVar91 + iVar105;
  iVar115 = (int)param_1[0x1b];
  iVar58 = iVar115 + iVar106;
  iVar116 = (int)((ulong)param_1[0x1b] >> 0x20);
  iVar62 = iVar116 + iVar107;
  iVar40 = *(int *)(param_1 + 0x16) + auVar5._0_4_;
  iVar42 = *(int *)((long)param_1 + 0xb4) + auVar5._4_4_;
  iVar45 = *(int *)(param_1 + 0x17) + auVar5._8_4_;
  iVar46 = *(int *)((long)param_1 + 0xbc) + auVar5._12_4_;
  lVar64 = (long)iVar86 + (long)iVar39;
  lVar22 = (long)iVar88 + (long)iVar41;
  lVar24 = (long)iVar83 + (long)iVar35;
  lVar26 = (long)iVar84 + (long)iVar37;
  lVar77 = (long)iVar45 + (long)iVar58;
  lVar79 = (long)iVar46 + (long)iVar62;
  lVar28 = (long)iVar40 + (long)iVar53;
  lVar73 = (long)iVar42 + (long)iVar57;
  lVar74 = (long)iVar39 - (long)iVar86;
  lVar76 = (long)iVar41 - (long)iVar88;
  lVar23 = (long)iVar58 - (long)iVar45;
  lVar25 = (long)iVar62 - (long)iVar46;
  lVar56 = (long)iVar53 - (long)iVar40;
  lVar61 = (long)iVar57 - (long)iVar42;
  lVar15 = (long)iVar35 - (long)iVar83;
  lVar20 = (long)iVar37 - (long)iVar84;
  iVar104 = iVar104 - iVar89;
  iVar105 = iVar105 - iVar91;
  iVar106 = iVar106 - iVar115;
  iVar107 = iVar107 - iVar116;
  iVar111 = iVar111 - iVar100;
  iVar112 = iVar112 - iVar101;
  iVar113 = iVar113 - iVar102;
  iVar114 = iVar114 - iVar103;
  iVar49 = auVar4._0_4_ - iVar49;
  iVar50 = auVar4._4_4_ - iVar50;
  iVar80 = auVar4._8_4_ - iVar80;
  iVar82 = auVar4._12_4_ - iVar82;
  param_1[1] = CONCAT44((int)(lVar21 + lVar94 + 4U >> 3),(int)(lVar63 + lVar92 + 4U >> 3));
  *param_1 = CONCAT44((int)(lVar32 + lVar98 + 4U >> 3),(int)(lVar16 + lVar96 + 4U >> 3));
  param_1[3] = CONCAT44((int)(lVar79 + lVar22 + 4U >> 3),(int)(lVar77 + lVar64 + 4U >> 3));
  param_1[2] = CONCAT44((int)(lVar73 + lVar26 + 4U >> 3),(int)(lVar28 + lVar24 + 4U >> 3));
  iVar35 = auVar5._0_4_ - *(int *)(param_1 + 0x16);
  iVar37 = auVar5._4_4_ - *(int *)((long)param_1 + 0xb4);
  iVar39 = auVar5._8_4_ - *(int *)(param_1 + 0x17);
  iVar41 = auVar5._12_4_ - *(int *)((long)param_1 + 0xbc);
  lVar109 = (lVar74 + lVar23) * 0x1151 + 0x8000;
  lVar110 = (lVar76 + lVar25) * 0x1151 + 0x8000;
  lVar12 = (lVar15 + lVar56) * 0x1151 + 0x8000;
  lVar13 = (lVar20 + lVar61) * 0x1151 + 0x8000;
  param_1[0x11] = CONCAT44((int)((lVar94 - lVar21) + 4U >> 3),(int)((lVar92 - lVar63) + 4U >> 3));
  param_1[0x10] = CONCAT44((int)((lVar98 - lVar32) + 4U >> 3),(int)((lVar96 - lVar16) + 4U >> 3));
  param_1[0x13] = CONCAT44((int)((lVar22 - lVar79) + 4U >> 3),(int)((lVar64 - lVar77) + 4U >> 3));
  param_1[0x12] = CONCAT44((int)((lVar26 - lVar73) + 4U >> 3),(int)((lVar24 - lVar28) + 4U >> 3));
  lVar64 = ((long)iVar80 + (long)iVar106 + (long)iVar39 + (long)iVar113) * 0x25a1;
  lVar63 = ((long)iVar82 + (long)iVar107 + (long)iVar41 + (long)iVar114) * 0x25a1;
  lVar32 = ((long)iVar50 + (long)iVar105 + (long)iVar37 + (long)iVar112) * 0x25a1;
  lVar16 = ((long)iVar49 + (long)iVar104 + (long)iVar35 + (long)iVar111) * 0x25a1;
  auVar10._4_4_ = iVar112;
  auVar10._0_4_ = iVar111;
  auVar10._8_4_ = iVar113;
  auVar10._12_4_ = iVar114;
  auVar11._4_4_ = iVar112;
  auVar11._0_4_ = iVar111;
  auVar11._8_4_ = iVar113;
  auVar11._12_4_ = iVar114;
  auVar108 = NEON_ext(auVar10,auVar11,8,1);
  lVar96 = ((long)iVar49 + (long)iVar111) * -0x1ccd + 0x8000;
  lVar98 = ((long)iVar50 + (long)iVar112) * -0x1ccd + 0x8000;
  lVar92 = ((long)iVar80 + (long)iVar113) * -0x1ccd + 0x8000;
  lVar94 = ((long)iVar82 + (long)iVar114) * -0x1ccd + 0x8000;
  lVar28 = ((long)iVar35 + (long)iVar104) * -0x5203 + 0x8000;
  lVar73 = ((long)iVar37 + (long)iVar105) * -0x5203 + 0x8000;
  lVar21 = ((long)iVar39 + (long)iVar106) * -0x5203 + 0x8000;
  lVar22 = ((long)iVar41 + (long)iVar107) * -0x5203 + 0x8000;
  auVar8._4_4_ = iVar105;
  auVar8._0_4_ = iVar104;
  auVar8._8_4_ = iVar106;
  auVar8._12_4_ = iVar107;
  auVar9._4_4_ = iVar105;
  auVar9._0_4_ = iVar104;
  auVar9._8_4_ = iVar106;
  auVar9._12_4_ = iVar107;
  auVar34 = NEON_ext(auVar8,auVar9,8,1);
  lVar77 = lVar16 + ((long)iVar35 + (long)iVar111) * -0xc7c;
  lVar79 = lVar32 + ((long)iVar37 + (long)iVar112) * -0xc7c;
  lVar16 = lVar16 + ((long)iVar49 + (long)iVar104) * -0x3ec5;
  lVar32 = lVar32 + ((long)iVar50 + (long)iVar105) * -0x3ec5;
  auVar6._4_4_ = iVar37;
  auVar6._0_4_ = iVar35;
  auVar6._8_4_ = iVar39;
  auVar6._12_4_ = iVar41;
  auVar7._4_4_ = iVar37;
  auVar7._0_4_ = iVar35;
  auVar7._8_4_ = iVar39;
  auVar7._12_4_ = iVar41;
  auVar52 = NEON_ext(auVar6,auVar7,8,1);
  lVar24 = lVar64 + ((long)iVar39 + (long)iVar113) * -0xc7c;
  lVar26 = lVar63 + ((long)iVar41 + (long)iVar114) * -0xc7c;
  lVar64 = lVar64 + ((long)iVar80 + (long)iVar106) * -0x3ec5;
  lVar63 = lVar63 + ((long)iVar82 + (long)iVar107) * -0x3ec5;
  param_1[9] = CONCAT44((int)((ulong)(lVar18 + lVar31 * 0x187e) >> 0x10),
                        (int)((ulong)(lVar14 + lVar2 * 0x187e) >> 0x10));
  param_1[8] = CONCAT44((int)((ulong)(lVar51 + lVar59 * 0x187e) >> 0x10),
                        (int)((ulong)(lVar27 + lVar54 * 0x187e) >> 0x10));
  param_1[0xb] = CONCAT44((int)((ulong)(lVar110 + lVar76 * 0x187e) >> 0x10),
                          (int)((ulong)(lVar109 + lVar74 * 0x187e) >> 0x10));
  param_1[10] = CONCAT44((int)((ulong)(lVar13 + lVar20 * 0x187e) >> 0x10),
                         (int)((ulong)(lVar12 + lVar15 * 0x187e) >> 0x10));
  auVar4._4_4_ = iVar50;
  auVar4._0_4_ = iVar49;
  auVar4._8_4_ = iVar80;
  auVar4._12_4_ = iVar82;
  auVar5._4_4_ = iVar50;
  auVar5._0_4_ = iVar49;
  auVar5._8_4_ = iVar80;
  auVar5._12_4_ = iVar82;
  auVar117 = NEON_ext(auVar4,auVar5,8,1);
  param_1[0x19] =
       CONCAT44((int)((ulong)(lVar18 + lVar67 * -0x3b21) >> 0x10),
                (int)((ulong)(lVar14 + lVar65 * -0x3b21) >> 0x10));
  param_1[0x18] =
       CONCAT44((int)((ulong)(lVar51 + lVar90 * -0x3b21) >> 0x10),
                (int)((ulong)(lVar27 + lVar87 * -0x3b21) >> 0x10));
  param_1[0x1b] =
       CONCAT44((int)((ulong)(lVar110 + lVar25 * -0x3b21) >> 0x10),
                (int)((ulong)(lVar109 + lVar23 * -0x3b21) >> 0x10));
  param_1[0x1a] =
       CONCAT44((int)((ulong)(lVar13 + lVar61 * -0x3b21) >> 0x10),
                (int)((ulong)(lVar12 + lVar56 * -0x3b21) >> 0x10));
  param_1[5] = CONCAT44((int)((ulong)(lVar60 + (long)auVar81._4_4_ * 0x300b + lVar95) >> 0x10),
                        (int)((ulong)(lVar55 + (long)auVar81._0_4_ * 0x300b + lVar93) >> 0x10));
  param_1[4] = CONCAT44((int)((ulong)(lVar68 + (long)iVar38 * 0x300b + lVar99) >> 0x10),
                        (int)((ulong)(lVar66 + (long)iVar36 * 0x300b + lVar97) >> 0x10));
  param_1[7] = CONCAT44((int)((ulong)(lVar94 + (long)auVar108._4_4_ * 0x300b + lVar26) >> 0x10),
                        (int)((ulong)(lVar92 + (long)auVar108._0_4_ * 0x300b + lVar24) >> 0x10));
  param_1[6] = CONCAT44((int)((ulong)(lVar98 + (long)iVar112 * 0x300b + lVar79) >> 0x10),
                        (int)((ulong)(lVar96 + (long)iVar111 * 0x300b + lVar77) >> 0x10));
  param_1[0xd] = CONCAT44((int)((ulong)(lVar72 + (long)auVar85._4_4_ * 0x6254 + lVar17) >> 0x10),
                          (int)((ulong)(lVar71 + (long)auVar85._0_4_ * 0x6254 + lVar30) >> 0x10));
  param_1[0xc] = CONCAT44((int)((ulong)(lVar70 + (long)auVar33._4_4_ * 0x6254 + lVar19) >> 0x10),
                          (int)((ulong)(lVar69 + (long)auVar33._0_4_ * 0x6254 + lVar29) >> 0x10));
  param_1[0xf] = CONCAT44((int)((ulong)(lVar22 + (long)auVar34._4_4_ * 0x6254 + lVar63) >> 0x10),
                          (int)((ulong)(lVar21 + (long)auVar34._0_4_ * 0x6254 + lVar64) >> 0x10));
  param_1[0xe] = CONCAT44((int)((ulong)(lVar73 + (long)iVar105 * 0x6254 + lVar32) >> 0x10),
                          (int)((ulong)(lVar28 + (long)iVar104 * 0x6254 + lVar16) >> 0x10));
  param_1[0x15] =
       CONCAT44((int)((ulong)(lVar72 + (long)auVar78._4_4_ * 0x41b3 + lVar95) >> 0x10),
                (int)((ulong)(lVar71 + (long)auVar78._0_4_ * 0x41b3 + lVar93) >> 0x10));
  param_1[0x14] =
       CONCAT44((int)((ulong)(lVar70 + (long)iVar44 * 0x41b3 + lVar99) >> 0x10),
                (int)((ulong)(lVar69 + (long)iVar43 * 0x41b3 + lVar97) >> 0x10));
  param_1[0x17] =
       CONCAT44((int)((ulong)(lVar22 + (long)auVar52._4_4_ * 0x41b3 + lVar26) >> 0x10),
                (int)((ulong)(lVar21 + (long)auVar52._0_4_ * 0x41b3 + lVar24) >> 0x10));
  param_1[0x16] =
       CONCAT44((int)((ulong)(lVar73 + (long)iVar37 * 0x41b3 + lVar79) >> 0x10),
                (int)((ulong)(lVar28 + (long)iVar35 * 0x41b3 + lVar77) >> 0x10));
  param_1[0x1d] =
       CONCAT44((int)((ulong)(lVar60 + (long)auVar75._4_4_ * 0x98e + lVar17) >> 0x10),
                (int)((ulong)(lVar55 + (long)auVar75._0_4_ * 0x98e + lVar30) >> 0x10));
  param_1[0x1c] =
       CONCAT44((int)((ulong)(lVar68 + (long)iVar48 * 0x98e + lVar19) >> 0x10),
                (int)((ulong)(lVar66 + (long)iVar47 * 0x98e + lVar29) >> 0x10));
  param_1[0x1f] =
       CONCAT44((int)((ulong)(lVar94 + (long)auVar117._4_4_ * 0x98e + lVar63) >> 0x10),
                (int)((ulong)(lVar92 + (long)auVar117._0_4_ * 0x98e + lVar64) >> 0x10));
  param_1[0x1e] =
       CONCAT44((int)((ulong)(lVar98 + (long)iVar50 * 0x98e + lVar32) >> 0x10),
                (int)((ulong)(lVar96 + (long)iVar49 * 0x98e + lVar16) >> 0x10));
  return;
}


