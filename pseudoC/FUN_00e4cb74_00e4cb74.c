// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4cb74
// Entry Point: 00e4cb74
// Size: 1012 bytes
// Signature: undefined FUN_00e4cb74(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e4cb74(long param_1)

{
  undefined (*pauVar1) [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  size_t sVar10;
  byte *__src;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  undefined (*pauVar18) [16];
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  
  if ((*(char *)(param_1 + 0x6e5) == '\0') || (*(char *)(param_1 + 0x5c) != '\0')) {
    pcVar11 = *(char **)(param_1 + 0x40);
    if (pcVar11 == (char *)0x0) goto LAB_00e4cc18;
LAB_00e4cba4:
    if (*(char **)(param_1 + 0x50) <= pcVar11) goto LAB_00e4cc40;
    *(char **)(param_1 + 0x40) = pcVar11 + 1;
    if (*pcVar11 != '\0') {
LAB_00e4cc30:
      *(undefined4 *)(param_1 + 0x9c) = 0x1f;
      return 0;
    }
LAB_00e4cbc0:
    pbVar12 = *(byte **)(param_1 + 0x40);
    if (pbVar12 == (byte *)0x0) goto LAB_00e4cc50;
LAB_00e4cbc8:
    if (pbVar12 < *(byte **)(param_1 + 0x50)) {
      *(byte **)(param_1 + 0x40) = pbVar12 + 1;
      uVar6 = (uint)*pbVar12;
    }
    else {
LAB_00e4cc60:
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x98) = 1;
    }
  }
  else {
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar16 = ftell(*(FILE **)(param_1 + 0x30));
      iVar7 = (int)lVar16 - *(int *)(param_1 + 0x38);
    }
    else {
      iVar7 = (int)*(long *)(param_1 + 0x40) - *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 100) = iVar7 + -4;
    pcVar11 = *(char **)(param_1 + 0x40);
    if (pcVar11 != (char *)0x0) goto LAB_00e4cba4;
LAB_00e4cc18:
    uVar6 = fgetc(*(FILE **)(param_1 + 0x30));
    if (uVar6 != 0xffffffff) {
      if ((uVar6 & 0xff) != 0) goto LAB_00e4cc30;
      goto LAB_00e4cbc0;
    }
LAB_00e4cc40:
    *(undefined4 *)(param_1 + 0x98) = 1;
    pbVar12 = *(byte **)(param_1 + 0x40);
    if (pbVar12 != (byte *)0x0) goto LAB_00e4cbc8;
LAB_00e4cc50:
    uVar6 = fgetc(*(FILE **)(param_1 + 0x30));
    if (uVar6 == 0xffffffff) goto LAB_00e4cc60;
  }
  *(char *)(param_1 + 0x6e3) = (char)uVar6;
  iVar7 = FUN_00e4a434(param_1);
  iVar8 = FUN_00e4a434(param_1);
  FUN_00e4a434(param_1);
  uVar9 = FUN_00e4a434(param_1);
  *(undefined4 *)(param_1 + 0x5dc) = uVar9;
  FUN_00e4a434(param_1);
  pbVar12 = *(byte **)(param_1 + 0x40);
  if (pbVar12 == (byte *)0x0) {
    uVar6 = fgetc(*(FILE **)(param_1 + 0x30));
    if (uVar6 == 0xffffffff) goto LAB_00e4ccec;
    uVar6 = uVar6 & 0xff;
LAB_00e4ccf8:
    __src = *(byte **)(param_1 + 0x40);
    *(uint *)(param_1 + 0x5e0) = uVar6;
    if (__src != (byte *)0x0) {
      pbVar13 = *(byte **)(param_1 + 0x50);
      goto LAB_00e4cd10;
    }
    sVar10 = fread((void *)(param_1 + 0x5e4),(ulong)uVar6,1,*(FILE **)(param_1 + 0x30));
    if (sVar10 != 1) goto LAB_00e4cdb8;
  }
  else {
    pbVar13 = *(byte **)(param_1 + 0x50);
    if (pbVar13 <= pbVar12) {
LAB_00e4ccec:
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x98) = 1;
      goto LAB_00e4ccf8;
    }
    __src = pbVar12 + 1;
    *(byte **)(param_1 + 0x40) = __src;
    uVar6 = (uint)*pbVar12;
    *(uint *)(param_1 + 0x5e0) = (uint)*pbVar12;
