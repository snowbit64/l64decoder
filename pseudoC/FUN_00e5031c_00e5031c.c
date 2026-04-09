// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e5031c
// Entry Point: 00e5031c
// Size: 1260 bytes
// Signature: undefined FUN_00e5031c(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00e5031c(size_t param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined auVar16 [16];
  byte bVar17;
  uint uVar18;
  size_t sVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  byte *pbVar25;
  undefined4 uVar26;
  ulong uVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar39;
  byte bVar40;
  ushort uVar37;
  ushort uVar38;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar47;
  byte bVar48;
  ushort uVar46;
  uint3 uVar49;
  int iVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  int iVar53;
  uint uVar54;
  int iVar55;
  undefined8 uVar56;
  int iVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  ushort uVar63;
  int iVar64;
  ulong uVar65;
  int iVar66;
  uint uVar67;
  int iVar68;
  int iVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  undefined auVar76 [16];
  uint uVar77;
  undefined auVar78 [16];
  ulong local_180 [4];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined uStack_76;
  undefined5 uStack_75;
  undefined3 uStack_70;
  undefined7 uStack_6d;
  byte local_66;
  long local_58;
  ulong uVar57;
  ulong uVar69;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  sVar19 = param_1;
  if (*(char *)(param_1 + 0x5c) == '\0') {
    if (*(long *)(param_1 + 0x40) == 0) {
      sVar19 = ftell(*(FILE **)(param_1 + 0x30));
      uVar18 = (int)sVar19 - *(int *)(param_1 + 0x38);
    }
    else {
      uVar18 = (int)*(long *)(param_1 + 0x40) - *(int *)(param_1 + 0x48);
    }
  }
  else {
    uVar18 = 0;
  }
  *param_2 = uVar18;
  puVar21 = *(undefined8 **)(param_1 + 0x40);
  if (puVar21 == (undefined8 *)0x0) {
    sVar19 = fread(&local_80,0x1b,1,*(FILE **)(param_1 + 0x30));
    if (sVar19 != 1) {
      *(undefined4 *)(param_1 + 0x98) = 1;
    }
  }
  else if (*(ulong *)(param_1 + 0x50) < (long)puVar21 + 0x1bU) {
    *(undefined4 *)(param_1 + 0x98) = 1;
  }
  else {
    uVar56 = puVar21[1];
    uVar51 = *puVar21;
    uVar5 = *(undefined8 *)((long)puVar21 + 0x13);
    uVar52 = *(undefined8 *)((long)puVar21 + 0xb);
    *(ulong *)(param_1 + 0x40) = (long)puVar21 + 0x1bU;
    uStack_78 = (undefined2)uVar56;
    uStack_76 = (undefined)((ulong)uVar56 >> 0x10);
    local_80 = (undefined4)uVar51;
    uStack_7c = (undefined2)((ulong)uVar51 >> 0x20);
    uStack_7a = (undefined2)((ulong)uVar51 >> 0x30);
    uStack_6d = (undefined7)uVar5;
    local_66 = (byte)((ulong)uVar5 >> 0x38);
    uStack_75 = (undefined5)uVar52;
    uStack_70 = (undefined3)((ulong)uVar52 >> 0x28);
  }
  bVar17 = local_66;
  uVar52 = NEON_cmeq((ulong)CONCAT16((char)((uint)local_80 >> 0x18),
                                     (uint6)CONCAT14((char)((uint)local_80 >> 0x10),
                                                     (uint)CONCAT12((char)((uint)local_80 >> 8),
                                                                    (ushort)(byte)local_80))),
                     0x5300670067004f,2);
  uVar49 = CONCAT12(~(byte)((ulong)uVar52 >> 0x10),(ushort)(byte)~(byte)uVar52);
  if ((uVar49 & 1 | ((uVar49 & 0x10000) >> 0x10) << 1 |
       ((byte)~(byte)((ulong)uVar52 >> 0x20) & 1) << 2 |
      ((byte)~(byte)((ulong)uVar52 >> 0x30) & 1) << 3) != 0) {
    uVar26 = 0;
    goto LAB_00e50754;
  }
  lVar20 = *(long *)(param_1 + 0x40);
  uVar27 = (ulong)local_66;
  uVar18 = (uint)local_66;
  if (lVar20 == 0) {
    sVar19 = __fread_chk(local_180,uVar27,1,*(undefined8 *)(param_1 + 0x30),0xff);
    if (sVar19 != 1) {
      *(undefined4 *)(param_1 + 0x98) = 1;
    }
joined_r0x00e50490:
    if (bVar17 != 0) goto LAB_00e50494;
LAB_00e504c0:
    iVar50 = 0x1b;
  }
  else {
    if (lVar20 + uVar27 <= *(ulong *)(param_1 + 0x50)) {
      sVar19 = __memcpy_chk(local_180,lVar20,uVar27,0xff);
      *(ulong *)(param_1 + 0x40) = lVar20 + uVar27;
      goto joined_r0x00e50490;
    }
    *(undefined4 *)(param_1 + 0x98) = 1;
    if (local_66 == 0) goto LAB_00e504c0;
LAB_00e50494:
    if (bVar17 < 8) {
      uVar22 = 0;
      iVar50 = 0;
LAB_00e50714:
      lVar20 = uVar27 - uVar22;
      pbVar25 = (byte *)((long)local_180 + uVar22);
      do {
        lVar20 = lVar20 + -1;
        iVar50 = iVar50 + (uint)*pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (lVar20 != 0);
    }
    else if (uVar18 < 0x20) {
      iVar50 = 0;
      uVar23 = 0;
LAB_00e506b0:
      iVar55 = 0;
      iVar58 = 0;
      uVar22 = uVar27 & 0xf8;
      iVar53 = 0;
      lVar20 = uVar23 - uVar22;
      iVar64 = 0;
      iVar66 = 0;
      iVar68 = 0;
      iVar70 = 0;
      puVar24 = (ulong *)((long)local_180 + uVar23);
      do {
        lVar20 = lVar20 + 8;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *puVar24;
        auVar16._12_4_ = 0x10101007;
        auVar16._0_12_ = _DAT_004c4d70;
        auVar76 = a64_TBL(ZEXT816(0),auVar3,ZEXT416(0),auVar16);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *puVar24;
        auVar11._10_2_ = 0x1010;
        auVar11._0_10_ = _DAT_004c4f40;
        auVar11._12_2_ = 0x1003;
        auVar11._14_2_ = 0x1010;
        auVar78 = a64_TBL(ZEXT816(0),auVar4,ZEXT416(0),auVar11);
        iVar64 = iVar64 + auVar76._0_4_;
        iVar66 = iVar66 + auVar76._4_4_;
        iVar68 = iVar68 + auVar76._8_4_;
        iVar70 = iVar70 + auVar76._12_4_;
        iVar50 = iVar50 + auVar78._0_4_;
        iVar53 = iVar53 + auVar78._4_4_;
        iVar55 = iVar55 + auVar78._8_4_;
        iVar58 = iVar58 + auVar78._12_4_;
        puVar24 = puVar24 + 1;
      } while (lVar20 != 0);
      iVar50 = iVar50 + iVar64 + iVar53 + iVar66 + iVar55 + iVar68 + iVar58 + iVar70;
      if (uVar22 != uVar27) goto LAB_00e50714;
    }
    else {
      uVar22 = uVar27 & 0xe0;
      bVar28 = (byte)(local_180[1] >> 8);
      uVar63 = (ushort)(byte)(local_180[1] >> 0x18);
      bVar39 = (byte)(local_180[1] >> 0x28);
      bVar47 = (byte)(local_180[1] >> 0x38);
      bVar29 = (byte)(local_180[0] >> 8);
      bVar35 = (byte)(local_180[0] >> 0x18);
      bVar32 = (byte)(local_180[0] >> 0x28);
      bVar30 = (byte)(local_180[3] >> 8);
      uVar75 = (uint)CONCAT12(bVar30,(ushort)(byte)local_180[3]);
      bVar31 = (byte)(local_180[2] >> 8);
      uVar77 = (uint)CONCAT12(bVar31,(ushort)(byte)local_180[2]);
      bVar34 = (byte)(local_180[2] >> 0x10);
      bVar36 = (byte)(local_180[2] >> 0x18);
      bVar40 = (byte)(local_180[2] >> 0x28);
      bVar45 = (byte)(local_180[2] >> 0x30);
      bVar48 = (byte)(local_180[2] >> 0x38);
      uVar1 = (uint)CONCAT12(bVar39,(ushort)(byte)(local_180[1] >> 0x20));
      uVar23 = (ulong)((uint6)CONCAT14(bVar39,uVar1) & 0xffff0000ffff);
      uVar54 = (uint)(byte)(local_180[1] >> 0x30);
      uVar57 = (ulong)CONCAT14(bVar47,uVar54);
      uVar6 = (uint)(ushort)(byte)local_180[1];
      uVar7 = (uint)(ushort)bVar28;
      uVar37 = (ushort)(byte)(local_180[1] >> 0x10);
      uVar8 = (uint)uVar37;
      uVar9 = (uint)uVar63;
      uVar71 = CONCAT12(bVar32,(ushort)(byte)(local_180[0] >> 0x20)) & 0xffff;
      uVar72 = (uint)bVar32;
      uVar73 = (uint)(byte)(local_180[0] >> 0x30);
      uVar74 = (uint)(byte)(local_180[0] >> 0x38);
      uVar59 = (uint)(byte)(local_180[3] >> 0x20);
      uVar60 = (uint)(byte)(local_180[3] >> 0x28);
      uVar61 = (uint)(byte)(local_180[3] >> 0x30);
      uVar62 = (uint)(byte)(local_180[3] >> 0x38);
      uVar10 = (uint)CONCAT12(bVar29,(ushort)(byte)local_180[0]);
      uVar65 = (ulong)((uint6)CONCAT14(bVar29,uVar10) & 0xffff0000ffff);
      uVar67 = (uint)(byte)(local_180[0] >> 0x10);
      uVar69 = (ulong)CONCAT14(bVar35,uVar67);
      uVar12 = uVar75 & 0xffff;
      uVar13 = (uint)(ushort)bVar30;
      uVar38 = (ushort)(byte)(local_180[3] >> 0x10);
      uVar14 = (uint)uVar38;
      uVar46 = (ushort)(byte)(local_180[3] >> 0x18);
      uVar15 = (uint)uVar46;
      auVar76._6_2_ = 0;
      auVar76._0_6_ = (uint6)CONCAT14(bVar31,uVar77) & 0xffff0000ffff;
      auVar76[8] = bVar34;
      auVar76._9_3_ = 0;
      auVar76[12] = bVar36;
      auVar76._13_3_ = 0;
      auVar78._0_4_ = CONCAT31(0,(byte)(local_180[2] >> 0x20));
      auVar78[4] = bVar40;
      auVar78._5_3_ = 0;
      auVar78[8] = bVar45;
      auVar78._9_3_ = 0;
      auVar78[12] = bVar48;
      auVar78._13_3_ = 0;
      if (uVar22 != 0x20) {
        bVar41 = (byte)((ulong)uStack_158 >> 0x28);
        bVar32 = (byte)((ulong)local_160 >> 8);
        bVar42 = (byte)((ulong)local_160 >> 0x28);
        bVar43 = (byte)((ulong)uStack_150 >> 0x28);
        bVar33 = (byte)((ulong)uStack_148 >> 8);
        bVar44 = (byte)((ulong)uStack_148 >> 0x28);
        uVar6 = (CONCAT12(bVar28,(ushort)(byte)local_180[1]) & 0xffff) + ((uint)uStack_158 & 0xff);
        uVar7 = (uint)(ushort)bVar28 + (uint)(byte)((ulong)uStack_158 >> 8);
        uVar8 = (uint)uVar37 + (uint)(byte)((ulong)uStack_158 >> 0x10);
        uVar9 = (uint)uVar63 + (uint)(byte)((ulong)uStack_158 >> 0x18);
        uVar71 = uVar71 + (CONCAT12(bVar42,(ushort)(byte)((ulong)local_160 >> 0x20)) & 0xffff);
        uVar72 = uVar72 + bVar42;
        uVar73 = uVar73 + (byte)((ulong)local_160 >> 0x30);
        uVar74 = uVar74 + (byte)((ulong)local_160 >> 0x38);
        iVar50 = (uVar1 & 0xffff) +
                 (CONCAT12(bVar41,(ushort)(byte)((ulong)uStack_158 >> 0x20)) & 0xffff);
        iVar53 = (uint)bVar39 + (uint)bVar41;
        uVar23 = CONCAT44(iVar53,iVar50);
        iVar55 = uVar54 + (byte)((ulong)uStack_158 >> 0x30);
        iVar58 = (uint)bVar47 + (uint)(byte)((ulong)uStack_158 >> 0x38);
        uVar57 = CONCAT44(iVar58,iVar55);
        iVar64 = (uVar10 & 0xffff) + ((CONCAT12(bVar32,(short)local_160) & 0xff00ff) & 0xffff);
        iVar66 = (uint)bVar29 + (uint)bVar32;
        uVar65 = CONCAT44(iVar66,iVar64);
        iVar68 = uVar67 + (byte)((ulong)local_160 >> 0x10);
        iVar70 = (uint)bVar35 + (uint)(byte)((ulong)local_160 >> 0x18);
        uVar69 = CONCAT44(iVar70,iVar68);
        uVar12 = (uVar75 & 0xffff) + ((CONCAT12(bVar33,(short)uStack_148) & 0xff00ff) & 0xffff);
        uVar13 = (uint)(ushort)bVar30 + (uint)bVar33;
        uVar14 = (uint)uVar38 + (uint)(byte)((ulong)uStack_148 >> 0x10);
        uVar15 = (uint)uVar46 + (uint)(byte)((ulong)uStack_148 >> 0x18);
        auVar78._0_4_ =
             auVar78._0_4_ + (CONCAT12(bVar43,(ushort)(byte)((ulong)uStack_150 >> 0x20)) & 0xffff);
        auVar78._4_4_ = (uint)bVar40 + (uint)bVar43;
        auVar78._8_4_ = (uint)bVar45 + (uint)(byte)((ulong)uStack_150 >> 0x30);
        auVar78._12_4_ = (uint)bVar48 + (uint)(byte)((ulong)uStack_150 >> 0x38);
        uVar59 = uVar59 + (CONCAT12(bVar44,(ushort)(byte)((ulong)uStack_148 >> 0x20)) & 0xffff);
        uVar60 = uVar60 + bVar44;
        uVar61 = uVar61 + (byte)((ulong)uStack_148 >> 0x30);
        uVar62 = uVar62 + (byte)((ulong)uStack_148 >> 0x38);
        auVar76._0_4_ = (uVar77 & 0xffff) + ((uint)uStack_150 & 0xff);
        auVar76._4_4_ = (uint)bVar31 + (uint)(byte)((ulong)uStack_150 >> 8);
        auVar76._8_4_ = (uint)bVar34 + (uint)(byte)((ulong)uStack_150 >> 0x10);
        auVar76._12_4_ = (uint)bVar36 + (uint)(byte)((ulong)uStack_150 >> 0x18);
        if (uVar22 != 0x40) {
          bVar30 = (byte)((ulong)uStack_138 >> 0x28);
          bVar28 = (byte)((ulong)local_140 >> 8);
          bVar31 = (byte)((ulong)local_140 >> 0x28);
          bVar34 = (byte)((ulong)uStack_130 >> 0x28);
          bVar29 = (byte)((ulong)uStack_128 >> 8);
          bVar35 = (byte)((ulong)uStack_128 >> 0x28);
          uVar6 = uVar6 + ((uint)uStack_138 & 0xff);
          uVar7 = uVar7 + (byte)((ulong)uStack_138 >> 8);
          uVar8 = uVar8 + (byte)((ulong)uStack_138 >> 0x10);
          uVar9 = uVar9 + (byte)((ulong)uStack_138 >> 0x18);
          uVar71 = uVar71 + (CONCAT12(bVar31,(ushort)(byte)((ulong)local_140 >> 0x20)) & 0xffff);
          uVar72 = uVar72 + bVar31;
          uVar73 = uVar73 + (byte)((ulong)local_140 >> 0x30);
          uVar74 = uVar74 + (byte)((ulong)local_140 >> 0x38);
          iVar50 = iVar50 + (CONCAT12(bVar30,(ushort)(byte)((ulong)uStack_138 >> 0x20)) & 0xffff);
          iVar53 = iVar53 + (uint)bVar30;
          uVar23 = CONCAT44(iVar53,iVar50);
          iVar55 = iVar55 + (uint)(byte)((ulong)uStack_138 >> 0x30);
          iVar58 = iVar58 + (uint)(byte)((ulong)uStack_138 >> 0x38);
          uVar57 = CONCAT44(iVar58,iVar55);
          iVar64 = iVar64 + ((CONCAT12(bVar28,(short)local_140) & 0xff00ff) & 0xffff);
          iVar66 = iVar66 + (uint)bVar28;
          uVar65 = CONCAT44(iVar66,iVar64);
          iVar68 = iVar68 + (uint)(byte)((ulong)local_140 >> 0x10);
          iVar70 = iVar70 + (uint)(byte)((ulong)local_140 >> 0x18);
          uVar69 = CONCAT44(iVar70,iVar68);
          uVar12 = uVar12 + ((CONCAT12(bVar29,(short)uStack_128) & 0xff00ff) & 0xffff);
          uVar13 = uVar13 + bVar29;
          uVar14 = uVar14 + (byte)((ulong)uStack_128 >> 0x10);
          uVar15 = uVar15 + (byte)((ulong)uStack_128 >> 0x18);
          auVar78._0_4_ =
               auVar78._0_4_ + (CONCAT12(bVar34,(ushort)(byte)((ulong)uStack_130 >> 0x20)) & 0xffff)
          ;
          auVar78._4_4_ = auVar78._4_4_ + (uint)bVar34;
          auVar78._8_4_ = auVar78._8_4_ + (uint)(byte)((ulong)uStack_130 >> 0x30);
          auVar78._12_4_ = auVar78._12_4_ + (uint)(byte)((ulong)uStack_130 >> 0x38);
          uVar59 = uVar59 + (CONCAT12(bVar35,(ushort)(byte)((ulong)uStack_128 >> 0x20)) & 0xffff);
          uVar60 = uVar60 + bVar35;
          uVar61 = uVar61 + (byte)((ulong)uStack_128 >> 0x30);
          uVar62 = uVar62 + (byte)((ulong)uStack_128 >> 0x38);
          auVar76._0_4_ = auVar76._0_4_ + ((uint)uStack_130 & 0xff);
          auVar76._4_4_ = auVar76._4_4_ + (uint)(byte)((ulong)uStack_130 >> 8);
          auVar76._8_4_ = auVar76._8_4_ + (uint)(byte)((ulong)uStack_130 >> 0x10);
          auVar76._12_4_ = auVar76._12_4_ + (uint)(byte)((ulong)uStack_130 >> 0x18);
          if (uVar22 != 0x60) {
            bVar30 = (byte)((ulong)uStack_118 >> 0x28);
            bVar28 = (byte)((ulong)local_120 >> 8);
            bVar31 = (byte)((ulong)local_120 >> 0x28);
            bVar34 = (byte)((ulong)uStack_110 >> 0x28);
            bVar29 = (byte)((ulong)uStack_108 >> 8);
            bVar35 = (byte)((ulong)uStack_108 >> 0x28);
            uVar6 = uVar6 + ((uint)uStack_118 & 0xff);
            uVar7 = uVar7 + (byte)((ulong)uStack_118 >> 8);
            uVar8 = uVar8 + (byte)((ulong)uStack_118 >> 0x10);
            uVar9 = uVar9 + (byte)((ulong)uStack_118 >> 0x18);
            uVar71 = uVar71 + (CONCAT12(bVar31,(ushort)(byte)((ulong)local_120 >> 0x20)) & 0xffff);
            uVar72 = uVar72 + bVar31;
            uVar73 = uVar73 + (byte)((ulong)local_120 >> 0x30);
            uVar74 = uVar74 + (byte)((ulong)local_120 >> 0x38);
            iVar50 = iVar50 + (CONCAT12(bVar30,(ushort)(byte)((ulong)uStack_118 >> 0x20)) & 0xffff);
            iVar53 = iVar53 + (uint)bVar30;
            uVar23 = CONCAT44(iVar53,iVar50);
            iVar55 = iVar55 + (uint)(byte)((ulong)uStack_118 >> 0x30);
            iVar58 = iVar58 + (uint)(byte)((ulong)uStack_118 >> 0x38);
            uVar57 = CONCAT44(iVar58,iVar55);
            iVar64 = iVar64 + ((CONCAT12(bVar28,(short)local_120) & 0xff00ff) & 0xffff);
            iVar66 = iVar66 + (uint)bVar28;
            uVar65 = CONCAT44(iVar66,iVar64);
            iVar68 = iVar68 + (uint)(byte)((ulong)local_120 >> 0x10);
            iVar70 = iVar70 + (uint)(byte)((ulong)local_120 >> 0x18);
            uVar69 = CONCAT44(iVar70,iVar68);
            uVar12 = uVar12 + ((CONCAT12(bVar29,(short)uStack_108) & 0xff00ff) & 0xffff);
            uVar13 = uVar13 + bVar29;
            uVar14 = uVar14 + (byte)((ulong)uStack_108 >> 0x10);
            uVar15 = uVar15 + (byte)((ulong)uStack_108 >> 0x18);
            auVar78._0_4_ =
                 auVar78._0_4_ +
                 (CONCAT12(bVar34,(ushort)(byte)((ulong)uStack_110 >> 0x20)) & 0xffff);
            auVar78._4_4_ = auVar78._4_4_ + (uint)bVar34;
            auVar78._8_4_ = auVar78._8_4_ + (uint)(byte)((ulong)uStack_110 >> 0x30);
            auVar78._12_4_ = auVar78._12_4_ + (uint)(byte)((ulong)uStack_110 >> 0x38);
            uVar59 = uVar59 + (CONCAT12(bVar35,(ushort)(byte)((ulong)uStack_108 >> 0x20)) & 0xffff);
            uVar60 = uVar60 + bVar35;
            uVar61 = uVar61 + (byte)((ulong)uStack_108 >> 0x30);
            uVar62 = uVar62 + (byte)((ulong)uStack_108 >> 0x38);
            auVar76._0_4_ = auVar76._0_4_ + ((uint)uStack_110 & 0xff);
            auVar76._4_4_ = auVar76._4_4_ + (uint)(byte)((ulong)uStack_110 >> 8);
            auVar76._8_4_ = auVar76._8_4_ + (uint)(byte)((ulong)uStack_110 >> 0x10);
            auVar76._12_4_ = auVar76._12_4_ + (uint)(byte)((ulong)uStack_110 >> 0x18);
            if (uVar22 != 0x80) {
              bVar30 = (byte)((ulong)uStack_f8 >> 0x28);
              bVar28 = (byte)((ulong)local_100 >> 8);
              bVar31 = (byte)((ulong)local_100 >> 0x28);
              bVar34 = (byte)((ulong)uStack_f0 >> 0x28);
              bVar29 = (byte)((ulong)uStack_e8 >> 8);
              bVar35 = (byte)((ulong)uStack_e8 >> 0x28);
              uVar6 = uVar6 + ((uint)uStack_f8 & 0xff);
              uVar7 = uVar7 + (byte)((ulong)uStack_f8 >> 8);
              uVar8 = uVar8 + (byte)((ulong)uStack_f8 >> 0x10);
              uVar9 = uVar9 + (byte)((ulong)uStack_f8 >> 0x18);
              uVar71 = uVar71 + (CONCAT12(bVar31,(ushort)(byte)((ulong)local_100 >> 0x20)) & 0xffff)
              ;
              uVar72 = uVar72 + bVar31;
              uVar73 = uVar73 + (byte)((ulong)local_100 >> 0x30);
              uVar74 = uVar74 + (byte)((ulong)local_100 >> 0x38);
              iVar50 = iVar50 + (CONCAT12(bVar30,(ushort)(byte)((ulong)uStack_f8 >> 0x20)) & 0xffff)
              ;
              iVar53 = iVar53 + (uint)bVar30;
              uVar23 = CONCAT44(iVar53,iVar50);
              iVar55 = iVar55 + (uint)(byte)((ulong)uStack_f8 >> 0x30);
              iVar58 = iVar58 + (uint)(byte)((ulong)uStack_f8 >> 0x38);
              uVar57 = CONCAT44(iVar58,iVar55);
              iVar64 = iVar64 + ((CONCAT12(bVar28,(short)local_100) & 0xff00ff) & 0xffff);
              iVar66 = iVar66 + (uint)bVar28;
              uVar65 = CONCAT44(iVar66,iVar64);
              iVar68 = iVar68 + (uint)(byte)((ulong)local_100 >> 0x10);
              iVar70 = iVar70 + (uint)(byte)((ulong)local_100 >> 0x18);
              uVar69 = CONCAT44(iVar70,iVar68);
              uVar12 = uVar12 + ((CONCAT12(bVar29,(short)uStack_e8) & 0xff00ff) & 0xffff);
              uVar13 = uVar13 + bVar29;
              uVar14 = uVar14 + (byte)((ulong)uStack_e8 >> 0x10);
              uVar15 = uVar15 + (byte)((ulong)uStack_e8 >> 0x18);
              auVar78._0_4_ =
                   auVar78._0_4_ +
                   (CONCAT12(bVar34,(ushort)(byte)((ulong)uStack_f0 >> 0x20)) & 0xffff);
              auVar78._4_4_ = auVar78._4_4_ + (uint)bVar34;
              auVar78._8_4_ = auVar78._8_4_ + (uint)(byte)((ulong)uStack_f0 >> 0x30);
              auVar78._12_4_ = auVar78._12_4_ + (uint)(byte)((ulong)uStack_f0 >> 0x38);
              uVar59 = uVar59 + (CONCAT12(bVar35,(ushort)(byte)((ulong)uStack_e8 >> 0x20)) & 0xffff)
              ;
              uVar60 = uVar60 + bVar35;
              uVar61 = uVar61 + (byte)((ulong)uStack_e8 >> 0x30);
              uVar62 = uVar62 + (byte)((ulong)uStack_e8 >> 0x38);
              auVar76._0_4_ = auVar76._0_4_ + ((uint)uStack_f0 & 0xff);
              auVar76._4_4_ = auVar76._4_4_ + (uint)(byte)((ulong)uStack_f0 >> 8);
              auVar76._8_4_ = auVar76._8_4_ + (uint)(byte)((ulong)uStack_f0 >> 0x10);
              auVar76._12_4_ = auVar76._12_4_ + (uint)(byte)((ulong)uStack_f0 >> 0x18);
              if (uVar22 != 0xa0) {
                bVar30 = (byte)((ulong)uStack_d8 >> 0x28);
                bVar28 = (byte)((ulong)local_e0 >> 8);
                bVar31 = (byte)((ulong)local_e0 >> 0x28);
                bVar34 = (byte)((ulong)uStack_d0 >> 0x28);
                bVar29 = (byte)((ulong)uStack_c8 >> 8);
                bVar35 = (byte)((ulong)uStack_c8 >> 0x28);
                uVar6 = uVar6 + ((uint)uStack_d8 & 0xff);
                uVar7 = uVar7 + (byte)((ulong)uStack_d8 >> 8);
                uVar8 = uVar8 + (byte)((ulong)uStack_d8 >> 0x10);
                uVar9 = uVar9 + (byte)((ulong)uStack_d8 >> 0x18);
                uVar71 = uVar71 + (CONCAT12(bVar31,(ushort)(byte)((ulong)local_e0 >> 0x20)) & 0xffff
                                  );
                uVar72 = uVar72 + bVar31;
                uVar73 = uVar73 + (byte)((ulong)local_e0 >> 0x30);
                uVar74 = uVar74 + (byte)((ulong)local_e0 >> 0x38);
                iVar50 = iVar50 + (CONCAT12(bVar30,(ushort)(byte)((ulong)uStack_d8 >> 0x20)) &
                                  0xffff);
                iVar53 = iVar53 + (uint)bVar30;
                uVar23 = CONCAT44(iVar53,iVar50);
                iVar55 = iVar55 + (uint)(byte)((ulong)uStack_d8 >> 0x30);
                iVar58 = iVar58 + (uint)(byte)((ulong)uStack_d8 >> 0x38);
                uVar57 = CONCAT44(iVar58,iVar55);
                iVar64 = iVar64 + ((CONCAT12(bVar28,(short)local_e0) & 0xff00ff) & 0xffff);
                iVar66 = iVar66 + (uint)bVar28;
                uVar65 = CONCAT44(iVar66,iVar64);
                iVar68 = iVar68 + (uint)(byte)((ulong)local_e0 >> 0x10);
                iVar70 = iVar70 + (uint)(byte)((ulong)local_e0 >> 0x18);
                uVar69 = CONCAT44(iVar70,iVar68);
                uVar12 = uVar12 + ((CONCAT12(bVar29,(short)uStack_c8) & 0xff00ff) & 0xffff);
                uVar13 = uVar13 + bVar29;
                uVar14 = uVar14 + (byte)((ulong)uStack_c8 >> 0x10);
                uVar15 = uVar15 + (byte)((ulong)uStack_c8 >> 0x18);
                auVar78._0_4_ =
                     auVar78._0_4_ +
                     (CONCAT12(bVar34,(ushort)(byte)((ulong)uStack_d0 >> 0x20)) & 0xffff);
                auVar78._4_4_ = auVar78._4_4_ + (uint)bVar34;
                auVar78._8_4_ = auVar78._8_4_ + (uint)(byte)((ulong)uStack_d0 >> 0x30);
                auVar78._12_4_ = auVar78._12_4_ + (uint)(byte)((ulong)uStack_d0 >> 0x38);
                uVar59 = uVar59 + (CONCAT12(bVar35,(ushort)(byte)((ulong)uStack_c8 >> 0x20)) &
                                  0xffff);
                uVar60 = uVar60 + bVar35;
                uVar61 = uVar61 + (byte)((ulong)uStack_c8 >> 0x30);
                uVar62 = uVar62 + (byte)((ulong)uStack_c8 >> 0x38);
                auVar76._0_4_ = auVar76._0_4_ + ((uint)uStack_d0 & 0xff);
                auVar76._4_4_ = auVar76._4_4_ + (uint)(byte)((ulong)uStack_d0 >> 8);
                auVar76._8_4_ = auVar76._8_4_ + (uint)(byte)((ulong)uStack_d0 >> 0x10);
                auVar76._12_4_ = auVar76._12_4_ + (uint)(byte)((ulong)uStack_d0 >> 0x18);
                if (uVar22 != 0xc0) {
                  bVar30 = (byte)((ulong)uStack_b8 >> 0x28);
                  bVar28 = (byte)((ulong)local_c0 >> 8);
                  bVar31 = (byte)((ulong)local_c0 >> 0x28);
                  bVar34 = (byte)((ulong)uStack_b0 >> 0x28);
                  bVar29 = (byte)((ulong)uStack_a8 >> 8);
                  bVar35 = (byte)((ulong)uStack_a8 >> 0x28);
                  uVar6 = uVar6 + ((uint)uStack_b8 & 0xff);
                  uVar7 = uVar7 + (byte)((ulong)uStack_b8 >> 8);
                  uVar8 = uVar8 + (byte)((ulong)uStack_b8 >> 0x10);
                  uVar9 = uVar9 + (byte)((ulong)uStack_b8 >> 0x18);
                  uVar71 = uVar71 + (CONCAT12(bVar31,(ushort)(byte)((ulong)local_c0 >> 0x20)) &
                                    0xffff);
                  uVar72 = uVar72 + bVar31;
                  uVar73 = uVar73 + (byte)((ulong)local_c0 >> 0x30);
                  uVar74 = uVar74 + (byte)((ulong)local_c0 >> 0x38);
                  uVar23 = CONCAT44(iVar53 + (uint)bVar30,
                                    iVar50 + (CONCAT12(bVar30,(ushort)(byte)((ulong)uStack_b8 >>
                                                                            0x20)) & 0xffff));
                  uVar57 = CONCAT44(iVar58 + (uint)(byte)((ulong)uStack_b8 >> 0x38),
                                    iVar55 + (uint)(byte)((ulong)uStack_b8 >> 0x30));
                  uVar65 = CONCAT44(iVar66 + (uint)bVar28,
                                    iVar64 + ((CONCAT12(bVar28,(short)local_c0) & 0xff00ff) & 0xffff
                                             ));
                  uVar69 = CONCAT44(iVar70 + (uint)(byte)((ulong)local_c0 >> 0x18),
                                    iVar68 + (uint)(byte)((ulong)local_c0 >> 0x10));
                  uVar12 = uVar12 + ((CONCAT12(bVar29,(short)uStack_a8) & 0xff00ff) & 0xffff);
                  uVar13 = uVar13 + bVar29;
                  uVar14 = uVar14 + (byte)((ulong)uStack_a8 >> 0x10);
                  uVar15 = uVar15 + (byte)((ulong)uStack_a8 >> 0x18);
                  auVar78._0_4_ =
                       auVar78._0_4_ +
                       (CONCAT12(bVar34,(ushort)(byte)((ulong)uStack_b0 >> 0x20)) & 0xffff);
                  auVar78._4_4_ = auVar78._4_4_ + (uint)bVar34;
                  auVar78._8_4_ = auVar78._8_4_ + (uint)(byte)((ulong)uStack_b0 >> 0x30);
                  auVar78._12_4_ = auVar78._12_4_ + (uint)(byte)((ulong)uStack_b0 >> 0x38);
                  uVar59 = uVar59 + (CONCAT12(bVar35,(ushort)(byte)((ulong)uStack_a8 >> 0x20)) &
                                    0xffff);
                  uVar60 = uVar60 + bVar35;
                  uVar61 = uVar61 + (byte)((ulong)uStack_a8 >> 0x30);
                  uVar62 = uVar62 + (byte)((ulong)uStack_a8 >> 0x38);
                  auVar76._0_4_ = auVar76._0_4_ + ((uint)uStack_b0 & 0xff);
                  auVar76._4_4_ = auVar76._4_4_ + (uint)(byte)((ulong)uStack_b0 >> 8);
                  auVar76._8_4_ = auVar76._8_4_ + (uint)(byte)((ulong)uStack_b0 >> 0x10);
                  auVar76._12_4_ = auVar76._12_4_ + (uint)(byte)((ulong)uStack_b0 >> 0x18);
                }
              }
            }
          }
        }
      }
      iVar50 = auVar76._0_4_ + (int)uVar65 + uVar12 + uVar6 +
               auVar78._0_4_ + uVar71 + uVar59 + (int)uVar23 +
               auVar76._4_4_ + (int)(uVar65 >> 0x20) + uVar13 + uVar7 +
               auVar78._4_4_ + uVar72 + uVar60 + (int)(uVar23 >> 0x20) +
               auVar76._8_4_ + (int)uVar69 + uVar14 + uVar8 +
               auVar78._8_4_ + uVar73 + uVar61 + (int)uVar57 +
               auVar76._12_4_ + (int)(uVar69 >> 0x20) + uVar15 + uVar9 +
               auVar78._12_4_ + uVar74 + uVar62 + (int)(uVar57 >> 0x20);
      if (uVar22 != uVar27) {
        uVar23 = uVar22;
        if ((bVar17 & 0x18) == 0) goto LAB_00e50714;
        goto LAB_00e506b0;
      }
    }
    iVar50 = iVar50 + 0x1b;
  }
  uVar1 = *param_2;
  param_2[1] = iVar50 + uVar18 + uVar1;
  param_2[2] = CONCAT22(uStack_78,uStack_7a);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(long *)(param_1 + 0x40) == 0) {
      if (((int)uVar1 < 0) ||
         (uVar18 = *(int *)(param_1 + 0x38) + uVar1, uVar27 = (ulong)uVar18, uVar18 < uVar1)) {
        uVar27 = 0x7fffffff;
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
      uVar18 = fseek(*(FILE **)(param_1 + 0x30),uVar27,0);
      sVar19 = (size_t)uVar18;
      uVar26 = 1;
      if (uVar18 != 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
        uVar18 = fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
        sVar19 = (size_t)uVar18;
      }
    }
    else {
      uVar26 = 1;
      uVar27 = *(long *)(param_1 + 0x48) + (ulong)uVar1;
      if (uVar27 < *(ulong *)(param_1 + 0x50)) {
        *(ulong *)(param_1 + 0x40) = uVar27;
      }
      else {
        *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
    }
  }
  else {
    uVar26 = 1;
  }
LAB_00e50754:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(sVar19);
}


