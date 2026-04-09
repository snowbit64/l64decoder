// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_filter_row_paeth3_neon
// Entry Point: 00dcd0bc
// Size: 364 bytes
// Signature: undefined png_read_filter_row_paeth3_neon(void)


void png_read_filter_row_paeth3_neon
               (long param_1,undefined (*param_2) [16],undefined (*param_3) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  long lVar3;
  undefined (*pauVar4) [16];
  undefined (*pauVar5) [16];
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined8 uVar8;
  byte bVar9;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined auVar12 [16];
  byte bVar20;
  byte bVar31;
  undefined8 uVar21;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  ulong uVar40;
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined8 uVar46;
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined8 uVar50;
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined8 uVar54;
  undefined auVar55 [16];
  undefined4 uVar10;
  undefined8 uVar11;
  
  lVar3 = *(long *)(param_1 + 8);
  if (0 < lVar3) {
    auVar45 = *param_2;
    auVar12 = ZEXT816(0);
    auVar22 = ZEXT816(0);
    auVar7 = NEON_ext(auVar45,auVar45,8,1);
    pauVar4 = param_2;
    do {
      uVar6 = *(undefined8 *)*param_3;
      auVar2 = *param_3;
      auVar1 = *param_3;
      auVar53 = *param_3;
      auVar24 = *param_3;
      auVar23 = *param_3;
      bVar32 = (byte)uVar6;
      bVar33 = (byte)((ulong)uVar6 >> 8);
      bVar34 = (byte)((ulong)uVar6 >> 0x10);
      bVar35 = (byte)((ulong)uVar6 >> 0x18);
      bVar36 = (byte)((ulong)uVar6 >> 0x20);
      bVar37 = (byte)((ulong)uVar6 >> 0x28);
      bVar38 = (byte)((ulong)uVar6 >> 0x30);
      bVar39 = (byte)((ulong)uVar6 >> 0x38);
      bVar9 = auVar12[0];
      bVar13 = auVar12[1];
      bVar14 = auVar12[2];
      bVar15 = auVar12[3];
      bVar16 = auVar12[4];
      bVar17 = auVar12[5];
      bVar18 = auVar12[6];
      bVar19 = auVar12[7];
      auVar48._0_2_ = (ushort)bVar9 << 1;
      auVar48._2_2_ = (ushort)bVar13 << 1;
      auVar48._4_2_ = (ushort)bVar14 << 1;
      auVar48._6_2_ = (ushort)bVar15 << 1;
      auVar48._8_2_ = (ushort)bVar16 << 1;
      auVar48._10_2_ = (ushort)bVar17 << 1;
      auVar48._12_2_ = (ushort)bVar18 << 1;
      auVar48._14_2_ = (ushort)bVar19 << 1;
      uVar8 = auVar12._0_8_;
      uVar50 = NEON_uabd(auVar22._0_8_,uVar8,1);
      auVar41._0_2_ = (ushort)bVar32 + (ushort)auVar22[0];
      auVar41._2_2_ = (ushort)bVar33 + (ushort)auVar22[1];
      auVar41._4_2_ = (ushort)bVar34 + (ushort)auVar22[2];
      auVar41._6_2_ = (ushort)bVar35 + (ushort)auVar22[3];
      auVar41._8_2_ = (ushort)bVar36 + (ushort)auVar22[4];
      auVar41._10_2_ = (ushort)bVar37 + (ushort)auVar22[5];
      auVar41._12_2_ = (ushort)bVar38 + (ushort)auVar22[6];
      auVar41._14_2_ = (ushort)bVar39 + (ushort)auVar22[7];
      uVar54 = NEON_uabd(uVar6,uVar8,1);
      auVar47._0_2_ = MP_INT_ABS((ushort)bVar32 - (ushort)bVar9);
      auVar47._2_2_ = MP_INT_ABS((ushort)bVar33 - (ushort)bVar13);
      auVar47._4_2_ = MP_INT_ABS((ushort)bVar34 - (ushort)bVar14);
      auVar47._6_2_ = MP_INT_ABS((ushort)bVar35 - (ushort)bVar15);
      auVar47._8_2_ = MP_INT_ABS((ushort)bVar36 - (ushort)bVar16);
      auVar47._10_2_ = MP_INT_ABS((ushort)bVar37 - (ushort)bVar17);
      auVar47._12_2_ = MP_INT_ABS((ushort)bVar38 - (ushort)bVar18);
      auVar47._14_2_ = MP_INT_ABS((ushort)bVar39 - (ushort)bVar19);
      auVar12 = NEON_uabd(auVar41,auVar48,2);
      auVar42._0_2_ = MP_INT_ABS((ushort)auVar22[0] - (ushort)bVar9);
      auVar42._2_2_ = MP_INT_ABS((ushort)auVar22[1] - (ushort)bVar13);
      auVar42._4_2_ = MP_INT_ABS((ushort)auVar22[2] - (ushort)bVar14);
      auVar42._6_2_ = MP_INT_ABS((ushort)auVar22[3] - (ushort)bVar15);
      auVar42._8_2_ = MP_INT_ABS((ushort)auVar22[4] - (ushort)bVar16);
      auVar42._10_2_ = MP_INT_ABS((ushort)auVar22[5] - (ushort)bVar17);
      auVar42._12_2_ = MP_INT_ABS((ushort)auVar22[6] - (ushort)bVar18);
      auVar42._14_2_ = MP_INT_ABS((ushort)auVar22[7] - (ushort)bVar19);
      auVar48 = NEON_cmhs(auVar12,auVar47,2);
      auVar12 = NEON_cmhi(auVar42,auVar12,2);
      uVar40 = NEON_cmhs(uVar50,uVar54,1);
      uVar8 = NEON_bif(uVar8,uVar6,
                       CONCAT17(auVar12[14],
                                CONCAT16(auVar12[12],
                                         CONCAT15(auVar12[10],
                                                  CONCAT14(auVar12[8],
                                                           CONCAT13(auVar12[6],
                                                                    CONCAT12(auVar12[4],
                                                                             CONCAT11(auVar12[2],
                                                                                      auVar12[0]))))
                                                 ))),1);
      uVar8 = NEON_bit(uVar8,auVar22._0_8_,
                       CONCAT17(auVar48[14],
                                CONCAT16(auVar48[12],
                                         CONCAT15(auVar48[10],
                                                  CONCAT14(auVar48[8],
                                                           CONCAT13(auVar48[6],
                                                                    CONCAT12(auVar48[4],
                                                                             CONCAT11(auVar48[2],
                                                                                      auVar48[0]))))
                                                 ))) & uVar40,1);
      auVar22 = NEON_ext(*param_3,*param_3,3,1);
      bVar9 = (char)uVar8 + auVar45[0];
      bVar13 = (char)((ulong)uVar8 >> 8) + auVar45[1];
      bVar14 = (char)((ulong)uVar8 >> 0x10) + auVar45[2];
      bVar15 = (char)((ulong)uVar8 >> 0x18) + auVar45[3];
      uVar10 = CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar9)));
      bVar16 = (char)((ulong)uVar8 >> 0x20) + auVar45[4];
      bVar17 = (char)((ulong)uVar8 >> 0x28) + auVar45[5];
      bVar18 = (char)((ulong)uVar8 >> 0x30) + auVar45[6];
      bVar19 = (char)((ulong)uVar8 >> 0x38) + auVar45[7];
      uVar11 = CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,uVar10))));
      auVar12._0_2_ = (ushort)bVar32 << 1;
      auVar12._2_2_ = (ushort)bVar33 << 1;
      auVar12._4_2_ = (ushort)bVar34 << 1;
      auVar12._6_2_ = (ushort)bVar35 << 1;
      auVar12._8_2_ = (ushort)bVar36 << 1;
      auVar12._10_2_ = (ushort)bVar37 << 1;
      auVar12._12_2_ = (ushort)bVar38 << 1;
      auVar12._14_2_ = (ushort)bVar39 << 1;
      bVar20 = auVar22[0];
      bVar25 = auVar22[1];
      bVar26 = auVar22[2];
      bVar27 = auVar22[3];
      bVar28 = auVar22[4];
      bVar29 = auVar22[5];
      bVar30 = auVar22[6];
      bVar31 = auVar22[7];
      auVar49._0_2_ = MP_INT_ABS((ushort)bVar20 - (ushort)bVar32);
      auVar49._2_2_ = MP_INT_ABS((ushort)bVar25 - (ushort)bVar33);
      auVar49._4_2_ = MP_INT_ABS((ushort)bVar26 - (ushort)bVar34);
      auVar49._6_2_ = MP_INT_ABS((ushort)bVar27 - (ushort)bVar35);
      auVar49._8_2_ = MP_INT_ABS((ushort)bVar28 - (ushort)bVar36);
      auVar49._10_2_ = MP_INT_ABS((ushort)bVar29 - (ushort)bVar37);
      auVar49._12_2_ = MP_INT_ABS((ushort)bVar30 - (ushort)bVar38);
      auVar49._14_2_ = MP_INT_ABS((ushort)bVar31 - (ushort)bVar39);
      uVar21 = auVar22._0_8_;
      uVar8 = NEON_uabd(uVar21,uVar6,1);
      auVar43._0_2_ = (ushort)bVar9 + (ushort)bVar20;
      auVar43._2_2_ = (ushort)bVar13 + (ushort)bVar25;
      auVar43._4_2_ = (ushort)bVar14 + (ushort)bVar26;
      auVar43._6_2_ = (ushort)bVar15 + (ushort)bVar27;
      auVar43._8_2_ = (ushort)bVar16 + (ushort)bVar28;
      auVar43._10_2_ = (ushort)bVar17 + (ushort)bVar29;
      auVar43._12_2_ = (ushort)bVar18 + (ushort)bVar30;
      auVar43._14_2_ = (ushort)bVar19 + (ushort)bVar31;
      uVar50 = NEON_uabd(uVar11,uVar6,1);
      *(undefined4 *)*pauVar4 = uVar10;
      auVar12 = NEON_uabd(auVar43,auVar12,2);
      auVar44._0_2_ = MP_INT_ABS((ushort)bVar9 - (ushort)bVar32);
      auVar44._2_2_ = MP_INT_ABS((ushort)bVar13 - (ushort)bVar33);
      auVar44._4_2_ = MP_INT_ABS((ushort)bVar14 - (ushort)bVar34);
      auVar44._6_2_ = MP_INT_ABS((ushort)bVar15 - (ushort)bVar35);
      auVar44._8_2_ = MP_INT_ABS((ushort)bVar16 - (ushort)bVar36);
      auVar44._10_2_ = MP_INT_ABS((ushort)bVar17 - (ushort)bVar37);
      auVar44._12_2_ = MP_INT_ABS((ushort)bVar18 - (ushort)bVar38);
      auVar44._14_2_ = MP_INT_ABS((ushort)bVar19 - (ushort)bVar39);
      auVar22 = NEON_cmhs(auVar12,auVar49,2);
      auVar12 = NEON_cmhi(auVar44,auVar12,2);
      uVar40 = NEON_cmhs(uVar50,uVar8,1);
      uVar8 = auVar7._0_8_;
      uVar46 = NEON_ext(auVar45._0_8_,uVar8,3,1);
      uVar54 = NEON_bsl(CONCAT17(auVar12[14],
                                 CONCAT16(auVar12[12],
                                          CONCAT15(auVar12[10],
                                                   CONCAT14(auVar12[8],
                                                            CONCAT13(auVar12[6],
                                                                     CONCAT12(auVar12[4],
                                                                              CONCAT11(auVar12[2],
                                                                                       auVar12[0])))
                                                           )))),uVar6,uVar21,1);
      uVar50 = NEON_ext(auVar45._0_8_,uVar8,6,1);
      uVar6 = NEON_ext(uVar8,uVar8,1,1);
      uVar8 = NEON_bit(uVar54,uVar11,
                       CONCAT17(auVar22[14],
                                CONCAT16(auVar22[12],
                                         CONCAT15(auVar22[10],
                                                  CONCAT14(auVar22[8],
                                                           CONCAT13(auVar22[6],
                                                                    CONCAT12(auVar22[4],
                                                                             CONCAT11(auVar22[2],
                                                                                      auVar22[0]))))
                                                 ))) & uVar40,1);
      auVar45 = NEON_ext(auVar23,auVar24,6,1);
      bVar9 = (char)uVar8 + (char)uVar46;
      bVar13 = (char)((ulong)uVar8 >> 8) + (char)((ulong)uVar46 >> 8);
      bVar14 = (char)((ulong)uVar8 >> 0x10) + (char)((ulong)uVar46 >> 0x10);
      bVar15 = (char)((ulong)uVar8 >> 0x18) + (char)((ulong)uVar46 >> 0x18);
      uVar10 = CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar9)));
      bVar16 = (char)((ulong)uVar8 >> 0x20) + (char)((ulong)uVar46 >> 0x20);
      bVar17 = (char)((ulong)uVar8 >> 0x28) + (char)((ulong)uVar46 >> 0x28);
      bVar18 = (char)((ulong)uVar8 >> 0x30) + (char)((ulong)uVar46 >> 0x30);
      bVar19 = (char)((ulong)uVar8 >> 0x38) + (char)((ulong)uVar46 >> 0x38);
      uVar11 = CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,uVar10))));
      auVar7._0_2_ = (ushort)bVar20 << 1;
      auVar7._2_2_ = (ushort)bVar25 << 1;
      auVar7._4_2_ = (ushort)bVar26 << 1;
      auVar7._6_2_ = (ushort)bVar27 << 1;
      auVar7._8_2_ = (ushort)bVar28 << 1;
      auVar7._10_2_ = (ushort)bVar29 << 1;
      auVar7._12_2_ = (ushort)bVar30 << 1;
      auVar7._14_2_ = (ushort)bVar31 << 1;
      bVar32 = auVar45[0];
      bVar33 = auVar45[1];
      bVar34 = auVar45[2];
      bVar35 = auVar45[3];
      bVar36 = auVar45[4];
      bVar37 = auVar45[5];
      bVar38 = auVar45[6];
      bVar39 = auVar45[7];
      auVar55._0_2_ = MP_INT_ABS((ushort)bVar32 - (ushort)bVar20);
      auVar55._2_2_ = MP_INT_ABS((ushort)bVar33 - (ushort)bVar25);
      auVar55._4_2_ = MP_INT_ABS((ushort)bVar34 - (ushort)bVar26);
      auVar55._6_2_ = MP_INT_ABS((ushort)bVar35 - (ushort)bVar27);
      auVar55._8_2_ = MP_INT_ABS((ushort)bVar36 - (ushort)bVar28);
      auVar55._10_2_ = MP_INT_ABS((ushort)bVar37 - (ushort)bVar29);
      auVar55._12_2_ = MP_INT_ABS((ushort)bVar38 - (ushort)bVar30);
      auVar55._14_2_ = MP_INT_ABS((ushort)bVar39 - (ushort)bVar31);
      uVar54 = auVar45._0_8_;
      uVar8 = NEON_uabd(uVar54,uVar21,1);
      auVar51._0_2_ = (ushort)bVar9 + (ushort)bVar32;
      auVar51._2_2_ = (ushort)bVar13 + (ushort)bVar33;
      auVar51._4_2_ = (ushort)bVar14 + (ushort)bVar34;
      auVar51._6_2_ = (ushort)bVar15 + (ushort)bVar35;
      auVar51._8_2_ = (ushort)bVar16 + (ushort)bVar36;
      auVar51._10_2_ = (ushort)bVar17 + (ushort)bVar37;
      auVar51._12_2_ = (ushort)bVar18 + (ushort)bVar38;
      auVar51._14_2_ = (ushort)bVar19 + (ushort)bVar39;
      uVar46 = NEON_uabd(uVar11,uVar21,1);
      *(undefined4 *)(*pauVar4 + 3) = uVar10;
      auVar45 = NEON_uabd(auVar51,auVar7,2);
      auVar52._0_2_ = MP_INT_ABS((ushort)bVar9 - (ushort)bVar20);
      auVar52._2_2_ = MP_INT_ABS((ushort)bVar13 - (ushort)bVar25);
      auVar52._4_2_ = MP_INT_ABS((ushort)bVar14 - (ushort)bVar26);
      auVar52._6_2_ = MP_INT_ABS((ushort)bVar15 - (ushort)bVar27);
      auVar52._8_2_ = MP_INT_ABS((ushort)bVar16 - (ushort)bVar28);
      auVar52._10_2_ = MP_INT_ABS((ushort)bVar17 - (ushort)bVar29);
      auVar52._12_2_ = MP_INT_ABS((ushort)bVar18 - (ushort)bVar30);
      auVar52._14_2_ = MP_INT_ABS((ushort)bVar19 - (ushort)bVar31);
      auVar7 = NEON_cmhs(auVar45,auVar55,2);
      auVar45 = NEON_cmhi(auVar52,auVar45,2);
      uVar40 = NEON_cmhs(uVar46,uVar8,1);
      uVar8 = NEON_bsl(CONCAT17(auVar45[14],
                                CONCAT16(auVar45[12],
                                         CONCAT15(auVar45[10],
                                                  CONCAT14(auVar45[8],
                                                           CONCAT13(auVar45[6],
                                                                    CONCAT12(auVar45[4],
                                                                             CONCAT11(auVar45[2],
                                                                                      auVar45[0]))))
                                                 ))),uVar21,uVar54,1);
      auVar45 = NEON_ext(auVar53,auVar1,8,1);
      uVar8 = NEON_bsl(CONCAT17(auVar7[14],
                                CONCAT16(auVar7[12],
                                         CONCAT15(auVar7[10],
                                                  CONCAT14(auVar7[8],
                                                           CONCAT13(auVar7[6],
                                                                    CONCAT12(auVar7[4],
                                                                             CONCAT11(auVar7[2],
                                                                                      auVar7[0])))))
                                        )) & uVar40,uVar11,uVar8,1);
      auVar12 = NEON_ext(auVar2,auVar45,9,1);
      bVar9 = (char)uVar8 + (char)uVar50;
      bVar13 = (char)((ulong)uVar8 >> 8) + (char)((ulong)uVar50 >> 8);
      bVar14 = (char)((ulong)uVar8 >> 0x10) + (char)((ulong)uVar50 >> 0x10);
      bVar15 = (char)((ulong)uVar8 >> 0x18) + (char)((ulong)uVar50 >> 0x18);
      bVar16 = (char)((ulong)uVar8 >> 0x20) + (char)((ulong)uVar50 >> 0x20);
      bVar17 = (char)((ulong)uVar8 >> 0x28) + (char)((ulong)uVar50 >> 0x28);
      bVar18 = (char)((ulong)uVar8 >> 0x30) + (char)((ulong)uVar50 >> 0x30);
      bVar19 = (char)((ulong)uVar8 >> 0x38) + (char)((ulong)uVar50 >> 0x38);
      auVar45._0_2_ = (ushort)bVar32 << 1;
      auVar45._2_2_ = (ushort)bVar33 << 1;
      auVar45._4_2_ = (ushort)bVar34 << 1;
      auVar45._6_2_ = (ushort)bVar35 << 1;
      auVar45._8_2_ = (ushort)bVar36 << 1;
      auVar45._10_2_ = (ushort)bVar37 << 1;
      auVar45._12_2_ = (ushort)bVar38 << 1;
      auVar45._14_2_ = (ushort)bVar39 << 1;
      auVar53._0_2_ = MP_INT_ABS((ushort)auVar12[0] - (ushort)bVar32);
      auVar53._2_2_ = MP_INT_ABS((ushort)auVar12[1] - (ushort)bVar33);
      auVar53._4_2_ = MP_INT_ABS((ushort)auVar12[2] - (ushort)bVar34);
      auVar53._6_2_ = MP_INT_ABS((ushort)auVar12[3] - (ushort)bVar35);
      auVar53._8_2_ = MP_INT_ABS((ushort)auVar12[4] - (ushort)bVar36);
      auVar53._10_2_ = MP_INT_ABS((ushort)auVar12[5] - (ushort)bVar37);
      auVar53._12_2_ = MP_INT_ABS((ushort)auVar12[6] - (ushort)bVar38);
      auVar53._14_2_ = MP_INT_ABS((ushort)auVar12[7] - (ushort)bVar39);
      uVar8 = NEON_uabd(auVar12._0_8_,uVar54,1);
      auVar23._0_2_ = (ushort)bVar9 + (ushort)auVar12[0];
      auVar23._2_2_ = (ushort)bVar13 + (ushort)auVar12[1];
      auVar23._4_2_ = (ushort)bVar14 + (ushort)auVar12[2];
      auVar23._6_2_ = (ushort)bVar15 + (ushort)auVar12[3];
      auVar23._8_2_ = (ushort)bVar16 + (ushort)auVar12[4];
      auVar23._10_2_ = (ushort)bVar17 + (ushort)auVar12[5];
      auVar23._12_2_ = (ushort)bVar18 + (ushort)auVar12[6];
      auVar23._14_2_ = (ushort)bVar19 + (ushort)auVar12[7];
      uVar50 = NEON_uabd(CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(
                                                  bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar9))))))
                                 ),uVar54,1);
      *(uint *)(*pauVar4 + 6) = CONCAT13(bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar9)));
      auVar45 = NEON_uabd(auVar23,auVar45,2);
      auVar24._0_2_ = MP_INT_ABS((ushort)bVar9 - (ushort)bVar32);
      auVar24._2_2_ = MP_INT_ABS((ushort)bVar13 - (ushort)bVar33);
      auVar24._4_2_ = MP_INT_ABS((ushort)bVar14 - (ushort)bVar34);
      auVar24._6_2_ = MP_INT_ABS((ushort)bVar15 - (ushort)bVar35);
      auVar24._8_2_ = MP_INT_ABS((ushort)bVar16 - (ushort)bVar36);
      auVar24._10_2_ = MP_INT_ABS((ushort)bVar17 - (ushort)bVar37);
      auVar24._12_2_ = MP_INT_ABS((ushort)bVar18 - (ushort)bVar38);
      auVar24._14_2_ = MP_INT_ABS((ushort)bVar19 - (ushort)bVar39);
      auVar7 = NEON_cmhs(auVar45,auVar53,2);
      auVar45 = NEON_cmhi(auVar24,auVar45,2);
      uVar40 = NEON_cmhs(uVar50,uVar8,1);
      uVar8 = NEON_bsl(CONCAT17(auVar45[14],
                                CONCAT16(auVar45[12],
                                         CONCAT15(auVar45[10],
                                                  CONCAT14(auVar45[8],
                                                           CONCAT13(auVar45[6],
                                                                    CONCAT12(auVar45[4],
                                                                             CONCAT11(auVar45[2],
                                                                                      auVar45[0]))))
                                                 ))),uVar54,auVar12._0_8_,1);
      uVar8 = NEON_bsl(CONCAT17(auVar7[14],
                                CONCAT16(auVar7[12],
                                         CONCAT15(auVar7[10],
                                                  CONCAT14(auVar7[8],
                                                           CONCAT13(auVar7[6],
                                                                    CONCAT12(auVar7[4],
                                                                             CONCAT11(auVar7[2],
                                                                                      auVar7[0])))))
                                        )) & uVar40,
                       CONCAT17(bVar19,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar16,CONCAT13(
                                                  bVar15,CONCAT12(bVar14,CONCAT11(bVar13,bVar9))))))
                               ),uVar8,1);
      pauVar5 = (undefined (*) [16])(*pauVar4 + 0xc);
      auVar45 = *pauVar5;
      auVar22._0_4_ =
           CONCAT13((char)((ulong)uVar8 >> 0x18) + (char)((ulong)uVar6 >> 0x18),
                    CONCAT12((char)((ulong)uVar8 >> 0x10) + (char)((ulong)uVar6 >> 0x10),
                             CONCAT11((char)((ulong)uVar8 >> 8) + (char)((ulong)uVar6 >> 8),
                                      (char)uVar8 + (char)uVar6)));
      auVar22[4] = (char)((ulong)uVar8 >> 0x20) + (char)((ulong)uVar6 >> 0x20);
      auVar22[5] = (char)((ulong)uVar8 >> 0x28) + (char)((ulong)uVar6 >> 0x28);
      auVar22[6] = (char)((ulong)uVar8 >> 0x30) + (char)((ulong)uVar6 >> 0x30);
      auVar22[7] = (char)((ulong)uVar8 >> 0x38) + (char)((ulong)uVar6 >> 0x38);
      auVar22._8_8_ = 0;
      auVar7 = NEON_ext(auVar45,auVar45,8,1);
      *(undefined4 *)(*pauVar4 + 9) = auVar22._0_4_;
      param_3 = (undefined (*) [16])(*param_3 + 0xc);
      pauVar4 = pauVar5;
    } while (pauVar5 < (undefined (*) [16])(*param_2 + lVar3));
  }
  return;
}


