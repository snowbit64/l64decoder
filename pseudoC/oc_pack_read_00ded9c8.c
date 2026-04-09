// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_pack_read
// Entry Point: 00ded9c8
// Size: 564 bytes
// Signature: undefined oc_pack_read(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong oc_pack_read(ulong *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [13];
  undefined auVar7 [13];
  byte bVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined uVar16;
  undefined uVar17;
  undefined auVar18 [16];
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
  undefined auVar34 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
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
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  undefined8 uVar53;
  byte bVar60;
  byte bVar61;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  undefined8 uVar62;
  byte bVar69;
  byte bVar70;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined8 uVar71;
  byte bVar78;
  undefined8 uVar79;
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  uint uVar85;
  int iVar86;
  uint uVar87;
  int iVar88;
  ulong uVar89;
  undefined auVar90 [16];
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar93 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  uVar39 = *(uint *)(param_1 + 3);
  uVar9 = *param_1;
  if (param_2 <= (int)uVar39) goto LAB_00dedbd4;
  puVar12 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  bVar8 = puVar12 < puVar2;
  if (((int)uVar39 < 0x39) && (puVar12 < puVar2)) {
    uVar1 = uVar39;
    if ((int)uVar39 < 0x32) {
      uVar1 = 0x31;
    }
    uVar1 = (uVar1 - uVar39) + 7;
    pbVar14 = (byte *)(ulong)(uVar1 >> 3);
    pbVar10 = (byte *)(~(ulong)puVar12 + (long)puVar2);
    if (pbVar14 <= (byte *)(~(ulong)puVar12 + (long)puVar2)) {
      pbVar10 = pbVar14;
    }
    pbVar14 = (byte *)0x1;
    if (7 < uVar1) {
      pbVar14 = pbVar10 + 1;
    }
    if ((byte *)0x7 < pbVar14) {
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      pbVar15 = (byte *)((ulong)pbVar14 & 0x3ffffff8);
      puVar11 = (undefined8 *)((long)puVar12 + (long)pbVar15);
      bVar8 = (byte)uVar9;
      bVar19 = (byte)(uVar9 >> 8);
      bVar20 = (byte)(uVar9 >> 0x10);
      bVar21 = (byte)(uVar9 >> 0x18);
      bVar22 = (byte)(uVar9 >> 0x20);
      bVar23 = (byte)(uVar9 >> 0x28);
      bVar24 = (byte)(uVar9 >> 0x30);
      bVar25 = (byte)(uVar9 >> 0x38);
      uVar1 = uVar39 + (int)pbVar15 * 8;
      iVar35 = uVar39 + 0x20;
      iVar36 = uVar39 + 0x28;
      iVar37 = uVar39 + 0x30;
      iVar38 = uVar39 + 0x38;
      iVar40 = uVar39 + 8;
      iVar41 = uVar39 + 0x10;
      iVar42 = uVar39 + 0x18;
      uVar44 = 0;
      uVar53 = 0;
      uVar62 = 0;
      uVar71 = 0;
      pbVar10 = pbVar15;
      auVar34 = ZEXT816(0);
      do {
        puVar13 = puVar12;
        auVar82._0_4_ = 0x38 - iVar35;
        auVar82._4_4_ = 0x38 - iVar36;
        auVar82._8_4_ = 0x38 - iVar37;
        auVar82._12_4_ = 0x38 - iVar38;
        pbVar10 = pbVar10 + -8;
        uVar85 = 0x38 - uVar39;
        iVar86 = 0x38 - iVar40;
        uVar87 = 0x38 - iVar41;
        iVar88 = 0x38 - iVar42;
        uVar39 = uVar39 + 0x40;
        iVar40 = iVar40 + 0x40;
        iVar41 = iVar41 + 0x40;
        iVar42 = iVar42 + 0x40;
        auVar92._0_8_ = auVar82._8_8_ & 0xffffffff;
        auVar92._8_8_ = auVar82._8_8_ >> 0x20;
        auVar91._4_4_ = 0;
        auVar91._0_4_ = uVar87;
        auVar83._4_4_ = 0;
        auVar83._0_4_ = auVar82._0_4_;
        auVar83._8_4_ = auVar82._4_4_;
        auVar83._12_4_ = 0;
        uVar79 = *puVar13;
        iVar35 = iVar35 + 0x40;
        iVar36 = iVar36 + 0x40;
        iVar37 = iVar37 + 0x40;
        iVar38 = iVar38 + 0x40;
        uVar16 = (undefined)((ulong)uVar79 >> 8);
        uVar17 = (undefined)((ulong)uVar79 >> 0x28);
        uVar89 = CONCAT35(0,CONCAT14(uVar17,(uint)(byte)((ulong)uVar79 >> 0x20)));
        auVar6[8] = (char)((ulong)uVar79 >> 0x30);
        auVar6._0_8_ = uVar89;
        auVar6._9_3_ = 0;
        auVar6[12] = (char)((ulong)uVar79 >> 0x38);
        uVar9 = CONCAT26(0,(uint6)CONCAT14(uVar16,(uint)CONCAT12(uVar16,(ushort)(byte)uVar79)) &
                           0xffff0000ffff);
        auVar7[8] = (char)((ulong)uVar79 >> 0x10);
        auVar7._0_8_ = uVar9;
        auVar7._9_3_ = 0;
        auVar7[12] = (char)((ulong)uVar79 >> 0x18);
        auVar90._0_8_ = uVar89 & 0xffffffff;
        auVar90[8] = uVar17;
        auVar90._9_7_ = 0;
        auVar80._0_8_ = uVar9 & 0xffffffff;
        auVar80[8] = uVar16;
        auVar80._9_7_ = 0;
        auVar84._8_5_ = auVar6._8_5_ >> 0x20;
        auVar84._0_8_ = (ulong)auVar6._8_5_ & 0xffffffff;
        auVar84._13_3_ = 0;
        auVar93 = NEON_ushl(auVar84,auVar92,8);
        auVar84 = NEON_ushl(auVar90,auVar83,8);
        auVar91._8_4_ = iVar88;
        auVar91._12_4_ = 0;
        auVar5._8_5_ = auVar7._8_5_ >> 0x20;
        auVar5._0_8_ = (ulong)auVar7._8_5_ & 0xffffffff;
        auVar5._13_3_ = 0;
        auVar91 = NEON_ushl(auVar5,auVar91,8);
        auVar81._4_4_ = 0;
        auVar81._0_4_ = uVar85;
        auVar81._8_4_ = iVar86;
        auVar81._12_4_ = 0;
        auVar81 = NEON_ushl(auVar80,auVar81,8);
        bVar61 = auVar93[0] | (byte)uVar62;
        bVar63 = auVar93[1] | (byte)((ulong)uVar62 >> 8);
        bVar64 = auVar93[2] | (byte)((ulong)uVar62 >> 0x10);
        bVar65 = auVar93[3] | (byte)((ulong)uVar62 >> 0x18);
        bVar66 = auVar93[4] | (byte)((ulong)uVar62 >> 0x20);
        bVar67 = auVar93[5] | (byte)((ulong)uVar62 >> 0x28);
        bVar68 = auVar93[6] | (byte)((ulong)uVar62 >> 0x30);
        bVar69 = auVar93[7] | (byte)((ulong)uVar62 >> 0x38);
        uVar62 = CONCAT17(bVar69,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,CONCAT13(bVar65,
                                                  CONCAT12(bVar64,CONCAT11(bVar63,bVar61)))))));
        bVar70 = auVar93[8] | (byte)uVar71;
        bVar72 = auVar93[9] | (byte)((ulong)uVar71 >> 8);
        bVar73 = auVar93[10] | (byte)((ulong)uVar71 >> 0x10);
        bVar74 = auVar93[11] | (byte)((ulong)uVar71 >> 0x18);
        bVar75 = auVar93[12] | (byte)((ulong)uVar71 >> 0x20);
        bVar76 = auVar93[13] | (byte)((ulong)uVar71 >> 0x28);
        bVar77 = auVar93[14] | (byte)((ulong)uVar71 >> 0x30);
        bVar78 = auVar93[15] | (byte)((ulong)uVar71 >> 0x38);
        uVar71 = CONCAT17(bVar78,CONCAT16(bVar77,CONCAT15(bVar76,CONCAT14(bVar75,CONCAT13(bVar74,
                                                  CONCAT12(bVar73,CONCAT11(bVar72,bVar70)))))));
        bVar43 = auVar84[0] | (byte)uVar44;
        bVar45 = auVar84[1] | (byte)((ulong)uVar44 >> 8);
        bVar46 = auVar84[2] | (byte)((ulong)uVar44 >> 0x10);
        bVar47 = auVar84[3] | (byte)((ulong)uVar44 >> 0x18);
        bVar48 = auVar84[4] | (byte)((ulong)uVar44 >> 0x20);
        bVar49 = auVar84[5] | (byte)((ulong)uVar44 >> 0x28);
        bVar50 = auVar84[6] | (byte)((ulong)uVar44 >> 0x30);
        bVar51 = auVar84[7] | (byte)((ulong)uVar44 >> 0x38);
        uVar44 = CONCAT17(bVar51,CONCAT16(bVar50,CONCAT15(bVar49,CONCAT14(bVar48,CONCAT13(bVar47,
                                                  CONCAT12(bVar46,CONCAT11(bVar45,bVar43)))))));
        bVar52 = auVar84[8] | (byte)uVar53;
        bVar54 = auVar84[9] | (byte)((ulong)uVar53 >> 8);
        bVar55 = auVar84[10] | (byte)((ulong)uVar53 >> 0x10);
        bVar56 = auVar84[11] | (byte)((ulong)uVar53 >> 0x18);
        bVar57 = auVar84[12] | (byte)((ulong)uVar53 >> 0x20);
        bVar58 = auVar84[13] | (byte)((ulong)uVar53 >> 0x28);
        bVar59 = auVar84[14] | (byte)((ulong)uVar53 >> 0x30);
        bVar60 = auVar84[15] | (byte)((ulong)uVar53 >> 0x38);
        uVar53 = CONCAT17(bVar60,CONCAT16(bVar59,CONCAT15(bVar58,CONCAT14(bVar57,CONCAT13(bVar56,
                                                  CONCAT12(bVar55,CONCAT11(bVar54,bVar52)))))));
        auVar93[0] = auVar91[0] | auVar34[0];
        auVar93[1] = auVar91[1] | auVar34[1];
        auVar93[2] = auVar91[2] | auVar34[2];
        auVar93[3] = auVar91[3] | auVar34[3];
        auVar93[4] = auVar91[4] | auVar34[4];
        auVar93[5] = auVar91[5] | auVar34[5];
        auVar93[6] = auVar91[6] | auVar34[6];
        auVar93[7] = auVar91[7] | auVar34[7];
        auVar93[8] = auVar91[8] | auVar34[8];
        auVar93[9] = auVar91[9] | auVar34[9];
        auVar93[10] = auVar91[10] | auVar34[10];
        auVar93[11] = auVar91[11] | auVar34[11];
        auVar93[12] = auVar91[12] | auVar34[12];
        auVar93[13] = auVar91[13] | auVar34[13];
        auVar93[14] = auVar91[14] | auVar34[14];
        auVar93[15] = auVar91[15] | auVar34[15];
        bVar8 = auVar81[0] | bVar8;
        bVar19 = auVar81[1] | bVar19;
        bVar20 = auVar81[2] | bVar20;
        bVar21 = auVar81[3] | bVar21;
        bVar22 = auVar81[4] | bVar22;
        bVar23 = auVar81[5] | bVar23;
        bVar24 = auVar81[6] | bVar24;
        bVar25 = auVar81[7] | bVar25;
        bVar26 = auVar81[8] | bVar26;
        bVar27 = auVar81[9] | bVar27;
        bVar28 = auVar81[10] | bVar28;
        bVar29 = auVar81[11] | bVar29;
        bVar30 = auVar81[12] | bVar30;
        bVar31 = auVar81[13] | bVar31;
        bVar32 = auVar81[14] | bVar32;
        bVar33 = auVar81[15] | bVar33;
        puVar12 = puVar13 + 1;
        auVar34 = auVar93;
      } while (pbVar10 != (byte *)0x0);
      bVar8 = bVar8 | bVar43 | auVar93[0] | bVar61;
      bVar19 = bVar19 | bVar45 | auVar93[1] | bVar63;
      bVar20 = bVar20 | bVar46 | auVar93[2] | bVar64;
      bVar21 = bVar21 | bVar47 | auVar93[3] | bVar65;
      bVar22 = bVar22 | bVar48 | auVar93[4] | bVar66;
      bVar23 = bVar23 | bVar49 | auVar93[5] | bVar67;
      bVar24 = bVar24 | bVar50 | auVar93[6] | bVar68;
      bVar25 = bVar25 | bVar51 | auVar93[7] | bVar69;
      bVar26 = bVar26 | bVar52 | auVar93[8] | bVar70;
      bVar27 = bVar27 | bVar54 | auVar93[9] | bVar72;
      bVar28 = bVar28 | bVar55 | auVar93[10] | bVar73;
      bVar29 = bVar29 | bVar56 | auVar93[11] | bVar74;
      bVar30 = bVar30 | bVar57 | auVar93[12] | bVar75;
      bVar31 = bVar31 | bVar58 | auVar93[13] | bVar76;
      bVar32 = bVar32 | bVar59 | auVar93[14] | bVar77;
      bVar33 = bVar33 | bVar60 | auVar93[15] | bVar78;
      auVar34[1] = bVar19;
      auVar34[0] = bVar8;
      auVar34[2] = bVar20;
      auVar34[3] = bVar21;
      auVar34[4] = bVar22;
      auVar34[5] = bVar23;
      auVar34[6] = bVar24;
      auVar34[7] = bVar25;
      auVar34[8] = bVar26;
      auVar34[9] = bVar27;
      auVar34[10] = bVar28;
      auVar34[11] = bVar29;
      auVar34[12] = bVar30;
      auVar34[13] = bVar31;
      auVar34[14] = bVar32;
      auVar34[15] = bVar33;
      auVar3[1] = bVar19;
      auVar3[0] = bVar8;
      auVar3[2] = bVar20;
      auVar3[3] = bVar21;
      auVar3[4] = bVar22;
      auVar3[5] = bVar23;
      auVar3[6] = bVar24;
      auVar3[7] = bVar25;
      auVar3[8] = bVar26;
      auVar3[9] = bVar27;
      auVar3[10] = bVar28;
      auVar3[11] = bVar29;
      auVar3[12] = bVar30;
      auVar3[13] = bVar31;
      auVar3[14] = bVar32;
      auVar3[15] = bVar33;
      auVar34 = NEON_ext(auVar34,auVar3,8,1);
      uVar9 = CONCAT17(bVar25 | auVar34[7],
                       CONCAT16(bVar24 | auVar34[6],
                                CONCAT15(bVar23 | auVar34[5],
                                         CONCAT14(bVar22 | auVar34[4],
                                                  CONCAT13(bVar21 | auVar34[3],
                                                           CONCAT12(bVar20 | auVar34[2],
                                                                    CONCAT11(bVar19 | auVar34[1],
                                                                             bVar8 | auVar34[0])))))
                               ));
      puVar12 = puVar11;
      uVar39 = uVar1;
      if (pbVar14 == pbVar15) {
        auVar18._0_8_ = (byte *)((long)puVar13 + SUB168(_DAT_004c5d80,0) + 1);
        auVar18._8_8_ = (byte *)((long)puVar13 + SUB168(_DAT_004c5d80,8) + 1);
        auVar4._8_4_ = (int)puVar2;
        auVar4._0_8_ = puVar2;
        auVar4._12_4_ = (int)((ulong)puVar2 >> 0x20);
        auVar34 = NEON_cmhi(auVar4,auVar18,8);
        bVar8 = auVar34[8];
        goto LAB_00dedba4;
      }
    }
    uVar1 = 0x38 - uVar39;
    uVar85 = uVar39;
    do {
      puVar11 = (undefined8 *)((long)puVar12 + 1);
      bVar8 = puVar11 < puVar2;
      uVar39 = uVar85 + 8;
      uVar9 = (ulong)*(byte *)puVar12 << ((ulong)uVar1 & 0x3f) | uVar9;
      puVar12 = puVar11;
      if (0x30 < (int)uVar85) break;
      uVar1 = uVar1 - 8;
      uVar85 = uVar39;
    } while (puVar11 < puVar2);
  }
LAB_00dedba4:
  param_1[1] = (ulong)puVar12;
  if ((int)uVar39 < param_2) {
    if ((bVar8 & 1) == 0) {
      uVar39 = 0x40000000;
      *(undefined4 *)((long)param_1 + 0x1c) = 1;
    }
    else {
      uVar9 = uVar9 | *(byte *)puVar12 >> (uVar39 & 7);
    }
  }
LAB_00dedbd4:
  *(uint *)(param_1 + 3) = uVar39 - param_2;
  *param_1 = (uVar9 << 1) << ((ulong)(param_2 - 1) & 0x3f);
  return uVar9 >> ((ulong)(uint)-param_2 & 0x3f);
}


