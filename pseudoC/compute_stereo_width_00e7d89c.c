// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compute_stereo_width
// Entry Point: 00e7d89c
// Size: 1364 bytes
// Signature: undefined compute_stereo_width(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_stereo_width(long param_1,int param_2,int param_3,uint *param_4)

{
  undefined (*pauVar1) [16];
  undefined (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [16];
  undefined (*pauVar11) [16];
  undefined (*pauVar12) [16];
  undefined8 uVar13;
  undefined auVar14 [16];
  undefined8 uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined8 uVar20;
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  int iVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  short *psVar36;
  ulong uVar37;
  undefined (*pauVar38) [16];
  ulong uVar39;
  undefined2 uVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  undefined2 uVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  short sVar67;
  short sVar69;
  short sVar70;
  short sVar71;
  undefined auVar68 [16];
  short sVar72;
  undefined8 uVar73;
  short sVar78;
  undefined auVar74 [16];
  undefined auVar75 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  short sVar89;
  short sVar90;
  short sVar92;
  undefined8 uVar91;
  short sVar93;
  short sVar97;
  undefined8 uVar94;
  undefined auVar95 [16];
  undefined auVar96 [16];
  short sVar98;
  short sVar102;
  short sVar103;
  undefined8 uVar99;
  short sVar104;
  undefined auVar100 [16];
  undefined auVar101 [16];
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  int iVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  undefined auVar117 [16];
  short sVar118;
  short sVar120;
  short sVar121;
  short sVar122;
  undefined auVar119 [16];
  undefined4 uVar123;
  short sVar124;
  short sVar126;
  short sVar127;
  short sVar128;
  undefined auVar125 [16];
  undefined4 uVar129;
  undefined4 uVar130;
  short sVar131;
  short sVar132;
  undefined4 uVar133;
  undefined4 uVar134;
  short sVar135;
  short sVar136;
  undefined4 uVar137;
  short sVar138;
  short sVar139;
  short sVar140;
  short sVar141;
  short sVar143;
  undefined8 uVar142;
  short sVar144;
  short sVar146;
  short sVar147;
  undefined in_q31 [16];
  undefined auVar145 [16];
  
  uVar7 = 0;
  if (param_2 != 0) {
    uVar7 = param_3 / param_2;
  }
  uVar4 = uVar7;
  if ((int)uVar7 < 0x33) {
    uVar4 = 0x32;
  }
  uVar8 = 0;
  if (uVar4 != 0) {
    uVar8 = 0xc7fe7 / uVar4;
  }
  if (param_2 < 4) {
    iVar109 = 0;
    iVar105 = 0;
    iVar32 = 0;
  }
  else {
    uVar34 = (ulong)(param_2 - 3);
    uVar6 = uVar34;
    if (uVar34 < 5) {
      uVar6 = 4;
    }
    if (uVar6 - 1 < 0x1c) {
      uVar35 = 0;
      iVar32 = 0;
      iVar105 = 0;
      iVar109 = 0;
    }
    else {
      uVar6 = (uVar6 - 1 >> 2) + 1;
      uVar37 = uVar6 & 0x7ffffffffffffff8;
      uVar35 = uVar37 << 2;
      iVar105 = 0;
      iVar106 = 0;
      iVar107 = 0;
      iVar108 = 0;
      iVar109 = 0;
      iVar110 = 0;
      iVar111 = 0;
      iVar112 = 0;
      iVar113 = 0;
      iVar114 = 0;
      iVar115 = 0;
      iVar116 = 0;
      iVar32 = 0;
      iVar60 = 0;
      iVar61 = 0;
      iVar62 = 0;
      iVar63 = 0;
      iVar64 = 0;
      iVar65 = 0;
      iVar66 = 0;
      pauVar38 = (undefined (*) [16])(param_1 + 0x40);
      uVar39 = uVar37;
      auVar74 = ZEXT816(0);
      do {
        pauVar1 = pauVar38 + -2;
        uVar134 = (undefined4)((ulong)*(undefined8 *)(pauVar38[-2] + 8) >> 0x20);
        uVar20 = *(undefined8 *)*pauVar1;
        pauVar9 = pauVar38 + -1;
        uVar137 = (undefined4)((ulong)*(undefined8 *)(pauVar38[-1] + 8) >> 0x20);
        uVar13 = *(undefined8 *)*pauVar9;
        sVar135 = (short)((ulong)uVar13 >> 0x20);
        sVar136 = (short)((ulong)uVar13 >> 0x30);
        uVar39 = uVar39 - 8;
        auVar119 = pauVar38[-4];
        pauVar10 = pauVar38 + -3;
        uVar129 = (undefined4)((ulong)*(undefined8 *)(pauVar38[-3] + 8) >> 0x20);
        uVar91 = *(undefined8 *)*pauVar10;
        uVar40 = (undefined2)((ulong)uVar20 >> 0x10);
        auVar75._6_10_ = auVar74._6_10_;
        auVar75._4_2_ = uVar40;
        auVar75._2_2_ = (short)uVar13;
        auVar75._0_2_ = (short)uVar20;
        uVar51 = (undefined2)((ulong)uVar13 >> 0x10);
        sVar43 = (short)((ulong)uVar20 >> 0x30);
        auVar145._6_10_ = in_q31._6_10_;
        auVar145._4_2_ = sVar43;
        auVar145._2_2_ = uVar51;
        auVar145._0_2_ = uVar40;
        uVar73 = NEON_ext(uVar20,CONCAT26(uVar51,auVar75._0_6_),4,1);
        uVar94 = NEON_ext(uVar20,CONCAT26(sVar136,auVar145._0_6_),4,1);
        pauVar2 = pauVar38 + 2;
        uVar130 = (undefined4)((ulong)*(undefined8 *)(pauVar38[2] + 8) >> 0x20);
        uVar15 = *(undefined8 *)*pauVar2;
        pauVar11 = pauVar38 + 3;
        uVar133 = (undefined4)((ulong)*(undefined8 *)(pauVar38[3] + 8) >> 0x20);
        uVar99 = *(undefined8 *)*pauVar11;
        sVar131 = (short)((ulong)uVar99 >> 0x20);
        sVar132 = (short)((ulong)uVar99 >> 0x30);
        sVar30 = auVar119._2_2_;
        sVar52 = (short)((ulong)uVar91 >> 0x10);
        sVar41 = auVar119._4_2_;
        sVar54 = (short)((ulong)uVar91 >> 0x20);
        sVar28 = auVar119._0_2_;
        sVar49 = (short)uVar91;
        auVar75 = *pauVar38;
        pauVar12 = pauVar38 + 1;
        uVar123 = (undefined4)((ulong)*(undefined8 *)(pauVar38[1] + 8) >> 0x20);
        uVar13 = *(undefined8 *)*pauVar12;
        uVar40 = (undefined2)((ulong)uVar15 >> 0x10);
        uVar51 = (undefined2)((ulong)uVar99 >> 0x10);
        sVar44 = (short)((ulong)uVar15 >> 0x30);
        uVar91 = NEON_ext(CONCAT26((short)((ulong)uVar91 >> 0x30),
                                   CONCAT24(auVar119._6_2_,CONCAT22(sVar52,sVar30))),auVar119._0_8_,
                          4,1);
        sVar85 = (short)uVar91;
        sVar86 = (short)((ulong)uVar91 >> 0x10);
        uVar142 = NEON_ext(uVar15,CONCAT26(uVar51,CONCAT24(uVar40,CONCAT22((short)uVar99,
                                                                           (short)uVar15))),4,1);
        uVar99 = NEON_ext(uVar15,CONCAT26(sVar132,CONCAT24(sVar44,CONCAT22(uVar51,uVar40))),4,1);
        sVar31 = auVar75._2_2_;
        sVar53 = (short)((ulong)uVar13 >> 0x10);
        sVar42 = auVar75._4_2_;
        sVar55 = (short)((ulong)uVar13 >> 0x20);
        sVar29 = auVar75._0_2_;
        sVar50 = (short)uVar13;
        auVar27._8_8_ = 0xfffefffefffefffe;
        auVar27._0_8_ = 0x19180908fffefffe;
        in_q31 = ZEXT416((uint)((ulong)uVar94 >> 0x20)) << 0x20;
        uVar91 = NEON_ext(CONCAT26((short)((ulong)uVar13 >> 0x30),
                                   CONCAT24(auVar75._6_2_,CONCAT22(sVar53,sVar31))),auVar75._0_8_,4,
                          1);
        sVar45 = auVar119._8_2_;
        sVar56 = SUB122(*(undefined (*) [12])*pauVar10,8);
        auVar95._12_4_ = uVar134;
        auVar95._0_12_ = *(undefined (*) [12])*pauVar1;
        auVar21._12_4_ = uVar137;
        auVar21._0_12_ = *(undefined (*) [12])*pauVar9;
        auVar95 = a64_TBL(ZEXT816(0),auVar95,auVar21,auVar27);
        auVar26._8_8_ = 0xfffefffefffefffe;
        auVar26._0_8_ = 0xfffefffe1b1a0b0a;
        sVar46 = auVar75._8_2_;
        sVar57 = SUB122(*(undefined (*) [12])*pauVar12,8);
        auVar96._12_4_ = uVar130;
        auVar96._0_12_ = *(undefined (*) [12])*pauVar2;
        auVar100._12_4_ = uVar133;
        auVar100._0_12_ = *(undefined (*) [12])*pauVar11;
        auVar100 = a64_TBL(ZEXT816(0),auVar96,auVar100,auVar27);
        sVar47 = SUB122(*(undefined (*) [12])*pauVar2,10);
        sVar58 = (short)((ulong)*(undefined8 *)(pauVar38[3] + 8) >> 0x10);
        auVar76._12_4_ = uVar123;
        auVar76._0_12_ = *(undefined (*) [12])*pauVar12;
        auVar76 = a64_TBL(ZEXT816(0),auVar75,auVar76,auVar26);
        auVar81._12_4_ = uVar129;
        auVar81._0_12_ = *(undefined (*) [12])*pauVar10;
        auVar96 = a64_TBL(ZEXT816(0),auVar119,auVar81,auVar26);
        auVar79._8_4_ = 0xfffefffe;
        auVar79._0_8_ = 0xfffefffe1d1c0d0c;
        auVar68._8_4_ = 0xfffefffe;
        auVar68._0_8_ = 0xfffefffe1d1c0d0c;
        auVar25._8_8_ = 0xfffefffefffefffe;
        auVar25._0_8_ = 0x1d1c0d0cfffefffe;
        auVar68._12_4_ = 0xfffefffe;
        auVar101._12_4_ = uVar129;
        auVar101._0_12_ = *(undefined (*) [12])*pauVar10;
        auVar101 = a64_TBL(ZEXT816(0),auVar119,auVar101,auVar68);
        auVar18._12_4_ = uVar134;
        auVar18._0_12_ = *(undefined (*) [12])*pauVar1;
        auVar22._12_4_ = uVar137;
        auVar22._0_12_ = *(undefined (*) [12])*pauVar9;
        auVar81 = a64_TBL(ZEXT816(0),auVar18,auVar22,auVar25);
        auVar117._12_4_ = uVar130;
        auVar117._0_12_ = *(undefined (*) [12])*pauVar2;
        auVar16._12_4_ = uVar133;
        auVar16._0_12_ = *(undefined (*) [12])*pauVar11;
        auVar117 = a64_TBL(ZEXT816(0),auVar117,auVar16,auVar25);
        auVar79._12_4_ = 0xfffefffe;
        auVar80._12_4_ = uVar123;
        auVar80._0_12_ = *(undefined (*) [12])*pauVar12;
        auVar68 = a64_TBL(ZEXT816(0),auVar75,auVar80,auVar79);
        auVar24._8_8_ = 0xfffefffefffefffe;
        auVar24._0_8_ = 0x1f1e0f0efffefffe;
        sVar48 = SUB122(*(undefined (*) [12])*pauVar1,10);
        sVar59 = (short)((ulong)*(undefined8 *)(pauVar38[-1] + 8) >> 0x10);
        auVar125._12_4_ = uVar129;
        auVar125._0_12_ = *(undefined (*) [12])*pauVar10;
        auVar125 = a64_TBL(ZEXT816(0),auVar119,auVar125,_DAT_004c38b0);
        auVar19._12_4_ = uVar134;
        auVar19._0_12_ = *(undefined (*) [12])*pauVar1;
        auVar23._12_4_ = uVar137;
        auVar23._0_12_ = *(undefined (*) [12])*pauVar9;
        auVar79 = a64_TBL(ZEXT816(0),auVar19,auVar23,auVar24);
        auVar14._12_4_ = uVar130;
        auVar14._0_12_ = *(undefined (*) [12])*pauVar2;
        auVar17._12_4_ = uVar133;
        auVar17._0_12_ = *(undefined (*) [12])*pauVar11;
        auVar80 = a64_TBL(ZEXT816(0),auVar14,auVar17,auVar24);
        auVar119._12_4_ = uVar123;
        auVar119._0_12_ = *(undefined (*) [12])*pauVar12;
        auVar119 = a64_TBL(ZEXT816(0),auVar75,auVar119,_DAT_004c38b0);
        sVar84 = (short)((ulong)uVar20 >> 0x20);
        sVar87 = (short)((ulong)uVar15 >> 0x20);
        sVar90 = (short)uVar91;
        sVar92 = (short)((ulong)uVar91 >> 0x10);
        sVar138 = (short)((ulong)uVar73 >> 0x20);
        sVar139 = (short)((ulong)uVar73 >> 0x30);
        sVar140 = (short)((ulong)uVar142 >> 0x20);
        sVar141 = (short)((ulong)uVar142 >> 0x30);
        sVar146 = (short)((ulong)uVar94 >> 0x20);
        sVar147 = (short)((ulong)uVar94 >> 0x30);
        sVar82 = (short)((ulong)uVar99 >> 0x20);
        sVar83 = (short)((ulong)uVar99 >> 0x30);
        sVar143 = auVar95._4_2_;
        sVar144 = auVar95._6_2_;
        sVar88 = auVar100._4_2_;
        sVar89 = auVar100._6_2_;
        sVar93 = auVar96._0_2_;
        sVar97 = auVar96._2_2_;
        sVar72 = auVar76._0_2_;
        sVar78 = auVar76._2_2_;
        sVar98 = auVar101._0_2_;
        sVar102 = auVar101._2_2_;
        sVar103 = auVar81._4_2_;
        sVar104 = auVar81._6_2_;
        sVar67 = auVar68._0_2_;
        sVar69 = auVar68._2_2_;
        sVar70 = auVar117._4_2_;
        sVar71 = auVar117._6_2_;
        sVar124 = auVar125._0_2_;
        sVar126 = auVar125._2_2_;
        sVar127 = auVar79._4_2_;
        sVar128 = auVar79._6_2_;
        sVar118 = auVar119._0_2_;
        sVar120 = auVar119._2_2_;
        sVar121 = auVar80._4_2_;
        sVar122 = auVar80._6_2_;
        iVar32 = iVar32 + (((uint)((int)sVar41 * (int)sVar41) >> 2) +
                           ((uint)((int)sVar28 * (int)sVar28) >> 2) +
                           ((uint)((int)sVar45 * (int)sVar45) >> 2) +
                           ((uint)((int)sVar98 * (int)sVar98) >> 2) >> 10);
        iVar60 = iVar60 + (((uint)((int)sVar54 * (int)sVar54) >> 2) +
                           ((uint)((int)sVar49 * (int)sVar49) >> 2) +
                           ((uint)((int)sVar56 * (int)sVar56) >> 2) +
                           ((uint)((int)sVar102 * (int)sVar102) >> 2) >> 10);
        iVar61 = iVar61 + (((uint)((int)sVar84 * (int)sVar84) >> 2) +
                           ((uint)((int)sVar138 * (int)sVar138) >> 2) +
                           ((uint)((int)sVar143 * (int)sVar143) >> 2) +
                           ((uint)((int)sVar103 * (int)sVar103) >> 2) >> 10);
        iVar62 = iVar62 + (((uint)((int)sVar135 * (int)sVar135) >> 2) +
                           ((uint)((int)sVar139 * (int)sVar139) >> 2) +
                           ((uint)((int)sVar144 * (int)sVar144) >> 2) +
                           ((uint)((int)sVar104 * (int)sVar104) >> 2) >> 10);
        iVar63 = iVar63 + (((uint)((int)sVar42 * (int)sVar42) >> 2) +
                           ((uint)((int)sVar29 * (int)sVar29) >> 2) +
                           ((uint)((int)sVar46 * (int)sVar46) >> 2) +
                           ((uint)((int)sVar67 * (int)sVar67) >> 2) >> 10);
        iVar64 = iVar64 + (((uint)((int)sVar55 * (int)sVar55) >> 2) +
                           ((uint)((int)sVar50 * (int)sVar50) >> 2) +
                           ((uint)((int)sVar57 * (int)sVar57) >> 2) +
                           ((uint)((int)sVar69 * (int)sVar69) >> 2) >> 10);
        iVar65 = iVar65 + (((uint)((int)sVar87 * (int)sVar87) >> 2) +
                           ((uint)((int)sVar140 * (int)sVar140) >> 2) +
                           ((uint)((int)sVar88 * (int)sVar88) >> 2) +
                           ((uint)((int)sVar70 * (int)sVar70) >> 2) >> 10);
        iVar66 = iVar66 + (((uint)((int)sVar131 * (int)sVar131) >> 2) +
                           ((uint)((int)sVar141 * (int)sVar141) >> 2) +
                           ((uint)((int)sVar89 * (int)sVar89) >> 2) +
                           ((uint)((int)sVar71 * (int)sVar71) >> 2) >> 10);
        auVar77._0_4_ =
             auVar74._0_4_ +
             (((int)sVar85 * (int)sVar41 >> 2) + ((int)sVar30 * (int)sVar28 >> 2) +
              ((int)sVar93 * (int)sVar45 >> 2) + ((int)sVar124 * (int)sVar98 >> 2) >> 10);
        auVar77._4_4_ =
             auVar74._4_4_ +
             (((int)sVar86 * (int)sVar54 >> 2) + ((int)sVar52 * (int)sVar49 >> 2) +
              ((int)sVar97 * (int)sVar56 >> 2) + ((int)sVar126 * (int)sVar102 >> 2) >> 10);
        auVar77._8_4_ =
             auVar74._8_4_ +
             (((int)sVar43 * (int)sVar84 >> 2) + ((int)sVar146 * (int)sVar138 >> 2) +
              ((int)sVar48 * (int)sVar143 >> 2) + ((int)sVar127 * (int)sVar103 >> 2) >> 10);
        auVar77._12_4_ =
             auVar74._12_4_ +
             (((int)sVar136 * (int)sVar135 >> 2) + ((int)sVar147 * (int)sVar139 >> 2) +
              ((int)sVar59 * (int)sVar144 >> 2) + ((int)sVar128 * (int)sVar104 >> 2) >> 10);
        iVar105 = iVar105 + (((int)sVar90 * (int)sVar42 >> 2) + ((int)sVar31 * (int)sVar29 >> 2) +
                             ((int)sVar72 * (int)sVar46 >> 2) + ((int)sVar118 * (int)sVar67 >> 2) >>
                            10);
        iVar106 = iVar106 + (CONCAT22((short)((int)sVar92 * (int)sVar55 >> 0x12),
                                      (short)((int)sVar92 * (int)sVar55 >> 2)) +
                             ((int)sVar53 * (int)sVar50 >> 2) + ((int)sVar78 * (int)sVar57 >> 2) +
                             ((int)sVar120 * (int)sVar69 >> 2) >> 10);
        iVar107 = iVar107 + (((int)sVar44 * (int)sVar87 >> 2) + ((int)sVar82 * (int)sVar140 >> 2) +
                             ((int)sVar47 * (int)sVar88 >> 2) + ((int)sVar121 * (int)sVar70 >> 2) >>
                            10);
        iVar108 = iVar108 + (((int)sVar132 * (int)sVar131 >> 2) + ((int)sVar83 * (int)sVar141 >> 2)
                             + ((int)sVar58 * (int)sVar89 >> 2) + ((int)sVar122 * (int)sVar71 >> 2)
                            >> 10);
        iVar109 = iVar109 + (((uint)((int)sVar85 * (int)sVar85) >> 2) +
                             ((uint)((int)sVar30 * (int)sVar30) >> 2) +
                             ((uint)((int)sVar93 * (int)sVar93) >> 2) +
                             ((uint)((int)sVar124 * (int)sVar124) >> 2) >> 10);
        iVar110 = iVar110 + (((uint)((int)sVar86 * (int)sVar86) >> 2) +
                             ((uint)((int)sVar52 * (int)sVar52) >> 2) +
                             ((uint)((int)sVar97 * (int)sVar97) >> 2) +
                             ((uint)((int)sVar126 * (int)sVar126) >> 2) >> 10);
        iVar111 = iVar111 + (((uint)((int)sVar43 * (int)sVar43) >> 2) +
                             ((uint)((int)sVar146 * (int)sVar146) >> 2) +
                             ((uint)((int)sVar48 * (int)sVar48) >> 2) +
                             ((uint)((int)sVar127 * (int)sVar127) >> 2) >> 10);
        iVar112 = iVar112 + (((uint)((int)sVar136 * (int)sVar136) >> 2) +
                             ((uint)((int)sVar147 * (int)sVar147) >> 2) +
                             ((uint)((int)sVar59 * (int)sVar59) >> 2) +
                             ((uint)((int)sVar128 * (int)sVar128) >> 2) >> 10);
        iVar113 = iVar113 + (((uint)((int)sVar90 * (int)sVar90) >> 2) +
                             ((uint)((int)sVar31 * (int)sVar31) >> 2) +
                             ((uint)((int)sVar72 * (int)sVar72) >> 2) +
                             ((uint)((int)sVar118 * (int)sVar118) >> 2) >> 10);
        iVar114 = iVar114 + (CONCAT22((ushort)((uint)((int)sVar92 * (int)sVar92) >> 0x12),
                                      (short)((uint)((int)sVar92 * (int)sVar92) >> 2)) +
                             ((uint)((int)sVar53 * (int)sVar53) >> 2) +
                             ((uint)((int)sVar78 * (int)sVar78) >> 2) +
                             ((uint)((int)sVar120 * (int)sVar120) >> 2) >> 10);
        iVar115 = iVar115 + (((uint)((int)sVar44 * (int)sVar44) >> 2) +
                             ((uint)((int)sVar82 * (int)sVar82) >> 2) +
                             ((uint)((int)sVar47 * (int)sVar47) >> 2) +
                             ((uint)((int)sVar121 * (int)sVar121) >> 2) >> 10);
        iVar116 = iVar116 + (((uint)((int)sVar132 * (int)sVar132) >> 2) +
                             ((uint)((int)sVar83 * (int)sVar83) >> 2) +
                             ((uint)((int)sVar58 * (int)sVar58) >> 2) +
                             ((uint)((int)sVar122 * (int)sVar122) >> 2) >> 10);
        pauVar38 = pauVar38 + 8;
        auVar74 = auVar77;
      } while (uVar39 != 0);
      iVar109 = iVar113 + iVar109 + iVar114 + iVar110 + iVar115 + iVar111 + iVar116 + iVar112;
      iVar105 = iVar105 + auVar77._0_4_ + iVar106 + auVar77._4_4_ +
                iVar107 + auVar77._8_4_ + iVar108 + auVar77._12_4_;
      iVar32 = iVar63 + iVar32 + iVar64 + iVar60 + iVar65 + iVar61 + iVar66 + iVar62;
      if (uVar6 == uVar37) goto LAB_00e7dc68;
    }
    psVar36 = (short *)(param_1 + uVar35 * 4 + 8);
    do {
      sVar41 = psVar36[-4];
      uVar35 = uVar35 + 4;
      sVar42 = psVar36[-2];
      sVar43 = psVar36[-3];
      sVar44 = psVar36[-1];
      sVar28 = *psVar36;
      sVar29 = psVar36[1];
      sVar30 = psVar36[2];
      sVar31 = psVar36[3];
      psVar36 = psVar36 + 8;
      iVar32 = iVar32 + (((uint)((int)sVar42 * (int)sVar42) >> 2) +
                         ((uint)((int)sVar41 * (int)sVar41) >> 2) +
                         ((uint)((int)sVar28 * (int)sVar28) >> 2) +
                         ((uint)((int)sVar30 * (int)sVar30) >> 2) >> 10);
      iVar105 = iVar105 + (((int)sVar44 * (int)sVar42 >> 2) + ((int)sVar43 * (int)sVar41 >> 2) +
                           ((int)sVar29 * (int)sVar28 >> 2) + ((int)sVar31 * (int)sVar30 >> 2) >> 10
                          );
      iVar109 = iVar109 + (((uint)((int)sVar44 * (int)sVar44) >> 2) +
                           ((uint)((int)sVar43 * (int)sVar43) >> 2) +
                           ((uint)((int)sVar29 * (int)sVar29) >> 2) +
                           ((uint)((int)sVar31 * (int)sVar31) >> 2) >> 10);
    } while (uVar35 < uVar34);
  }
LAB_00e7dc68:
  lVar33 = (long)(0x7fff000000000000 - ((ulong)uVar8 << 0x30)) >> 0x30;
  uVar4 = *param_4 + (int)((ulong)(lVar33 * (int)(iVar32 - *param_4)) >> 0xf);
  uVar8 = param_4[1] + (int)((ulong)(lVar33 * (int)(iVar105 - param_4[1])) >> 0xf);
  uVar3 = param_4[2] + (int)((ulong)(lVar33 * (int)(iVar109 - param_4[2])) >> 0xf);
  uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  uVar5 = uVar4;
  if (uVar4 <= uVar3) {
    uVar5 = uVar3;
  }
  *param_4 = uVar4;
  param_4[1] = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  param_4[2] = uVar3;
  if (uVar5 < 0xd3) {
    sVar28 = *(short *)((long)param_4 + 0xe);
  }
  else {
    sVar28 = celt_sqrt();
    sVar29 = celt_sqrt(param_4[2]);
    sVar30 = celt_sqrt((int)sVar28);
    sVar31 = celt_sqrt((int)sVar29);
    uVar8 = (int)sVar29 * (int)sVar28;
    uVar4 = param_4[1];
    if ((int)uVar8 <= (int)param_4[1]) {
      uVar4 = uVar8;
    }
    param_4[1] = uVar4;
    iVar32 = frac_div32(uVar4,uVar8 + 1);
    uVar8 = (int)sVar30 - (int)sVar31;
    uVar4 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    iVar105 = (int)sVar30 + (int)sVar31 + 1;
    uVar8 = 0;
    if (iVar105 != 0) {
      uVar8 = (int)((-(uVar4 >> 0xf & 1) & 0x80000000 | (uVar4 & 0xffff) << 0xf) - (int)(short)uVar4
                   ) / iVar105;
    }
    sVar28 = celt_sqrt(0x40000000 - (iVar32 >> 0x10) * (iVar32 >> 0x10));
    iVar32 = 0;
    if (uVar7 != 0) {
      iVar32 = 0x28f / (int)uVar7;
    }
    sVar29 = 0;
    if (uVar7 != 0) {
      sVar29 = (short)((((int)((-(uVar8 >> 0xf & 1) & 0xfffe0000 | (uVar8 & 0xffff) << 1) *
                              (int)sVar28) >> 0x10) - (int)*(short *)(param_4 + 3)) / (int)uVar7);
    }
    sVar29 = *(short *)(param_4 + 3) + sVar29;
    iVar32 = *(short *)((long)param_4 + 0xe) - iVar32;
    if (iVar32 <= sVar29) {
      iVar32 = (int)sVar29;
    }
    *(short *)(param_4 + 3) = sVar29;
    sVar28 = (short)iVar32;
    *(short *)((long)param_4 + 0xe) = sVar28;
  }
  iVar32 = ((int)sVar28 + sVar28 * 4) * 4;
  if (0x7ffe < iVar32) {
    iVar32 = 0x7fff;
  }
  return iVar32;
}


