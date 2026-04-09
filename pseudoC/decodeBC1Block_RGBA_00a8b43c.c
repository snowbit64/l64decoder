// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC1Block_RGBA
// Entry Point: 00a8b43c
// Size: 536 bytes
// Signature: undefined __cdecl decodeBC1Block_RGBA(uchar * param_1, uchar * param_2, uint param_3, bool param_4)


/* DXTUtil::decodeBC1Block_RGBA(unsigned char const*, unsigned char*, unsigned int, bool) */

void DXTUtil::decodeBC1Block_RGBA(uchar *param_1,uchar *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined2 uVar9;
  undefined3 uVar10;
  undefined5 uVar11;
  undefined auVar12 [14];
  undefined auVar13 [14];
  undefined auVar14 [14];
  undefined auVar15 [16];
  undefined auVar16 [12];
  undefined auVar17 [12];
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  byte bVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined uVar34;
  byte bVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined4 uVar43;
  undefined in_q0 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  short sVar44;
  undefined6 uVar45;
  short sVar66;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  undefined auVar50 [16];
  undefined auVar56 [16];
  short sVar67;
  short sVar73;
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  byte bVar72;
  undefined auVar65 [16];
  uint3 uVar74;
  undefined4 uVar75;
  byte bVar80;
  undefined auVar76 [12];
  byte bVar81;
  undefined auVar78 [16];
  undefined auVar79 [16];
  uint uVar91;
  undefined in_q3 [16];
  undefined auVar90 [15];
  undefined auVar82 [16];
  uint uVar92;
  undefined auVar87 [16];
  undefined auVar88 [16];
  undefined auVar89 [16];
  byte bVar95;
  byte bVar96;
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined in_q5 [16];
  undefined auVar97 [16];
  undefined auVar102 [16];
  undefined auVar103 [16];
  undefined in_q6 [16];
  undefined auVar104 [16];
  undefined auVar109 [16];
  undefined auVar110 [16];
  undefined auVar111 [16];
  undefined auVar112 [16];
  undefined auVar113 [16];
  undefined auVar114 [16];
  undefined in_q17 [16];
  undefined auVar115 [16];
  undefined auVar120 [16];
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar61 [16];
  undefined auVar53 [16];
  undefined auVar62 [16];
  undefined auVar54 [16];
  undefined auVar63 [16];
  undefined auVar55 [16];
  undefined auVar64 [16];
  undefined7 uVar46;
  undefined8 uVar47;
  undefined auVar48 [12];
  undefined auVar49 [14];
  undefined auVar57 [16];
  undefined auVar77 [14];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar98 [16];
  undefined auVar99 [16];
  undefined auVar100 [16];
  undefined auVar101 [16];
  undefined auVar105 [16];
  undefined auVar106 [16];
  undefined auVar107 [16];
  undefined auVar108 [16];
  undefined auVar116 [16];
  undefined auVar117 [16];
  undefined auVar118 [16];
  undefined auVar119 [16];
  
  auVar90 = in_q3._1_15_;
  uVar18 = (ulong)*(uint *)param_1;
  auVar122 = ZEXT816(0);
  uVar19 = uVar18 | uVar18 << 0x10;
  uVar20 = uVar19 & 0xffff0000ffff;
  uVar20 = uVar20 >> 8 | uVar20 << 0x13;
  uVar21 = (uVar19 & 0x7e0000007e0) << 5;
  uVar19 = uVar21 | uVar20 & 0xf800f800f800f8 | uVar20 >> 5 & 0x7000700070007;
  uVar20 = uVar19 | uVar21 >> 6 & 0x30000000300;
  auVar110._1_15_ = in_q0._1_15_;
  auVar110[0] = (byte)uVar19;
  bVar22 = (byte)(uVar20 >> 8);
  auVar112._3_13_ = in_q0._3_13_;
  auVar112._0_2_ = auVar110._0_2_;
  auVar112[2] = bVar22;
  bVar26 = (byte)(uVar19 >> 0x10);
  auVar89._5_11_ = in_q0._5_11_;
  auVar89._0_4_ = auVar112._0_4_;
  auVar89[4] = bVar26;
  auVar56._7_9_ = in_q0._7_9_;
  auVar56._0_6_ = auVar89._0_6_;
  auVar56[6] = 0xff;
  auVar113._2_14_ = auVar56._2_14_;
  auVar113._0_2_ = auVar112._0_2_ & 0xff;
  auVar103._4_12_ = auVar56._4_12_;
  auVar103._0_3_ = auVar113._0_3_;
  auVar103[3] = 0;
  auVar79._6_10_ = auVar56._6_10_;
  auVar79._0_5_ = auVar103._0_5_;
  auVar79[5] = 0;
  auVar121._0_8_ = CONCAT17(0,auVar79._0_7_);
  bVar27 = (byte)(uVar19 >> 0x20);
  auVar50._1_15_ = auVar122._1_15_;
  auVar50[0] = bVar27;
  bVar28 = (byte)(uVar20 >> 0x28);
  auVar52._3_13_ = auVar122._3_13_;
  auVar51._0_2_ = auVar50._0_2_;
  auVar52[2] = bVar28;
  auVar52._0_2_ = auVar51._0_2_;
  bVar35 = (byte)(uVar19 >> 0x30);
  auVar53._5_11_ = auVar122._5_11_;
  auVar53._0_4_ = auVar52._0_4_;
  auVar53[4] = bVar35;
  auVar55._7_9_ = auVar122._7_9_;
  auVar55._0_6_ = auVar53._0_6_;
  auVar55[6] = 0xff;
  auVar51._2_14_ = auVar55._2_14_;
  auVar122._4_12_ = auVar55._4_12_;
  auVar122._0_3_ = auVar51._0_3_;
  auVar122[3] = 0;
  auVar54._6_10_ = auVar55._6_10_;
  auVar54._0_5_ = auVar122._0_5_;
  auVar54[5] = 0;
  uVar46 = auVar54._0_7_;
  auVar121._8_7_ = uVar46;
  auVar121[15] = 0;
  auVar56 = NEON_ext(auVar121,auVar121,8,1);
  if ((ulong)(*(uint *)param_1 >> 0x10) < (uVar18 & 0xffff)) {
    sVar44 = CONCAT11(~auVar56[1],~auVar56[0]);
    uVar75 = CONCAT13(~auVar56[3],CONCAT12(~auVar56[2],sVar44));
    uVar45 = CONCAT15(~auVar56[5],CONCAT14(~auVar56[4],uVar75));
    uVar47 = CONCAT17(~auVar56[7],CONCAT16(~auVar56[6],uVar45));
    auVar48._0_10_ = CONCAT19(~auVar56[9],CONCAT18(~auVar56[8],uVar47));
    auVar48[10] = ~auVar56[10];
    auVar48[11] = ~auVar56[11];
    auVar49[12] = ~auVar56[12];
    auVar49._0_12_ = auVar48;
    auVar49[13] = ~auVar56[13];
    auVar57[14] = ~auVar56[14];
    auVar57._0_14_ = auVar49;
    auVar57[15] = ~auVar56[15];
    auVar39._0_8_ = NEON_sqxtun(auVar121._0_8_,auVar121,2);
    auVar39._8_7_ = uVar46;
    auVar39[15] = 0;
    sVar44 = auVar113._0_2_ * 2 - sVar44;
    sVar66 = (ushort)bVar22 * 2 - (short)((uint)uVar75 >> 0x10);
    sVar67 = (ushort)bVar26 * 2 - (short)((uint6)uVar45 >> 0x20);
    sVar68 = 0x1fe - (short)((ulong)uVar47 >> 0x30);
    sVar69 = auVar51._0_2_ * 2 - (short)((unkuint10)auVar48._0_10_ >> 0x40);
    sVar70 = (ushort)bVar28 * 2 - auVar48._10_2_;
    sVar71 = (ushort)bVar35 * 2 - auVar49._12_2_;
    sVar73 = 0x1fe - auVar57._14_2_;
    auVar15._4_4_ = sVar67 * 0x5556;
    auVar15._0_4_ = sVar66 * 0x5556;
    auVar15._8_4_ = sVar68 * 0x5556;
    auVar15._12_4_ = 0;
    auVar90 = SUB1615(auVar15 << 0x20,1);
    auVar58._2_2_ = sVar66 / 3 + (sVar66 >> 0xf);
    auVar58._0_2_ = sVar44 / 3 + (sVar44 >> 0xf);
    auVar58._4_2_ = sVar67 / 3 + (sVar67 >> 0xf);
    auVar58._6_2_ = sVar68 / 3 + (sVar68 >> 0xf);
    auVar58._8_2_ = sVar69 / 3 + (sVar69 >> 0xf);
    auVar58._10_2_ = sVar70 / 3 + (sVar70 >> 0xf);
    auVar58._14_2_ = sVar73 / 3 + (sVar73 >> 0xf);
    auVar58._12_2_ = sVar71 / 3 + (sVar71 >> 0xf);
    auVar40 = NEON_sqxtun2(auVar39,auVar58,2);
  }
  else {
    sVar44 = CONCAT11(0xff,~(byte)uVar19);
    uVar75 = CONCAT13(0xff,CONCAT12(~bVar22,sVar44));
    auVar76._0_10_ = CONCAT19(0xff,CONCAT18(~bVar27,0xff00000000000000));
    auVar76[10] = ~bVar28;
    auVar76[11] = 0xff;
    auVar77[12] = ~bVar35;
    auVar77._0_12_ = auVar76;
    auVar77[13] = 0xff;
    auVar41._0_8_ = NEON_sqxtun(auVar121._0_8_,auVar121,2);
    auVar41._8_7_ = uVar46;
    auVar41[15] = 0;
    bVar22 = 0xff;
    if (!param_4) {
      bVar22 = 0;
    }
    auVar59._0_2_ = (ushort)(auVar56._0_2_ - sVar44) >> 1;
    auVar59._2_2_ = (ushort)(auVar56._2_2_ - (short)((uint)uVar75 >> 0x10)) >> 1;
    auVar59._4_2_ =
         (ushort)(auVar56._4_2_ - (short)(CONCAT15(0xff,CONCAT14(~bVar26,uVar75)) >> 0x20)) >> 1;
    auVar59._6_2_ = (ushort)(auVar56._6_2_ + 0x100U) >> 1;
    auVar59._8_2_ = (ushort)(auVar56._8_2_ - (short)((unkuint10)auVar76._0_10_ >> 0x40)) >> 1;
    auVar59._10_2_ = (ushort)(auVar56._10_2_ - auVar76._10_2_) >> 1;
    auVar59._12_2_ = (ushort)(auVar56._12_2_ - auVar77._12_2_) >> 1;
    auVar59._14_2_ = (ushort)(auVar56._14_2_ + 0x100U) >> 1;
    auVar56 = NEON_sqxtun2(auVar41,auVar59,2);
    auVar40._0_12_ = auVar56._0_12_;
    auVar40._12_3_ = 0;
    auVar40[15] = bVar22 & auVar56[15];
  }
  auVar56 = ZEXT816(0);
  uVar75 = *(undefined4 *)(param_1 + 4);
  uVar18 = (ulong)param_3;
  puVar1 = (undefined8 *)(param_2 + uVar18);
  puVar2 = (undefined8 *)((long)puVar1 + uVar18);
  bVar26 = (byte)((uint)uVar75 >> 0x10);
  bVar28 = (byte)((uint)uVar75 >> 0x18);
  uVar74 = (uint3)CONCAT52((int5)(CONCAT16(bVar28,(uint6)CONCAT14(bVar26,(uint)CONCAT12((char)((uint
                                                  )uVar75 >> 8),(short)uVar75))) >> 0x10),
                           (short)uVar75) & 0xff00ff;
  bVar22 = (byte)uVar74;
  auVar82._1_15_ = auVar90;
  auVar82[0] = bVar22;
  bVar27 = (byte)(uVar74 >> 0x10);
  auVar16._1_11_ = auVar90._4_11_;
  auVar16[0] = bVar27;
  auVar86._0_6_ = auVar16._0_6_ << 0x20;
  auVar86._7_9_ = auVar90._6_9_;
  auVar86[6] = 0;
  auVar83._2_14_ = auVar86._2_14_;
  auVar83._0_2_ = auVar82._0_2_ & 0xff;
  auVar84._4_12_ = auVar86._4_12_;
  auVar84._0_4_ = CONCAT13(0,auVar83._0_3_);
  auVar85._6_10_ = auVar86._6_10_;
  auVar85._0_5_ = auVar84._0_5_;
  auVar85[5] = 0;
  auVar60._1_15_ = auVar56._1_15_;
  auVar60[0] = bVar26;
  auVar61._0_2_ = auVar60._0_2_;
  auVar17._1_11_ = auVar56._5_11_;
  auVar17[0] = bVar28;
  auVar64._0_6_ = auVar17._0_6_ << 0x20;
  auVar64._7_9_ = auVar56._7_9_;
  auVar64[6] = 0;
  auVar61._2_14_ = auVar64._2_14_;
  auVar62._4_12_ = auVar64._4_12_;
  auVar62._0_4_ = CONCAT13(0,auVar61._0_3_);
  auVar63._6_10_ = auVar64._6_10_;
  auVar63._0_5_ = auVar62._0_5_;
  auVar63[5] = 0;
  uVar91 = (uint)auVar85._4_3_;
  uVar92 = (uint)auVar63._4_3_;
  auVar65[5] = (byte)((uVar91 << 0xc) >> 8) | (byte)((uVar91 << 6) >> 8);
  bVar35 = (byte)((auVar62._0_4_ << 6) >> 8);
  auVar65[9] = (byte)((auVar62._0_4_ << 0xc) >> 8) | bVar35;
  bVar80 = (byte)((auVar62._0_4_ << 0xc) >> 0x10);
  bVar72 = (byte)((uVar92 << 6) >> 8);
  auVar65[13] = (byte)((uVar92 << 0xc) >> 8) | bVar72;
  bVar81 = (byte)((uVar92 << 0xc) >> 0x10);
  auVar65[2] = (byte)((auVar84._0_4_ << 0xc) >> 0x10) | (byte)((auVar84._0_4_ << 0x12) >> 0x10);
  uVar23 = (undefined)((auVar84._0_4_ << 0x12) >> 0x18);
  auVar65[6] = (byte)((uVar91 << 0xc) >> 0x10) | (byte)((uVar91 << 0x12) >> 0x10);
  uVar24 = (undefined)((uVar91 << 0x12) >> 0x18);
  auVar65[10] = bVar80 | (byte)((auVar62._0_4_ << 0x12) >> 0x10);
  bVar95 = (byte)((auVar62._0_4_ << 0x12) >> 0x18);
  auVar65[14] = bVar81 | (byte)((uVar92 << 0x12) >> 0x10);
  bVar96 = (byte)((uVar92 << 0x12) >> 0x18);
  uVar9 = CONCAT11((byte)((auVar84._0_4_ << 0xc) >> 8) | (byte)((auVar84._0_4_ << 6) >> 8),
                   (byte)(auVar84._0_4_ << 6) | bVar22);
  auVar65._0_2_ = uVar9;
  auVar65[3] = uVar23;
  auVar65[4] = (byte)(uVar91 << 6) | bVar27;
  auVar65[7] = uVar24;
  auVar65[8] = (byte)(auVar62._0_4_ << 6) | bVar26;
  auVar65[11] = bVar95;
  auVar65[12] = (byte)(uVar92 << 6) | bVar28;
  auVar65[15] = bVar96;
  auVar87[8] = 2;
  auVar87._0_8_ = 0x202020202020202;
  auVar87[9] = 2;
  auVar87[10] = 2;
  auVar87[11] = 2;
  auVar87[12] = 2;
  auVar87[13] = 2;
  auVar87[14] = 2;
  auVar87[15] = 2;
  uVar10 = CONCAT12(auVar65[2],uVar9);
  uVar11 = CONCAT14(auVar65[4],CONCAT13(uVar23,uVar10));
  uVar45 = CONCAT15(auVar65[5],uVar11);
  uVar46 = CONCAT16(auVar65[6],uVar45);
  auVar78._0_8_ = CONCAT17(uVar24,uVar46) & 0x101010101010101;
  auVar78[8] = bVar26 & 1;
  auVar78[9] = bVar35 & 1;
  auVar78[10] = bVar80 & 1;
  auVar78[11] = bVar95 & 1;
  auVar78[12] = bVar28 & 1;
  auVar78[13] = bVar72 & 1;
  auVar78[14] = bVar81 & 1;
  auVar78[15] = bVar96 & 1;
  auVar56 = NEON_cmtst(auVar65,auVar87,1);
  auVar79 = NEON_neg(auVar78,1);
  uVar23 = auVar56[0];
  uVar24 = auVar56[1];
  bVar26 = auVar56[2];
  uVar29 = auVar56[3];
  uVar31 = auVar56[4];
  uVar32 = auVar56[5];
  bVar28 = auVar56[6];
  uVar36 = auVar56[7];
  auVar56 = NEON_ext(auVar56,auVar56,8,1);
  bVar22 = auVar79[0];
  uVar25 = auVar79[1];
  bVar27 = auVar79[2];
  uVar30 = auVar79[3];
  auVar12._1_13_ = in_q5._3_13_;
  auVar12[0] = uVar23;
  auVar99._0_4_ = auVar12._0_4_ << 0x10;
  auVar99._5_11_ = in_q5._5_11_;
  auVar99[4] = uVar24;
  auVar101._7_9_ = in_q5._7_9_;
  auVar101._0_6_ = auVar99._0_6_;
  auVar101[6] = uVar24;
  auVar97._2_14_ = auVar101._2_14_;
  auVar97[1] = uVar23;
  auVar97[0] = uVar23;
  auVar98._4_12_ = auVar101._4_12_;
  auVar98._0_3_ = auVar97._0_3_;
  auVar98[3] = uVar23;
  auVar100._6_10_ = auVar101._6_10_;
  auVar100._0_5_ = auVar98._0_5_;
  auVar100[5] = uVar24;
  auVar102._0_7_ = auVar100._0_7_;
  auVar102[7] = uVar24;
  uVar47 = CONCAT17(uVar29,CONCAT16(uVar29,(uint6)CONCAT14(uVar29,(uint)bVar26 << 0x10)));
  auVar102[15] = uVar29;
  auVar102._8_7_ =
       (int7)CONCAT26((short)((ulong)uVar47 >> 0x30),
                      CONCAT15(uVar29,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                                     CONCAT13(bVar26,(int3)CONCAT62((int6)((ulong)
                                                  uVar47 >> 0x10),CONCAT11(bVar26,bVar26))))));
  auVar13._1_13_ = in_q6._3_13_;
  auVar13[0] = uVar31;
  auVar106._0_4_ = auVar13._0_4_ << 0x10;
  auVar106._5_11_ = in_q6._5_11_;
  auVar106[4] = uVar32;
  auVar108._7_9_ = in_q6._7_9_;
  auVar108._0_6_ = auVar106._0_6_;
  auVar108[6] = uVar32;
  auVar104._2_14_ = auVar108._2_14_;
  auVar104[1] = uVar31;
  auVar104[0] = uVar31;
  auVar105._4_12_ = auVar108._4_12_;
  auVar105._0_3_ = auVar104._0_3_;
  auVar105[3] = uVar31;
  auVar107._6_10_ = auVar108._6_10_;
  auVar107._0_5_ = auVar105._0_5_;
  auVar107[5] = uVar32;
  auVar109._0_7_ = auVar107._0_7_;
  auVar109[7] = uVar32;
  uVar47 = CONCAT17(uVar36,CONCAT16(uVar36,(uint6)CONCAT14(uVar36,(uint)bVar28 << 0x10)));
  auVar109[15] = uVar36;
  auVar109._8_7_ =
       (int7)CONCAT26((short)((ulong)uVar47 >> 0x30),
                      CONCAT15(uVar36,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                                     CONCAT13(bVar28,(int3)CONCAT62((int6)((ulong)
                                                  uVar47 >> 0x10),CONCAT11(bVar28,bVar28))))));
  uVar31 = auVar79[4];
  uVar33 = auVar79[5];
  bVar28 = auVar79[6];
  uVar37 = auVar79[7];
  auVar79 = NEON_ext(auVar79,auVar79,8,1);
  uVar23 = auVar56[0];
  uVar24 = auVar56[1];
  bVar26 = auVar56[2];
  uVar29 = auVar56[3];
  uVar32 = auVar56[4];
  uVar34 = auVar56[5];
  bVar35 = auVar56[6];
  uVar38 = auVar56[7];
  uVar47 = CONCAT17(uVar36,CONCAT16(uVar25,(uint6)CONCAT14(uVar25,(uint)bVar22 << 0x10)));
  auVar93._0_7_ =
       (undefined7)
       CONCAT26((short)((ulong)uVar47 >> 0x30),
                CONCAT15(uVar25,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                               CONCAT13(bVar22,(int3)CONCAT62((int6)((ulong)uVar47
                                                                                    >> 0x10),
                                                                              CONCAT11(bVar22,bVar22
                                                                                      ))))));
  auVar93[7] = uVar25;
  uVar47 = CONCAT17(uVar30,CONCAT16(uVar30,(uint6)CONCAT14(uVar30,(uint)bVar27 << 0x10)));
  auVar93[15] = uVar30;
  auVar93._8_7_ =
       (int7)CONCAT26((short)((ulong)uVar47 >> 0x30),
                      CONCAT15(uVar30,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                                     CONCAT13(bVar27,(int3)CONCAT62((int6)((ulong)
                                                  uVar47 >> 0x10),CONCAT11(bVar27,bVar27))))));
  auVar14._1_13_ = in_q17._3_13_;
  auVar14[0] = uVar31;
  auVar117._0_4_ = auVar14._0_4_ << 0x10;
  auVar117._5_11_ = in_q17._5_11_;
  auVar117[4] = uVar33;
  auVar119._7_9_ = in_q17._7_9_;
  auVar119._0_6_ = auVar117._0_6_;
  auVar119[6] = uVar33;
  auVar115._2_14_ = auVar119._2_14_;
  auVar115[1] = uVar31;
  auVar115[0] = uVar31;
  auVar116._4_12_ = auVar119._4_12_;
  auVar116._0_3_ = auVar115._0_3_;
  auVar116[3] = uVar31;
  auVar118._6_10_ = auVar119._6_10_;
  auVar118._0_5_ = auVar116._0_5_;
  auVar118[5] = uVar33;
  auVar120._0_7_ = auVar118._0_7_;
  auVar120[7] = uVar33;
  uVar47 = CONCAT17(uVar37,CONCAT16(uVar37,(uint6)CONCAT14(uVar37,(uint)bVar28 << 0x10)));
  auVar120[15] = uVar37;
  auVar120._8_7_ =
       (int7)CONCAT26((short)((ulong)uVar47 >> 0x30),
                      CONCAT15(uVar37,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                                     CONCAT13(bVar28,(int3)CONCAT62((int6)((ulong)
                                                  uVar47 >> 0x10),CONCAT11(bVar28,bVar28))))));
  bVar22 = auVar79[0];
  uVar25 = auVar79[1];
  bVar27 = auVar79[2];
  uVar31 = auVar79[3];
  uVar47 = CONCAT17(uVar29,CONCAT16(uVar29,(uint6)CONCAT14(uVar29,(uint)bVar26 << 0x10)));
  auVar7[15] = uVar29;
  auVar7._8_7_ = (int7)CONCAT26((short)((ulong)uVar47 >> 0x30),
                                CONCAT15(uVar29,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                                               CONCAT13(bVar26,(int3)CONCAT62((int6)
                                                  ((ulong)uVar47 >> 0x10),CONCAT11(bVar26,bVar26))))
                                        ));
  uVar47 = CONCAT17(uVar38,CONCAT16(uVar38,(uint6)CONCAT14(uVar38,(uint)bVar35 << 0x10)));
  auVar8[15] = uVar38;
  auVar8._8_7_ = (int7)CONCAT26((short)((ulong)uVar47 >> 0x30),
                                CONCAT15(uVar38,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                                               CONCAT13(bVar35,(int3)CONCAT62((int6)
                                                  ((ulong)uVar47 >> 0x10),CONCAT11(bVar35,bVar35))))
                                        ));
  bVar26 = auVar79[4];
  uVar33 = auVar79[5];
  bVar28 = auVar79[6];
  uVar36 = auVar79[7];
  uVar47 = CONCAT17(uVar30,CONCAT16(uVar25,(uint6)CONCAT14(uVar25,(uint)bVar22 << 0x10)));
  auVar111._0_7_ =
       (undefined7)
       CONCAT26((short)((ulong)uVar47 >> 0x30),
                CONCAT15(uVar25,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                               CONCAT13(bVar22,(int3)CONCAT62((int6)((ulong)uVar47
                                                                                    >> 0x10),
                                                                              CONCAT11(bVar22,bVar22
                                                                                      ))))));
  auVar111[7] = uVar25;
  uVar47 = CONCAT17(uVar37,CONCAT16(uVar31,(uint6)CONCAT14(uVar31,(uint)bVar27 << 0x10)));
  auVar111[15] = uVar31;
  auVar111._8_7_ =
       (int7)CONCAT26((short)((ulong)uVar47 >> 0x30),
                      CONCAT15(uVar31,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                                     CONCAT13(bVar27,(int3)CONCAT62((int6)((ulong)
                                                  uVar47 >> 0x10),CONCAT11(bVar27,bVar27))))));
  uVar43 = auVar40._8_4_;
  uVar25 = auVar40[8];
  uVar30 = auVar40[9];
  uVar31 = auVar40[10];
  uVar37 = auVar40[11];
  uVar47 = CONCAT17(uVar29,CONCAT16(uVar33,(uint6)CONCAT14(uVar33,(uint)bVar26 << 0x10)));
  auVar88._0_7_ =
       (undefined7)
       CONCAT26((short)((ulong)uVar47 >> 0x30),
                CONCAT15(uVar33,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                               CONCAT13(bVar26,(int3)CONCAT62((int6)((ulong)uVar47
                                                                                    >> 0x10),
                                                                              CONCAT11(bVar26,bVar26
                                                                                      ))))));
  auVar88[7] = uVar33;
  auVar56 = NEON_cmlt(auVar93,0,1);
  uVar47 = CONCAT17(uVar36,CONCAT16(uVar36,(uint6)CONCAT14(uVar36,(uint)bVar28 << 0x10)));
  auVar88[15] = uVar36;
  auVar88._8_7_ =
       (int7)CONCAT26((short)((ulong)uVar47 >> 0x30),
                      CONCAT15(uVar36,(int5)CONCAT44((int)((ulong)uVar47 >> 0x20),
                                                     CONCAT13(bVar28,(int3)CONCAT62((int6)((ulong)
                                                  uVar47 >> 0x10),CONCAT11(bVar28,bVar28))))));
  uVar75 = auVar40._0_4_;
  auVar94._4_4_ = uVar75;
  auVar94._0_4_ = uVar75;
  auVar94._8_4_ = uVar75;
  auVar94._12_4_ = uVar75;
  uVar75 = auVar40._4_4_;
  auVar114._4_4_ = uVar75;
  auVar114._0_4_ = uVar75;
  auVar114._8_4_ = uVar75;
  auVar114._12_4_ = uVar75;
  auVar42._12_4_ = auVar40._12_4_;
  auVar42._4_4_ = auVar42._12_4_;
  auVar42._0_4_ = auVar42._12_4_;
  auVar42._8_4_ = auVar42._12_4_;
  auVar103 = NEON_cmlt(auVar102,0,1);
  auVar3[4] = uVar25;
  auVar3._0_4_ = uVar43;
  auVar3[5] = uVar30;
  auVar3[6] = uVar31;
  auVar3[7] = uVar37;
  auVar3._8_4_ = uVar43;
  auVar3._12_4_ = uVar43;
  auVar79 = NEON_bsl(auVar56,auVar42,auVar3,1);
  auVar121 = NEON_cmlt(auVar120,0,1);
  auVar56 = NEON_bsl(auVar56,auVar114,auVar94,1);
  auVar112 = NEON_cmlt(auVar111,0,1);
  auVar89 = NEON_cmlt(auVar88,0,1);
  auVar110 = NEON_cmlt(auVar109,0,1);
  auVar56 = NEON_bif(auVar79,auVar56,auVar103,1);
  auVar4[4] = uVar25;
  auVar4._0_4_ = uVar43;
  auVar4[5] = uVar30;
  auVar4[6] = uVar31;
  auVar4[7] = uVar37;
  auVar4._8_4_ = uVar43;
  auVar4._12_4_ = uVar43;
  auVar122 = NEON_bsl(auVar121,auVar42,auVar4,1);
  auVar5[4] = uVar25;
  auVar5._0_4_ = uVar43;
  auVar5[5] = uVar30;
  auVar5[6] = uVar31;
  auVar5[7] = uVar37;
  auVar5._8_4_ = uVar43;
  auVar5._12_4_ = uVar43;
  auVar113 = NEON_bsl(auVar112,auVar42,auVar5,1);
  *(long *)(param_2 + 8) = auVar56._8_8_;
  *(long *)param_2 = auVar56._0_8_;
  auVar79 = NEON_bsl(auVar121,auVar114,auVar94,1);
  auVar112 = NEON_bsl(auVar112,auVar114,auVar94,1);
  auVar103 = NEON_bit(auVar94,auVar114,auVar89,1);
  auVar7[1] = uVar23;
  auVar7[0] = uVar23;
  auVar7[2] = uVar23;
  auVar7[3] = uVar23;
  auVar7[4] = uVar24;
  auVar7[5] = uVar24;
  auVar7[6] = uVar24;
  auVar7[7] = uVar24;
  auVar121 = NEON_cmlt(auVar7,0,1);
  auVar6[4] = uVar25;
  auVar6._0_4_ = uVar43;
  auVar6[5] = uVar30;
  auVar6[6] = uVar31;
  auVar6[7] = uVar37;
  auVar6._8_4_ = uVar43;
  auVar6._12_4_ = uVar43;
  auVar56 = NEON_bif(auVar42,auVar6,auVar89,1);
  auVar8[1] = uVar32;
  auVar8[0] = uVar32;
  auVar8[2] = uVar32;
  auVar8[3] = uVar32;
  auVar8[4] = uVar34;
  auVar8[5] = uVar34;
  auVar8[6] = uVar34;
  auVar8[7] = uVar34;
  auVar89 = NEON_cmlt(auVar8,0,1);
  auVar79 = NEON_bit(auVar79,auVar122,auVar110,1);
  auVar112 = NEON_bit(auVar112,auVar113,auVar121,1);
  auVar56 = NEON_bif(auVar56,auVar103,auVar89,1);
  puVar1[1] = auVar79._8_8_;
  *puVar1 = auVar79._0_8_;
  puVar2[1] = auVar112._8_8_;
  *puVar2 = auVar112._0_8_;
  ((undefined8 *)((long)puVar2 + uVar18))[1] = auVar56._8_8_;
  *(undefined8 *)((long)puVar2 + uVar18) = auVar56._0_8_;
  return;
}


