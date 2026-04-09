// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_crc32
// Entry Point: 00d2825c
// Size: 332 bytes
// Signature: undefined enet_crc32(void)


uint enet_crc32(byte **param_1,long param_2)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  uint uVar15;
  uint uVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  byte *pbVar19;
  
  if ((DAT_02122a38 & 1) == 0) {
    uVar20 = 0x3000200010000;
    lVar17 = 0;
    do {
      uVar21 = NEON_rev16(uVar20,1);
      uVar20 = CONCAT26((short)((ulong)uVar20 >> 0x30) + 4,
                        CONCAT24((short)((ulong)uVar20 >> 0x20) + 4,
                                 CONCAT22((short)((ulong)uVar20 >> 0x10) + 4,(short)uVar20 + 4)));
      lVar1 = lVar17 + 0x10;
      uVar21 = NEON_rbit(uVar21,1);
      auVar24._0_5_ =
           CONCAT14((char)((ulong)uVar21 >> 0x18),(uint)((byte)((ulong)uVar21 >> 8) & 0x80)) &
           0x80ffffffff;
      auVar24._5_3_ = 0;
      auVar24[8] = (byte)((ulong)uVar21 >> 0x28) & 0x80;
      auVar24._9_3_ = 0;
      auVar24[12] = (byte)((ulong)uVar21 >> 0x38) & 0x80;
      auVar24._13_3_ = 0;
      auVar22._0_4_ = (uint)(ushort)((ushort)uVar21 >> 8) << 0x19;
      auVar22._4_4_ = (uint)(ushort)((ushort)((ulong)uVar21 >> 0x10) >> 8) << 0x19;
      auVar22._8_4_ = (uint)(ushort)((ushort)((ulong)uVar21 >> 0x20) >> 8) << 0x19;
      auVar22._12_4_ = (uint)(ushort)((ulong)uVar21 >> 0x38) << 0x19;
      auVar25 = NEON_cmeq(auVar24,0,2);
      auVar7[8] = 0xb7;
      auVar7._0_8_ = CONCAT17((char)((uint)auVar22._4_4_ >> 0x18),(uint7)auVar22._0_4_) ^
                     0x4c11db704c11db7;
      auVar7[9] = 0x1d;
      auVar7[10] = 0xc1;
      auVar7[11] = (byte)((uint)auVar22._8_4_ >> 0x18) ^ 4;
      auVar7[12] = 0xb7;
      auVar7[13] = 0x1d;
      auVar7[14] = 0xc1;
      auVar7[15] = (byte)((uint)auVar22._12_4_ >> 0x18) ^ 4;
      auVar23 = NEON_bif(auVar22,auVar7,auVar25,1);
      auVar26._0_4_ = auVar23._0_4_ << 1;
      auVar26._4_4_ = auVar23._4_4_ << 1;
      auVar26._8_4_ = auVar23._8_4_ << 1;
      auVar26._12_4_ = auVar23._12_4_ << 1;
      auVar25._8_8_ = 0xffffffffffffffff;
      auVar25._0_8_ = 0xffffffffffffffff;
      auVar25 = NEON_cmgt(auVar23,auVar25,4);
      auVar8[8] = (byte)auVar26._8_4_ ^ 0xb7;
      auVar8._0_8_ = CONCAT17((char)((uint)auVar26._4_4_ >> 0x18),
                              CONCAT16((char)((uint)auVar26._4_4_ >> 0x10),
                                       CONCAT15((char)((uint)auVar26._4_4_ >> 8),
                                                CONCAT14((char)auVar26._4_4_,auVar26._0_4_)))) ^
                     0x4c11db704c11db7;
      auVar8[9] = (byte)((uint)auVar26._8_4_ >> 8) ^ 0x1d;
      auVar8[10] = (byte)((uint)auVar26._8_4_ >> 0x10) ^ 0xc1;
      auVar8[11] = (byte)((uint)auVar26._8_4_ >> 0x18) ^ 4;
      auVar8[12] = (byte)auVar26._12_4_ ^ 0xb7;
      auVar8[13] = (byte)((uint)auVar26._12_4_ >> 8) ^ 0x1d;
      auVar8[14] = (byte)((uint)auVar26._12_4_ >> 0x10) ^ 0xc1;
      auVar8[15] = (byte)((uint)auVar26._12_4_ >> 0x18) ^ 4;
      auVar25 = NEON_bsl(auVar25,auVar26,auVar8,1);
      auVar27._0_4_ = auVar25._0_4_ << 1;
      auVar27._4_4_ = auVar25._4_4_ << 1;
      auVar27._8_4_ = auVar25._8_4_ << 1;
      auVar27._12_4_ = auVar25._12_4_ << 1;
      auVar23._8_8_ = 0xffffffffffffffff;
      auVar23._0_8_ = 0xffffffffffffffff;
      auVar25 = NEON_cmgt(auVar25,auVar23,4);
      auVar9[8] = (byte)auVar27._8_4_ ^ 0xb7;
      auVar9._0_8_ = CONCAT17((char)((uint)auVar27._4_4_ >> 0x18),
                              CONCAT16((char)((uint)auVar27._4_4_ >> 0x10),
                                       CONCAT15((char)((uint)auVar27._4_4_ >> 8),
                                                CONCAT14((char)auVar27._4_4_,auVar27._0_4_)))) ^
                     0x4c11db704c11db7;
      auVar9[9] = (byte)((uint)auVar27._8_4_ >> 8) ^ 0x1d;
      auVar9[10] = (byte)((uint)auVar27._8_4_ >> 0x10) ^ 0xc1;
      auVar9[11] = (byte)((uint)auVar27._8_4_ >> 0x18) ^ 4;
      auVar9[12] = (byte)auVar27._12_4_ ^ 0xb7;
      auVar9[13] = (byte)((uint)auVar27._12_4_ >> 8) ^ 0x1d;
      auVar9[14] = (byte)((uint)auVar27._12_4_ >> 0x10) ^ 0xc1;
      auVar9[15] = (byte)((uint)auVar27._12_4_ >> 0x18) ^ 4;
      auVar25 = NEON_bsl(auVar25,auVar27,auVar9,1);
      auVar28._0_4_ = auVar25._0_4_ << 1;
      auVar28._4_4_ = auVar25._4_4_ << 1;
      auVar28._8_4_ = auVar25._8_4_ << 1;
      auVar28._12_4_ = auVar25._12_4_ << 1;
      auVar2._8_8_ = 0xffffffffffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar25 = NEON_cmgt(auVar25,auVar2,4);
      auVar10[8] = (byte)auVar28._8_4_ ^ 0xb7;
      auVar10._0_8_ =
           CONCAT17((char)((uint)auVar28._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar28._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar28._4_4_ >> 8),
                                      CONCAT14((char)auVar28._4_4_,auVar28._0_4_)))) ^
           0x4c11db704c11db7;
      auVar10[9] = (byte)((uint)auVar28._8_4_ >> 8) ^ 0x1d;
      auVar10[10] = (byte)((uint)auVar28._8_4_ >> 0x10) ^ 0xc1;
      auVar10[11] = (byte)((uint)auVar28._8_4_ >> 0x18) ^ 4;
      auVar10[12] = (byte)auVar28._12_4_ ^ 0xb7;
      auVar10[13] = (byte)((uint)auVar28._12_4_ >> 8) ^ 0x1d;
      auVar10[14] = (byte)((uint)auVar28._12_4_ >> 0x10) ^ 0xc1;
      auVar10[15] = (byte)((uint)auVar28._12_4_ >> 0x18) ^ 4;
      auVar25 = NEON_bsl(auVar25,auVar28,auVar10,1);
      auVar29._0_4_ = auVar25._0_4_ << 1;
      auVar29._4_4_ = auVar25._4_4_ << 1;
      auVar29._8_4_ = auVar25._8_4_ << 1;
      auVar29._12_4_ = auVar25._12_4_ << 1;
      auVar3._8_8_ = 0xffffffffffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar25 = NEON_cmgt(auVar25,auVar3,4);
      auVar11[8] = (byte)auVar29._8_4_ ^ 0xb7;
      auVar11._0_8_ =
           CONCAT17((char)((uint)auVar29._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar29._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar29._4_4_ >> 8),
                                      CONCAT14((char)auVar29._4_4_,auVar29._0_4_)))) ^
           0x4c11db704c11db7;
      auVar11[9] = (byte)((uint)auVar29._8_4_ >> 8) ^ 0x1d;
      auVar11[10] = (byte)((uint)auVar29._8_4_ >> 0x10) ^ 0xc1;
      auVar11[11] = (byte)((uint)auVar29._8_4_ >> 0x18) ^ 4;
      auVar11[12] = (byte)auVar29._12_4_ ^ 0xb7;
      auVar11[13] = (byte)((uint)auVar29._12_4_ >> 8) ^ 0x1d;
      auVar11[14] = (byte)((uint)auVar29._12_4_ >> 0x10) ^ 0xc1;
      auVar11[15] = (byte)((uint)auVar29._12_4_ >> 0x18) ^ 4;
      auVar25 = NEON_bsl(auVar25,auVar29,auVar11,1);
      auVar30._0_4_ = auVar25._0_4_ << 1;
      auVar30._4_4_ = auVar25._4_4_ << 1;
      auVar30._8_4_ = auVar25._8_4_ << 1;
      auVar30._12_4_ = auVar25._12_4_ << 1;
      auVar4._8_8_ = 0xffffffffffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar25 = NEON_cmgt(auVar25,auVar4,4);
      auVar12[8] = (byte)auVar30._8_4_ ^ 0xb7;
      auVar12._0_8_ =
           CONCAT17((char)((uint)auVar30._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar30._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar30._4_4_ >> 8),
                                      CONCAT14((char)auVar30._4_4_,auVar30._0_4_)))) ^
           0x4c11db704c11db7;
      auVar12[9] = (byte)((uint)auVar30._8_4_ >> 8) ^ 0x1d;
      auVar12[10] = (byte)((uint)auVar30._8_4_ >> 0x10) ^ 0xc1;
      auVar12[11] = (byte)((uint)auVar30._8_4_ >> 0x18) ^ 4;
      auVar12[12] = (byte)auVar30._12_4_ ^ 0xb7;
      auVar12[13] = (byte)((uint)auVar30._12_4_ >> 8) ^ 0x1d;
      auVar12[14] = (byte)((uint)auVar30._12_4_ >> 0x10) ^ 0xc1;
      auVar12[15] = (byte)((uint)auVar30._12_4_ >> 0x18) ^ 4;
      auVar25 = NEON_bsl(auVar25,auVar30,auVar12,1);
      auVar31._0_4_ = auVar25._0_4_ << 1;
      auVar31._4_4_ = auVar25._4_4_ << 1;
      auVar31._8_4_ = auVar25._8_4_ << 1;
      auVar31._12_4_ = auVar25._12_4_ << 1;
      auVar5._8_8_ = 0xffffffffffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar25 = NEON_cmgt(auVar25,auVar5,4);
      auVar13[8] = (byte)auVar31._8_4_ ^ 0xb7;
      auVar13._0_8_ =
           CONCAT17((char)((uint)auVar31._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar31._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar31._4_4_ >> 8),
                                      CONCAT14((char)auVar31._4_4_,auVar31._0_4_)))) ^
           0x4c11db704c11db7;
      auVar13[9] = (byte)((uint)auVar31._8_4_ >> 8) ^ 0x1d;
      auVar13[10] = (byte)((uint)auVar31._8_4_ >> 0x10) ^ 0xc1;
      auVar13[11] = (byte)((uint)auVar31._8_4_ >> 0x18) ^ 4;
      auVar13[12] = (byte)auVar31._12_4_ ^ 0xb7;
      auVar13[13] = (byte)((uint)auVar31._12_4_ >> 8) ^ 0x1d;
      auVar13[14] = (byte)((uint)auVar31._12_4_ >> 0x10) ^ 0xc1;
      auVar13[15] = (byte)((uint)auVar31._12_4_ >> 0x18) ^ 4;
      auVar25 = NEON_bsl(auVar25,auVar31,auVar13,1);
      auVar32._0_4_ = auVar25._0_4_ << 1;
      auVar32._4_4_ = auVar25._4_4_ << 1;
      auVar32._8_4_ = auVar25._8_4_ << 1;
      auVar32._12_4_ = auVar25._12_4_ << 1;
      auVar6._8_8_ = 0xffffffffffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar25 = NEON_cmgt(auVar25,auVar6,4);
      auVar14[8] = (byte)auVar32._8_4_ ^ 0xb7;
      auVar14._0_8_ =
           CONCAT17((char)((uint)auVar32._4_4_ >> 0x18),
                    CONCAT16((char)((uint)auVar32._4_4_ >> 0x10),
                             CONCAT15((char)((uint)auVar32._4_4_ >> 8),
                                      CONCAT14((char)auVar32._4_4_,auVar32._0_4_)))) ^
           0x4c11db704c11db7;
      auVar14[9] = (byte)((uint)auVar32._8_4_ >> 8) ^ 0x1d;
      auVar14[10] = (byte)((uint)auVar32._8_4_ >> 0x10) ^ 0xc1;
      auVar14[11] = (byte)((uint)auVar32._8_4_ >> 0x18) ^ 4;
      auVar14[12] = (byte)auVar32._12_4_ ^ 0xb7;
      auVar14[13] = (byte)((uint)auVar32._12_4_ >> 8) ^ 0x1d;
      auVar14[14] = (byte)((uint)auVar32._12_4_ >> 0x10) ^ 0xc1;
      auVar14[15] = (byte)((uint)auVar32._12_4_ >> 0x18) ^ 4;
      auVar25 = NEON_bsl(auVar25,auVar32,auVar14,1);
      auVar25 = NEON_rev32(auVar25,1);
      auVar25 = NEON_rbit(auVar25,1);
      *(long *)(lVar17 + 0x2122a44) = auVar25._8_8_;
      *(long *)(&DAT_02122a3c + lVar17) = auVar25._0_8_;
      lVar17 = lVar1;
    } while (lVar1 != 0x400);
    DAT_02122a38 = 1;
  }
  uVar16 = 0xffffffff;
  uVar15 = 0xffffffff;
  if (param_2 != 0) {
    do {
      uVar16 = uVar15;
      param_2 = param_2 + -1;
      if (0 < (long)param_1[1]) {
        pbVar19 = *param_1;
        do {
          pbVar18 = pbVar19 + 1;
          uVar16 = *(uint *)(&DAT_02122a3c + (ulong)(uVar16 & 0xff ^ (uint)*pbVar19) * 4) ^
                   uVar16 >> 8;
          pbVar19 = pbVar18;
        } while (pbVar18 < *param_1 + (long)param_1[1]);
      }
      param_1 = param_1 + 2;
      uVar15 = uVar16;
    } while (param_2 != 0);
  }
  uVar16 = (~uVar16 & 0xff00ff00) >> 8 | (~uVar16 & 0xff00ff) << 8;
  return uVar16 >> 0x10 | uVar16 << 0x10;
}