LAB_00e4cd10:
    uVar19 = (ulong)uVar6;
    if (pbVar13 < __src + uVar19) {
LAB_00e4cdb8:
      *(undefined8 *)(param_1 + 0x98) = 0xa00000001;
      return 0;
    }
    memcpy((void *)(param_1 + 0x5e4),__src,uVar19);
    *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + uVar19;
  }
  *(undefined4 *)(param_1 + 0x700) = 0xfffffffe;
  if ((iVar7 != -1) || (iVar8 != -1)) {
    uVar19 = (ulong)*(uint *)(param_1 + 0x5e0);
    do {
      if ((int)uVar19 < 1) goto LAB_00e4cd90;
      pcVar11 = (char *)(param_1 + 0x5e3 + uVar19);
      uVar19 = uVar19 - 1;
    } while (*pcVar11 == -1);
    *(int *)(param_1 + 0x700) = (int)uVar19;
    *(int *)(param_1 + 0x704) = iVar7;
  }
LAB_00e4cd90:
  if (*(char *)(param_1 + 0x6e5) == '\0') goto LAB_00e4cf4c;
  uVar6 = *(uint *)(param_1 + 0x5e0);
  uVar19 = (ulong)uVar6;
  if ((int)uVar6 < 1) {
    iVar8 = 0x1b;
  }
  else {
    if (uVar6 < 8) {
      uVar14 = 0;
      iVar8 = 0;
LAB_00e4cf1c:
      lVar16 = uVar19 - uVar14;
      pbVar12 = (byte *)(uVar14 + param_1 + 0x5e4);
      do {
        lVar16 = lVar16 + -1;
        iVar8 = iVar8 + (uint)*pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (lVar16 != 0);
    }
    else if (uVar6 < 0x20) {
      iVar8 = 0;
      uVar15 = 0;
LAB_00e4cec0:
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      uVar14 = uVar19 & 0xfffffff8;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      lVar16 = uVar15 - uVar14;
      puVar17 = (ulong *)(uVar15 + param_1 + 0x5e4);
      do {
        lVar16 = lVar16 + 8;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = *puVar17;
        auVar5._12_4_ = 0x10101007;
        auVar5._0_12_ = _DAT_004c4d70;
        auVar28 = a64_TBL(ZEXT816(0),auVar28,ZEXT816(0),auVar5);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = *puVar17;
        auVar2._12_4_ = 0x10101003;
        auVar2._0_12_ = _DAT_004c4f40;
        auVar30 = a64_TBL(ZEXT816(0),auVar30,ZEXT816(0),auVar2);
        iVar23 = iVar23 + auVar28._0_4_;
        iVar24 = iVar24 + auVar28._4_4_;
        iVar25 = iVar25 + auVar28._8_4_;
        iVar26 = iVar26 + auVar28._12_4_;
        iVar8 = iVar8 + auVar30._0_4_;
        iVar20 = iVar20 + auVar30._4_4_;
        iVar21 = iVar21 + auVar30._8_4_;
        iVar22 = iVar22 + auVar30._12_4_;
        puVar17 = puVar17 + 1;
      } while (lVar16 != 0);
      iVar8 = iVar8 + iVar23 + iVar20 + iVar24 + iVar21 + iVar25 + iVar22 + iVar26;
      if (uVar14 != uVar19) goto LAB_00e4cf1c;
    }
    else {
      uVar14 = uVar19 & 0xffffffe0;
      pauVar18 = (undefined (*) [16])(param_1 + 0x5f4);
      iVar8 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar33 = 0;
      iVar34 = 0;
      iVar43 = 0;
      iVar44 = 0;
      iVar45 = 0;
      iVar46 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      iVar42 = 0;
      uVar15 = uVar14;
      auVar28 = ZEXT816(0);
      auVar30 = ZEXT816(0);
      do {
        pauVar1 = pauVar18 + -1;
        uVar9 = (undefined4)((ulong)*(undefined8 *)(pauVar18[-1] + 8) >> 0x20);
        auVar27 = *pauVar18;
        pauVar18 = pauVar18 + 2;
        uVar15 = uVar15 - 0x20;
        auVar47._12_4_ = 0x10101003;
        auVar47._0_12_ = _DAT_004c4f40;
        auVar48._12_4_ = uVar9;
        auVar48._0_12_ = *(undefined (*) [12])*pauVar1;
        auVar48 = a64_TBL(ZEXT816(0),auVar48,ZEXT816(0),auVar47);
        auVar49._12_4_ = uVar9;
        auVar49._0_12_ = *(undefined (*) [12])*pauVar1;
        auVar53._12_4_ = 0x10101007;
        auVar53._0_12_ = _DAT_004c4d70;
        auVar49 = a64_TBL(ZEXT816(0),auVar49,ZEXT816(0),auVar53);
        auVar50._12_4_ = uVar9;
        auVar50._0_12_ = *(undefined (*) [12])*pauVar1;
        auVar3._12_4_ = 0x1010100b;
        auVar3._0_12_ = _DAT_004c37b0;
        auVar50 = a64_TBL(ZEXT816(0),auVar50,ZEXT816(0),auVar3);
        auVar51._12_4_ = uVar9;
        auVar51._0_12_ = *(undefined (*) [12])*pauVar1;
        auVar51 = a64_TBL(ZEXT816(0),auVar51,ZEXT816(0),_DAT_004c4a50);
        auVar52._12_4_ = 0x10101003;
        auVar52._0_12_ = _DAT_004c4f40;
        auVar52 = a64_TBL(ZEXT816(0),auVar27,ZEXT816(0),auVar52);
        auVar54._12_4_ = 0x10101007;
        auVar54._0_12_ = _DAT_004c4d70;
        auVar53 = a64_TBL(ZEXT816(0),auVar27,ZEXT816(0),auVar54);
        auVar4._12_4_ = 0x1010100b;
        auVar4._0_12_ = _DAT_004c37b0;
        auVar54 = a64_TBL(ZEXT816(0),auVar27,ZEXT816(0),auVar4);
        auVar47 = a64_TBL(ZEXT816(0),auVar27,ZEXT816(0),_DAT_004c4a50);
        auVar29._0_4_ = auVar30._0_4_ + auVar51._0_4_;
        auVar29._4_4_ = auVar30._4_4_ + auVar51._4_4_;
        auVar29._8_4_ = auVar30._8_4_ + auVar51._8_4_;
        auVar29._12_4_ = auVar30._12_4_ + auVar51._12_4_;
        auVar27._0_4_ = auVar28._0_4_ + auVar50._0_4_;
        auVar27._4_4_ = auVar28._4_4_ + auVar50._4_4_;
        auVar27._8_4_ = auVar28._8_4_ + auVar50._8_4_;
        auVar27._12_4_ = auVar28._12_4_ + auVar50._12_4_;
        iVar23 = iVar23 + auVar49._0_4_;
        iVar24 = iVar24 + auVar49._4_4_;
        iVar25 = iVar25 + auVar49._8_4_;
        iVar26 = iVar26 + auVar49._12_4_;
        iVar8 = iVar8 + auVar48._0_4_;
        iVar20 = iVar20 + auVar48._4_4_;
        iVar21 = iVar21 + auVar48._8_4_;
        iVar22 = iVar22 + auVar48._12_4_;
        iVar39 = iVar39 + auVar47._0_4_;
        iVar40 = iVar40 + auVar47._4_4_;
        iVar41 = iVar41 + auVar47._8_4_;
        iVar42 = iVar42 + auVar47._12_4_;
        iVar35 = iVar35 + auVar54._0_4_;
        iVar36 = iVar36 + auVar54._4_4_;
        iVar37 = iVar37 + auVar54._8_4_;
        iVar38 = iVar38 + auVar54._12_4_;
        iVar43 = iVar43 + auVar53._0_4_;
        iVar44 = iVar44 + auVar53._4_4_;
        iVar45 = iVar45 + auVar53._8_4_;
        iVar46 = iVar46 + auVar53._12_4_;
        iVar31 = iVar31 + auVar52._0_4_;
        iVar32 = iVar32 + auVar52._4_4_;
        iVar33 = iVar33 + auVar52._8_4_;
        iVar34 = iVar34 + auVar52._12_4_;
        auVar28 = auVar27;
        auVar30 = auVar29;
      } while (uVar15 != 0);
      iVar8 = iVar31 + iVar8 + iVar35 + auVar27._0_4_ + iVar43 + iVar23 + iVar39 + auVar29._0_4_ +
              iVar32 + iVar20 + iVar36 + auVar27._4_4_ + iVar44 + iVar24 + iVar40 + auVar29._4_4_ +
              iVar33 + iVar21 + iVar37 + auVar27._8_4_ + iVar45 + iVar25 + iVar41 + auVar29._8_4_ +
              iVar34 + iVar22 + iVar38 + auVar27._12_4_ + iVar46 + iVar26 + iVar42 + auVar29._12_4_;
      if (uVar14 != uVar19) {
        uVar15 = uVar14;
        if ((uVar6 & 0x18) == 0) goto LAB_00e4cf1c;
        goto LAB_00e4cec0;
      }
    }
    iVar8 = iVar8 + 0x1b;
  }
  *(uint *)(param_1 + 0x68) = iVar8 + uVar6 + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x6c) = iVar7;
LAB_00e4cf4c:
  *(undefined4 *)(param_1 + 0x6e8) = 0;
                    /* WARNING: Read-only address (ram,0x004c37b0) is written */
                    /* WARNING: Read-only address (ram,0x004c4a50) is written */
                    /* WARNING: Read-only address (ram,0x004c4d70) is written */
                    /* WARNING: Read-only address (ram,0x004c4f40) is written */
  return 1;
}


