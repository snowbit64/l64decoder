// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMasterServerId
// Entry Point: 00b430b0
// Size: 392 bytes
// Signature: undefined __cdecl getMasterServerId(uint param_1, ushort param_2)


/* MasterServerUtil::getMasterServerId(unsigned int, unsigned short) */

uint MasterServerUtil::getMasterServerId(uint param_1,ushort param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  
  if (CRC32::s_tableIsInit == '\0') {
    lVar6 = 0;
    uVar7 = 0x100000000;
    uVar9 = 0x300000002;
    do {
      auVar11._0_5_ = ((uint5)(byte)((ulong)uVar7 >> 0x20) & 1) << 0x20;
      auVar11._5_7_ = 0;
      auVar11[12] = (byte)((ulong)uVar9 >> 0x20) & 1;
      auVar11._13_3_ = 0;
      auVar21._0_4_ = (uint)uVar7 >> 1;
      uVar8 = (uint)((ulong)uVar7 >> 0x20);
      auVar21._4_4_ = uVar8 >> 1;
      auVar21._8_4_ = (uint)uVar9 >> 1;
      uVar10 = (uint)((ulong)uVar9 >> 0x20);
      auVar21._12_4_ = uVar10 >> 1;
      auVar12 = NEON_cmeq(auVar11,0,2);
      auVar13[8] = (byte)auVar21._8_4_ ^ 0x20;
      auVar13._0_8_ =
           CONCAT17((byte)((ulong)uVar7 >> 0x39),
                    CONCAT16((char)(auVar21._4_4_ >> 0x10),
                             CONCAT15((char)(auVar21._4_4_ >> 8),
                                      CONCAT14((char)auVar21._4_4_,
                                               CONCAT13((byte)((ulong)uVar7 >> 0x18) >> 1,
                                                        (int3)auVar21._0_4_))))) ^
           0xedb88320edb88320;
      auVar13[9] = (byte)(auVar21._8_4_ >> 8) ^ 0x83;
      auVar13[10] = (byte)(auVar21._8_4_ >> 0x10) ^ 0xb8;
      auVar13[11] = (byte)((ulong)uVar9 >> 0x18) >> 1 ^ 0xed;
      auVar13[12] = (byte)auVar21._12_4_ ^ 0x20;
      auVar13[13] = (byte)(auVar21._12_4_ >> 8) ^ 0x83;
      auVar13[14] = (byte)(auVar21._12_4_ >> 0x10) ^ 0xb8;
      auVar13[15] = (byte)((ulong)uVar9 >> 0x39) ^ 0xed;
      auVar13 = NEON_bsl(auVar12,auVar21,auVar13,1);
      auVar22._0_5_ = CONCAT14(auVar13[4],(uint)(auVar13[0] & 1)) & 0x1ffffffff;
      auVar22._5_3_ = 0;
      auVar22[8] = auVar13[8] & 1;
      auVar22._9_3_ = 0;
      auVar22[12] = auVar13[12] & 1;
      auVar22._13_3_ = 0;
      auVar14._0_4_ = auVar13._0_4_ >> 1;
      auVar14._4_4_ = auVar13._4_4_ >> 1;
      auVar14._8_4_ = auVar13._8_4_ >> 1;
      auVar14._12_4_ = auVar13._12_4_ >> 1;
      auVar23 = NEON_cmeq(auVar22,0,2);
      auVar12[8] = (byte)auVar14._8_4_ ^ 0x20;
      auVar12._0_8_ =
           CONCAT17(auVar13[7] >> 1,
                    CONCAT16((char)(auVar14._4_4_ >> 0x10),
                             CONCAT15((char)(auVar14._4_4_ >> 8),
                                      CONCAT14((char)auVar14._4_4_,
                                               CONCAT13(auVar13[3] >> 1,(int3)auVar14._0_4_))))) ^
           0xedb88320edb88320;
      auVar12[9] = (byte)(auVar14._8_4_ >> 8) ^ 0x83;
      auVar12[10] = (byte)(auVar14._8_4_ >> 0x10) ^ 0xb8;
      auVar12[11] = auVar13[11] >> 1 ^ 0xed;
      auVar12[12] = (byte)auVar14._12_4_ ^ 0x20;
      auVar12[13] = (byte)(auVar14._12_4_ >> 8) ^ 0x83;
      auVar12[14] = (byte)(auVar14._12_4_ >> 0x10) ^ 0xb8;
      auVar12[15] = auVar13[15] >> 1 ^ 0xed;
      auVar13 = NEON_bif(auVar14,auVar12,auVar23,1);
      auVar24._0_5_ = CONCAT14(auVar13[4],(uint)(auVar13[0] & 1)) & 0x1ffffffff;
      auVar24._5_3_ = 0;
      auVar24[8] = auVar13[8] & 1;
      auVar24._9_3_ = 0;
      auVar24[12] = auVar13[12] & 1;
      auVar24._13_3_ = 0;
      auVar15._0_4_ = auVar13._0_4_ >> 1;
      auVar15._4_4_ = auVar13._4_4_ >> 1;
      auVar15._8_4_ = auVar13._8_4_ >> 1;
      auVar15._12_4_ = auVar13._12_4_ >> 1;
      auVar12 = NEON_cmeq(auVar24,0,2);
      auVar23[8] = (byte)auVar15._8_4_ ^ 0x20;
      auVar23._0_8_ =
           CONCAT17(auVar13[7] >> 1,
                    CONCAT16((char)(auVar15._4_4_ >> 0x10),
                             CONCAT15((char)(auVar15._4_4_ >> 8),
                                      CONCAT14((char)auVar15._4_4_,
                                               CONCAT13(auVar13[3] >> 1,(int3)auVar15._0_4_))))) ^
           0xedb88320edb88320;
      auVar23[9] = (byte)(auVar15._8_4_ >> 8) ^ 0x83;
      auVar23[10] = (byte)(auVar15._8_4_ >> 0x10) ^ 0xb8;
      auVar23[11] = auVar13[11] >> 1 ^ 0xed;
      auVar23[12] = (byte)auVar15._12_4_ ^ 0x20;
      auVar23[13] = (byte)(auVar15._12_4_ >> 8) ^ 0x83;
      auVar23[14] = (byte)(auVar15._12_4_ >> 0x10) ^ 0xb8;
      auVar23[15] = auVar13[15] >> 1 ^ 0xed;
      auVar13 = NEON_bif(auVar15,auVar23,auVar12,1);
      auVar25._0_5_ = CONCAT14(auVar13[4],(uint)(auVar13[0] & 1)) & 0x1ffffffff;
      auVar25._5_3_ = 0;
      auVar25[8] = auVar13[8] & 1;
      auVar25._9_3_ = 0;
      auVar25[12] = auVar13[12] & 1;
      auVar25._13_3_ = 0;
      auVar16._0_4_ = auVar13._0_4_ >> 1;
      auVar16._4_4_ = auVar13._4_4_ >> 1;
      auVar16._8_4_ = auVar13._8_4_ >> 1;
      auVar16._12_4_ = auVar13._12_4_ >> 1;
      auVar12 = NEON_cmeq(auVar25,0,2);
      auVar1[8] = (byte)auVar16._8_4_ ^ 0x20;
      auVar1._0_8_ = CONCAT17(auVar13[7] >> 1,
                              CONCAT16((char)(auVar16._4_4_ >> 0x10),
                                       CONCAT15((char)(auVar16._4_4_ >> 8),
                                                CONCAT14((char)auVar16._4_4_,
                                                         CONCAT13(auVar13[3] >> 1,
                                                                  (int3)auVar16._0_4_))))) ^
                     0xedb88320edb88320;
      auVar1[9] = (byte)(auVar16._8_4_ >> 8) ^ 0x83;
      auVar1[10] = (byte)(auVar16._8_4_ >> 0x10) ^ 0xb8;
      auVar1[11] = auVar13[11] >> 1 ^ 0xed;
      auVar1[12] = (byte)auVar16._12_4_ ^ 0x20;
      auVar1[13] = (byte)(auVar16._12_4_ >> 8) ^ 0x83;
      auVar1[14] = (byte)(auVar16._12_4_ >> 0x10) ^ 0xb8;
      auVar1[15] = auVar13[15] >> 1 ^ 0xed;
      auVar13 = NEON_bif(auVar16,auVar1,auVar12,1);
      auVar26._0_5_ = CONCAT14(auVar13[4],(uint)(auVar13[0] & 1)) & 0x1ffffffff;
      auVar26._5_3_ = 0;
      auVar26[8] = auVar13[8] & 1;
      auVar26._9_3_ = 0;
      auVar26[12] = auVar13[12] & 1;
      auVar26._13_3_ = 0;
      auVar17._0_4_ = auVar13._0_4_ >> 1;
      auVar17._4_4_ = auVar13._4_4_ >> 1;
      auVar17._8_4_ = auVar13._8_4_ >> 1;
      auVar17._12_4_ = auVar13._12_4_ >> 1;
      auVar12 = NEON_cmeq(auVar26,0,2);
      auVar2[8] = (byte)auVar17._8_4_ ^ 0x20;
      auVar2._0_8_ = CONCAT17(auVar13[7] >> 1,
                              CONCAT16((char)(auVar17._4_4_ >> 0x10),
                                       CONCAT15((char)(auVar17._4_4_ >> 8),
                                                CONCAT14((char)auVar17._4_4_,
                                                         CONCAT13(auVar13[3] >> 1,
                                                                  (int3)auVar17._0_4_))))) ^
                     0xedb88320edb88320;
      auVar2[9] = (byte)(auVar17._8_4_ >> 8) ^ 0x83;
      auVar2[10] = (byte)(auVar17._8_4_ >> 0x10) ^ 0xb8;
      auVar2[11] = auVar13[11] >> 1 ^ 0xed;
      auVar2[12] = (byte)auVar17._12_4_ ^ 0x20;
      auVar2[13] = (byte)(auVar17._12_4_ >> 8) ^ 0x83;
      auVar2[14] = (byte)(auVar17._12_4_ >> 0x10) ^ 0xb8;
      auVar2[15] = auVar13[15] >> 1 ^ 0xed;
      auVar13 = NEON_bif(auVar17,auVar2,auVar12,1);
      auVar27._0_5_ = CONCAT14(auVar13[4],(uint)(auVar13[0] & 1)) & 0x1ffffffff;
      auVar27._5_3_ = 0;
      auVar27[8] = auVar13[8] & 1;
      auVar27._9_3_ = 0;
      auVar27[12] = auVar13[12] & 1;
      auVar27._13_3_ = 0;
      auVar18._0_4_ = auVar13._0_4_ >> 1;
      auVar18._4_4_ = auVar13._4_4_ >> 1;
      auVar18._8_4_ = auVar13._8_4_ >> 1;
      auVar18._12_4_ = auVar13._12_4_ >> 1;
      auVar12 = NEON_cmeq(auVar27,0,2);
      auVar3[8] = (byte)auVar18._8_4_ ^ 0x20;
      auVar3._0_8_ = CONCAT17(auVar13[7] >> 1,
                              CONCAT16((char)(auVar18._4_4_ >> 0x10),
                                       CONCAT15((char)(auVar18._4_4_ >> 8),
                                                CONCAT14((char)auVar18._4_4_,
                                                         CONCAT13(auVar13[3] >> 1,
                                                                  (int3)auVar18._0_4_))))) ^
                     0xedb88320edb88320;
      auVar3[9] = (byte)(auVar18._8_4_ >> 8) ^ 0x83;
      auVar3[10] = (byte)(auVar18._8_4_ >> 0x10) ^ 0xb8;
      auVar3[11] = auVar13[11] >> 1 ^ 0xed;
      auVar3[12] = (byte)auVar18._12_4_ ^ 0x20;
      auVar3[13] = (byte)(auVar18._12_4_ >> 8) ^ 0x83;
      auVar3[14] = (byte)(auVar18._12_4_ >> 0x10) ^ 0xb8;
      auVar3[15] = auVar13[15] >> 1 ^ 0xed;
      auVar13 = NEON_bif(auVar18,auVar3,auVar12,1);
      auVar28._0_5_ = CONCAT14(auVar13[4],(uint)(auVar13[0] & 1)) & 0x1ffffffff;
      auVar28._5_3_ = 0;
      auVar28[8] = auVar13[8] & 1;
      auVar28._9_3_ = 0;
      auVar28[12] = auVar13[12] & 1;
      auVar28._13_3_ = 0;
      auVar19._0_4_ = auVar13._0_4_ >> 1;
      auVar19._4_4_ = auVar13._4_4_ >> 1;
      auVar19._8_4_ = auVar13._8_4_ >> 1;
      auVar19._12_4_ = auVar13._12_4_ >> 1;
      auVar12 = NEON_cmeq(auVar28,0,2);
      auVar4[8] = (byte)auVar19._8_4_ ^ 0x20;
      auVar4._0_8_ = CONCAT17(auVar13[7] >> 1,
                              CONCAT16((char)(auVar19._4_4_ >> 0x10),
                                       CONCAT15((char)(auVar19._4_4_ >> 8),
                                                CONCAT14((char)auVar19._4_4_,
                                                         CONCAT13(auVar13[3] >> 1,
                                                                  (int3)auVar19._0_4_))))) ^
                     0xedb88320edb88320;
      auVar4[9] = (byte)(auVar19._8_4_ >> 8) ^ 0x83;
      auVar4[10] = (byte)(auVar19._8_4_ >> 0x10) ^ 0xb8;
      auVar4[11] = auVar13[11] >> 1 ^ 0xed;
      auVar4[12] = (byte)auVar19._12_4_ ^ 0x20;
      auVar4[13] = (byte)(auVar19._12_4_ >> 8) ^ 0x83;
      auVar4[14] = (byte)(auVar19._12_4_ >> 0x10) ^ 0xb8;
      auVar4[15] = auVar13[15] >> 1 ^ 0xed;
      auVar13 = NEON_bif(auVar19,auVar4,auVar12,1);
      auVar29._0_5_ = CONCAT14(auVar13[4],(uint)(auVar13[0] & 1)) & 0x1ffffffff;
      auVar29._5_3_ = 0;
      auVar29[8] = auVar13[8] & 1;
      auVar29._9_3_ = 0;
      auVar29[12] = auVar13[12] & 1;
      auVar29._13_3_ = 0;
      auVar20._0_4_ = auVar13._0_4_ >> 1;
      auVar20._4_4_ = auVar13._4_4_ >> 1;
      auVar20._8_4_ = auVar13._8_4_ >> 1;
      auVar20._12_4_ = auVar13._12_4_ >> 1;
      auVar12 = NEON_cmeq(auVar29,0,2);
      auVar5[8] = (byte)auVar20._8_4_ ^ 0x20;
      auVar5._0_8_ = CONCAT17(auVar13[7] >> 1,
                              CONCAT16((char)(auVar20._4_4_ >> 0x10),
                                       CONCAT15((char)(auVar20._4_4_ >> 8),
                                                CONCAT14((char)auVar20._4_4_,
                                                         CONCAT13(auVar13[3] >> 1,
                                                                  (int3)auVar20._0_4_))))) ^
                     0xedb88320edb88320;
      auVar5[9] = (byte)(auVar20._8_4_ >> 8) ^ 0x83;
      auVar5[10] = (byte)(auVar20._8_4_ >> 0x10) ^ 0xb8;
      auVar5[11] = auVar13[11] >> 1 ^ 0xed;
      auVar5[12] = (byte)auVar20._12_4_ ^ 0x20;
      auVar5[13] = (byte)(auVar20._12_4_ >> 8) ^ 0x83;
      auVar5[14] = (byte)(auVar20._12_4_ >> 0x10) ^ 0xb8;
      auVar5[15] = auVar13[15] >> 1 ^ 0xed;
      auVar13 = NEON_bif(auVar20,auVar5,auVar12,1);
      *(long *)(CRC32::s_t + lVar6 + 8) = auVar13._8_8_;
      *(long *)(CRC32::s_t + lVar6) = auVar13._0_8_;
      lVar6 = lVar6 + 0x10;
      uVar7 = CONCAT44(uVar8 + 4,(uint)uVar7 + 4);
      uVar9 = CONCAT44(uVar10 + 4,(uint)uVar9 + 4);
    } while (lVar6 != 0x400);
    CRC32::s_tableIsInit = '\x01';
  }
  uVar8 = (~*(uint *)(CRC32::s_t + (ulong)(param_1 & 0xff) * 4) >> 8 | 0xff000000) ^
          *(uint *)(CRC32::s_t +
                   (ulong)((~*(uint *)(CRC32::s_t + (ulong)(param_1 & 0xff) * 4) ^
                           param_1 >> 8 ^ 0xffffffff) & 0xff) * 4);
  uVar8 = (uVar8 >> 8 | 0xff000000) ^
          *(uint *)(CRC32::s_t + (ulong)((uVar8 ^ param_1 >> 0x10 ^ 0xffffffff) & 0xff) * 4);
  uVar8 = (uVar8 >> 8 | 0xff000000) ^
          *(uint *)(CRC32::s_t + (ulong)(uVar8 & 0xff ^ ~param_1 >> 0x18) * 4);
  uVar8 = (uVar8 >> 8 | 0xff000000) ^
          *(uint *)(CRC32::s_t + (ulong)(((uint)param_2 ^ uVar8 ^ 0xffffffff) & 0xff) * 4);
  return (uVar8 >> 8 | 0xff000000) ^
         *(uint *)(CRC32::s_t + (ulong)(uVar8 & 0xff ^ (~(uint)param_2 & 0xff00) >> 8) * 4);
}


