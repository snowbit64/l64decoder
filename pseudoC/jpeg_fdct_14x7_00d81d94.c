// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_fdct_14x7
// Entry Point: 00d81d94
// Size: 2344 bytes
// Signature: undefined jpeg_fdct_14x7(void)


void jpeg_fdct_14x7(undefined8 *param_1,long param_2,ulong param_3)

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
  int iVar33;
  int iVar34;
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
  int iVar49;
  long lVar48;
  long lVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  long lVar55;
  long lVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  undefined auVar81 [16];
  int iVar82;
  int iVar84;
  int iVar85;
  int iVar86;
  undefined auVar83 [16];
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar93;
  long lVar92;
  int iVar94;
  int iVar96;
  long lVar95;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  
  lVar13 = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar13) + (param_3 & 0xffffffff));
    lVar28 = (ulong)pbVar1[0xd] + (ulong)*pbVar1;
    lVar8 = (ulong)pbVar1[0xc] + (ulong)pbVar1[1];
    lVar5 = (ulong)pbVar1[8] + (ulong)pbVar1[5];
    lVar20 = (ulong)pbVar1[5] - (ulong)pbVar1[8];
    lVar6 = (ulong)pbVar1[7] + (ulong)pbVar1[6];
    lVar7 = lVar6 + lVar28;
    lVar28 = lVar28 - lVar6;
    lVar6 = lVar5 + lVar8;
    lVar8 = lVar8 - lVar5;
    lVar11 = (ulong)pbVar1[0xb] + (ulong)pbVar1[2];
    lVar5 = (ulong)pbVar1[9] + (ulong)pbVar1[4];
    lVar30 = (ulong)*pbVar1 - (ulong)pbVar1[0xd];
    lVar9 = lVar5 + lVar11;
    lVar11 = lVar11 - lVar5;
    lVar10 = (ulong)pbVar1[10] + (ulong)pbVar1[3];
    lVar32 = (ulong)pbVar1[2] - (ulong)pbVar1[0xb];
    lVar14 = (ulong)pbVar1[3] - (ulong)pbVar1[10];
    lVar15 = (ulong)pbVar1[4] - (ulong)pbVar1[9];
    lVar25 = (ulong)pbVar1[6] - (ulong)pbVar1[7];
    lVar23 = (lVar28 + lVar8) * 0x2362 + 0x400;
    lVar31 = (ulong)pbVar1[1] - (ulong)pbVar1[0xc];
    lVar5 = lVar14 * -0x2000 + (lVar20 - lVar15) * 0x2cf8 + (lVar32 + lVar31) * -0x511 + 0x400;
    lVar12 = (lVar32 + lVar30) * 0x2652 + (lVar25 + lVar15) * 0x1814;
    piVar2 = (int *)((long)param_1 + lVar13 * 4);
    lVar13 = lVar13 + 8;
    piVar2[6] = (int)((ulong)(lVar23 + lVar11 * -0x2c1f + lVar8 * -0x3704) >> 0xb);
    piVar2[7] = (((int)lVar30 + (int)lVar14) -
                ((int)(lVar32 + lVar31) + (int)(lVar20 - lVar15) + (int)lVar25)) * 4;
    lVar8 = (lVar31 + lVar30) * 0x2ab7 + (lVar20 - lVar25) * 0xef2;
    piVar2[4] = (int)((lVar6 + lVar10 * -2) * 0xa12 + (lVar9 + lVar10 * -2) * -0x1c37 +
                      (lVar7 + lVar10 * -2) * 0x28c6 + 0x400U >> 0xb);
    piVar2[5] = (int)((ulong)(lVar5 + lVar32 * -0x4bf7 + lVar15 * 0x23d7 + lVar12) >> 0xb);
    piVar2[2] = (int)((ulong)(lVar23 + lVar11 * 0x13a3 + lVar28 * 0x8bd) >> 0xb);
    piVar2[3] = (int)((ulong)(lVar5 + lVar31 * -0xd92 + lVar20 * -0x623c + lVar8) >> 0xb);
    *piVar2 = ((int)lVar10 + (int)lVar6 + (int)lVar9 + (int)lVar7) * 4 + -0x1c00;
    piVar2[1] = (int)(lVar8 + lVar14 * 0x2000 + lVar25 * -0x240f + lVar30 * -0x2410 + lVar12 +
                      0x400U >> 0xb);
  } while (lVar13 != 0x38);
  auVar3 = *(undefined (*) [16])(param_1 + 2);
  iVar39 = (int)*param_1;
  iVar33 = (int)param_1[0x18];
  iVar51 = iVar33 + iVar39;
  iVar40 = (int)((ulong)*param_1 >> 0x20);
  iVar34 = (int)((ulong)param_1[0x18] >> 0x20);
  iVar52 = iVar34 + iVar40;
  iVar41 = (int)param_1[1];
  iVar35 = (int)param_1[0x19];
  iVar53 = iVar35 + iVar41;
  iVar42 = (int)((ulong)param_1[1] >> 0x20);
  iVar36 = (int)((ulong)param_1[0x19] >> 0x20);
  iVar54 = iVar36 + iVar42;
  iVar39 = iVar39 - iVar33;
  iVar40 = iVar40 - iVar34;
  iVar41 = iVar41 - iVar35;
  iVar42 = iVar42 - iVar36;
  iVar67 = (int)param_1[0xb];
  iVar68 = (int)((ulong)param_1[0xb] >> 0x20);
  iVar65 = (int)param_1[10];
  iVar66 = (int)((ulong)param_1[10] >> 0x20);
  iVar61 = (int)param_1[8];
  iVar33 = (int)param_1[0x10];
  iVar87 = iVar33 + iVar61;
  iVar62 = (int)((ulong)param_1[8] >> 0x20);
  iVar34 = (int)((ulong)param_1[0x10] >> 0x20);
  iVar88 = iVar34 + iVar62;
  iVar63 = (int)param_1[9];
  iVar35 = (int)param_1[0x11];
  iVar89 = iVar35 + iVar63;
  iVar64 = (int)((ulong)param_1[9] >> 0x20);
  iVar36 = (int)((ulong)param_1[0x11] >> 0x20);
  iVar90 = iVar36 + iVar64;
  iVar61 = iVar61 - iVar33;
  iVar62 = iVar62 - iVar34;
  iVar63 = iVar63 - iVar35;
  iVar64 = iVar64 - iVar36;
  iVar33 = (int)param_1[0x14];
  iVar43 = (int)param_1[4];
  iVar91 = iVar33 + iVar43;
  iVar34 = (int)((ulong)param_1[0x14] >> 0x20);
  iVar44 = (int)((ulong)param_1[4] >> 0x20);
  iVar93 = iVar34 + iVar44;
  iVar35 = (int)param_1[0x15];
  iVar45 = (int)param_1[5];
  iVar94 = iVar35 + iVar45;
  iVar36 = (int)((ulong)param_1[0x15] >> 0x20);
  iVar46 = (int)((ulong)param_1[5] >> 0x20);
  iVar96 = iVar36 + iVar46;
  iVar43 = iVar43 - iVar33;
  iVar44 = iVar44 - iVar34;
  iVar45 = iVar45 - iVar35;
  iVar46 = iVar46 - iVar36;
  iVar37 = (int)param_1[0xc];
  iVar38 = (int)((ulong)param_1[0xc] >> 0x20);
  iVar33 = (int)param_1[0xd];
  iVar35 = (int)((ulong)param_1[0xd] >> 0x20);
  lVar15 = ((long)iVar90 + (long)iVar54 + (long)iVar35 * -4) * 0xec7;
  lVar23 = ((long)iVar89 + (long)iVar53 + (long)iVar33 * -4) * 0xec7;
  lVar31 = ((long)iVar88 + (long)iVar52 + (long)iVar38 * -4) * 0xec7;
  lVar16 = ((long)iVar87 + (long)iVar51 + (long)iVar37 * -4) * 0xec7;
  lVar28 = ((long)iVar91 - (long)iVar87) * 0xd27;
  lVar17 = ((long)iVar94 - (long)iVar89) * 0xd27;
  lVar20 = ((long)iVar93 - (long)iVar88) * 0xd27;
  lVar21 = ((long)iVar96 - (long)iVar90) * 0xd27;
  lVar105 = ((long)iVar53 - (long)iVar94) * 0x24da + 0x8000;
  lVar106 = ((long)iVar54 - (long)iVar96) * 0x24da + 0x8000;
  lVar92 = ((long)iVar51 - (long)iVar91) * 0x24da + 0x8000;
  lVar95 = ((long)iVar52 - (long)iVar93) * 0x24da + 0x8000;
  lVar25 = ((long)iVar43 + (long)iVar39) * 0x2719;
  lVar30 = ((long)iVar45 + (long)iVar41) * 0x2719;
  lVar8 = ((long)iVar44 + (long)iVar40) * 0x2719;
  lVar32 = ((long)iVar46 + (long)iVar42) * 0x2719;
  lVar11 = ((long)iVar61 + (long)iVar43) * -0x39a0;
  lVar55 = ((long)iVar61 + (long)iVar39) * 0x19a5 + 0x8000;
  lVar56 = ((long)iVar62 + (long)iVar40) * 0x19a5 + 0x8000;
  lVar13 = ((long)iVar62 + (long)iVar44) * -0x39a0;
  lVar6 = ((long)iVar63 + (long)iVar45) * -0x39a0;
  lVar107 = ((long)iVar63 + (long)iVar41) * 0x19a5 + 0x8000;
  lVar109 = ((long)iVar64 + (long)iVar42) * 0x19a5 + 0x8000;
  lVar9 = ((long)iVar64 + (long)iVar46) * -0x39a0;
  iVar82 = (int)param_1[0x1a];
  iVar97 = iVar82 + auVar3._0_4_;
  iVar84 = (int)((ulong)param_1[0x1a] >> 0x20);
  iVar98 = iVar84 + auVar3._4_4_;
  iVar85 = (int)param_1[0x1b];
  iVar99 = iVar85 + auVar3._8_4_;
  iVar86 = (int)((ulong)param_1[0x1b] >> 0x20);
  iVar100 = iVar86 + auVar3._12_4_;
  iVar69 = (int)param_1[0x12];
  iVar57 = iVar69 + iVar65;
  iVar70 = (int)((ulong)param_1[0x12] >> 0x20);
  iVar58 = iVar70 + iVar66;
  iVar71 = (int)param_1[0x13];
  iVar59 = iVar71 + iVar67;
  iVar72 = (int)((ulong)param_1[0x13] >> 0x20);
  iVar60 = iVar72 + iVar68;
  iVar73 = (int)param_1[6];
  iVar77 = (int)param_1[0x16];
  iVar101 = iVar77 + iVar73;
  iVar74 = (int)((ulong)param_1[6] >> 0x20);
  iVar78 = (int)((ulong)param_1[0x16] >> 0x20);
  iVar102 = iVar78 + iVar74;
  iVar75 = (int)param_1[7];
  iVar79 = (int)param_1[0x17];
  iVar103 = iVar79 + iVar75;
  iVar76 = (int)((ulong)param_1[7] >> 0x20);
  iVar80 = (int)((ulong)param_1[0x17] >> 0x20);
  iVar104 = iVar80 + iVar76;
  iVar47 = (int)param_1[0xe];
  iVar49 = (int)((ulong)param_1[0xe] >> 0x20);
  auVar81._4_4_ = iVar62;
  auVar81._0_4_ = iVar61;
  auVar81._8_4_ = iVar63;
  auVar81._12_4_ = iVar64;
  auVar83._4_4_ = iVar62;
  auVar83._0_4_ = iVar61;
  auVar83._8_4_ = iVar63;
  auVar83._12_4_ = iVar64;
  auVar81 = NEON_ext(auVar81,auVar83,8,1);
  iVar34 = (int)param_1[0xf];
  iVar36 = (int)((ulong)param_1[0xf] >> 0x20);
  lVar12 = ((long)iVar59 + (long)iVar99 + (long)iVar34 * -4) * 0xec7;
  lVar5 = ((long)iVar60 + (long)iVar100 + (long)iVar36 * -4) * 0xec7;
  iVar82 = auVar3._0_4_ - iVar82;
  iVar84 = auVar3._4_4_ - iVar84;
  iVar85 = auVar3._8_4_ - iVar85;
  iVar86 = auVar3._12_4_ - iVar86;
  lVar27 = ((long)iVar58 + (long)iVar98 + (long)iVar49 * -4) * 0xec7;
  lVar29 = ((long)iVar57 + (long)iVar97 + (long)iVar47 * -4) * 0xec7;
  iVar73 = iVar73 - iVar77;
  iVar74 = iVar74 - iVar78;
  iVar75 = iVar75 - iVar79;
  iVar76 = iVar76 - iVar80;
  lVar7 = ((long)iVar103 - (long)iVar59) * 0xd27;
  lVar14 = ((long)iVar101 - (long)iVar57) * 0xd27;
  lVar10 = ((long)iVar102 - (long)iVar58) * 0xd27;
  iVar65 = iVar65 - iVar69;
  iVar66 = iVar66 - iVar70;
  iVar67 = iVar67 - iVar71;
  iVar68 = iVar68 - iVar72;
  lVar24 = ((long)iVar104 - (long)iVar60) * 0xd27;
  lVar108 = ((long)iVar99 - (long)iVar103) * 0x24da + 0x8000;
  lVar110 = ((long)iVar100 - (long)iVar104) * 0x24da + 0x8000;
  lVar48 = ((long)iVar97 - (long)iVar101) * 0x24da + 0x8000;
  lVar50 = ((long)iVar98 - (long)iVar102) * 0x24da + 0x8000;
  param_1[1] = CONCAT44((int)((ulong)(((long)iVar35 + (long)iVar96 + (long)iVar90 + (long)iVar54) *
                                      0x29cc + 0x8000) >> 0x10),
                        (int)((ulong)(((long)iVar33 + (long)iVar94 + (long)iVar89 + (long)iVar53) *
                                      0x29cc + 0x8000) >> 0x10));
  *param_1 = CONCAT44((int)((ulong)(((long)iVar38 + (long)iVar93 + (long)iVar88 + (long)iVar52) *
                                    0x29cc + 0x8000) >> 0x10),
                      (int)((ulong)(((long)iVar37 + (long)iVar91 + (long)iVar87 + (long)iVar51) *
                                    0x29cc + 0x8000) >> 0x10));
  param_1[3] = CONCAT44((int)((ulong)(((long)iVar36 + (long)iVar104 + (long)iVar60 + (long)iVar100)
                                      * 0x29cc + 0x8000) >> 0x10),
                        (int)((ulong)(((long)iVar34 + (long)iVar103 + (long)iVar59 + (long)iVar99) *
                                      0x29cc + 0x8000) >> 0x10));
  param_1[2] = CONCAT44((int)((ulong)(((long)iVar49 + (long)iVar102 + (long)iVar58 + (long)iVar98) *
                                      0x29cc + 0x8000) >> 0x10),
                        (int)((ulong)(((long)iVar47 + (long)iVar101 + (long)iVar57 + (long)iVar97) *
                                      0x29cc + 0x8000) >> 0x10));
  param_1[9] = CONCAT44((int)((ulong)(lVar21 + ((long)iVar54 - (long)iVar90) * 0x267a + lVar15 +
                                     0x8000) >> 0x10),
                        (int)((ulong)(lVar17 + ((long)iVar53 - (long)iVar89) * 0x267a + lVar23 +
                                     0x8000) >> 0x10));
  param_1[8] = CONCAT44((int)((ulong)(lVar20 + ((long)iVar52 - (long)iVar88) * 0x267a + lVar31 +
                                     0x8000) >> 0x10),
                        (int)((ulong)(lVar28 + ((long)iVar51 - (long)iVar87) * 0x267a + lVar16 +
                                     0x8000) >> 0x10));
  param_1[0xb] = CONCAT44((int)((ulong)(lVar24 + ((long)iVar100 - (long)iVar60) * 0x267a + lVar5 +
                                       0x8000) >> 0x10),
                          (int)((ulong)(lVar7 + ((long)iVar99 - (long)iVar59) * 0x267a + lVar12 +
                                       0x8000) >> 0x10));
  param_1[10] = CONCAT44((int)((ulong)(lVar10 + ((long)iVar98 - (long)iVar58) * 0x267a + lVar27 +
                                      0x8000) >> 0x10),
                         (int)((ulong)(lVar14 + ((long)iVar97 - (long)iVar57) * 0x267a + lVar29 +
                                      0x8000) >> 0x10));
  lVar22 = ((long)iVar73 + (long)iVar82) * 0x2719;
  lVar19 = ((long)iVar74 + (long)iVar84) * 0x2719;
  lVar26 = ((long)iVar75 + (long)iVar85) * 0x2719;
  lVar18 = ((long)iVar76 + (long)iVar86) * 0x2719;
  param_1[0x19] =
       CONCAT44((int)((ulong)(lVar106 + ((long)iVar54 - (long)iVar90) * -0x267a + lVar15) >> 0x10),
                (int)((ulong)(lVar105 + ((long)iVar53 - (long)iVar89) * -0x267a + lVar23) >> 0x10));
  param_1[0x18] =
       CONCAT44((int)((ulong)(lVar95 + ((long)iVar52 - (long)iVar88) * -0x267a + lVar31) >> 0x10),
                (int)((ulong)(lVar92 + ((long)iVar51 - (long)iVar87) * -0x267a + lVar16) >> 0x10));
  param_1[0x1b] =
       CONCAT44((int)((ulong)(lVar110 + ((long)iVar100 - (long)iVar60) * -0x267a + lVar5) >> 0x10),
                (int)((ulong)(lVar108 + ((long)iVar99 - (long)iVar59) * -0x267a + lVar12) >> 0x10));
  param_1[0x1a] =
       CONCAT44((int)((ulong)(lVar50 + ((long)iVar98 - (long)iVar58) * -0x267a + lVar27) >> 0x10),
                (int)((ulong)(lVar48 + ((long)iVar97 - (long)iVar57) * -0x267a + lVar29) >> 0x10));
  lVar12 = ((long)iVar65 + (long)iVar73) * -0x39a0;
  lVar5 = ((long)iVar67 + (long)iVar75) * -0x39a0;
  lVar23 = ((long)iVar66 + (long)iVar74) * -0x39a0;
  lVar31 = ((long)iVar65 + (long)iVar82) * 0x19a5 + 0x8000;
  lVar16 = ((long)iVar66 + (long)iVar84) * 0x19a5 + 0x8000;
  lVar15 = ((long)iVar68 + (long)iVar76) * -0x39a0;
  lVar27 = ((long)iVar67 + (long)iVar85) * 0x19a5 + 0x8000;
  lVar29 = ((long)iVar68 + (long)iVar86) * 0x19a5 + 0x8000;
  param_1[0x11] =
       CONCAT44((int)((ulong)(lVar106 + lVar21 + ((long)iVar96 + (long)iVar35 * -2) * -0x1d8e) >>
                     0x10),
                (int)((ulong)(lVar105 + lVar17 + ((long)iVar94 + (long)iVar33 * -2) * -0x1d8e) >>
                     0x10));
  param_1[0x10] =
       CONCAT44((int)((ulong)(lVar95 + lVar20 + ((long)iVar93 + (long)iVar38 * -2) * -0x1d8e) >>
                     0x10),
                (int)((ulong)(lVar92 + lVar28 + ((long)iVar91 + (long)iVar37 * -2) * -0x1d8e) >>
                     0x10));
  param_1[0x13] =
       CONCAT44((int)((ulong)(lVar110 + lVar24 + ((long)iVar104 + (long)iVar36 * -2) * -0x1d8e) >>
                     0x10),
                (int)((ulong)(lVar108 + lVar7 + ((long)iVar103 + (long)iVar34 * -2) * -0x1d8e) >>
                     0x10));
  param_1[0x12] =
       CONCAT44((int)((ulong)(lVar50 + lVar10 + ((long)iVar102 + (long)iVar49 * -2) * -0x1d8e) >>
                     0x10),
                (int)((ulong)(lVar48 + lVar14 + ((long)iVar101 + (long)iVar47 * -2) * -0x1d8e) >>
                     0x10));
  auVar3._4_4_ = iVar66;
  auVar3._0_4_ = iVar65;
  auVar3._8_4_ = iVar67;
  auVar3._12_4_ = iVar68;
  auVar4._4_4_ = iVar66;
  auVar4._0_4_ = iVar65;
  auVar4._8_4_ = iVar67;
  auVar4._12_4_ = iVar68;
  auVar83 = NEON_ext(auVar3,auVar4,8,1);
  param_1[5] = CONCAT44((int)((ulong)(lVar109 + ((long)iVar42 - (long)iVar46) * -0x71e + lVar32) >>
                             0x10),
                        (int)((ulong)(lVar107 + ((long)iVar41 - (long)iVar45) * -0x71e + lVar30) >>
                             0x10));
  param_1[4] = CONCAT44((int)((ulong)(lVar56 + ((long)iVar40 - (long)iVar44) * -0x71e + lVar8) >>
                             0x10),
                        (int)((ulong)(lVar55 + ((long)iVar39 - (long)iVar43) * -0x71e + lVar25) >>
                             0x10));
  param_1[7] = CONCAT44((int)((ulong)(lVar29 + ((long)iVar86 - (long)iVar76) * -0x71e + lVar18) >>
                             0x10),
                        (int)((ulong)(lVar27 + ((long)iVar85 - (long)iVar75) * -0x71e + lVar26) >>
                             0x10));
  param_1[6] = CONCAT44((int)((ulong)(lVar16 + ((long)iVar84 - (long)iVar74) * -0x71e + lVar19) >>
                             0x10),
                        (int)((ulong)(lVar31 + ((long)iVar82 - (long)iVar73) * -0x71e + lVar22) >>
                             0x10));
  param_1[0xd] = CONCAT44((int)((ulong)(lVar9 + ((long)iVar42 - (long)iVar46) * 0x71e + lVar32 +
                                       0x8000) >> 0x10),
                          (int)((ulong)(lVar6 + ((long)iVar41 - (long)iVar45) * 0x71e + lVar30 +
                                       0x8000) >> 0x10));
  param_1[0xc] = CONCAT44((int)((ulong)(lVar13 + ((long)iVar40 - (long)iVar44) * 0x71e + lVar8 +
                                       0x8000) >> 0x10),
                          (int)((ulong)(lVar11 + ((long)iVar39 - (long)iVar43) * 0x71e + lVar25 +
                                       0x8000) >> 0x10));
  param_1[0xf] = CONCAT44((int)((ulong)(lVar15 + ((long)iVar86 - (long)iVar76) * 0x71e + lVar18 +
                                       0x8000) >> 0x10),
                          (int)((ulong)(lVar5 + ((long)iVar85 - (long)iVar75) * 0x71e + lVar26 +
                                       0x8000) >> 0x10));
  param_1[0xe] = CONCAT44((int)((ulong)(lVar23 + ((long)iVar84 - (long)iVar74) * 0x71e + lVar19 +
                                       0x8000) >> 0x10),
                          (int)((ulong)(lVar12 + ((long)iVar82 - (long)iVar73) * 0x71e + lVar22 +
                                       0x8000) >> 0x10));
  param_1[0x15] =
       CONCAT44((int)((ulong)(lVar109 + (long)auVar81._4_4_ * 0x4e31 + lVar9) >> 0x10),
                (int)((ulong)(lVar107 + (long)auVar81._0_4_ * 0x4e31 + lVar6) >> 0x10));
  param_1[0x14] =
       CONCAT44((int)((ulong)(lVar56 + (long)iVar62 * 0x4e31 + lVar13) >> 0x10),
                (int)((ulong)(lVar55 + (long)iVar61 * 0x4e31 + lVar11) >> 0x10));
  param_1[0x17] =
       CONCAT44((int)((ulong)(lVar29 + (long)auVar83._4_4_ * 0x4e31 + lVar15) >> 0x10),
                (int)((ulong)(lVar27 + (long)auVar83._0_4_ * 0x4e31 + lVar5) >> 0x10));
  param_1[0x16] =
       CONCAT44((int)((ulong)(lVar16 + (long)iVar66 * 0x4e31 + lVar23) >> 0x10),
                (int)((ulong)(lVar31 + (long)iVar65 * 0x4e31 + lVar12) >> 0x10));
  return;
}


