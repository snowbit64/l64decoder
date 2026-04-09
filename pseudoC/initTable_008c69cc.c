// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initTable
// Entry Point: 008c69cc
// Size: 312 bytes
// Signature: undefined initTable(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CRC64::initTable() */

void CRC64::initTable(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  long lVar11;
  undefined uVar12;
  undefined uVar13;
  undefined uVar14;
  undefined uVar15;
  undefined uVar16;
  undefined uVar17;
  undefined uVar18;
  undefined uVar19;
  byte bVar20;
  undefined uVar21;
  undefined uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  
  if (s_tableIsInit != '\0') {
    return;
  }
  lVar11 = 0;
  bVar20 = 1;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  do {
    auVar28[1] = uVar13;
    auVar28[0] = uVar12;
    auVar28[2] = uVar14;
    auVar28[3] = uVar15;
    auVar28[4] = uVar16;
    auVar28[5] = uVar17;
    auVar28[6] = uVar18;
    auVar28[7] = uVar19;
    auVar28[8] = bVar20;
    auVar28[9] = uVar21;
    auVar28[10] = uVar22;
    auVar28[11] = uVar23;
    auVar28[12] = uVar24;
    auVar28[13] = uVar25;
    auVar28[14] = uVar26;
    auVar28[15] = uVar27;
    auVar37[8] = 1;
    auVar37._0_8_ = 1;
    auVar37._9_7_ = 0;
    auVar37 = NEON_cmtst(auVar28,auVar37,8);
    auVar28 = NEON_cmeq(ZEXT116(bVar20 & 1) << 0x40,0,8);
    auVar29._0_8_ = CONCAT17(~auVar28[7],(uint7)(~auVar28[0] & 0x1b)) & 0x80ffffffffffffff;
    auVar29[8] = ~auVar28[8] & 0x1b;
    auVar29._9_6_ = 0;
    auVar29[15] = ~auVar28[15] & 0x80;
    auVar38[0] = (auVar37[0] ^
                 (byte)(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))
                                                )) >> 1)) & 1;
    auVar38._1_7_ = 0;
    auVar38[8] = (auVar37[8] ^
                 (byte)(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(
                                                  uVar23,CONCAT12(uVar22,CONCAT11(uVar21,bVar20)))))
                                                )) >> 1)) & 1;
    auVar38._9_7_ = 0;
    auVar30._0_8_ = auVar29._0_8_ >> 1;
    auVar30._8_8_ = auVar29._8_8_ >> 1;
    auVar37 = NEON_cmeq(auVar38,0,8);
    auVar4[8] = (byte)auVar30._8_8_ ^ 0x1b;
    auVar4._0_8_ = CONCAT17((~auVar28[7] & 0x80) >> 1,(int7)auVar30._0_8_) ^ 0x800000000000001b;
    auVar4[9] = (char)(auVar30._8_8_ >> 8);
    auVar4[10] = (char)(auVar30._8_8_ >> 0x10);
    auVar4[11] = (char)(auVar30._8_8_ >> 0x18);
    auVar4[12] = (char)(auVar30._8_8_ >> 0x20);
    auVar4[13] = (char)(auVar30._8_8_ >> 0x28);
    auVar4[14] = (char)(auVar30._8_8_ >> 0x30);
    auVar4[15] = auVar29[15] >> 1 ^ 0x80;
    auVar28 = NEON_bif(auVar30,auVar4,auVar37,1);
    auVar31._0_8_ = auVar28._0_8_ >> 1;
    auVar31._8_8_ = auVar28._8_8_ >> 1;
    auVar39[0] = (auVar28[0] ^
                 (byte)(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))
                                                )) >> 2)) & 1;
    auVar39._1_7_ = 0;
    auVar39[8] = (auVar28[8] ^
                 (byte)(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(
                                                  uVar23,CONCAT12(uVar22,CONCAT11(uVar21,bVar20)))))
                                                )) >> 2)) & 1;
    auVar39._9_7_ = 0;
    auVar37 = NEON_cmeq(auVar39,0,8);
    auVar5[8] = (byte)auVar31._8_8_ ^ 0x1b;
    auVar5._0_8_ = CONCAT17(auVar28[7] >> 1,(int7)auVar31._0_8_) ^ 0x800000000000001b;
    auVar5[9] = (char)(auVar31._8_8_ >> 8);
    auVar5[10] = (char)(auVar31._8_8_ >> 0x10);
    auVar5[11] = (char)(auVar31._8_8_ >> 0x18);
    auVar5[12] = (char)(auVar31._8_8_ >> 0x20);
    auVar5[13] = (char)(auVar31._8_8_ >> 0x28);
    auVar5[14] = (char)(auVar31._8_8_ >> 0x30);
    auVar5[15] = auVar28[15] >> 1 ^ 0x80;
    auVar28 = NEON_bif(auVar31,auVar5,auVar37,1);
    auVar32._0_8_ = auVar28._0_8_ >> 1;
    auVar32._8_8_ = auVar28._8_8_ >> 1;
    auVar40[0] = (auVar28[0] ^
                 (byte)(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))
                                                )) >> 3)) & 1;
    auVar40._1_7_ = 0;
    auVar40[8] = (auVar28[8] ^
                 (byte)(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(
                                                  uVar23,CONCAT12(uVar22,CONCAT11(uVar21,bVar20)))))
                                                )) >> 3)) & 1;
    auVar40._9_7_ = 0;
    auVar37 = NEON_cmeq(auVar40,0,8);
    auVar6[8] = (byte)auVar32._8_8_ ^ 0x1b;
    auVar6._0_8_ = CONCAT17(auVar28[7] >> 1,(int7)auVar32._0_8_) ^ 0x800000000000001b;
    auVar6[9] = (char)(auVar32._8_8_ >> 8);
    auVar6[10] = (char)(auVar32._8_8_ >> 0x10);
    auVar6[11] = (char)(auVar32._8_8_ >> 0x18);
    auVar6[12] = (char)(auVar32._8_8_ >> 0x20);
    auVar6[13] = (char)(auVar32._8_8_ >> 0x28);
    auVar6[14] = (char)(auVar32._8_8_ >> 0x30);
    auVar6[15] = auVar28[15] >> 1 ^ 0x80;
    auVar28 = NEON_bif(auVar32,auVar6,auVar37,1);
    auVar33._0_8_ = auVar28._0_8_ >> 1;
    auVar33._8_8_ = auVar28._8_8_ >> 1;
    auVar41[0] = (auVar28[0] ^
                 (byte)(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))
                                                )) >> 4)) & 1;
    auVar41._1_7_ = 0;
    auVar41[8] = (auVar28[8] ^
                 (byte)(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(
                                                  uVar23,CONCAT12(uVar22,CONCAT11(uVar21,bVar20)))))
                                                )) >> 4)) & 1;
    auVar41._9_7_ = 0;
    auVar37 = NEON_cmeq(auVar41,0,8);
    auVar7[8] = (byte)auVar33._8_8_ ^ 0x1b;
    auVar7._0_8_ = CONCAT17(auVar28[7] >> 1,(int7)auVar33._0_8_) ^ 0x800000000000001b;
    auVar7[9] = (char)(auVar33._8_8_ >> 8);
    auVar7[10] = (char)(auVar33._8_8_ >> 0x10);
    auVar7[11] = (char)(auVar33._8_8_ >> 0x18);
    auVar7[12] = (char)(auVar33._8_8_ >> 0x20);
    auVar7[13] = (char)(auVar33._8_8_ >> 0x28);
    auVar7[14] = (char)(auVar33._8_8_ >> 0x30);
    auVar7[15] = auVar28[15] >> 1 ^ 0x80;
    auVar28 = NEON_bif(auVar33,auVar7,auVar37,1);
    auVar34._0_8_ = auVar28._0_8_ >> 1;
    auVar34._8_8_ = auVar28._8_8_ >> 1;
    auVar42[0] = (auVar28[0] ^
                 (byte)(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))
                                                )) >> 5)) & 1;
    auVar42._1_7_ = 0;
    auVar42[8] = (auVar28[8] ^
                 (byte)(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(
                                                  uVar23,CONCAT12(uVar22,CONCAT11(uVar21,bVar20)))))
                                                )) >> 5)) & 1;
    auVar42._9_7_ = 0;
    auVar37 = NEON_cmeq(auVar42,0,8);
    auVar8[8] = (byte)auVar34._8_8_ ^ 0x1b;
    auVar8._0_8_ = CONCAT17(auVar28[7] >> 1,(int7)auVar34._0_8_) ^ 0x800000000000001b;
    auVar8[9] = (char)(auVar34._8_8_ >> 8);
    auVar8[10] = (char)(auVar34._8_8_ >> 0x10);
    auVar8[11] = (char)(auVar34._8_8_ >> 0x18);
    auVar8[12] = (char)(auVar34._8_8_ >> 0x20);
    auVar8[13] = (char)(auVar34._8_8_ >> 0x28);
    auVar8[14] = (char)(auVar34._8_8_ >> 0x30);
    auVar8[15] = auVar28[15] >> 1 ^ 0x80;
    auVar28 = NEON_bif(auVar34,auVar8,auVar37,1);
    auVar35._0_8_ = auVar28._0_8_ >> 1;
    auVar35._8_8_ = auVar28._8_8_ >> 1;
    auVar43[0] = (auVar28[0] ^
                 (byte)(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(
                                                  uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))
                                                )) >> 6)) & 1;
    auVar43._1_7_ = 0;
    auVar43[8] = (auVar28[8] ^
                 (byte)(CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(
                                                  uVar23,CONCAT12(uVar22,CONCAT11(uVar21,bVar20)))))
                                                )) >> 6)) & 1;
    auVar43._9_7_ = 0;
    auVar37 = NEON_cmeq(auVar43,0,8);
    auVar9[8] = (byte)auVar35._8_8_ ^ 0x1b;
    auVar9._0_8_ = CONCAT17(auVar28[7] >> 1,(int7)auVar35._0_8_) ^ 0x800000000000001b;
    auVar9[9] = (char)(auVar35._8_8_ >> 8);
    auVar9[10] = (char)(auVar35._8_8_ >> 0x10);
    auVar9[11] = (char)(auVar35._8_8_ >> 0x18);
    auVar9[12] = (char)(auVar35._8_8_ >> 0x20);
    auVar9[13] = (char)(auVar35._8_8_ >> 0x28);
    auVar9[14] = (char)(auVar35._8_8_ >> 0x30);
    auVar9[15] = auVar28[15] >> 1 ^ 0x80;
    auVar28 = NEON_bif(auVar35,auVar9,auVar37,1);
    uVar1 = CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(uVar15,CONCAT12
                                                  (uVar14,CONCAT11(uVar13,uVar12)))))));
    uVar2 = CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(uVar23,CONCAT12
                                                  (uVar22,CONCAT11(uVar21,bVar20)))))));
    lVar3 = CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(uVar15,CONCAT12
                                                  (uVar14,CONCAT11(uVar13,uVar12))))))) + 2;
    uVar12 = (undefined)lVar3;
    uVar13 = (undefined)((ulong)lVar3 >> 8);
    uVar14 = (undefined)((ulong)lVar3 >> 0x10);
    uVar15 = (undefined)((ulong)lVar3 >> 0x18);
    uVar16 = (undefined)((ulong)lVar3 >> 0x20);
    uVar17 = (undefined)((ulong)lVar3 >> 0x28);
    uVar18 = (undefined)((ulong)lVar3 >> 0x30);
    uVar19 = (undefined)((ulong)lVar3 >> 0x38);
    lVar3 = CONCAT17(uVar27,CONCAT16(uVar26,CONCAT15(uVar25,CONCAT14(uVar24,CONCAT13(uVar23,CONCAT12
                                                  (uVar22,CONCAT11(uVar21,bVar20))))))) + 2;
    bVar20 = (byte)lVar3;
    uVar21 = (undefined)((ulong)lVar3 >> 8);
    uVar22 = (undefined)((ulong)lVar3 >> 0x10);
    uVar23 = (undefined)((ulong)lVar3 >> 0x18);
    uVar24 = (undefined)((ulong)lVar3 >> 0x20);
    uVar25 = (undefined)((ulong)lVar3 >> 0x28);
    uVar26 = (undefined)((ulong)lVar3 >> 0x30);
    uVar27 = (undefined)((ulong)lVar3 >> 0x38);
    auVar36._0_8_ = auVar28._0_8_ >> 1;
    auVar36._8_8_ = auVar28._8_8_ >> 1;
    auVar44[0] = (auVar28[0] ^ (byte)(uVar1 >> 7)) & 1;
    auVar44._1_7_ = 0;
    auVar44[8] = (auVar28[8] ^ (byte)(uVar2 >> 7)) & 1;
    auVar44._9_7_ = 0;
    auVar37 = NEON_cmeq(auVar44,0,8);
    auVar10[8] = (byte)auVar36._8_8_ ^ 0x1b;
    auVar10._0_8_ = CONCAT17(auVar28[7] >> 1,(int7)auVar36._0_8_) ^ 0x800000000000001b;
    auVar10[9] = (char)(auVar36._8_8_ >> 8);
    auVar10[10] = (char)(auVar36._8_8_ >> 0x10);
    auVar10[11] = (char)(auVar36._8_8_ >> 0x18);
    auVar10[12] = (char)(auVar36._8_8_ >> 0x20);
    auVar10[13] = (char)(auVar36._8_8_ >> 0x28);
    auVar10[14] = (char)(auVar36._8_8_ >> 0x30);
    auVar10[15] = auVar28[15] >> 1 ^ 0x80;
    auVar28 = NEON_bif(auVar36,auVar10,auVar37,1);
    *(long *)(s_t + lVar11 + 8) = auVar28._8_8_;
    *(long *)(s_t + lVar11) = auVar28._0_8_;
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x800);
  s_tableIsInit = 1;
  return;
}


