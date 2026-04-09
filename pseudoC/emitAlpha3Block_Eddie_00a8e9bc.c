// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitAlpha3Block_Eddie
// Entry Point: 00a8e9bc
// Size: 308 bytes
// Signature: undefined __cdecl emitAlpha3Block_Eddie(uchar * param_1, uchar param_2, uchar param_3, uchar * param_4)


/* DXTUtil::emitAlpha3Block_Eddie(unsigned char const*, unsigned char, unsigned char, unsigned
   char*) */

void DXTUtil::emitAlpha3Block_Eddie(uchar *param_1,uchar param_2,uchar param_3,uchar *param_4)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort uVar5;
  uint7 uVar6;
  ulong uVar7;
  byte bVar19;
  byte bVar21;
  undefined auVar9 [13];
  undefined auVar11 [14];
  byte bVar17;
  byte bVar18;
  short sVar20;
  short sVar22;
  undefined auVar12 [16];
  short sVar23;
  short sVar24;
  undefined auVar14 [16];
  undefined auVar16 [16];
  ulong uVar25;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  short sVar37;
  short sVar39;
  short sVar40;
  undefined auVar28 [16];
  undefined auVar29 [16];
  byte bVar36;
  byte bVar38;
  short sVar41;
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar8 [12];
  undefined auVar10 [14];
  undefined auVar13 [16];
  undefined auVar15 [16];
  undefined auVar26 [12];
  undefined auVar27 [14];
  undefined auVar30 [16];
  
  iVar2 = (uint)param_3 - (uint)param_2;
  uVar4 = (ulong)CONCAT11(param_2,param_3);
  if (iVar2 != 0) {
    auVar12._8_4_ = 0xffffffe8;
    auVar12._0_8_ = 0xffffffe8ffffffe8;
    auVar12._12_4_ = 0xffffffe8;
    sVar1 = 0;
    if (iVar2 != 0) {
      sVar1 = (short)(0x7000 / iVar2);
    }
    auVar28 = NEON_ushl(*(undefined (*) [16])param_1,auVar12,4);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    auVar42 = NEON_ushl(*(undefined (*) [16])(param_1 + 0x10),auVar12,4);
    auVar29._8_8_ = auVar28._8_8_;
    auVar29._0_8_ = NEON_sqxtun(auVar28._0_8_,auVar28,2);
    auVar46 = NEON_ushl(*(undefined (*) [16])(param_1 + 0x20),auVar12,4);
    auVar28[9] = (char)((ulong)uVar3 >> 8);
    auVar28._0_9_ = *(unkbyte9 *)(param_1 + 0x30);
    auVar28[10] = (char)((ulong)uVar3 >> 0x10);
    auVar28[11] = (char)((ulong)uVar3 >> 0x18);
    auVar28[12] = (char)((ulong)uVar3 >> 0x20);
    auVar28[13] = (char)((ulong)uVar3 >> 0x28);
    auVar28[14] = (char)((ulong)uVar3 >> 0x30);
    auVar28[15] = (char)((ulong)uVar3 >> 0x38);
    auVar12 = NEON_ushl(auVar28,auVar12,4);
    auVar28 = NEON_sqxtun2(auVar29,auVar42,2);
    auVar47._8_8_ = auVar46._8_8_;
    auVar47._0_8_ = NEON_sqxtun(auVar46._0_8_,auVar46,2);
    auVar12 = NEON_sqxtun2(auVar47,auVar12,2);
    uVar5 = (auVar28._0_2_ - (ushort)param_2) * sVar1 * 2 - 0x1000;
    sVar20 = (auVar28._8_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000;
    sVar22 = (auVar28._10_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000;
    sVar23 = (auVar28._12_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000;
    sVar24 = (auVar28._14_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000;
    sVar37 = (auVar12._8_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000;
    sVar39 = (auVar12._10_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000;
    sVar40 = (auVar12._12_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000;
    sVar41 = (auVar12._14_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000;
    uVar7 = CONCAT17((char)((ushort)((auVar28._6_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000) >> 8),
                     (uint7)CONCAT15((char)((ushort)((auVar28._4_2_ - (ushort)param_2) * sVar1 * 2 +
                                                    -0x1000) >> 8),
                                     (uint5)CONCAT13((char)((ushort)((auVar28._2_2_ -
                                                                     (ushort)param_2) * sVar1 * 2 +
                                                                    -0x1000) >> 8),(uint3)uVar5))) ^
            0xe000e000e000e000;
    bVar21 = (byte)((ushort)sVar20 >> 8) ^ 0xe0;
    auVar8._0_10_ = CONCAT19(bVar21,CONCAT18((char)sVar20,uVar7));
    auVar8[10] = (undefined)sVar22;
    auVar8[11] = (byte)((ushort)sVar22 >> 8) ^ 0xe0;
    auVar10[12] = (undefined)sVar23;
    auVar10._0_12_ = auVar8;
    auVar10[13] = (byte)((ushort)sVar23 >> 8) ^ 0xe0;
    auVar42[14] = (undefined)sVar24;
    auVar42._0_14_ = auVar10;
    auVar42[15] = (byte)((ushort)sVar24 >> 8) ^ 0xe0;
    uVar25 = CONCAT17((char)((ushort)((auVar12._6_2_ - (ushort)param_2) * sVar1 * 2 + -0x1000) >> 8)
                      ,(uint7)CONCAT15((char)((ushort)((auVar12._4_2_ - (ushort)param_2) * sVar1 * 2
                                                      + -0x1000) >> 8),
                                       (uint5)CONCAT13((char)((ushort)((auVar12._2_2_ -
                                                                       (ushort)param_2) * sVar1 * 2
                                                                      + -0x1000) >> 8),
                                                       (uint3)(ushort)((auVar12._0_2_ -
                                                                       (ushort)param_2) * sVar1 * 2
                                                                      - 0x1000)))) ^
             0xe000e000e000e000;
    bVar38 = (byte)((ushort)sVar37 >> 8) ^ 0xe0;
    auVar26._0_10_ = CONCAT19(bVar38,CONCAT18((char)sVar37,uVar25));
    auVar26[10] = (undefined)sVar39;
    auVar26[11] = (byte)((ushort)sVar39 >> 8) ^ 0xe0;
    auVar27[12] = (undefined)sVar40;
    auVar27._0_12_ = auVar26;
    auVar27[13] = (byte)((ushort)sVar40 >> 8) ^ 0xe0;
    auVar30[14] = (undefined)sVar41;
    auVar30._0_14_ = auVar27;
    auVar30[15] = (byte)((ushort)sVar41 >> 8) ^ 0xe0;
    bVar17 = (byte)(uVar7 >> 0x18);
    bVar18 = (byte)(uVar7 >> 0x28);
    bVar19 = (byte)(uVar7 >> 0x38);
    bVar33 = (byte)(uVar25 >> 8);
    bVar34 = (byte)(uVar25 >> 0x18);
    bVar35 = (byte)(uVar25 >> 0x28);
    bVar36 = (byte)(uVar25 >> 0x38);
    auVar43._8_4_ = 0xfffffff3;
    auVar43._0_8_ = 0xfffffff3fffffff3;
    auVar43._12_4_ = 0xfffffff3;
    auVar46._0_8_ =
         (ulong)CONCAT16((byte)((byte)((ushort)((short)(uVar7 >> 0x30) << 1) >> 8) | bVar19) >> 7 ^
                         bVar19 >> 5,
                         (uint6)CONCAT14((byte)((byte)((ushort)((short)(uVar7 >> 0x20) << 1) >> 8) |
                                               bVar18) >> 7 ^ bVar18 >> 5,
                                         (uint)CONCAT12((byte)((byte)((ushort)((short)(uVar7 >> 0x10
                                                                                      ) << 1) >> 8)
                                                              | bVar17) >> 7 ^ bVar17 >> 5,
                                                        (ushort)(byte)((byte)((byte)((ushort)((short
                                                  )uVar7 << 1) >> 8) | (byte)(uVar7 >> 8)) >> 7 ^
                                                  (byte)((byte)(uVar5 >> 8) ^ 0xe0) >> 5)))) ^
         0x1000100010001;
    auVar46[8] = (byte)((byte)((ushort)((short)((unkuint10)auVar8._0_10_ >> 0x40) << 1) >> 8) |
                       bVar21) >> 7 ^ bVar21 >> 5 ^ 1;
    auVar46[9] = 0;
    auVar46[10] = (byte)((byte)((ushort)(auVar8._10_2_ << 1) >> 8) | auVar8[11]) >> 7 ^
                  auVar8[11] >> 5 ^ 1;
    auVar46[11] = 0;
    auVar46[12] = (byte)((byte)((ushort)(auVar10._12_2_ << 1) >> 8) | auVar10[13]) >> 7 ^
                  auVar10[13] >> 5 ^ 1;
    auVar46[13] = 0;
    auVar46[14] = (byte)((byte)((ushort)(auVar42._14_2_ << 1) >> 8) | auVar42[15]) >> 7 ^
                  auVar42[15] >> 5 ^ 1;
    auVar46[15] = 0;
    auVar31._0_8_ =
         (ulong)CONCAT16((byte)((byte)((ushort)((short)(uVar25 >> 0x30) << 1) >> 8) | bVar36) >> 7 ^
                         bVar36 >> 5,
                         (uint6)CONCAT14((byte)((byte)((ushort)((short)(uVar25 >> 0x20) << 1) >> 8)
                                               | bVar35) >> 7 ^ bVar35 >> 5,
                                         (uint)CONCAT12((byte)((byte)((ushort)((short)(uVar25 >>
                                                                                      0x10) << 1) >>
                                                                     8) | bVar34) >> 7 ^ bVar34 >> 5
                                                        ,(ushort)(byte)((byte)((byte)((ushort)((
                                                  short)uVar25 << 1) >> 8) | bVar33) >> 7 ^
                                                  bVar33 >> 5)))) ^ 0x1000100010001;
    auVar31[8] = (byte)((byte)((ushort)((short)((unkuint10)auVar26._0_10_ >> 0x40) << 1) >> 8) |
                       bVar38) >> 7 ^ bVar38 >> 5 ^ 1;
    auVar31[9] = 0;
    auVar31[10] = (byte)((byte)((ushort)(auVar26._10_2_ << 1) >> 8) | auVar26[11]) >> 7 ^
                  auVar26[11] >> 5 ^ 1;
    auVar31[11] = 0;
    auVar31[12] = (byte)((byte)((ushort)(auVar27._12_2_ << 1) >> 8) | auVar27[13]) >> 7 ^
                  auVar27[13] >> 5 ^ 1;
    auVar31[13] = 0;
    auVar31[14] = (byte)((byte)((ushort)(auVar30._14_2_ << 1) >> 8) | auVar30[15]) >> 7 ^
                  auVar30[15] >> 5 ^ 1;
    auVar31[15] = 0;
    auVar28 = NEON_ushl(auVar46,auVar43,4);
    auVar12 = NEON_ushl(auVar31,auVar43,4);
    auVar48._8_4_ = 0xfffffffc;
    auVar48._0_8_ = 0xfffffffcfffffffc;
    auVar48._12_4_ = 0xfffffffc;
    auVar9._0_8_ = CONCAT35(0,CONCAT14((byte)(auVar46._0_8_ >> 0x20) | auVar28[4],
                                       (uint)(byte)((byte)auVar46._0_8_ | auVar28[0] & 0x3f)) &
                              0x3fffffffff);
    auVar9[8] = auVar46[8] | auVar28[8] & 0x3f;
    auVar9._9_3_ = 0;
    auVar9[12] = auVar46[12] | auVar28[12] & 0x3f;
    auVar13._13_3_ = 0;
    auVar13._0_13_ = auVar9;
    auVar44._8_4_ = 0xfffffff6;
    auVar44._0_8_ = 0xfffffff6fffffff6;
    auVar44._12_4_ = 0xfffffff6;
    auVar32._0_5_ =
         CONCAT14((byte)(auVar31._0_8_ >> 0x20) | auVar12[4],
                  (uint)(byte)((byte)auVar31._0_8_ | auVar12[0] & 0x3f)) & 0x3fffffffff;
    auVar32._5_3_ = 0;
    auVar32[8] = auVar31[8] | auVar12[8] & 0x3f;
    auVar32._9_3_ = 0;
    auVar32[12] = auVar31[12] | auVar12[12] & 0x3f;
    auVar32._13_3_ = 0;
    auVar14._0_8_ = NEON_sqxtn(auVar9._0_8_,auVar13,4);
    auVar14._8_5_ = auVar9._8_5_;
    auVar14._13_3_ = 0;
    auVar12 = NEON_sqxtn2(auVar14,auVar32,4);
    auVar28 = NEON_ushl(auVar12,auVar44,4);
    auVar11[8] = auVar28[8] | auVar12[8];
    auVar11[12] = auVar28[12] | auVar12[12];
    uVar7 = CONCAT26(0,CONCAT15(auVar28[5] | auVar12[5],
                                CONCAT14(auVar28[4] | auVar12[4],
                                         (uint)(CONCAT11(auVar28[1] | auVar12[1],
                                                         auVar28[0] | auVar12[0]) & 0xfff))) &
                       0xfff00ffffff);
    auVar11._0_8_ = uVar7;
    auVar11[9] = (auVar28[9] | auVar12[9]) & 0xf;
    auVar11._10_2_ = 0;
    auVar11[13] = (auVar28[13] | auVar12[13]) & 0xf;
    auVar15._14_2_ = 0;
    auVar15._0_14_ = auVar11;
    auVar16._0_8_ = NEON_sqxtun(uVar7,auVar15,4);
    auVar16._8_6_ = auVar11._8_6_;
    auVar16._14_2_ = 0;
    auVar12 = NEON_sqxtun2(auVar16,ZEXT816(0),4);
    auVar45[6] = auVar12[6];
    auVar45._0_6_ = (uint6)auVar12._2_2_ << 0x10;
    auVar45[7] = auVar12[7];
    auVar45._8_2_ = 0;
    auVar45[10] = auVar12[10];
    auVar45[11] = auVar12[11];
    auVar45._12_2_ = 0;
    auVar45[14] = auVar12[14];
    auVar45[15] = auVar12[15];
    auVar28 = NEON_ushl(auVar45,auVar48,4);
    uVar6 = CONCAT16(auVar28[6],
                     CONCAT15(auVar12[5] | auVar28[5],
                              CONCAT14(auVar12[4] | auVar28[4],
                                       CONCAT13(auVar28[3],
                                                CONCAT12(auVar28[2],
                                                         CONCAT11(auVar12[1] | auVar28[1],
                                                                  auVar12[0] | auVar28[0]))))));
    uVar4 = uVar4 | ((ulong)uVar6 & 0xffffffff) << 0x10 | ((ulong)uVar6 & 0xffffff00000000) << 8;
  }
  *(ulong *)param_4 = uVar4;
  return;
}


