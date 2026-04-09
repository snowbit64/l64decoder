// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_filter_row_paeth4_neon
// Entry Point: 00dcd228
// Size: 316 bytes
// Signature: undefined png_read_filter_row_paeth4_neon(void)


void png_read_filter_row_paeth4_neon(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  undefined8 uVar46;
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  undefined auVar63 [16];
  ulong uVar64;
  undefined auVar65 [16];
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined4 uVar70;
  undefined4 uVar73;
  undefined auVar71 [16];
  undefined auVar72 [16];
  undefined4 uVar74;
  undefined8 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined8 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined8 uVar82;
  
  if (0 < *(long *)(param_1 + 8)) {
    auVar57 = ZEXT816(0);
    puVar1 = (undefined4 *)((long)param_2 + *(long *)(param_1 + 8));
    uVar18 = 0;
    do {
      uVar17 = *param_3;
      bVar13 = (byte)uVar17;
      bVar14 = (byte)((uint)uVar17 >> 8);
      bVar15 = (byte)((uint)uVar17 >> 0x10);
      bVar16 = (byte)((uint)uVar17 >> 0x18);
      uVar2 = param_3[1];
      bVar23 = (byte)uVar2;
      bVar24 = (byte)((uint)uVar2 >> 8);
      bVar25 = (byte)((uint)uVar2 >> 0x10);
      bVar26 = (byte)((uint)uVar2 >> 0x18);
      uVar3 = param_3[2];
      bVar31 = (byte)uVar3;
      bVar32 = (byte)((uint)uVar3 >> 8);
      bVar33 = (byte)((uint)uVar3 >> 0x10);
      bVar34 = (byte)((uint)uVar3 >> 0x18);
      uVar4 = param_3[3];
      bVar39 = (byte)((uint)uVar4 >> 8);
      bVar40 = (byte)((uint)uVar4 >> 0x10);
      bVar41 = (byte)((uint)uVar4 >> 0x18);
      uVar70 = param_3[4];
      bVar19 = (byte)uVar70;
      bVar20 = (byte)((uint)uVar70 >> 8);
      bVar21 = (byte)((uint)uVar70 >> 0x10);
      bVar22 = (byte)((uint)uVar70 >> 0x18);
      uVar70 = param_3[5];
      bVar27 = (byte)uVar70;
      bVar28 = (byte)((uint)uVar70 >> 8);
      bVar29 = (byte)((uint)uVar70 >> 0x10);
      bVar30 = (byte)((uint)uVar70 >> 0x18);
      uVar70 = param_3[6];
      bVar35 = (byte)uVar70;
      bVar36 = (byte)((uint)uVar70 >> 8);
      bVar37 = (byte)((uint)uVar70 >> 0x10);
      bVar38 = (byte)((uint)uVar70 >> 0x18);
      uVar70 = param_3[7];
      bVar42 = (byte)uVar70;
      bVar43 = (byte)((uint)uVar70 >> 8);
      bVar44 = (byte)((uint)uVar70 >> 0x10);
      bVar45 = (byte)((uint)uVar70 >> 0x18);
      bVar12 = auVar57[0];
      bVar49 = auVar57[1];
      bVar50 = auVar57[2];
      bVar51 = auVar57[3];
      bVar52 = auVar57[4];
      bVar53 = auVar57[5];
      bVar54 = auVar57[6];
      bVar55 = auVar57[7];
      auVar56._0_2_ = (ushort)bVar12 << 1;
      auVar56._2_2_ = (ushort)bVar49 << 1;
      auVar56._4_2_ = (ushort)bVar50 << 1;
      auVar56._6_2_ = (ushort)bVar51 << 1;
      auVar56._8_2_ = (ushort)bVar52 << 1;
      auVar56._10_2_ = (ushort)bVar53 << 1;
      auVar56._12_2_ = (ushort)bVar54 << 1;
      auVar56._14_2_ = (ushort)bVar55 << 1;
      uVar46 = auVar57._0_8_;
      uVar75 = NEON_uabd(uVar18,uVar46,1);
      param_3 = param_3 + 4;
      bVar5 = (byte)((ulong)uVar18 >> 8);
      bVar6 = (byte)((ulong)uVar18 >> 0x10);
      bVar7 = (byte)((ulong)uVar18 >> 0x18);
      bVar8 = (byte)((ulong)uVar18 >> 0x20);
      bVar9 = (byte)((ulong)uVar18 >> 0x28);
      bVar10 = (byte)((ulong)uVar18 >> 0x30);
      bVar11 = (byte)((ulong)uVar18 >> 0x38);
      auVar65._0_2_ = (ushort)bVar13 + (ushort)(byte)uVar18;
      auVar65._2_2_ = (ushort)bVar14 + (ushort)bVar5;
      auVar65._4_2_ = (ushort)bVar15 + (ushort)bVar6;
      auVar65._6_2_ = (ushort)bVar16 + (ushort)bVar7;
      auVar65._8_2_ = (ushort)bVar19 + (ushort)bVar8;
      auVar65._10_2_ = (ushort)bVar20 + (ushort)bVar9;
      auVar65._12_2_ = (ushort)bVar21 + (ushort)bVar10;
      auVar65._14_2_ = (ushort)bVar22 + (ushort)bVar11;
      uVar78 = NEON_uabd(CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,uVar17)))),
                         uVar46,1);
      auVar71._0_2_ = MP_INT_ABS((ushort)bVar13 - (ushort)bVar12);
      auVar71._2_2_ = MP_INT_ABS((ushort)bVar14 - (ushort)bVar49);
      auVar71._4_2_ = MP_INT_ABS((ushort)bVar15 - (ushort)bVar50);
      auVar71._6_2_ = MP_INT_ABS((ushort)bVar16 - (ushort)bVar51);
      auVar71._8_2_ = MP_INT_ABS((ushort)bVar19 - (ushort)bVar52);
      auVar71._10_2_ = MP_INT_ABS((ushort)bVar20 - (ushort)bVar53);
      auVar71._12_2_ = MP_INT_ABS((ushort)bVar21 - (ushort)bVar54);
      auVar71._14_2_ = MP_INT_ABS((ushort)bVar22 - (ushort)bVar55);
      uVar82 = NEON_uabd(CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,uVar2)))),
                         CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,uVar17)))),
                         1);
      auVar57 = NEON_uabd(auVar65,auVar56,2);
      auVar66._0_2_ = MP_INT_ABS((ushort)(byte)uVar18 - (ushort)bVar12);
      auVar66._2_2_ = MP_INT_ABS((ushort)bVar5 - (ushort)bVar49);
      auVar66._4_2_ = MP_INT_ABS((ushort)bVar6 - (ushort)bVar50);
      auVar66._6_2_ = MP_INT_ABS((ushort)bVar7 - (ushort)bVar51);
      auVar66._8_2_ = MP_INT_ABS((ushort)bVar8 - (ushort)bVar52);
      auVar66._10_2_ = MP_INT_ABS((ushort)bVar9 - (ushort)bVar53);
      auVar66._12_2_ = MP_INT_ABS((ushort)bVar10 - (ushort)bVar54);
      auVar66._14_2_ = MP_INT_ABS((ushort)bVar11 - (ushort)bVar55);
      auVar72 = NEON_cmhs(auVar57,auVar71,2);
      auVar57 = NEON_cmhi(auVar66,auVar57,2);
      uVar64 = NEON_cmhs(uVar75,uVar78,1);
      uVar70 = *param_2;
      uVar74 = param_2[1];
      uVar77 = param_2[2];
      uVar80 = param_2[3];
      uVar73 = param_2[4];
      uVar76 = param_2[5];
      uVar79 = param_2[6];
      uVar81 = param_2[7];
      uVar46 = NEON_bif(uVar46,CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,
                                                  uVar17)))),
                        CONCAT17(auVar57[14],
                                 CONCAT16(auVar57[12],
                                          CONCAT15(auVar57[10],
                                                   CONCAT14(auVar57[8],
                                                            CONCAT13(auVar57[6],
                                                                     CONCAT12(auVar57[4],
                                                                              CONCAT11(auVar57[2],
                                                                                       auVar57[0])))
                                                           )))),1);
      auVar67._0_2_ = MP_INT_ABS((ushort)bVar23 - (ushort)bVar13);
      auVar67._2_2_ = MP_INT_ABS((ushort)bVar24 - (ushort)bVar14);
      auVar67._4_2_ = MP_INT_ABS((ushort)bVar25 - (ushort)bVar15);
      auVar67._6_2_ = MP_INT_ABS((ushort)bVar26 - (ushort)bVar16);
      auVar67._8_2_ = MP_INT_ABS((ushort)bVar27 - (ushort)bVar19);
      auVar67._10_2_ = MP_INT_ABS((ushort)bVar28 - (ushort)bVar20);
      auVar67._12_2_ = MP_INT_ABS((ushort)bVar29 - (ushort)bVar21);
      auVar67._14_2_ = MP_INT_ABS((ushort)bVar30 - (ushort)bVar22);
      uVar18 = NEON_bsl(CONCAT17(auVar72[14],
                                 CONCAT16(auVar72[12],
                                          CONCAT15(auVar72[10],
                                                   CONCAT14(auVar72[8],
                                                            CONCAT13(auVar72[6],
                                                                     CONCAT12(auVar72[4],
                                                                              CONCAT11(auVar72[2],
                                                                                       auVar72[0])))
                                                           )))) & uVar64,uVar18,uVar46,1);
      auVar72._0_2_ = (ushort)bVar13 << 1;
      auVar72._2_2_ = (ushort)bVar14 << 1;
      auVar72._4_2_ = (ushort)bVar15 << 1;
      auVar72._6_2_ = (ushort)bVar16 << 1;
      auVar72._8_2_ = (ushort)bVar19 << 1;
      auVar72._10_2_ = (ushort)bVar20 << 1;
      auVar72._12_2_ = (ushort)bVar21 << 1;
      auVar72._14_2_ = (ushort)bVar22 << 1;
      bVar5 = (char)uVar18 + (char)uVar70;
      bVar6 = (char)((ulong)uVar18 >> 8) + (char)((uint)uVar70 >> 8);
      bVar7 = (char)((ulong)uVar18 >> 0x10) + (char)((uint)uVar70 >> 0x10);
      bVar8 = (char)((ulong)uVar18 >> 0x18) + (char)((uint)uVar70 >> 0x18);
      uVar70 = CONCAT13(bVar8,CONCAT12(bVar7,CONCAT11(bVar6,bVar5)));
      bVar9 = (char)((ulong)uVar18 >> 0x20) + (char)uVar73;
      bVar10 = (char)((ulong)uVar18 >> 0x28) + (char)((uint)uVar73 >> 8);
      bVar11 = (char)((ulong)uVar18 >> 0x30) + (char)((uint)uVar73 >> 0x10);
      bVar12 = (char)((ulong)uVar18 >> 0x38) + (char)((uint)uVar73 >> 0x18);
      uVar18 = CONCAT17(bVar12,CONCAT16(bVar11,CONCAT15(bVar10,CONCAT14(bVar9,uVar70))));
      auVar58._0_2_ = (ushort)bVar5 + (ushort)bVar23;
      auVar58._2_2_ = (ushort)bVar6 + (ushort)bVar24;
      auVar58._4_2_ = (ushort)bVar7 + (ushort)bVar25;
      auVar58._6_2_ = (ushort)bVar8 + (ushort)bVar26;
      auVar58._8_2_ = (ushort)bVar9 + (ushort)bVar27;
      auVar58._10_2_ = (ushort)bVar10 + (ushort)bVar28;
      auVar58._12_2_ = (ushort)bVar11 + (ushort)bVar29;
      auVar58._14_2_ = (ushort)bVar12 + (ushort)bVar30;
      uVar46 = NEON_uabd(uVar18,CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,
                                                  uVar17)))),1);
      auVar57 = NEON_uabd(auVar58,auVar72,2);
      auVar59._0_2_ = MP_INT_ABS((ushort)bVar5 - (ushort)bVar13);
      auVar59._2_2_ = MP_INT_ABS((ushort)bVar6 - (ushort)bVar14);
      auVar59._4_2_ = MP_INT_ABS((ushort)bVar7 - (ushort)bVar15);
      auVar59._6_2_ = MP_INT_ABS((ushort)bVar8 - (ushort)bVar16);
      auVar59._8_2_ = MP_INT_ABS((ushort)bVar9 - (ushort)bVar19);
      auVar59._10_2_ = MP_INT_ABS((ushort)bVar10 - (ushort)bVar20);
      auVar59._12_2_ = MP_INT_ABS((ushort)bVar11 - (ushort)bVar21);
      auVar59._14_2_ = MP_INT_ABS((ushort)bVar12 - (ushort)bVar22);
      auVar72 = NEON_cmhs(auVar57,auVar67,2);
      auVar57 = NEON_cmhi(auVar59,auVar57,2);
      uVar64 = NEON_cmhs(uVar46,uVar82,1);
      uVar75 = NEON_uabd(CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar35,uVar3)))),
                         CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,uVar2)))),1
                        );
      uVar46 = NEON_bsl(CONCAT17(auVar57[14],
                                 CONCAT16(auVar57[12],
                                          CONCAT15(auVar57[10],
                                                   CONCAT14(auVar57[8],
                                                            CONCAT13(auVar57[6],
                                                                     CONCAT12(auVar57[4],
                                                                              CONCAT11(auVar57[2],
                                                                                       auVar57[0])))
                                                           )))),
                        CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,uVar17)))),
                        CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,uVar2)))),1)
      ;
      auVar68._0_2_ = MP_INT_ABS((ushort)bVar31 - (ushort)bVar23);
      auVar68._2_2_ = MP_INT_ABS((ushort)bVar32 - (ushort)bVar24);
      auVar68._4_2_ = MP_INT_ABS((ushort)bVar33 - (ushort)bVar25);
      auVar68._6_2_ = MP_INT_ABS((ushort)bVar34 - (ushort)bVar26);
      auVar68._8_2_ = MP_INT_ABS((ushort)bVar35 - (ushort)bVar27);
      auVar68._10_2_ = MP_INT_ABS((ushort)bVar36 - (ushort)bVar28);
      auVar68._12_2_ = MP_INT_ABS((ushort)bVar37 - (ushort)bVar29);
      auVar68._14_2_ = MP_INT_ABS((ushort)bVar38 - (ushort)bVar30);
      uVar18 = NEON_bit(uVar46,uVar18,
                        CONCAT17(auVar72[14],
                                 CONCAT16(auVar72[12],
                                          CONCAT15(auVar72[10],
                                                   CONCAT14(auVar72[8],
                                                            CONCAT13(auVar72[6],
                                                                     CONCAT12(auVar72[4],
                                                                              CONCAT11(auVar72[2],
                                                                                       auVar72[0])))
                                                           )))) & uVar64,1);
      bVar5 = (char)uVar18 + (char)uVar74;
      bVar6 = (char)((ulong)uVar18 >> 8) + (char)((uint)uVar74 >> 8);
      bVar7 = (char)((ulong)uVar18 >> 0x10) + (char)((uint)uVar74 >> 0x10);
      bVar8 = (char)((ulong)uVar18 >> 0x18) + (char)((uint)uVar74 >> 0x18);
      bVar9 = (char)((ulong)uVar18 >> 0x20) + (char)uVar76;
      bVar10 = (char)((ulong)uVar18 >> 0x28) + (char)((uint)uVar76 >> 8);
      bVar11 = (char)((ulong)uVar18 >> 0x30) + (char)((uint)uVar76 >> 0x10);
      bVar12 = (char)((ulong)uVar18 >> 0x38) + (char)((uint)uVar76 >> 0x18);
      auVar47._0_2_ = (ushort)bVar23 << 1;
      auVar47._2_2_ = (ushort)bVar24 << 1;
      auVar47._4_2_ = (ushort)bVar25 << 1;
      auVar47._6_2_ = (ushort)bVar26 << 1;
      auVar47._8_2_ = (ushort)bVar27 << 1;
      auVar47._10_2_ = (ushort)bVar28 << 1;
      auVar47._12_2_ = (ushort)bVar29 << 1;
      auVar47._14_2_ = (ushort)bVar30 << 1;
      auVar60._0_2_ = (ushort)bVar5 + (ushort)bVar31;
      auVar60._2_2_ = (ushort)bVar6 + (ushort)bVar32;
      auVar60._4_2_ = (ushort)bVar7 + (ushort)bVar33;
      auVar60._6_2_ = (ushort)bVar8 + (ushort)bVar34;
      auVar60._8_2_ = (ushort)bVar9 + (ushort)bVar35;
      auVar60._10_2_ = (ushort)bVar10 + (ushort)bVar36;
      auVar60._12_2_ = (ushort)bVar11 + (ushort)bVar37;
      auVar60._14_2_ = (ushort)bVar12 + (ushort)bVar38;
      uVar18 = NEON_uabd(CONCAT17(bVar12,CONCAT16(bVar11,CONCAT15(bVar10,CONCAT14(bVar9,CONCAT13(
                                                  bVar8,CONCAT12(bVar7,CONCAT11(bVar6,bVar5))))))),
                         CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,uVar2)))),1
                        );
      auVar57 = NEON_uabd(auVar60,auVar47,2);
      auVar61._0_2_ = MP_INT_ABS((ushort)bVar5 - (ushort)bVar23);
      auVar61._2_2_ = MP_INT_ABS((ushort)bVar6 - (ushort)bVar24);
      auVar61._4_2_ = MP_INT_ABS((ushort)bVar7 - (ushort)bVar25);
      auVar61._6_2_ = MP_INT_ABS((ushort)bVar8 - (ushort)bVar26);
      auVar61._8_2_ = MP_INT_ABS((ushort)bVar9 - (ushort)bVar27);
      auVar61._10_2_ = MP_INT_ABS((ushort)bVar10 - (ushort)bVar28);
      auVar61._12_2_ = MP_INT_ABS((ushort)bVar11 - (ushort)bVar29);
      auVar61._14_2_ = MP_INT_ABS((ushort)bVar12 - (ushort)bVar30);
      auVar72 = NEON_cmhs(auVar57,auVar68,2);
      auVar57 = NEON_cmhi(auVar61,auVar57,2);
      uVar64 = NEON_cmhs(uVar18,uVar75,1);
      uVar46 = NEON_uabd(CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar42,uVar4)))),
                         CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar35,uVar3)))),1
                        );
      uVar18 = NEON_bsl(CONCAT17(auVar57[14],
                                 CONCAT16(auVar57[12],
                                          CONCAT15(auVar57[10],
                                                   CONCAT14(auVar57[8],
                                                            CONCAT13(auVar57[6],
                                                                     CONCAT12(auVar57[4],
                                                                              CONCAT11(auVar57[2],
                                                                                       auVar57[0])))
                                                           )))),
                        CONCAT17(bVar30,CONCAT16(bVar29,CONCAT15(bVar28,CONCAT14(bVar27,uVar2)))),
                        CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar35,uVar3)))),1)
      ;
      auVar69._0_2_ = MP_INT_ABS((ushort)(byte)uVar4 - (ushort)bVar31);
      auVar69._2_2_ = MP_INT_ABS((ushort)bVar39 - (ushort)bVar32);
      auVar69._4_2_ = MP_INT_ABS((ushort)bVar40 - (ushort)bVar33);
      auVar69._6_2_ = MP_INT_ABS((ushort)bVar41 - (ushort)bVar34);
      auVar69._8_2_ = MP_INT_ABS((ushort)bVar42 - (ushort)bVar35);
      auVar69._10_2_ = MP_INT_ABS((ushort)bVar43 - (ushort)bVar36);
      auVar69._12_2_ = MP_INT_ABS((ushort)bVar44 - (ushort)bVar37);
      auVar69._14_2_ = MP_INT_ABS((ushort)bVar45 - (ushort)bVar38);
      uVar18 = NEON_bit(uVar18,CONCAT17(bVar12,CONCAT16(bVar11,CONCAT15(bVar10,CONCAT14(bVar9,
                                                  CONCAT13(bVar8,CONCAT12(bVar7,CONCAT11(bVar6,bVar5
                                                                                        ))))))),
                        CONCAT17(auVar72[14],
                                 CONCAT16(auVar72[12],
                                          CONCAT15(auVar72[10],
                                                   CONCAT14(auVar72[8],
                                                            CONCAT13(auVar72[6],
                                                                     CONCAT12(auVar72[4],
                                                                              CONCAT11(auVar72[2],
                                                                                       auVar72[0])))
                                                           )))) & uVar64,1);
      bVar9 = (char)uVar18 + (char)uVar77;
      bVar10 = (char)((ulong)uVar18 >> 8) + (char)((uint)uVar77 >> 8);
      bVar11 = (char)((ulong)uVar18 >> 0x10) + (char)((uint)uVar77 >> 0x10);
      bVar12 = (char)((ulong)uVar18 >> 0x18) + (char)((uint)uVar77 >> 0x18);
      bVar13 = (char)((ulong)uVar18 >> 0x20) + (char)uVar79;
      bVar14 = (char)((ulong)uVar18 >> 0x28) + (char)((uint)uVar79 >> 8);
      bVar15 = (char)((ulong)uVar18 >> 0x30) + (char)((uint)uVar79 >> 0x10);
      bVar16 = (char)((ulong)uVar18 >> 0x38) + (char)((uint)uVar79 >> 0x18);
      auVar48._0_2_ = (ushort)bVar31 << 1;
      auVar48._2_2_ = (ushort)bVar32 << 1;
      auVar48._4_2_ = (ushort)bVar33 << 1;
      auVar48._6_2_ = (ushort)bVar34 << 1;
      auVar48._8_2_ = (ushort)bVar35 << 1;
      auVar48._10_2_ = (ushort)bVar36 << 1;
      auVar48._12_2_ = (ushort)bVar37 << 1;
      auVar48._14_2_ = (ushort)bVar38 << 1;
      auVar62._0_2_ = (ushort)bVar9 + (ushort)(byte)uVar4;
      auVar62._2_2_ = (ushort)bVar10 + (ushort)bVar39;
      auVar62._4_2_ = (ushort)bVar11 + (ushort)bVar40;
      auVar62._6_2_ = (ushort)bVar12 + (ushort)bVar41;
      auVar62._8_2_ = (ushort)bVar13 + (ushort)bVar42;
      auVar62._10_2_ = (ushort)bVar14 + (ushort)bVar43;
      auVar62._12_2_ = (ushort)bVar15 + (ushort)bVar44;
      auVar62._14_2_ = (ushort)bVar16 + (ushort)bVar45;
      uVar18 = NEON_uabd(CONCAT17(bVar16,CONCAT16(bVar15,CONCAT15(bVar14,CONCAT14(bVar13,CONCAT13(
                                                  bVar12,CONCAT12(bVar11,CONCAT11(bVar10,bVar9))))))
                                 ),
                         CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar35,uVar3)))),1
                        );
      auVar57 = NEON_uabd(auVar62,auVar48,2);
      auVar63._0_2_ = MP_INT_ABS((ushort)bVar9 - (ushort)bVar31);
      auVar63._2_2_ = MP_INT_ABS((ushort)bVar10 - (ushort)bVar32);
      auVar63._4_2_ = MP_INT_ABS((ushort)bVar11 - (ushort)bVar33);
      auVar63._6_2_ = MP_INT_ABS((ushort)bVar12 - (ushort)bVar34);
      auVar63._8_2_ = MP_INT_ABS((ushort)bVar13 - (ushort)bVar35);
      auVar63._10_2_ = MP_INT_ABS((ushort)bVar14 - (ushort)bVar36);
      auVar63._12_2_ = MP_INT_ABS((ushort)bVar15 - (ushort)bVar37);
      auVar63._14_2_ = MP_INT_ABS((ushort)bVar16 - (ushort)bVar38);
      auVar72 = NEON_cmhs(auVar57,auVar69,2);
      auVar57 = NEON_cmhi(auVar63,auVar57,2);
      uVar64 = NEON_cmhs(uVar18,uVar46,1);
      uVar18 = NEON_bsl(CONCAT17(auVar57[14],
                                 CONCAT16(auVar57[12],
                                          CONCAT15(auVar57[10],
                                                   CONCAT14(auVar57[8],
                                                            CONCAT13(auVar57[6],
                                                                     CONCAT12(auVar57[4],
                                                                              CONCAT11(auVar57[2],
                                                                                       auVar57[0])))
                                                           )))),
                        CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar35,uVar3)))),
                        CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar42,uVar4)))),1)
      ;
      uVar18 = NEON_bit(uVar18,CONCAT17(bVar16,CONCAT16(bVar15,CONCAT15(bVar14,CONCAT14(bVar13,
                                                  CONCAT13(bVar12,CONCAT12(bVar11,CONCAT11(bVar10,
                                                  bVar9))))))),
                        CONCAT17(auVar72[14],
                                 CONCAT16(auVar72[12],
                                          CONCAT15(auVar72[10],
                                                   CONCAT14(auVar72[8],
                                                            CONCAT13(auVar72[6],
                                                                     CONCAT12(auVar72[4],
                                                                              CONCAT11(auVar72[2],
                                                                                       auVar72[0])))
                                                           )))) & uVar64,1);
      uVar17 = CONCAT13((char)((ulong)uVar18 >> 0x18) + (char)((uint)uVar80 >> 0x18),
                        CONCAT12((char)((ulong)uVar18 >> 0x10) + (char)((uint)uVar80 >> 0x10),
                                 CONCAT11((char)((ulong)uVar18 >> 8) + (char)((uint)uVar80 >> 8),
                                          (char)uVar18 + (char)uVar80)));
      uVar18 = CONCAT17((char)((ulong)uVar18 >> 0x38) + (char)((uint)uVar81 >> 0x18),
                        CONCAT16((char)((ulong)uVar18 >> 0x30) + (char)((uint)uVar81 >> 0x10),
                                 CONCAT15((char)((ulong)uVar18 >> 0x28) + (char)((uint)uVar81 >> 8),
                                          CONCAT14((char)((ulong)uVar18 >> 0x20) + (char)uVar81,
                                                   uVar17))));
      auVar57[4] = bVar42;
      auVar57._0_4_ = uVar4;
      auVar57[5] = bVar43;
      auVar57[6] = bVar44;
      auVar57[7] = bVar45;
      auVar57._8_8_ = 0;
      *param_2 = uVar70;
      param_2[1] = CONCAT13(bVar8,CONCAT12(bVar7,CONCAT11(bVar6,bVar5)));
      param_2[2] = CONCAT13(bVar12,CONCAT12(bVar11,CONCAT11(bVar10,bVar9)));
      param_2[3] = uVar17;
      param_2 = param_2 + 4;
    } while (param_2 < puVar1);
  }
  return;
}


