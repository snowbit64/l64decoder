// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00aa74d0
// Entry Point: 00aa74d0
// Size: 624 bytes
// Signature: undefined FUN_00aa74d0(void)


ulong FUN_00aa74d0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  int iVar9;
  int iVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  undefined auVar16 [16];
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
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
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined8 uVar38;
  byte bVar42;
  byte bVar43;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined8 uVar44;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  undefined auVar68 [16];
  undefined auVar69 [16];
  undefined auVar70 [16];
  undefined auVar71 [16];
  undefined auVar72 [16];
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = *(int *)((long)param_1 + 0x14);
  iVar3 = *(int *)((long)param_1 + 0xc);
  if (iVar3 <= iVar2) {
    return 0;
  }
  param_2 = iVar2 + param_2;
  lVar19 = *param_1;
  if (param_2 <= iVar3) {
    iVar3 = param_2;
  }
  iVar4 = *(int *)(param_1 + 1);
  uVar20 = iVar3 - iVar2;
  *(int *)((long)param_1 + 0x14) = param_2;
  uVar17 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
  iVar3 = iVar2 + uVar17 + -1;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar18 = iVar4 - iVar3;
    uVar6 = iVar4 - iVar2;
    if (uVar6 - uVar18 == -1) {
      uVar18 = 0;
    }
    else {
      uVar5 = uVar18 + 0x3f;
      if (-1 < (int)uVar18) {
        uVar5 = uVar18;
      }
      uVar1 = uVar6 + 0x3f;
      if (-1 < (int)uVar6) {
        uVar1 = uVar6;
      }
      uVar21 = *(ulong *)(lVar19 + (long)((int)uVar5 >> 6) * 8);
      if ((int)uVar5 >> 6 == (int)uVar1 >> 6) {
        uVar18 = (uint)((uVar21 & (2L << ((ulong)uVar6 & 0x3f)) - 1U) >> ((ulong)uVar18 & 0x3f));
      }
      else {
        uVar18 = (uint)((*(ulong *)(lVar19 + (long)((int)uVar1 >> 6) * 8) &
                        (2L << ((ulong)uVar6 & 0x3f)) + 0xffffffffU) <<
                       ((ulong)((uVar6 - uVar18) - uVar6) & 0x3f)) |
                 (uint)(uVar21 >> ((ulong)uVar18 & 0x3f));
      }
    }
    if (0 < (int)uVar20) {
      if (uVar17 < 8) {
        uVar20 = 0;
        uVar21 = 0;
      }
      else {
        uVar20 = uVar17 & 0x7ffffff8;
        bVar22 = 0;
        bVar23 = 0;
        bVar24 = 0;
        bVar25 = 0;
        bVar26 = 0;
        bVar27 = 0;
        bVar28 = 0;
        bVar29 = 0;
        bVar30 = 0;
        bVar31 = 0;
        bVar32 = 0;
        bVar33 = 0;
        bVar34 = 0;
        bVar35 = 0;
        bVar36 = 0;
        bVar37 = 0;
        bVar60 = 2;
        bVar61 = 0;
        bVar62 = 0;
        bVar63 = 0;
        bVar64 = 3;
        bVar65 = 0;
        bVar66 = 0;
        bVar67 = 0;
        bVar52 = 0;
        bVar53 = 0;
        bVar54 = 0;
        bVar55 = 0;
        bVar56 = 1;
        bVar57 = 0;
        bVar58 = 0;
        bVar59 = 0;
        uVar38 = 0;
        uVar44 = 0;
        uVar6 = uVar20;
        do {
          auVar68[1] = bVar53;
          auVar68[0] = bVar52;
          auVar68[2] = bVar54;
          auVar68[3] = bVar55;
          auVar68[4] = bVar56;
          auVar68[5] = bVar57;
          auVar68[6] = bVar58;
          auVar68[7] = bVar59;
          auVar68[8] = bVar60;
          auVar68[9] = bVar61;
          auVar68[10] = bVar62;
          auVar68[11] = bVar63;
          auVar68[12] = bVar64;
          auVar68[13] = bVar65;
          auVar68[14] = bVar66;
          auVar68[15] = bVar67;
          auVar68 = NEON_neg(auVar68,4);
          uVar6 = uVar6 - 8;
          auVar70._0_4_ = -4 - CONCAT13(bVar55,CONCAT12(bVar54,CONCAT11(bVar53,bVar52)));
          auVar70._4_4_ = -4 - CONCAT13(bVar59,CONCAT12(bVar58,CONCAT11(bVar57,bVar56)));
          auVar70._8_4_ = -4 - CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,bVar60)));
          auVar70._12_4_ = -4 - CONCAT13(bVar67,CONCAT12(bVar66,CONCAT11(bVar65,bVar64)));
          bVar73 = ~bVar52;
          bVar74 = ~bVar53;
          bVar75 = ~bVar54;
          bVar76 = ~bVar55;
          iVar3 = CONCAT13(bVar55,CONCAT12(bVar54,CONCAT11(bVar53,bVar52)));
          iVar2 = CONCAT13(bVar59,CONCAT12(bVar58,CONCAT11(bVar57,bVar56)));
          iVar4 = CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,bVar60)));
          iVar9 = CONCAT13(bVar67,CONCAT12(bVar66,CONCAT11(bVar65,bVar64)));
          auVar71._4_4_ = uVar18;
          auVar71._0_4_ = uVar18;
          auVar71._8_4_ = uVar18;
          auVar71._12_4_ = uVar18;
          auVar68 = NEON_ushl(auVar71,auVar68,4);
          auVar11._4_4_ = uVar18;
          auVar11._0_4_ = uVar18;
          auVar11._8_4_ = uVar18;
          auVar11._12_4_ = uVar18;
          auVar71 = NEON_ushl(auVar11,auVar70,4);
          iVar13 = uVar17 + CONCAT13(~bVar59,CONCAT12(~bVar58,CONCAT11(~bVar57,~bVar56)));
          iVar14 = uVar17 + CONCAT13(~bVar63,CONCAT12(~bVar62,CONCAT11(~bVar61,~bVar60)));
          iVar15 = uVar17 + CONCAT13(~bVar67,CONCAT12(~bVar66,CONCAT11(~bVar65,~bVar64)));
          auVar69._0_5_ = CONCAT14(auVar68[4],(uint)(auVar68[0] & 1)) & 0x1ffffffff;
          auVar69._5_3_ = 0;
          auVar69[8] = auVar68[8] & 1;
          auVar69._9_3_ = 0;
          auVar69[12] = auVar68[12] & 1;
          auVar69._13_3_ = 0;
          auVar72._0_5_ = CONCAT14(auVar71[4],(uint)(auVar71[0] & 1)) & 0x1ffffffff;
          auVar72._5_3_ = 0;
          auVar72[8] = auVar71[8] & 1;
          auVar72._9_3_ = 0;
          auVar72[12] = auVar71[12] & 1;
          auVar72._13_3_ = 0;
          iVar10 = CONCAT13(bVar55,CONCAT12(bVar54,CONCAT11(bVar53,bVar52))) + 8;
          bVar52 = (byte)iVar10;
          bVar53 = (byte)((uint)iVar10 >> 8);
          bVar54 = (byte)((uint)iVar10 >> 0x10);
          bVar55 = (byte)((uint)iVar10 >> 0x18);
          iVar10 = CONCAT13(bVar59,CONCAT12(bVar58,CONCAT11(bVar57,bVar56))) + 8;
          bVar56 = (byte)iVar10;
          bVar57 = (byte)((uint)iVar10 >> 8);
          bVar58 = (byte)((uint)iVar10 >> 0x10);
          bVar59 = (byte)((uint)iVar10 >> 0x18);
          iVar10 = CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,bVar60))) + 8;
          bVar60 = (byte)iVar10;
          bVar61 = (byte)((uint)iVar10 >> 8);
          bVar62 = (byte)((uint)iVar10 >> 0x10);
          bVar63 = (byte)((uint)iVar10 >> 0x18);
          iVar10 = CONCAT13(bVar67,CONCAT12(bVar66,CONCAT11(bVar65,bVar64))) + 8;
          bVar64 = (byte)iVar10;
          bVar65 = (byte)((uint)iVar10 >> 8);
          bVar66 = (byte)((uint)iVar10 >> 0x10);
          bVar67 = (byte)((uint)iVar10 >> 0x18);
          auVar12[4] = (char)iVar13;
          auVar12._0_4_ = uVar17 + CONCAT13(bVar76,CONCAT12(bVar75,CONCAT11(bVar74,bVar73)));
          auVar12[5] = (char)((uint)iVar13 >> 8);
          auVar12[6] = (char)((uint)iVar13 >> 0x10);
          auVar12[7] = (char)((uint)iVar13 >> 0x18);
          auVar12[8] = (char)iVar14;
          auVar12[9] = (char)((uint)iVar14 >> 8);
          auVar12[10] = (char)((uint)iVar14 >> 0x10);
          auVar12[11] = (char)((uint)iVar14 >> 0x18);
          auVar12[12] = (char)iVar15;
          auVar12[13] = (char)((uint)iVar15 >> 8);
          auVar12[14] = (char)((uint)iVar15 >> 0x10);
          auVar12[15] = (char)((uint)iVar15 >> 0x18);
          auVar68 = NEON_ushl(auVar69,auVar12,4);
          auVar16._4_4_ = (uVar17 - iVar2) + -5;
          auVar16._0_4_ = (uVar17 - iVar3) + -5;
          auVar16._8_4_ = (uVar17 - iVar4) + -5;
          auVar16._12_4_ = (uVar17 - iVar9) + -5;
          auVar71 = NEON_ushl(auVar72,auVar16,4);
          bVar22 = auVar68[0] | bVar22;
          bVar23 = auVar68[1] | bVar23;
          bVar24 = auVar68[2] | bVar24;
          bVar25 = auVar68[3] | bVar25;
          bVar26 = auVar68[4] | bVar26;
          bVar27 = auVar68[5] | bVar27;
          bVar28 = auVar68[6] | bVar28;
          bVar29 = auVar68[7] | bVar29;
          bVar30 = auVar68[8] | bVar30;
          bVar31 = auVar68[9] | bVar31;
          bVar32 = auVar68[10] | bVar32;
          bVar33 = auVar68[11] | bVar33;
          bVar34 = auVar68[12] | bVar34;
          bVar35 = auVar68[13] | bVar35;
          bVar36 = auVar68[14] | bVar36;
          bVar37 = auVar68[15] | bVar37;
          bVar73 = auVar71[0] | (byte)uVar38;
          bVar74 = auVar71[1] | (byte)((ulong)uVar38 >> 8);
          bVar75 = auVar71[2] | (byte)((ulong)uVar38 >> 0x10);
          bVar76 = auVar71[3] | (byte)((ulong)uVar38 >> 0x18);
          bVar39 = auVar71[4] | (byte)((ulong)uVar38 >> 0x20);
          bVar40 = auVar71[5] | (byte)((ulong)uVar38 >> 0x28);
          bVar41 = auVar71[6] | (byte)((ulong)uVar38 >> 0x30);
          bVar42 = auVar71[7] | (byte)((ulong)uVar38 >> 0x38);
          uVar38 = CONCAT17(bVar42,CONCAT16(bVar41,CONCAT15(bVar40,CONCAT14(bVar39,CONCAT13(bVar76,
                                                  CONCAT12(bVar75,CONCAT11(bVar74,bVar73)))))));
          bVar43 = auVar71[8] | (byte)uVar44;
          bVar45 = auVar71[9] | (byte)((ulong)uVar44 >> 8);
          bVar46 = auVar71[10] | (byte)((ulong)uVar44 >> 0x10);
          bVar47 = auVar71[11] | (byte)((ulong)uVar44 >> 0x18);
          bVar48 = auVar71[12] | (byte)((ulong)uVar44 >> 0x20);
          bVar49 = auVar71[13] | (byte)((ulong)uVar44 >> 0x28);
          bVar50 = auVar71[14] | (byte)((ulong)uVar44 >> 0x30);
          bVar51 = auVar71[15] | (byte)((ulong)uVar44 >> 0x38);
          uVar44 = CONCAT17(bVar51,CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar48,CONCAT13(bVar47,
                                                  CONCAT12(bVar46,CONCAT11(bVar45,bVar43)))))));
        } while (uVar6 != 0);
        bVar73 = bVar73 | bVar22;
        bVar74 = bVar74 | bVar23;
        bVar75 = bVar75 | bVar24;
        bVar76 = bVar76 | bVar25;
        bVar39 = bVar39 | bVar26;
        bVar40 = bVar40 | bVar27;
        bVar41 = bVar41 | bVar28;
        bVar42 = bVar42 | bVar29;
        bVar43 = bVar43 | bVar30;
        bVar45 = bVar45 | bVar31;
        bVar46 = bVar46 | bVar32;
        bVar47 = bVar47 | bVar33;
        bVar48 = bVar48 | bVar34;
        bVar49 = bVar49 | bVar35;
        bVar50 = bVar50 | bVar36;
        bVar51 = bVar51 | bVar37;
        auVar7[1] = bVar74;
        auVar7[0] = bVar73;
        auVar7[2] = bVar75;
        auVar7[3] = bVar76;
        auVar7[4] = bVar39;
        auVar7[5] = bVar40;
        auVar7[6] = bVar41;
        auVar7[7] = bVar42;
        auVar7[8] = bVar43;
        auVar7[9] = bVar45;
        auVar7[10] = bVar46;
        auVar7[11] = bVar47;
        auVar7[12] = bVar48;
        auVar7[13] = bVar49;
        auVar7[14] = bVar50;
        auVar7[15] = bVar51;
        auVar8[1] = bVar74;
        auVar8[0] = bVar73;
        auVar8[2] = bVar75;
        auVar8[3] = bVar76;
        auVar8[4] = bVar39;
        auVar8[5] = bVar40;
        auVar8[6] = bVar41;
        auVar8[7] = bVar42;
        auVar8[8] = bVar43;
        auVar8[9] = bVar45;
        auVar8[10] = bVar46;
        auVar8[11] = bVar47;
        auVar8[12] = bVar48;
        auVar8[13] = bVar49;
        auVar8[14] = bVar50;
        auVar8[15] = bVar51;
        auVar68 = NEON_ext(auVar7,auVar8,8,1);
        uVar21 = (ulong)(CONCAT13(bVar76 | auVar68[3],
                                  CONCAT12(bVar75 | auVar68[2],
                                           CONCAT11(bVar74 | auVar68[1],bVar73 | auVar68[0]))) |
                        CONCAT13(bVar42 | auVar68[7],
                                 CONCAT12(bVar41 | auVar68[6],
                                          CONCAT11(bVar40 | auVar68[5],bVar39 | auVar68[4]))));
        if (uVar17 == uVar20) {
          return uVar21;
        }
      }
      uVar17 = ~uVar20 + uVar17;
      do {
        uVar5 = uVar20 & 0x1f;
        uVar20 = uVar20 + 1;
        uVar6 = uVar17 & 0x1f;
        uVar17 = uVar17 - 1;
        uVar21 = (ulong)((uVar18 >> (ulong)uVar5 & 1) << (ulong)uVar6 | (uint)uVar21);
      } while (uVar17 != 0xffffffff);
      return uVar21;
    }
    return 0;
  }
  uVar17 = iVar4 + iVar2;
  uVar20 = iVar4 + iVar3;
  if (uVar20 - uVar17 == -1) {
    return 0;
  }
  uVar18 = uVar17 + 0x3f;
  if (-1 < (int)uVar17) {
    uVar18 = uVar17;
  }
  uVar6 = uVar20 + 0x3f;
  if (-1 < (int)uVar20) {
    uVar6 = uVar20;
  }
  uVar21 = *(ulong *)(lVar19 + (long)((int)uVar18 >> 6) * 8);
  if ((int)uVar18 >> 6 != (int)uVar6 >> 6) {
    return (*(ulong *)(lVar19 + (long)((int)uVar6 >> 6) * 8) &
           (2L << ((ulong)uVar20 & 0x3f)) + 0xffffffffU) <<
           ((ulong)((uVar20 - uVar17) - uVar20) & 0x3f) | uVar21 >> ((ulong)uVar17 & 0x3f);
  }
  return (uVar21 & (2L << ((ulong)uVar20 & 0x3f)) - 1U) >> ((ulong)uVar17 & 0x3f);
}


