// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_pack_look1
// Entry Point: 00ded790
// Size: 540 bytes
// Signature: undefined oc_pack_look1(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong oc_pack_look1(ulong *param_1)

{
  undefined8 *puVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [13];
  undefined auVar6 [13];
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined8 *puVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined uVar17;
  undefined uVar18;
  undefined auVar19 [16];
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
  undefined auVar35 [16];
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined8 uVar45;
  byte bVar52;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined8 uVar54;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined8 uVar63;
  byte bVar70;
  byte bVar71;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined8 uVar72;
  byte bVar79;
  undefined8 uVar80;
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined auVar83 [16];
  undefined auVar84 [16];
  undefined auVar85 [16];
  uint uVar86;
  int iVar87;
  uint uVar88;
  int iVar89;
  ulong uVar90;
  undefined auVar91 [16];
  undefined auVar92 [16];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined8 *puVar13;
  
  uVar9 = *(uint *)(param_1 + 3);
  uVar10 = *param_1;
  if (0 < (int)uVar9) {
    return uVar10 >> 0x3f;
  }
  puVar13 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 <= puVar13) goto LAB_00ded994;
  pbVar15 = (byte *)(ulong)(0x38 - uVar9 >> 3);
  pbVar11 = (byte *)(~(ulong)puVar13 + (long)puVar1);
  if (pbVar15 <= (byte *)(~(ulong)puVar13 + (long)puVar1)) {
    pbVar11 = pbVar15;
  }
  pbVar15 = (byte *)0x1;
  if (7 < 0x38 - uVar9) {
    pbVar15 = pbVar11 + 1;
  }
  uVar8 = uVar9;
  if (pbVar15 < (byte *)0x8) {
LAB_00ded92c:
    uVar40 = 0x38 - uVar8;
    do {
      uVar9 = uVar8;
      puVar12 = (undefined8 *)((long)puVar13 + 1);
      bVar7 = puVar12 < puVar1;
      uVar8 = uVar9 + 8;
      uVar10 = (ulong)*(byte *)puVar13 << ((ulong)uVar40 & 0x3f) | uVar10;
      if (0x30 < (int)uVar9) break;
      uVar40 = uVar40 - 8;
      puVar13 = puVar12;
    } while (puVar12 < puVar1);
    param_1[1] = (ulong)puVar12;
    if (uVar9 != 0xfffffff8 && (int)(uVar9 + 8) < 0 == SCARRY4(uVar9,8)) {
LAB_00ded91c:
      *(uint *)(param_1 + 3) = uVar8;
      *param_1 = uVar10;
      return uVar10 >> 0x3f;
    }
  }
  else {
    bVar27 = 0;
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    pbVar16 = (byte *)((ulong)pbVar15 & 0x3ffffff8);
    puVar12 = (undefined8 *)((long)puVar13 + (long)pbVar16);
    bVar7 = (byte)uVar10;
    bVar20 = (byte)(uVar10 >> 8);
    bVar21 = (byte)(uVar10 >> 0x10);
    bVar22 = (byte)(uVar10 >> 0x18);
    bVar23 = (byte)(uVar10 >> 0x20);
    bVar24 = (byte)(uVar10 >> 0x28);
    bVar25 = (byte)(uVar10 >> 0x30);
    bVar26 = (byte)(uVar10 >> 0x38);
    uVar8 = uVar9 + (int)pbVar16 * 8;
    iVar36 = uVar9 + 0x20;
    iVar37 = uVar9 + 0x28;
    iVar38 = uVar9 + 0x30;
    iVar39 = uVar9 + 0x38;
    iVar41 = uVar9 + 8;
    iVar42 = uVar9 + 0x10;
    iVar43 = uVar9 + 0x18;
    uVar45 = 0;
    uVar54 = 0;
    uVar63 = 0;
    uVar72 = 0;
    pbVar11 = pbVar16;
    auVar35 = ZEXT816(0);
    uVar40 = uVar9;
    do {
      puVar14 = puVar13;
      auVar83._0_4_ = 0x38 - iVar36;
      auVar83._4_4_ = 0x38 - iVar37;
      auVar83._8_4_ = 0x38 - iVar38;
      auVar83._12_4_ = 0x38 - iVar39;
      pbVar11 = pbVar11 + -8;
      uVar86 = 0x38 - uVar40;
      iVar87 = 0x38 - iVar41;
      uVar88 = 0x38 - iVar42;
      iVar89 = 0x38 - iVar43;
      uVar40 = uVar40 + 0x40;
      iVar41 = iVar41 + 0x40;
      iVar42 = iVar42 + 0x40;
      iVar43 = iVar43 + 0x40;
      auVar93._0_8_ = auVar83._8_8_ & 0xffffffff;
      auVar93._8_8_ = auVar83._8_8_ >> 0x20;
      auVar92._4_4_ = 0;
      auVar92._0_4_ = uVar88;
      auVar84._4_4_ = 0;
      auVar84._0_4_ = auVar83._0_4_;
      auVar84._8_4_ = auVar83._4_4_;
      auVar84._12_4_ = 0;
      uVar80 = *puVar14;
      iVar36 = iVar36 + 0x40;
      iVar37 = iVar37 + 0x40;
      iVar38 = iVar38 + 0x40;
      iVar39 = iVar39 + 0x40;
      uVar17 = (undefined)((ulong)uVar80 >> 8);
      uVar18 = (undefined)((ulong)uVar80 >> 0x28);
      uVar90 = CONCAT35(0,CONCAT14(uVar18,(uint)(byte)((ulong)uVar80 >> 0x20)));
      auVar5[8] = (char)((ulong)uVar80 >> 0x30);
      auVar5._0_8_ = uVar90;
      auVar5._9_3_ = 0;
      auVar5[12] = (char)((ulong)uVar80 >> 0x38);
      uVar10 = CONCAT26(0,(uint6)CONCAT14(uVar17,(uint)CONCAT12(uVar17,(ushort)(byte)uVar80)) &
                          0xffff0000ffff);
      auVar6[8] = (char)((ulong)uVar80 >> 0x10);
      auVar6._0_8_ = uVar10;
      auVar6._9_3_ = 0;
      auVar6[12] = (char)((ulong)uVar80 >> 0x18);
      auVar91._0_8_ = uVar90 & 0xffffffff;
      auVar91[8] = uVar18;
      auVar91._9_7_ = 0;
      auVar81._0_8_ = uVar10 & 0xffffffff;
      auVar81[8] = uVar17;
      auVar81._9_7_ = 0;
      auVar85._8_5_ = auVar5._8_5_ >> 0x20;
      auVar85._0_8_ = (ulong)auVar5._8_5_ & 0xffffffff;
      auVar85._13_3_ = 0;
      auVar94 = NEON_ushl(auVar85,auVar93,8);
      auVar85 = NEON_ushl(auVar91,auVar84,8);
      auVar92._8_4_ = iVar89;
      auVar92._12_4_ = 0;
      auVar4._8_5_ = auVar6._8_5_ >> 0x20;
      auVar4._0_8_ = (ulong)auVar6._8_5_ & 0xffffffff;
      auVar4._13_3_ = 0;
      auVar92 = NEON_ushl(auVar4,auVar92,8);
      auVar82._4_4_ = 0;
      auVar82._0_4_ = uVar86;
      auVar82._8_4_ = iVar87;
      auVar82._12_4_ = 0;
      auVar82 = NEON_ushl(auVar81,auVar82,8);
      bVar62 = auVar94[0] | (byte)uVar63;
      bVar64 = auVar94[1] | (byte)((ulong)uVar63 >> 8);
      bVar65 = auVar94[2] | (byte)((ulong)uVar63 >> 0x10);
      bVar66 = auVar94[3] | (byte)((ulong)uVar63 >> 0x18);
      bVar67 = auVar94[4] | (byte)((ulong)uVar63 >> 0x20);
      bVar68 = auVar94[5] | (byte)((ulong)uVar63 >> 0x28);
      bVar69 = auVar94[6] | (byte)((ulong)uVar63 >> 0x30);
      bVar70 = auVar94[7] | (byte)((ulong)uVar63 >> 0x38);
      uVar63 = CONCAT17(bVar70,CONCAT16(bVar69,CONCAT15(bVar68,CONCAT14(bVar67,CONCAT13(bVar66,
                                                  CONCAT12(bVar65,CONCAT11(bVar64,bVar62)))))));
      bVar71 = auVar94[8] | (byte)uVar72;
      bVar73 = auVar94[9] | (byte)((ulong)uVar72 >> 8);
      bVar74 = auVar94[10] | (byte)((ulong)uVar72 >> 0x10);
      bVar75 = auVar94[11] | (byte)((ulong)uVar72 >> 0x18);
      bVar76 = auVar94[12] | (byte)((ulong)uVar72 >> 0x20);
      bVar77 = auVar94[13] | (byte)((ulong)uVar72 >> 0x28);
      bVar78 = auVar94[14] | (byte)((ulong)uVar72 >> 0x30);
      bVar79 = auVar94[15] | (byte)((ulong)uVar72 >> 0x38);
      uVar72 = CONCAT17(bVar79,CONCAT16(bVar78,CONCAT15(bVar77,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar74,CONCAT11(bVar73,bVar71)))))));
      bVar44 = auVar85[0] | (byte)uVar45;
      bVar46 = auVar85[1] | (byte)((ulong)uVar45 >> 8);
      bVar47 = auVar85[2] | (byte)((ulong)uVar45 >> 0x10);
      bVar48 = auVar85[3] | (byte)((ulong)uVar45 >> 0x18);
      bVar49 = auVar85[4] | (byte)((ulong)uVar45 >> 0x20);
      bVar50 = auVar85[5] | (byte)((ulong)uVar45 >> 0x28);
      bVar51 = auVar85[6] | (byte)((ulong)uVar45 >> 0x30);
      bVar52 = auVar85[7] | (byte)((ulong)uVar45 >> 0x38);
      uVar45 = CONCAT17(bVar52,CONCAT16(bVar51,CONCAT15(bVar50,CONCAT14(bVar49,CONCAT13(bVar48,
                                                  CONCAT12(bVar47,CONCAT11(bVar46,bVar44)))))));
      bVar53 = auVar85[8] | (byte)uVar54;
      bVar55 = auVar85[9] | (byte)((ulong)uVar54 >> 8);
      bVar56 = auVar85[10] | (byte)((ulong)uVar54 >> 0x10);
      bVar57 = auVar85[11] | (byte)((ulong)uVar54 >> 0x18);
      bVar58 = auVar85[12] | (byte)((ulong)uVar54 >> 0x20);
      bVar59 = auVar85[13] | (byte)((ulong)uVar54 >> 0x28);
      bVar60 = auVar85[14] | (byte)((ulong)uVar54 >> 0x30);
      bVar61 = auVar85[15] | (byte)((ulong)uVar54 >> 0x38);
      uVar54 = CONCAT17(bVar61,CONCAT16(bVar60,CONCAT15(bVar59,CONCAT14(bVar58,CONCAT13(bVar57,
                                                  CONCAT12(bVar56,CONCAT11(bVar55,bVar53)))))));
      auVar94[0] = auVar92[0] | auVar35[0];
      auVar94[1] = auVar92[1] | auVar35[1];
      auVar94[2] = auVar92[2] | auVar35[2];
      auVar94[3] = auVar92[3] | auVar35[3];
      auVar94[4] = auVar92[4] | auVar35[4];
      auVar94[5] = auVar92[5] | auVar35[5];
      auVar94[6] = auVar92[6] | auVar35[6];
      auVar94[7] = auVar92[7] | auVar35[7];
      auVar94[8] = auVar92[8] | auVar35[8];
      auVar94[9] = auVar92[9] | auVar35[9];
      auVar94[10] = auVar92[10] | auVar35[10];
      auVar94[11] = auVar92[11] | auVar35[11];
      auVar94[12] = auVar92[12] | auVar35[12];
      auVar94[13] = auVar92[13] | auVar35[13];
      auVar94[14] = auVar92[14] | auVar35[14];
      auVar94[15] = auVar92[15] | auVar35[15];
      bVar7 = auVar82[0] | bVar7;
      bVar20 = auVar82[1] | bVar20;
      bVar21 = auVar82[2] | bVar21;
      bVar22 = auVar82[3] | bVar22;
      bVar23 = auVar82[4] | bVar23;
      bVar24 = auVar82[5] | bVar24;
      bVar25 = auVar82[6] | bVar25;
      bVar26 = auVar82[7] | bVar26;
      bVar27 = auVar82[8] | bVar27;
      bVar28 = auVar82[9] | bVar28;
      bVar29 = auVar82[10] | bVar29;
      bVar30 = auVar82[11] | bVar30;
      bVar31 = auVar82[12] | bVar31;
      bVar32 = auVar82[13] | bVar32;
      bVar33 = auVar82[14] | bVar33;
      bVar34 = auVar82[15] | bVar34;
      puVar13 = puVar14 + 1;
      auVar35 = auVar94;
    } while (pbVar11 != (byte *)0x0);
    bVar7 = bVar7 | bVar44 | auVar94[0] | bVar62;
    bVar20 = bVar20 | bVar46 | auVar94[1] | bVar64;
    bVar21 = bVar21 | bVar47 | auVar94[2] | bVar65;
    bVar22 = bVar22 | bVar48 | auVar94[3] | bVar66;
    bVar23 = bVar23 | bVar49 | auVar94[4] | bVar67;
    bVar24 = bVar24 | bVar50 | auVar94[5] | bVar68;
    bVar25 = bVar25 | bVar51 | auVar94[6] | bVar69;
    bVar26 = bVar26 | bVar52 | auVar94[7] | bVar70;
    bVar27 = bVar27 | bVar53 | auVar94[8] | bVar71;
    bVar28 = bVar28 | bVar55 | auVar94[9] | bVar73;
    bVar29 = bVar29 | bVar56 | auVar94[10] | bVar74;
    bVar30 = bVar30 | bVar57 | auVar94[11] | bVar75;
    bVar31 = bVar31 | bVar58 | auVar94[12] | bVar76;
    bVar32 = bVar32 | bVar59 | auVar94[13] | bVar77;
    bVar33 = bVar33 | bVar60 | auVar94[14] | bVar78;
    bVar34 = bVar34 | bVar61 | auVar94[15] | bVar79;
    auVar35[1] = bVar20;
    auVar35[0] = bVar7;
    auVar35[2] = bVar21;
    auVar35[3] = bVar22;
    auVar35[4] = bVar23;
    auVar35[5] = bVar24;
    auVar35[6] = bVar25;
    auVar35[7] = bVar26;
    auVar35[8] = bVar27;
    auVar35[9] = bVar28;
    auVar35[10] = bVar29;
    auVar35[11] = bVar30;
    auVar35[12] = bVar31;
    auVar35[13] = bVar32;
    auVar35[14] = bVar33;
    auVar35[15] = bVar34;
    auVar2[1] = bVar20;
    auVar2[0] = bVar7;
    auVar2[2] = bVar21;
    auVar2[3] = bVar22;
    auVar2[4] = bVar23;
    auVar2[5] = bVar24;
    auVar2[6] = bVar25;
    auVar2[7] = bVar26;
    auVar2[8] = bVar27;
    auVar2[9] = bVar28;
    auVar2[10] = bVar29;
    auVar2[11] = bVar30;
    auVar2[12] = bVar31;
    auVar2[13] = bVar32;
    auVar2[14] = bVar33;
    auVar2[15] = bVar34;
    auVar35 = NEON_ext(auVar35,auVar2,8,1);
    uVar10 = CONCAT17(bVar26 | auVar35[7],
                      CONCAT16(bVar25 | auVar35[6],
                               CONCAT15(bVar24 | auVar35[5],
                                        CONCAT14(bVar23 | auVar35[4],
                                                 CONCAT13(bVar22 | auVar35[3],
                                                          CONCAT12(bVar21 | auVar35[2],
                                                                   CONCAT11(bVar20 | auVar35[1],
                                                                            bVar7 | auVar35[0]))))))
                     );
    puVar13 = puVar12;
    if (pbVar15 != pbVar16) goto LAB_00ded92c;
    iVar36 = uVar9 + (int)pbVar16 * 8;
    uVar9 = iVar36 - 8;
    auVar19._0_8_ = (byte *)((long)puVar14 + SUB168(_DAT_004c5d80,0) + 1);
    auVar19._8_8_ = (byte *)((long)puVar14 + SUB168(_DAT_004c5d80,8) + 1);
    auVar3._8_4_ = (int)puVar1;
    auVar3._0_8_ = puVar1;
    auVar3._12_4_ = (int)((ulong)puVar1 >> 0x20);
    auVar35 = NEON_cmhi(auVar3,auVar19,8);
    bVar7 = auVar35[8];
    param_1[1] = (ulong)puVar12;
    if (uVar9 != 0xfffffff8 && iVar36 < 0 == SCARRY4(uVar9,8)) goto LAB_00ded91c;
  }
  if ((bVar7 & 1) != 0) {
    bVar7 = *(byte *)puVar12;
    *(uint *)(param_1 + 3) = uVar8;
    *param_1 = uVar10 | bVar7 >> ((ulong)uVar9 & 7);
    return uVar10 >> 0x3f;
  }
LAB_00ded994:
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  *param_1 = uVar10;
  return uVar10 >> 0x3f;
}


