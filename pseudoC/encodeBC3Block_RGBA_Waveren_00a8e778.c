// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeBC3Block_RGBA_Waveren
// Entry Point: 00a8e778
// Size: 580 bytes
// Signature: undefined __cdecl encodeBC3Block_RGBA_Waveren(uchar * param_1, uchar * param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DXTUtil::encodeBC3Block_RGBA_Waveren(unsigned char const*, unsigned char*) */

void DXTUtil::encodeBC3Block_RGBA_Waveren(uchar *param_1,uchar *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint7 uVar4;
  undefined4 uVar6;
  undefined auVar5 [16];
  ulong uVar7;
  undefined auVar10 [14];
  byte bVar15;
  byte bVar16;
  byte bVar17;
  short sVar19;
  short sVar21;
  undefined auVar11 [16];
  byte bVar18;
  byte bVar20;
  short sVar22;
  short sVar23;
  undefined auVar12 [16];
  undefined auVar14 [16];
  ushort uVar24;
  ulong uVar25;
  undefined auVar27 [13];
  byte bVar35;
  byte bVar36;
  short sVar38;
  short sVar40;
  short sVar41;
  undefined auVar29 [16];
  byte bVar37;
  byte bVar39;
  short sVar42;
  undefined auVar31 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  ushort uVar48;
  short sVar49;
  undefined8 uVar51;
  ushort uVar56;
  ushort uVar57;
  ushort uVar59;
  ushort uVar60;
  ushort uVar61;
  undefined auVar54 [16];
  ushort uVar58;
  ushort uVar62;
  undefined auVar55 [16];
  undefined8 uVar64;
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  ushort uVar78;
  ushort uVar79;
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined auVar73 [16];
  undefined auVar74 [16];
  ushort uVar80;
  ushort uVar81;
  ushort uVar82;
  ushort uVar83;
  ushort uVar84;
  ushort uVar85;
  ushort uVar86;
  uint local_30;
  uint uStack_2c;
  long local_28;
  undefined auVar8 [12];
  undefined auVar9 [14];
  undefined auVar13 [16];
  undefined auVar26 [12];
  undefined auVar28 [14];
  undefined auVar32 [16];
  undefined auVar30 [16];
  undefined6 uVar50;
  undefined auVar52 [12];
  undefined auVar53 [14];
  ushort uVar63;
  ushort uVar70;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  auVar11 = *(undefined (*) [16])param_1;
  auVar29 = *(undefined (*) [16])(param_1 + 0x10);
  auVar44 = *(undefined (*) [16])(param_1 + 0x20);
  auVar12 = *(undefined (*) [16])(param_1 + 0x30);
  auVar5 = NEON_umin(auVar11,auVar29,1);
  auVar65 = NEON_umax(auVar11,auVar29,1);
  auVar54 = NEON_umin(auVar44,auVar12,1);
  auVar71 = NEON_umax(auVar44,auVar12,1);
  auVar5 = NEON_umin(auVar5,auVar54,1);
  auVar54 = NEON_umax(auVar65,auVar71,1);
  uVar6 = auVar5._8_4_;
  auVar66._4_4_ = uVar6;
  auVar66._0_4_ = uVar6;
  auVar66._8_4_ = uVar6;
  auVar66._12_4_ = uVar6;
  uVar6 = auVar54._8_4_;
  auVar72._4_4_ = uVar6;
  auVar72._0_4_ = uVar6;
  auVar72._8_4_ = uVar6;
  auVar72._12_4_ = uVar6;
  auVar65 = NEON_ext(auVar5,auVar66,8,1);
  auVar71 = NEON_ext(auVar54,auVar72,8,1);
  auVar65 = NEON_ext(auVar5,auVar65,0xc,1);
  auVar71 = NEON_ext(auVar54,auVar71,0xc,1);
  auVar65 = NEON_ext(auVar65,auVar65,0xc,1);
  auVar71 = NEON_ext(auVar71,auVar71,0xc,1);
  auVar65 = NEON_umin(auVar5,auVar65,1);
  auVar5 = NEON_ext(auVar54,auVar54,8,1);
  auVar54 = NEON_ext(auVar71,auVar71,8,1);
  auVar67._8_8_ = auVar65._8_8_;
  uVar51 = NEON_umax(auVar5._0_8_,auVar54._0_8_,1);
  auVar73._4_12_ = auVar65._4_12_;
  auVar73._0_4_ = auVar65._4_4_;
  auVar54._0_8_ = NEON_umax(uVar51,uVar51,1);
  auVar67._0_8_ = NEON_umin(auVar65._0_8_,auVar73._0_8_,1);
  auVar74._1_15_ = auVar73._1_15_;
  auVar74[0] = (char)auVar54._0_8_;
  uVar70 = auVar74._0_2_ & 0xff;
  auVar5._1_15_ = auVar54._1_15_;
  auVar5[0] = (char)((ulong)auVar54._0_8_ >> 0x20);
  uVar24 = auVar5._0_2_ & 0xff;
  uVar81 = (ushort)(byte)((ulong)auVar67._0_8_ >> 8);
  uVar82 = (ushort)(byte)((ulong)auVar67._0_8_ >> 0x10);
  uVar83 = (ushort)(byte)((ulong)auVar67._0_8_ >> 0x18);
  auVar68._1_15_ = auVar67._1_15_;
  auVar68[0] = (char)((ulong)auVar67._0_8_ >> 0x20);
  uVar63 = auVar68._0_2_ & 0xff;
  uVar48 = uVar70 - (byte)auVar67._0_8_;
  uVar75 = (ushort)(byte)((ulong)auVar54._0_8_ >> 8);
  uVar56 = uVar75 - uVar81;
  uVar76 = (ushort)(byte)((ulong)auVar54._0_8_ >> 0x10);
  uVar57 = uVar76 - uVar82;
  uVar77 = (ushort)(byte)((ulong)auVar54._0_8_ >> 0x18);
  uVar58 = uVar77 - uVar83;
  uVar59 = uVar24 - uVar63;
  uVar78 = (ushort)(byte)((ulong)auVar54._0_8_ >> 0x28);
  uVar84 = (ushort)(byte)((ulong)auVar67._0_8_ >> 0x28);
  uVar60 = uVar78 - uVar84;
  uVar79 = (ushort)(byte)((ulong)auVar54._0_8_ >> 0x30);
  uVar85 = (ushort)(byte)((ulong)auVar67._0_8_ >> 0x30);
  uVar61 = uVar79 - uVar85;
  uVar80 = (ushort)(byte)((ulong)auVar54._0_8_ >> 0x38);
  uVar86 = (ushort)(byte)((ulong)auVar67._0_8_ >> 0x38);
  uVar62 = uVar80 - uVar86;
  sVar49 = CONCAT11((byte)(uVar48 >> 0xc) & SUB161(_DAT_004c5a00,1),
                    (byte)(uVar48 >> 4) & SUB161(_DAT_004c5a00,0));
  uVar6 = CONCAT13((byte)(uVar56 >> 0xc) & SUB161(_DAT_004c5a00,3),
                   CONCAT12((byte)(uVar56 >> 4) & SUB161(_DAT_004c5a00,2),sVar49));
  uVar50 = CONCAT15((byte)(uVar57 >> 0xc) & SUB161(_DAT_004c5a00,5),
                    CONCAT14((byte)(uVar57 >> 4) & SUB161(_DAT_004c5a00,4),uVar6));
  uVar51 = CONCAT17((byte)(uVar58 >> 0xc) & SUB161(_DAT_004c5a00,7),
                    CONCAT16((byte)(uVar58 >> 4) & SUB161(_DAT_004c5a00,6),uVar50));
  auVar52._0_10_ =
       CONCAT19((byte)(uVar59 >> 0xc) & SUB161(_DAT_004c5a00,9),
                CONCAT18((byte)(uVar59 >> 4) & SUB161(_DAT_004c5a00,8),uVar51));
  auVar52[10] = (byte)(uVar60 >> 4) & SUB161(_DAT_004c5a00,10);
  auVar52[11] = (byte)(uVar60 >> 0xc) & SUB161(_DAT_004c5a00,0xb);
  auVar53[12] = (byte)(uVar61 >> 4) & SUB161(_DAT_004c5a00,0xc);
  auVar53._0_12_ = auVar52;
  auVar53[13] = (byte)(uVar61 >> 0xc) & SUB161(_DAT_004c5a00,0xd);
  auVar65[14] = (byte)(uVar62 >> 4) & SUB161(_DAT_004c5a00,0xe);
  auVar65._0_14_ = auVar53;
  auVar65[15] = (byte)(uVar62 >> 0xc) & SUB161(_DAT_004c5a00,0xf);
  sVar19 = (short)((uint)uVar6 >> 0x10);
  sVar21 = (short)((uint6)uVar50 >> 0x20);
  sVar22 = (short)((ulong)uVar51 >> 0x30);
  auVar69._0_8_ =
       CONCAT26(sVar22 + uVar83,
                CONCAT24(sVar21 + uVar82,
                         CONCAT22(sVar19 + uVar81,sVar49 + (ushort)(byte)auVar67._0_8_)));
  sVar23 = (short)((unkuint10)auVar52._0_10_ >> 0x40);
  auVar69._8_2_ = sVar23 + uVar63;
  auVar69._10_2_ = auVar52._10_2_ + uVar84;
  auVar69._12_2_ = auVar53._12_2_ + uVar85;
  auVar69._14_2_ = auVar65._14_2_ + uVar86;
  auVar71._0_8_ =
       CONCAT26(uVar77 - sVar22,CONCAT24(uVar76 - sVar21,CONCAT22(uVar75 - sVar19,uVar70 - sVar49)))
  ;
  auVar71._8_2_ = uVar24 - sVar23;
  auVar71._10_2_ = uVar78 - auVar52._10_2_;
  auVar71._12_2_ = uVar79 - auVar53._12_2_;
  auVar71._14_2_ = uVar80 - auVar65._14_2_;
  uVar64 = NEON_sqxtun(auVar69._0_8_,auVar69,2);
  uVar51 = NEON_sqxtun(auVar71._0_8_,auVar71,2);
  uStack_2c = (uint)uVar64;
  local_30 = (uint)uVar51;
  uVar3 = CONCAT44(uStack_2c >> 0x18,local_30) >> 0x18;
  iVar1 = (local_30 >> 0x18) - (uStack_2c >> 0x18);
  if (iVar1 != 0) {
    auVar55._8_4_ = 0xffffffe8;
    auVar55._0_8_ = 0xffffffe8ffffffe8;
    auVar55._12_4_ = 0xffffffe8;
    sVar49 = 0;
    if (iVar1 != 0) {
      sVar49 = (short)(0x7000 / iVar1);
    }
    auVar5 = NEON_ushl(auVar11,auVar55,4);
    auVar54 = NEON_ushl(auVar29,auVar55,4);
    auVar11 = NEON_ushl(auVar44,auVar55,4);
    auVar29 = NEON_ushl(auVar12,auVar55,4);
    auVar43._8_8_ = auVar5._8_8_;
    auVar43._0_8_ = NEON_sqxtun(auVar5._0_8_,auVar5,2);
    auVar11._0_8_ = NEON_sqxtun(auVar11._0_8_,auVar11,2);
    auVar44 = NEON_sqxtun2(auVar43,auVar54,2);
    bVar15 = (byte)((ulong)uVar64 >> 0x18);
    auVar11 = NEON_sqxtun2(auVar11,auVar29,2);
    uVar24 = (auVar44._0_2_ - (ushort)bVar15) * sVar49 * 2 - 0x1000;
    sVar38 = (auVar44._8_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000;
    sVar40 = (auVar44._10_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000;
    sVar41 = (auVar44._12_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000;
    sVar42 = (auVar44._14_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000;
    sVar19 = (auVar11._8_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000;
    sVar21 = (auVar11._10_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000;
    sVar22 = (auVar11._12_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000;
    sVar23 = (auVar11._14_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000;
    uVar25 = CONCAT17((char)((ushort)((auVar44._6_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000) >> 8)
                      ,(uint7)CONCAT15((char)((ushort)((auVar44._4_2_ - (ushort)bVar15) * sVar49 * 2
                                                      + -0x1000) >> 8),
                                       (uint5)CONCAT13((char)((ushort)((auVar44._2_2_ -
                                                                       (ushort)bVar15) * sVar49 * 2
                                                                      + -0x1000) >> 8),(uint3)uVar24
                                                      ))) ^ 0xe000e000e000e000;
    bVar39 = (byte)((ushort)sVar38 >> 8) ^ 0xe0;
    auVar26._0_10_ = CONCAT19(bVar39,CONCAT18((char)sVar38,uVar25));
    auVar26[10] = (undefined)sVar40;
    auVar26[11] = (byte)((ushort)sVar40 >> 8) ^ 0xe0;
    auVar28[12] = (undefined)sVar41;
    auVar28._0_12_ = auVar26;
    auVar28[13] = (byte)((ushort)sVar41 >> 8) ^ 0xe0;
    auVar30[14] = (undefined)sVar42;
    auVar30._0_14_ = auVar28;
    auVar30[15] = (byte)((ushort)sVar42 >> 8) ^ 0xe0;
    uVar7 = CONCAT17((char)((ushort)((auVar11._6_2_ - (ushort)bVar15) * sVar49 * 2 + -0x1000) >> 8),
                     (uint7)CONCAT15((char)((ushort)((auVar11._4_2_ - (ushort)bVar15) * sVar49 * 2 +
                                                    -0x1000) >> 8),
                                     (uint5)CONCAT13((char)((ushort)((auVar11._2_2_ - (ushort)bVar15
                                                                     ) * sVar49 * 2 + -0x1000) >> 8)
                                                     ,(uint3)(ushort)((auVar11._0_2_ -
                                                                      (ushort)bVar15) * sVar49 * 2 -
                                                                     0x1000)))) ^ 0xe000e000e000e000
    ;
    bVar20 = (byte)((ushort)sVar19 >> 8) ^ 0xe0;
    auVar8._0_10_ = CONCAT19(bVar20,CONCAT18((char)sVar19,uVar7));
    auVar8[10] = (undefined)sVar21;
    auVar8[11] = (byte)((ushort)sVar21 >> 8) ^ 0xe0;
    auVar9[12] = (undefined)sVar22;
    auVar9._0_12_ = auVar8;
    auVar9[13] = (byte)((ushort)sVar22 >> 8) ^ 0xe0;
    auVar29[14] = (undefined)sVar23;
    auVar29._0_14_ = auVar9;
    auVar29[15] = (byte)((ushort)sVar23 >> 8) ^ 0xe0;
    bVar35 = (byte)(uVar25 >> 0x18);
    bVar36 = (byte)(uVar25 >> 0x28);
    bVar37 = (byte)(uVar25 >> 0x38);
    bVar15 = (byte)(uVar7 >> 8);
    bVar16 = (byte)(uVar7 >> 0x18);
    bVar17 = (byte)(uVar7 >> 0x28);
    bVar18 = (byte)(uVar7 >> 0x38);
    auVar45._8_4_ = 0xfffffff3;
    auVar45._0_8_ = 0xfffffff3fffffff3;
    auVar45._12_4_ = 0xfffffff3;
    uVar25 = (ulong)CONCAT16((byte)((byte)((ushort)((short)(uVar25 >> 0x30) << 1) >> 8) | bVar37) >>
                             7 ^ bVar37 >> 5,
                             (uint6)CONCAT14((byte)((byte)((ushort)((short)(uVar25 >> 0x20) << 1) >>
                                                          8) | bVar36) >> 7 ^ bVar36 >> 5,
                                             (uint)CONCAT12((byte)((byte)((ushort)((short)(uVar25 >>
                                                                                          0x10) << 1
                                                                                  ) >> 8) | bVar35)
                                                            >> 7 ^ bVar35 >> 5,
                                                            (ushort)(byte)((byte)((byte)((ushort)((
                                                  short)uVar25 << 1) >> 8) | (byte)(uVar25 >> 8)) >>
                                                  7 ^ (byte)((byte)(uVar24 >> 8) ^ 0xe0) >> 5)))) ^
             0x1000100010001;
    auVar31[8] = (byte)((byte)((ushort)((short)((unkuint10)auVar26._0_10_ >> 0x40) << 1) >> 8) |
                       bVar39) >> 7 ^ bVar39 >> 5 ^ 1;
    auVar31._0_8_ = uVar25;
    auVar31[9] = 0;
    auVar31[10] = (byte)((byte)((ushort)(auVar26._10_2_ << 1) >> 8) | auVar26[11]) >> 7 ^
                  auVar26[11] >> 5 ^ 1;
    auVar31[11] = 0;
    auVar31[12] = (byte)((byte)((ushort)(auVar28._12_2_ << 1) >> 8) | auVar28[13]) >> 7 ^
                  auVar28[13] >> 5 ^ 1;
    auVar31[13] = 0;
    auVar31[14] = (byte)((byte)((ushort)(auVar30._14_2_ << 1) >> 8) | auVar30[15]) >> 7 ^
                  auVar30[15] >> 5 ^ 1;
    auVar31[15] = 0;
    uVar7 = (ulong)CONCAT16((byte)((byte)((ushort)((short)(uVar7 >> 0x30) << 1) >> 8) | bVar18) >> 7
                            ^ bVar18 >> 5,
                            (uint6)CONCAT14((byte)((byte)((ushort)((short)(uVar7 >> 0x20) << 1) >> 8
                                                         ) | bVar17) >> 7 ^ bVar17 >> 5,
                                            (uint)CONCAT12((byte)((byte)((ushort)((short)(uVar7 >> 
                                                  0x10) << 1) >> 8) | bVar16) >> 7 ^ bVar16 >> 5,
                                                  (ushort)(byte)((byte)((byte)((ushort)((short)uVar7
                                                                                       << 1) >> 8) |
                                                                       bVar15) >> 7 ^ bVar15 >> 5)))
                           ) ^ 0x1000100010001;
    auVar44[8] = (byte)((byte)((ushort)((short)((unkuint10)auVar8._0_10_ >> 0x40) << 1) >> 8) |
                       bVar20) >> 7 ^ bVar20 >> 5 ^ 1;
    auVar44._0_8_ = uVar7;
    auVar44[9] = 0;
    auVar44[10] = (byte)((byte)((ushort)(auVar8._10_2_ << 1) >> 8) | auVar8[11]) >> 7 ^
                  auVar8[11] >> 5 ^ 1;
    auVar44[11] = 0;
    auVar44[12] = (byte)((byte)((ushort)(auVar9._12_2_ << 1) >> 8) | auVar9[13]) >> 7 ^
                  auVar9[13] >> 5 ^ 1;
    auVar44[13] = 0;
    auVar44[14] = (byte)((byte)((ushort)(auVar29._14_2_ << 1) >> 8) | auVar29[15]) >> 7 ^
                  auVar29[15] >> 5 ^ 1;
    auVar44[15] = 0;
    auVar29 = NEON_ushl(auVar31,auVar45,4);
    auVar11 = NEON_ushl(auVar44,auVar45,4);
    auVar46._8_4_ = 0xfffffff6;
    auVar46._0_8_ = 0xfffffff6fffffff6;
    auVar46._12_4_ = 0xfffffff6;
    uVar25 = CONCAT35(0,CONCAT14((byte)(uVar25 >> 0x20) | auVar29[4],
                                 (uint)(byte)((byte)uVar25 | auVar29[0] & 0x3f)) & 0x3f00ffffff);
    auVar27[8] = auVar31[8] | auVar29[8] & 0x3f;
    auVar27._0_8_ = uVar25;
    auVar27._9_3_ = 0;
    auVar27[12] = auVar31[12] | auVar29[12] & 0x3f;
    auVar32._13_3_ = 0;
    auVar32._0_13_ = auVar27;
    auVar12._0_5_ =
         CONCAT14((byte)(uVar7 >> 0x20) | auVar11[4],(uint)(byte)((byte)uVar7 | auVar11[0] & 0x3f))
         & 0x3f00ffffff;
    auVar12._5_3_ = 0;
    auVar12[8] = auVar44[8] | auVar11[8] & 0x3f;
    auVar12._9_3_ = 0;
    auVar12[12] = auVar44[12] | auVar11[12] & 0x3f;
    auVar12._13_3_ = 0;
    auVar33._0_8_ = NEON_sqxtn(uVar25,auVar32,4);
    auVar33._8_5_ = auVar27._8_5_;
    auVar33._13_3_ = 0;
    auVar29 = NEON_sqxtn2(auVar33,auVar12,4);
    auVar11 = NEON_ushl(auVar29,auVar46,4);
    auVar10[8] = auVar11[8] | auVar29[8];
    auVar10[12] = auVar11[12] | auVar29[12];
    uVar25 = CONCAT26(0,CONCAT15(auVar11[5] | auVar29[5],
                                 CONCAT14(auVar11[4] | auVar29[4],
                                          (uint)(CONCAT11(auVar11[1] | auVar29[1],
                                                          auVar11[0] | auVar29[0]) & 0xfff))) &
                        0xfff00ffffff);
    auVar10._0_8_ = uVar25;
    auVar10[9] = (auVar11[9] | auVar29[9]) & 0xf;
    auVar10._10_2_ = 0;
    auVar10[13] = (auVar11[13] | auVar29[13]) & 0xf;
    auVar13._14_2_ = 0;
    auVar13._0_14_ = auVar10;
    auVar47._8_4_ = 0xfffffffc;
    auVar47._0_8_ = 0xfffffffcfffffffc;
    auVar47._12_4_ = 0xfffffffc;
    auVar14._0_8_ = NEON_sqxtun(uVar25,auVar13,4);
    auVar14._8_6_ = auVar10._8_6_;
    auVar14._14_2_ = 0;
    auVar11 = NEON_sqxtun2(auVar14,ZEXT816(0),4);
    auVar34[6] = auVar11[6];
    auVar34._0_6_ = (uint6)auVar11._2_2_ << 0x10;
    auVar34[7] = auVar11[7];
    auVar34._8_2_ = 0;
    auVar34[10] = auVar11[10];
    auVar34[11] = auVar11[11];
    auVar34._12_2_ = 0;
    auVar34[14] = auVar11[14];
    auVar34[15] = auVar11[15];
    auVar29 = NEON_ushl(auVar34,auVar47,4);
    uVar4 = CONCAT16(auVar29[6],
                     CONCAT15(auVar11[5] | auVar29[5],
                              CONCAT14(auVar11[4] | auVar29[4],
                                       CONCAT13(auVar29[3],
                                                CONCAT12(auVar29[2],
                                                         CONCAT11(auVar11[1] | auVar29[1],
                                                                  auVar11[0] | auVar29[0]))))));
    uVar3 = ((ulong)uVar4 & 0xffffffff) << 0x10 | uVar3 | ((ulong)uVar4 & 0xffffff00000000) << 8;
  }
  *(ulong *)param_2 = uVar3;
  *(uint *)(param_2 + 8) =
       ((local_30 & 0xfffff8) << 8 | local_30 >> 5 & 0x7ff) & 0xffe0 | local_30 >> 0x13 & 0x1f |
       ((uStack_2c & 0xfffff8) << 8 | uStack_2c >> 5 & 0x7e0 | uStack_2c >> 0x13 & 0x1f) << 0x10;
  emitColorIndices_Waveren(param_1,(uchar *)&uStack_2c,(uchar *)&local_30,param_2 + 0xc);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


