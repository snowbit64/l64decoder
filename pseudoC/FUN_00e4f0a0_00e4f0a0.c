// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4f0a0
// Entry Point: 00e4f0a0
// Size: 196 bytes
// Signature: undefined FUN_00e4f0a0(void)


void FUN_00e4f0a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined auVar6 [12];
  undefined auVar9 [12];
  int iVar17;
  int iVar18;
  undefined auVar10 [16];
  undefined auVar12 [16];
  undefined auVar7 [12];
  undefined auVar13 [16];
  undefined auVar8 [12];
  undefined auVar15 [16];
  int iVar19;
  undefined auVar20 [12];
  undefined auVar23 [16];
  undefined auVar25 [16];
  undefined auVar21 [12];
  undefined auVar27 [16];
  undefined auVar22 [12];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar11 [16];
  undefined auVar14 [16];
  undefined auVar16 [16];
  undefined auVar24 [16];
  undefined auVar26 [16];
  undefined auVar28 [16];
  
  lVar1 = 0;
  uVar3 = 0x300000002;
  uVar2 = 0x100000000;
  do {
    auVar10._0_5_ = CONCAT14((char)((ulong)uVar2 >> 0x20),(uint)((byte)uVar2 & 0x80)) & 0x80ffffffff
    ;
    auVar10._5_3_ = 0;
    auVar10[8] = (byte)uVar3 & 0x80;
    auVar10._9_3_ = 0;
    auVar10[12] = (byte)((ulong)uVar3 >> 0x20) & 0x80;
    auVar10._13_3_ = 0;
    auVar23._0_4_ = (int)uVar2 << 0x19;
    iVar4 = (int)((ulong)uVar2 >> 0x20);
    auVar23._4_4_ = iVar4 << 0x19;
    auVar23._8_4_ = (int)uVar3 << 0x19;
    iVar17 = (int)((ulong)uVar3 >> 0x20);
    auVar23._12_4_ = iVar17 << 0x19;
    uVar2 = CONCAT44(iVar4 + 4,(int)uVar2 + 4);
    uVar3 = CONCAT44(iVar17 + 4,(int)uVar3 + 4);
    auVar10 = NEON_cmeq(auVar10,0,2);
    auVar30 = NEON_cmlt(auVar23,0,4);
    uVar5 = CONCAT17(~auVar10[7],
                     CONCAT16(~auVar10[6],
                              CONCAT15(~auVar10[5],
                                       CONCAT14(~auVar10[4],
                                                CONCAT13(~auVar10[3],
                                                         CONCAT12(~auVar10[2],
                                                                  CONCAT11(~auVar10[1],~auVar10[0]))
                                                        ))))) & 0x4c11db704c11db7;
    auVar6[8] = ~auVar10[8] & 0xb7;
    auVar6[9] = ~auVar10[9] & 0x1d;
    auVar6[10] = ~auVar10[10] & 0xc1;
    auVar11[12] = ~auVar10[12] & 0xb7;
    auVar11[13] = ~auVar10[13] & 0x1d;
    auVar11[14] = ~auVar10[14] & 0xc1;
    iVar4 = CONCAT13((byte)(uVar5 >> 0x18) ^ (byte)((uint)auVar23._0_4_ >> 0x18),(int3)uVar5);
    auVar6._0_8_ = CONCAT17((byte)(uVar5 >> 0x38) ^ (byte)((uint)auVar23._4_4_ >> 0x18),
                            CONCAT16((char)(uVar5 >> 0x30),
                                     CONCAT15((char)(uVar5 >> 0x28),
                                              CONCAT14((char)(uVar5 >> 0x20),iVar4))));
    auVar6[11] = ~auVar10[11] & 4 ^ (byte)((uint)auVar23._8_4_ >> 0x18);
    auVar11._0_12_ = auVar6;
    auVar11[15] = ~auVar10[15] & 4 ^ (byte)((uint)auVar23._12_4_ >> 0x18);
    uVar5 = auVar30._0_8_ & 0x4c11db704c11db7;
    auVar12._0_4_ = iVar4 << 1;
    auVar12._4_4_ = (int)((ulong)auVar6._0_8_ >> 0x20) << 1;
    auVar12._8_4_ = auVar6._8_4_ << 1;
    auVar12._12_4_ = auVar11._12_4_ << 1;
    iVar4 = CONCAT13((byte)(uVar5 >> 0x18) ^ (byte)((uint)auVar12._0_4_ >> 0x18),
                     CONCAT12((byte)(uVar5 >> 0x10) ^ (byte)((uint)auVar12._0_4_ >> 0x10),
                              CONCAT11((byte)(uVar5 >> 8) ^ (byte)((uint)auVar12._0_4_ >> 8),
                                       (byte)uVar5 ^ (byte)auVar12._0_4_)));
    auVar20._0_8_ =
         CONCAT17((byte)(uVar5 >> 0x38) ^ (byte)((uint)auVar12._4_4_ >> 0x18),
                  CONCAT16((byte)(uVar5 >> 0x30) ^ (byte)((uint)auVar12._4_4_ >> 0x10),
                           CONCAT15((byte)(uVar5 >> 0x28) ^ (byte)((uint)auVar12._4_4_ >> 8),
                                    CONCAT14((byte)(uVar5 >> 0x20) ^ (byte)auVar12._4_4_,iVar4))));
    auVar20[8] = auVar30[8] & 0xb7 ^ (byte)auVar12._8_4_;
    auVar20[9] = auVar30[9] & 0x1d ^ (byte)((uint)auVar12._8_4_ >> 8);
    auVar20[10] = auVar30[10] & 0xc1 ^ (byte)((uint)auVar12._8_4_ >> 0x10);
    auVar20[11] = auVar30[11] & 4 ^ (byte)((uint)auVar12._8_4_ >> 0x18);
    auVar24[12] = auVar30[12] & 0xb7 ^ (byte)auVar12._12_4_;
    auVar24._0_12_ = auVar20;
    auVar24[13] = auVar30[13] & 0x1d ^ (byte)((uint)auVar12._12_4_ >> 8);
    auVar24[14] = auVar30[14] & 0xc1 ^ (byte)((uint)auVar12._12_4_ >> 0x10);
    auVar24[15] = auVar30[15] & 4 ^ (byte)((uint)auVar12._12_4_ >> 0x18);
    auVar10 = NEON_cmlt(auVar12,0,4);
    auVar25._0_4_ = iVar4 << 1;
    auVar25._4_4_ = (int)((ulong)auVar20._0_8_ >> 0x20) << 1;
    auVar25._8_4_ = auVar20._8_4_ << 1;
    auVar25._12_4_ = auVar24._12_4_ << 1;
    uVar5 = auVar10._0_8_ & 0x4c11db704c11db7;
    iVar4 = CONCAT13((byte)(uVar5 >> 0x18) ^ (byte)((uint)auVar25._0_4_ >> 0x18),
                     CONCAT12((byte)(uVar5 >> 0x10) ^ (byte)((uint)auVar25._0_4_ >> 0x10),
                              CONCAT11((byte)(uVar5 >> 8) ^ (byte)((uint)auVar25._0_4_ >> 8),
                                       (byte)uVar5 ^ (byte)auVar25._0_4_)));
    auVar7._0_8_ = CONCAT17((byte)(uVar5 >> 0x38) ^ (byte)((uint)auVar25._4_4_ >> 0x18),
                            CONCAT16((byte)(uVar5 >> 0x30) ^ (byte)((uint)auVar25._4_4_ >> 0x10),
                                     CONCAT15((byte)(uVar5 >> 0x28) ^
                                              (byte)((uint)auVar25._4_4_ >> 8),
                                              CONCAT14((byte)(uVar5 >> 0x20) ^ (byte)auVar25._4_4_,
                                                       iVar4))));
    auVar7[8] = auVar10[8] & 0xb7 ^ (byte)auVar25._8_4_;
    auVar7[9] = auVar10[9] & 0x1d ^ (byte)((uint)auVar25._8_4_ >> 8);
    auVar7[10] = auVar10[10] & 0xc1 ^ (byte)((uint)auVar25._8_4_ >> 0x10);
    auVar7[11] = auVar10[11] & 4 ^ (byte)((uint)auVar25._8_4_ >> 0x18);
    auVar30[12] = auVar10[12] & 0xb7 ^ (byte)auVar25._12_4_;
    auVar30._0_12_ = auVar7;
    auVar30[13] = auVar10[13] & 0x1d ^ (byte)((uint)auVar25._12_4_ >> 8);
    auVar30[14] = auVar10[14] & 0xc1 ^ (byte)((uint)auVar25._12_4_ >> 0x10);
    auVar30[15] = auVar10[15] & 4 ^ (byte)((uint)auVar25._12_4_ >> 0x18);
    auVar10 = NEON_cmlt(auVar25,0,4);
    auVar13._0_4_ = iVar4 << 1;
    auVar13._4_4_ = (int)((ulong)auVar7._0_8_ >> 0x20) << 1;
    auVar13._8_4_ = auVar7._8_4_ << 1;
    auVar13._12_4_ = auVar30._12_4_ << 1;
    uVar5 = auVar10._0_8_ & 0x4c11db704c11db7;
    iVar4 = CONCAT13((byte)(uVar5 >> 0x18) ^ (byte)((uint)auVar13._0_4_ >> 0x18),
                     CONCAT12((byte)(uVar5 >> 0x10) ^ (byte)((uint)auVar13._0_4_ >> 0x10),
                              CONCAT11((byte)(uVar5 >> 8) ^ (byte)((uint)auVar13._0_4_ >> 8),
                                       (byte)uVar5 ^ (byte)auVar13._0_4_)));
    auVar21._0_8_ =
         CONCAT17((byte)(uVar5 >> 0x38) ^ (byte)((uint)auVar13._4_4_ >> 0x18),
                  CONCAT16((byte)(uVar5 >> 0x30) ^ (byte)((uint)auVar13._4_4_ >> 0x10),
                           CONCAT15((byte)(uVar5 >> 0x28) ^ (byte)((uint)auVar13._4_4_ >> 8),
                                    CONCAT14((byte)(uVar5 >> 0x20) ^ (byte)auVar13._4_4_,iVar4))));
    auVar21[8] = auVar10[8] & 0xb7 ^ (byte)auVar13._8_4_;
    auVar21[9] = auVar10[9] & 0x1d ^ (byte)((uint)auVar13._8_4_ >> 8);
    auVar21[10] = auVar10[10] & 0xc1 ^ (byte)((uint)auVar13._8_4_ >> 0x10);
    auVar21[11] = auVar10[11] & 4 ^ (byte)((uint)auVar13._8_4_ >> 0x18);
    auVar26[12] = auVar10[12] & 0xb7 ^ (byte)auVar13._12_4_;
    auVar26._0_12_ = auVar21;
    auVar26[13] = auVar10[13] & 0x1d ^ (byte)((uint)auVar13._12_4_ >> 8);
    auVar26[14] = auVar10[14] & 0xc1 ^ (byte)((uint)auVar13._12_4_ >> 0x10);
    auVar26[15] = auVar10[15] & 4 ^ (byte)((uint)auVar13._12_4_ >> 0x18);
    auVar10 = NEON_cmlt(auVar13,0,4);
    auVar27._0_4_ = iVar4 << 1;
    auVar27._4_4_ = (int)((ulong)auVar21._0_8_ >> 0x20) << 1;
    auVar27._8_4_ = auVar21._8_4_ << 1;
    auVar27._12_4_ = auVar26._12_4_ << 1;
    uVar5 = auVar10._0_8_ & 0x4c11db704c11db7;
    iVar4 = CONCAT13((byte)(uVar5 >> 0x18) ^ (byte)((uint)auVar27._0_4_ >> 0x18),
                     CONCAT12((byte)(uVar5 >> 0x10) ^ (byte)((uint)auVar27._0_4_ >> 0x10),
                              CONCAT11((byte)(uVar5 >> 8) ^ (byte)((uint)auVar27._0_4_ >> 8),
                                       (byte)uVar5 ^ (byte)auVar27._0_4_)));
    auVar8._0_8_ = CONCAT17((byte)(uVar5 >> 0x38) ^ (byte)((uint)auVar27._4_4_ >> 0x18),
                            CONCAT16((byte)(uVar5 >> 0x30) ^ (byte)((uint)auVar27._4_4_ >> 0x10),
                                     CONCAT15((byte)(uVar5 >> 0x28) ^
                                              (byte)((uint)auVar27._4_4_ >> 8),
                                              CONCAT14((byte)(uVar5 >> 0x20) ^ (byte)auVar27._4_4_,
                                                       iVar4))));
    auVar8[8] = auVar10[8] & 0xb7 ^ (byte)auVar27._8_4_;
    auVar8[9] = auVar10[9] & 0x1d ^ (byte)((uint)auVar27._8_4_ >> 8);
    auVar8[10] = auVar10[10] & 0xc1 ^ (byte)((uint)auVar27._8_4_ >> 0x10);
    auVar8[11] = auVar10[11] & 4 ^ (byte)((uint)auVar27._8_4_ >> 0x18);
    auVar14[12] = auVar10[12] & 0xb7 ^ (byte)auVar27._12_4_;
    auVar14._0_12_ = auVar8;
    auVar14[13] = auVar10[13] & 0x1d ^ (byte)((uint)auVar27._12_4_ >> 8);
    auVar14[14] = auVar10[14] & 0xc1 ^ (byte)((uint)auVar27._12_4_ >> 0x10);
    auVar14[15] = auVar10[15] & 4 ^ (byte)((uint)auVar27._12_4_ >> 0x18);
    auVar10 = NEON_cmlt(auVar27,0,4);
    auVar15._0_4_ = iVar4 << 1;
    auVar15._4_4_ = (int)((ulong)auVar8._0_8_ >> 0x20) << 1;
    auVar15._8_4_ = auVar8._8_4_ << 1;
    auVar15._12_4_ = auVar14._12_4_ << 1;
    uVar5 = auVar10._0_8_ & 0x4c11db704c11db7;
    iVar4 = CONCAT13((byte)(uVar5 >> 0x18) ^ (byte)((uint)auVar15._0_4_ >> 0x18),
                     CONCAT12((byte)(uVar5 >> 0x10) ^ (byte)((uint)auVar15._0_4_ >> 0x10),
                              CONCAT11((byte)(uVar5 >> 8) ^ (byte)((uint)auVar15._0_4_ >> 8),
                                       (byte)uVar5 ^ (byte)auVar15._0_4_)));
    auVar22._0_8_ =
         CONCAT17((byte)(uVar5 >> 0x38) ^ (byte)((uint)auVar15._4_4_ >> 0x18),
                  CONCAT16((byte)(uVar5 >> 0x30) ^ (byte)((uint)auVar15._4_4_ >> 0x10),
                           CONCAT15((byte)(uVar5 >> 0x28) ^ (byte)((uint)auVar15._4_4_ >> 8),
                                    CONCAT14((byte)(uVar5 >> 0x20) ^ (byte)auVar15._4_4_,iVar4))));
    auVar22[8] = auVar10[8] & 0xb7 ^ (byte)auVar15._8_4_;
    auVar22[9] = auVar10[9] & 0x1d ^ (byte)((uint)auVar15._8_4_ >> 8);
    auVar22[10] = auVar10[10] & 0xc1 ^ (byte)((uint)auVar15._8_4_ >> 0x10);
    auVar22[11] = auVar10[11] & 4 ^ (byte)((uint)auVar15._8_4_ >> 0x18);
    auVar28[12] = auVar10[12] & 0xb7 ^ (byte)auVar15._12_4_;
    auVar28._0_12_ = auVar22;
    auVar28[13] = auVar10[13] & 0x1d ^ (byte)((uint)auVar15._12_4_ >> 8);
    auVar28[14] = auVar10[14] & 0xc1 ^ (byte)((uint)auVar15._12_4_ >> 0x10);
    auVar28[15] = auVar10[15] & 4 ^ (byte)((uint)auVar15._12_4_ >> 0x18);
    auVar10 = NEON_cmlt(auVar15,0,4);
    auVar29._0_4_ = iVar4 << 1;
    auVar29._4_4_ = (int)((ulong)auVar22._0_8_ >> 0x20) << 1;
    auVar29._8_4_ = auVar22._8_4_ << 1;
    auVar29._12_4_ = auVar28._12_4_ << 1;
    uVar5 = auVar10._0_8_ & 0x4c11db704c11db7;
    iVar4 = CONCAT13((byte)(uVar5 >> 0x18) ^ (byte)((uint)auVar29._0_4_ >> 0x18),
                     CONCAT12((byte)(uVar5 >> 0x10) ^ (byte)((uint)auVar29._0_4_ >> 0x10),
                              CONCAT11((byte)(uVar5 >> 8) ^ (byte)((uint)auVar29._0_4_ >> 8),
                                       (byte)uVar5 ^ (byte)auVar29._0_4_)));
    auVar9._0_8_ = CONCAT17((byte)(uVar5 >> 0x38) ^ (byte)((uint)auVar29._4_4_ >> 0x18),
                            CONCAT16((byte)(uVar5 >> 0x30) ^ (byte)((uint)auVar29._4_4_ >> 0x10),
                                     CONCAT15((byte)(uVar5 >> 0x28) ^
                                              (byte)((uint)auVar29._4_4_ >> 8),
                                              CONCAT14((byte)(uVar5 >> 0x20) ^ (byte)auVar29._4_4_,
                                                       iVar4))));
    auVar9[8] = auVar10[8] & 0xb7 ^ (byte)auVar29._8_4_;
    auVar9[9] = auVar10[9] & 0x1d ^ (byte)((uint)auVar29._8_4_ >> 8);
    auVar9[10] = auVar10[10] & 0xc1 ^ (byte)((uint)auVar29._8_4_ >> 0x10);
    auVar9[11] = auVar10[11] & 4 ^ (byte)((uint)auVar29._8_4_ >> 0x18);
    auVar16[12] = auVar10[12] & 0xb7 ^ (byte)auVar29._12_4_;
    auVar16._0_12_ = auVar9;
    auVar16[13] = auVar10[13] & 0x1d ^ (byte)((uint)auVar29._12_4_ >> 8);
    auVar16[14] = auVar10[14] & 0xc1 ^ (byte)((uint)auVar29._12_4_ >> 0x10);
    auVar16[15] = auVar10[15] & 4 ^ (byte)((uint)auVar29._12_4_ >> 0x18);
    auVar10 = NEON_cmlt(auVar29,0,4);
    iVar4 = iVar4 << 1;
    iVar17 = (int)((ulong)auVar9._0_8_ >> 0x20) << 1;
    iVar18 = auVar9._8_4_ << 1;
    iVar19 = auVar16._12_4_ << 1;
    uVar5 = auVar10._0_8_ & 0x4c11db704c11db7;
    (&DAT_02122f8c)[lVar1] = auVar10[8] & 0xb7 ^ (byte)iVar18;
    *(byte *)(lVar1 + 0x2122f8d) = auVar10[9] & 0x1d ^ (byte)((uint)iVar18 >> 8);
    *(byte *)(lVar1 + 0x2122f8e) = auVar10[10] & 0xc1 ^ (byte)((uint)iVar18 >> 0x10);
    *(byte *)(lVar1 + 0x2122f8f) = auVar10[11] & 4 ^ (byte)((uint)iVar18 >> 0x18);
    *(byte *)(lVar1 + 0x2122f90) = auVar10[12] & 0xb7 ^ (byte)iVar19;
    *(byte *)(lVar1 + 0x2122f91) = auVar10[13] & 0x1d ^ (byte)((uint)iVar19 >> 8);
    *(byte *)(lVar1 + 0x2122f92) = auVar10[14] & 0xc1 ^ (byte)((uint)iVar19 >> 0x10);
    *(byte *)(lVar1 + 0x2122f93) = auVar10[15] & 4 ^ (byte)((uint)iVar19 >> 0x18);
    (&DAT_02122f7c)[lVar1] = (byte)uVar5 ^ (byte)iVar4;
    *(byte *)(lVar1 + 0x2122f7d) = (byte)(uVar5 >> 8) ^ (byte)((uint)iVar4 >> 8);
    *(byte *)(lVar1 + 0x2122f7e) = (byte)(uVar5 >> 0x10) ^ (byte)((uint)iVar4 >> 0x10);
    *(byte *)(lVar1 + 0x2122f7f) = (byte)(uVar5 >> 0x18) ^ (byte)((uint)iVar4 >> 0x18);
    *(byte *)(lVar1 + 0x2122f80) = (byte)(uVar5 >> 0x20) ^ (byte)iVar17;
    *(byte *)(lVar1 + 0x2122f81) = (byte)(uVar5 >> 0x28) ^ (byte)((uint)iVar17 >> 8);
    *(byte *)(lVar1 + 0x2122f82) = (byte)(uVar5 >> 0x30) ^ (byte)((uint)iVar17 >> 0x10);
    *(byte *)(lVar1 + 0x2122f83) = (byte)(uVar5 >> 0x38) ^ (byte)((uint)iVar17 >> 0x18);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x400);
  return;
}


