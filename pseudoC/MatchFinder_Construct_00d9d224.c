// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MatchFinder_Construct
// Entry Point: 00d9d224
// Size: 256 bytes
// Signature: undefined MatchFinder_Construct(void)


void MatchFinder_Construct(long param_1)

{
  byte *pbVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined auVar14 [12];
  undefined auVar15 [12];
  undefined auVar16 [12];
  undefined auVar17 [12];
  undefined auVar18 [12];
  undefined auVar19 [12];
  undefined auVar20 [12];
  byte bVar32;
  undefined auVar21 [16];
  undefined auVar22 [16];
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  byte bVar30;
  byte bVar31;
  
  lVar8 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x20;
  *(undefined8 *)(param_1 + 0x70) = 1;
  *(undefined8 *)(param_1 + 0x60) = 4;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar9 = 0x100000000;
  uVar11 = 0x300000002;
  do {
    auVar21._0_5_ = ((uint5)(byte)((ulong)uVar9 >> 0x20) & 1) << 0x20;
    auVar21._5_7_ = 0;
    auVar21[12] = (byte)((ulong)uVar11 >> 0x20) & 1;
    auVar21._13_3_ = 0;
    uVar34 = (uint)uVar9 >> 1;
    uVar10 = (uint)((ulong)uVar9 >> 0x20);
    uVar35 = uVar10 >> 1;
    uVar36 = (uint)uVar11 >> 1;
    uVar12 = (uint)((ulong)uVar11 >> 0x20);
    uVar37 = uVar12 >> 1;
    auVar22 = NEON_neg(auVar21,4);
    uVar13 = auVar22._0_8_ & 0xedb88320edb88320;
    bVar30 = (byte)(uVar13 >> 0x18) ^ (byte)((ulong)uVar9 >> 0x18) >> 1;
    uVar34 = CONCAT13(bVar30,CONCAT12((byte)(uVar13 >> 0x10) ^ (byte)(uVar34 >> 0x10),
                                      CONCAT11((byte)(uVar13 >> 8) ^ (byte)(uVar34 >> 8),
                                               (byte)uVar13 ^ (byte)uVar34)));
    bVar31 = (byte)(uVar13 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x39);
    auVar14._0_8_ =
         CONCAT17(bVar31,CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)(uVar35 >> 0x10),
                                  CONCAT15((byte)(uVar13 >> 0x28) ^ (byte)(uVar35 >> 8),
                                           CONCAT14((byte)(uVar13 >> 0x20) ^ (byte)uVar35,uVar34))))
    ;
    auVar14[8] = auVar22[8] & 0x20 ^ (byte)uVar36;
    auVar14[9] = auVar22[9] & 0x83 ^ (byte)(uVar36 >> 8);
    auVar14[10] = auVar22[10] & 0xb8 ^ (byte)(uVar36 >> 0x10);
    auVar14[11] = auVar22[11] & 0xed ^ (byte)((ulong)uVar11 >> 0x18) >> 1;
    auVar23[12] = auVar22[12] & 0x20 ^ (byte)uVar37;
    auVar23._0_12_ = auVar14;
    auVar23[13] = auVar22[13] & 0x83 ^ (byte)(uVar37 >> 8);
    auVar23[14] = auVar22[14] & 0xb8 ^ (byte)(uVar37 >> 0x10);
    auVar23[15] = auVar22[15] & 0xed ^ (byte)((ulong)uVar11 >> 0x39);
    auVar22._5_3_ = 0;
    auVar22._0_5_ = ((uint5)(byte)uVar35 & 1) << 0x20;
    auVar22[8] = (byte)uVar36 & 1;
    auVar22._9_3_ = 0;
    auVar22[12] = (byte)uVar37 & 1;
    auVar22._13_3_ = 0;
    auVar22 = NEON_neg(auVar22,4);
    uVar34 = uVar34 >> 1;
    uVar36 = (uint)((ulong)auVar14._0_8_ >> 0x21);
    uVar37 = auVar14._8_4_ >> 1;
    uVar33 = auVar23._12_4_ >> 1;
    uVar13 = auVar22._0_8_ & 0xedb88320edb88320;
    bVar32 = (byte)uVar33;
    bVar30 = (byte)(uVar13 >> 0x18) ^ bVar30 >> 1;
    uVar35 = CONCAT13(bVar30,CONCAT12((byte)(uVar13 >> 0x10) ^ (byte)(uVar34 >> 0x10),
                                      CONCAT11((byte)(uVar13 >> 8) ^ (byte)(uVar34 >> 8),
                                               (byte)uVar13 ^ (byte)uVar34)));
    bVar31 = (byte)(uVar13 >> 0x38) ^ bVar31 >> 1;
    auVar15._0_8_ =
         CONCAT17(bVar31,CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)(uVar36 >> 0x10),
                                  CONCAT15((byte)(uVar13 >> 0x28) ^ (byte)(uVar36 >> 8),
                                           CONCAT14((byte)(uVar13 >> 0x20) ^ (byte)uVar36,uVar35))))
    ;
    auVar15[8] = auVar22[8] & 0x20 ^ (byte)uVar37;
    auVar15[9] = auVar22[9] & 0x83 ^ (byte)(uVar37 >> 8);
    auVar15[10] = auVar22[10] & 0xb8 ^ (byte)(uVar37 >> 0x10);
    auVar15[11] = auVar22[11] & 0xed ^ auVar14[11] >> 1;
    auVar24[12] = auVar22[12] & 0x20 ^ bVar32;
    auVar24._0_12_ = auVar15;
    auVar24[13] = auVar22[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar24[14] = auVar22[14] & 0xb8 ^ (byte)((uint3)(auVar23._13_3_ >> 1) >> 8);
    auVar24[15] = auVar22[15] & 0xed ^ auVar23[15] >> 1;
    auVar2._5_3_ = 0;
    auVar2._0_5_ = CONCAT14((byte)uVar36,(uint)((byte)uVar34 & 1)) & 0x1ffffffff;
    auVar2[8] = (byte)uVar37 & 1;
    auVar2._9_3_ = 0;
    auVar2[12] = bVar32 & 1;
    auVar2._13_3_ = 0;
    auVar22 = NEON_neg(auVar2,4);
    uVar35 = uVar35 >> 1;
    uVar36 = (uint)((ulong)auVar15._0_8_ >> 0x21);
    uVar37 = auVar15._8_4_ >> 1;
    uVar33 = auVar24._12_4_ >> 1;
    uVar13 = auVar22._0_8_ & 0xedb88320edb88320;
    bVar32 = (byte)uVar33;
    bVar30 = (byte)(uVar13 >> 0x18) ^ bVar30 >> 1;
    uVar34 = CONCAT13(bVar30,CONCAT12((byte)(uVar13 >> 0x10) ^ (byte)(uVar35 >> 0x10),
                                      CONCAT11((byte)(uVar13 >> 8) ^ (byte)(uVar35 >> 8),
                                               (byte)uVar13 ^ (byte)uVar35)));
    bVar31 = (byte)(uVar13 >> 0x38) ^ bVar31 >> 1;
    auVar16._0_8_ =
         CONCAT17(bVar31,CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)(uVar36 >> 0x10),
                                  CONCAT15((byte)(uVar13 >> 0x28) ^ (byte)(uVar36 >> 8),
                                           CONCAT14((byte)(uVar13 >> 0x20) ^ (byte)uVar36,uVar34))))
    ;
    auVar16[8] = auVar22[8] & 0x20 ^ (byte)uVar37;
    auVar16[9] = auVar22[9] & 0x83 ^ (byte)(uVar37 >> 8);
    auVar16[10] = auVar22[10] & 0xb8 ^ (byte)(uVar37 >> 0x10);
    auVar16[11] = auVar22[11] & 0xed ^ auVar15[11] >> 1;
    auVar25[12] = auVar22[12] & 0x20 ^ bVar32;
    auVar25._0_12_ = auVar16;
    auVar25[13] = auVar22[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar25[14] = auVar22[14] & 0xb8 ^ (byte)((uint3)(auVar24._13_3_ >> 1) >> 8);
    auVar25[15] = auVar22[15] & 0xed ^ auVar24[15] >> 1;
    auVar3._5_3_ = 0;
    auVar3._0_5_ = CONCAT14((byte)uVar36,(uint)((byte)uVar35 & 1)) & 0x1ffffffff;
    auVar3[8] = (byte)uVar37 & 1;
    auVar3._9_3_ = 0;
    auVar3[12] = bVar32 & 1;
    auVar3._13_3_ = 0;
    auVar22 = NEON_neg(auVar3,4);
    uVar34 = uVar34 >> 1;
    uVar36 = (uint)((ulong)auVar16._0_8_ >> 0x21);
    uVar37 = auVar16._8_4_ >> 1;
    uVar33 = auVar25._12_4_ >> 1;
    uVar13 = auVar22._0_8_ & 0xedb88320edb88320;
    bVar32 = (byte)uVar33;
    bVar30 = (byte)(uVar13 >> 0x18) ^ bVar30 >> 1;
    uVar35 = CONCAT13(bVar30,CONCAT12((byte)(uVar13 >> 0x10) ^ (byte)(uVar34 >> 0x10),
                                      CONCAT11((byte)(uVar13 >> 8) ^ (byte)(uVar34 >> 8),
                                               (byte)uVar13 ^ (byte)uVar34)));
    bVar31 = (byte)(uVar13 >> 0x38) ^ bVar31 >> 1;
    auVar17._0_8_ =
         CONCAT17(bVar31,CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)(uVar36 >> 0x10),
                                  CONCAT15((byte)(uVar13 >> 0x28) ^ (byte)(uVar36 >> 8),
                                           CONCAT14((byte)(uVar13 >> 0x20) ^ (byte)uVar36,uVar35))))
    ;
    auVar17[8] = auVar22[8] & 0x20 ^ (byte)uVar37;
    auVar17[9] = auVar22[9] & 0x83 ^ (byte)(uVar37 >> 8);
    auVar17[10] = auVar22[10] & 0xb8 ^ (byte)(uVar37 >> 0x10);
    auVar17[11] = auVar22[11] & 0xed ^ auVar16[11] >> 1;
    auVar26[12] = auVar22[12] & 0x20 ^ bVar32;
    auVar26._0_12_ = auVar17;
    auVar26[13] = auVar22[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar26[14] = auVar22[14] & 0xb8 ^ (byte)((uint3)(auVar25._13_3_ >> 1) >> 8);
    auVar26[15] = auVar22[15] & 0xed ^ auVar25[15] >> 1;
    auVar4._5_3_ = 0;
    auVar4._0_5_ = CONCAT14((byte)uVar36,(uint)((byte)uVar34 & 1)) & 0x1ffffffff;
    auVar4[8] = (byte)uVar37 & 1;
    auVar4._9_3_ = 0;
    auVar4[12] = bVar32 & 1;
    auVar4._13_3_ = 0;
    auVar22 = NEON_neg(auVar4,4);
    uVar35 = uVar35 >> 1;
    uVar36 = (uint)((ulong)auVar17._0_8_ >> 0x21);
    uVar37 = auVar17._8_4_ >> 1;
    uVar33 = auVar26._12_4_ >> 1;
    uVar13 = auVar22._0_8_ & 0xedb88320edb88320;
    bVar32 = (byte)uVar33;
    bVar30 = (byte)(uVar13 >> 0x18) ^ bVar30 >> 1;
    uVar34 = CONCAT13(bVar30,CONCAT12((byte)(uVar13 >> 0x10) ^ (byte)(uVar35 >> 0x10),
                                      CONCAT11((byte)(uVar13 >> 8) ^ (byte)(uVar35 >> 8),
                                               (byte)uVar13 ^ (byte)uVar35)));
    bVar31 = (byte)(uVar13 >> 0x38) ^ bVar31 >> 1;
    auVar18._0_8_ =
         CONCAT17(bVar31,CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)(uVar36 >> 0x10),
                                  CONCAT15((byte)(uVar13 >> 0x28) ^ (byte)(uVar36 >> 8),
                                           CONCAT14((byte)(uVar13 >> 0x20) ^ (byte)uVar36,uVar34))))
    ;
    auVar18[8] = auVar22[8] & 0x20 ^ (byte)uVar37;
    auVar18[9] = auVar22[9] & 0x83 ^ (byte)(uVar37 >> 8);
    auVar18[10] = auVar22[10] & 0xb8 ^ (byte)(uVar37 >> 0x10);
    auVar18[11] = auVar22[11] & 0xed ^ auVar17[11] >> 1;
    auVar27[12] = auVar22[12] & 0x20 ^ bVar32;
    auVar27._0_12_ = auVar18;
    auVar27[13] = auVar22[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar27[14] = auVar22[14] & 0xb8 ^ (byte)((uint3)(auVar26._13_3_ >> 1) >> 8);
    auVar27[15] = auVar22[15] & 0xed ^ auVar26[15] >> 1;
    auVar5._5_3_ = 0;
    auVar5._0_5_ = CONCAT14((byte)uVar36,(uint)((byte)uVar35 & 1)) & 0x1ffffffff;
    auVar5[8] = (byte)uVar37 & 1;
    auVar5._9_3_ = 0;
    auVar5[12] = bVar32 & 1;
    auVar5._13_3_ = 0;
    auVar22 = NEON_neg(auVar5,4);
    uVar34 = uVar34 >> 1;
    uVar36 = (uint)((ulong)auVar18._0_8_ >> 0x21);
    uVar37 = auVar18._8_4_ >> 1;
    uVar33 = auVar27._12_4_ >> 1;
    uVar13 = auVar22._0_8_ & 0xedb88320edb88320;
    bVar32 = (byte)uVar33;
    bVar30 = (byte)(uVar13 >> 0x18) ^ bVar30 >> 1;
    uVar35 = CONCAT13(bVar30,CONCAT12((byte)(uVar13 >> 0x10) ^ (byte)(uVar34 >> 0x10),
                                      CONCAT11((byte)(uVar13 >> 8) ^ (byte)(uVar34 >> 8),
                                               (byte)uVar13 ^ (byte)uVar34)));
    bVar31 = (byte)(uVar13 >> 0x38) ^ bVar31 >> 1;
    auVar19._0_8_ =
         CONCAT17(bVar31,CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)(uVar36 >> 0x10),
                                  CONCAT15((byte)(uVar13 >> 0x28) ^ (byte)(uVar36 >> 8),
                                           CONCAT14((byte)(uVar13 >> 0x20) ^ (byte)uVar36,uVar35))))
    ;
    auVar19[8] = auVar22[8] & 0x20 ^ (byte)uVar37;
    auVar19[9] = auVar22[9] & 0x83 ^ (byte)(uVar37 >> 8);
    auVar19[10] = auVar22[10] & 0xb8 ^ (byte)(uVar37 >> 0x10);
    auVar19[11] = auVar22[11] & 0xed ^ auVar18[11] >> 1;
    auVar28[12] = auVar22[12] & 0x20 ^ bVar32;
    auVar28._0_12_ = auVar19;
    auVar28[13] = auVar22[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar28[14] = auVar22[14] & 0xb8 ^ (byte)((uint3)(auVar27._13_3_ >> 1) >> 8);
    auVar28[15] = auVar22[15] & 0xed ^ auVar27[15] >> 1;
    auVar6._5_3_ = 0;
    auVar6._0_5_ = CONCAT14((byte)uVar36,(uint)((byte)uVar34 & 1)) & 0x1ffffffff;
    auVar6[8] = (byte)uVar37 & 1;
    auVar6._9_3_ = 0;
    auVar6[12] = bVar32 & 1;
    auVar6._13_3_ = 0;
    auVar22 = NEON_neg(auVar6,4);
    uVar35 = uVar35 >> 1;
    uVar36 = (uint)((ulong)auVar19._0_8_ >> 0x21);
    uVar37 = auVar19._8_4_ >> 1;
    uVar33 = auVar28._12_4_ >> 1;
    uVar13 = auVar22._0_8_ & 0xedb88320edb88320;
    bVar32 = (byte)uVar33;
    bVar30 = (byte)(uVar13 >> 0x18) ^ bVar30 >> 1;
    uVar34 = CONCAT13(bVar30,CONCAT12((byte)(uVar13 >> 0x10) ^ (byte)(uVar35 >> 0x10),
                                      CONCAT11((byte)(uVar13 >> 8) ^ (byte)(uVar35 >> 8),
                                               (byte)uVar13 ^ (byte)uVar35)));
    bVar31 = (byte)(uVar13 >> 0x38) ^ bVar31 >> 1;
    auVar20._0_8_ =
         CONCAT17(bVar31,CONCAT16((byte)(uVar13 >> 0x30) ^ (byte)(uVar36 >> 0x10),
                                  CONCAT15((byte)(uVar13 >> 0x28) ^ (byte)(uVar36 >> 8),
                                           CONCAT14((byte)(uVar13 >> 0x20) ^ (byte)uVar36,uVar34))))
    ;
    auVar20[8] = auVar22[8] & 0x20 ^ (byte)uVar37;
    auVar20[9] = auVar22[9] & 0x83 ^ (byte)(uVar37 >> 8);
    auVar20[10] = auVar22[10] & 0xb8 ^ (byte)(uVar37 >> 0x10);
    auVar20[11] = auVar22[11] & 0xed ^ auVar19[11] >> 1;
    auVar29[12] = auVar22[12] & 0x20 ^ bVar32;
    auVar29._0_12_ = auVar20;
    auVar29[13] = auVar22[13] & 0x83 ^ (byte)(uVar33 >> 8);
    auVar29[14] = auVar22[14] & 0xb8 ^ (byte)((uint3)(auVar28._13_3_ >> 1) >> 8);
    auVar29[15] = auVar22[15] & 0xed ^ auVar28[15] >> 1;
    auVar7._5_3_ = 0;
    auVar7._0_5_ = CONCAT14((byte)uVar36,(uint)((byte)uVar35 & 1)) & 0x1ffffffff;
    auVar7[8] = (byte)uVar37 & 1;
    auVar7._9_3_ = 0;
    auVar7[12] = bVar32 & 1;
    auVar7._13_3_ = 0;
    auVar22 = NEON_neg(auVar7,4);
    uVar34 = uVar34 >> 1;
    uVar35 = (uint)((ulong)auVar20._0_8_ >> 0x21);
    uVar36 = auVar20._8_4_ >> 1;
    uVar37 = auVar29._12_4_ >> 1;
    uVar13 = auVar22._0_8_ & 0xedb88320edb88320;
    pbVar1 = (byte *)(param_1 + 0x8c + lVar8);
    pbVar1[0x10] = auVar22[8] & 0x20 ^ (byte)uVar36;
    pbVar1[0x11] = auVar22[9] & 0x83 ^ (byte)(uVar36 >> 8);
    pbVar1[0x12] = auVar22[10] & 0xb8 ^ (byte)(uVar36 >> 0x10);
    pbVar1[0x13] = auVar22[11] & 0xed ^ auVar20[11] >> 1;
    pbVar1[0x14] = auVar22[12] & 0x20 ^ (byte)uVar37;
    pbVar1[0x15] = auVar22[13] & 0x83 ^ (byte)(uVar37 >> 8);
    pbVar1[0x16] = auVar22[14] & 0xb8 ^ (byte)((uint3)(auVar29._13_3_ >> 1) >> 8);
    pbVar1[0x17] = auVar22[15] & 0xed ^ auVar29[15] >> 1;
    *pbVar1 = (byte)uVar13 ^ (byte)uVar34;
    pbVar1[1] = (byte)(uVar13 >> 8) ^ (byte)(uVar34 >> 8);
    pbVar1[2] = (byte)(uVar13 >> 0x10) ^ (byte)(uVar34 >> 0x10);
    pbVar1[3] = (byte)(uVar13 >> 0x18) ^ bVar30 >> 1;
    pbVar1[4] = (byte)(uVar13 >> 0x20) ^ (byte)uVar35;
    pbVar1[5] = (byte)(uVar13 >> 0x28) ^ (byte)(uVar35 >> 8);
    pbVar1[6] = (byte)(uVar13 >> 0x30) ^ (byte)(uVar35 >> 0x10);
    pbVar1[7] = (byte)(uVar13 >> 0x38) ^ bVar31 >> 1;
    lVar8 = lVar8 + 0x10;
    uVar9 = CONCAT44(uVar10 + 4,(uint)uVar9 + 4);
    uVar11 = CONCAT44(uVar12 + 4,(uint)uVar11 + 4);
  } while (lVar8 != 0x400);
  return;
}


