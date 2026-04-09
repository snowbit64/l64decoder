// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hash
// Entry Point: 00b9e484
// Size: 404 bytes
// Signature: undefined __cdecl hash(char * param_1, int param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringUtil::hash(char const*, int) */

int StringUtil::hash(char *param_1,int param_2)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  ulong uVar3;
  undefined (*pauVar4) [16];
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  int iVar28;
  int iVar29;
  int iVar30;
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
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined auVar60 [16];
  undefined auVar61 [16];
  
  if (param_2 < 1) {
    iVar8 = 0;
  }
  else {
    if (param_2 - 1U < 0x1f) {
      iVar8 = 0;
      uVar5 = 0;
      pbVar6 = (byte *)param_1;
    }
    else {
      iVar18 = 6;
      iVar19 = 7;
      iVar16 = 4;
      iVar17 = 5;
      iVar10 = 0xe;
      iVar11 = 0xf;
      iVar8 = 0xc;
      iVar9 = 0xd;
      iVar14 = 10;
      iVar15 = 0xb;
      iVar12 = 8;
      iVar13 = 9;
      uVar3 = (ulong)(param_2 - 1U) + 1;
      uVar5 = uVar3 & 0x1ffffffe0;
      iVar22 = 2;
      iVar23 = 3;
      iVar20 = 0;
      iVar21 = 1;
      pbVar6 = (byte *)(param_1 + uVar5);
      pauVar4 = (undefined (*) [16])(param_1 + 0x10);
      iVar28 = 0;
      iVar29 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar40 = 0;
      iVar41 = 0;
      iVar42 = 0;
      iVar43 = 0;
      iVar32 = 0;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar44 = 0;
      iVar45 = 0;
      iVar46 = 0;
      iVar47 = 0;
      iVar56 = 0;
      iVar57 = 0;
      iVar58 = 0;
      iVar59 = 0;
      iVar48 = 0;
      iVar49 = 0;
      iVar50 = 0;
      iVar51 = 0;
      iVar52 = 0;
      iVar53 = 0;
      iVar54 = 0;
      iVar55 = 0;
      uVar7 = uVar5;
      do {
        pauVar1 = pauVar4 + -1;
        auVar60 = *pauVar4;
        pauVar4 = pauVar4 + 2;
        uVar7 = uVar7 - 0x20;
        auVar24 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),_DAT_004c37b0);
        auVar25 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),_DAT_004c4d70);
        auVar26 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),_DAT_004c4f40);
        auVar27 = a64_TBL(ZEXT816(0),*pauVar1,ZEXT816(0),_DAT_004c4a50);
        iVar32 = iVar32 + (iVar12 + 0x77) * auVar24._0_4_;
        iVar33 = iVar33 + (iVar13 + 0x77) * auVar24._4_4_;
        iVar34 = iVar34 + (iVar14 + 0x77) * auVar24._8_4_;
        iVar35 = iVar35 + (iVar15 + 0x77) * auVar24._12_4_;
        auVar61 = a64_TBL(ZEXT816(0),auVar60,ZEXT816(0),_DAT_004c37b0);
        auVar24 = a64_TBL(ZEXT816(0),auVar60,ZEXT816(0),_DAT_004c4d70);
        iVar40 = iVar40 + (iVar16 + 0x77) * auVar25._0_4_;
        iVar41 = iVar41 + (iVar17 + 0x77) * auVar25._4_4_;
        iVar42 = iVar42 + (iVar18 + 0x77) * auVar25._8_4_;
        iVar43 = iVar43 + (iVar19 + 0x77) * auVar25._12_4_;
        auVar25 = a64_TBL(ZEXT816(0),auVar60,ZEXT816(0),_DAT_004c4f40);
        auVar60 = a64_TBL(ZEXT816(0),auVar60,ZEXT816(0),_DAT_004c4a50);
        iVar28 = iVar28 + (iVar20 + 0x77) * auVar26._0_4_;
        iVar29 = iVar29 + (iVar21 + 0x77) * auVar26._4_4_;
        iVar30 = iVar30 + (iVar22 + 0x77) * auVar26._8_4_;
        iVar31 = iVar31 + (iVar23 + 0x77) * auVar26._12_4_;
        iVar36 = iVar36 + (iVar8 + 0x77) * auVar27._0_4_;
        iVar37 = iVar37 + (iVar9 + 0x77) * auVar27._4_4_;
        iVar38 = iVar38 + (iVar10 + 0x77) * auVar27._8_4_;
        iVar39 = iVar39 + (iVar11 + 0x77) * auVar27._12_4_;
        iVar48 = iVar48 + (iVar12 + 0x87) * auVar61._0_4_;
        iVar49 = iVar49 + (iVar13 + 0x87) * auVar61._4_4_;
        iVar50 = iVar50 + (iVar14 + 0x87) * auVar61._8_4_;
        iVar51 = iVar51 + (iVar15 + 0x87) * auVar61._12_4_;
        iVar56 = iVar56 + (iVar16 + 0x87) * auVar24._0_4_;
        iVar57 = iVar57 + (iVar17 + 0x87) * auVar24._4_4_;
        iVar58 = iVar58 + (iVar18 + 0x87) * auVar24._8_4_;
        iVar59 = iVar59 + (iVar19 + 0x87) * auVar24._12_4_;
        iVar44 = iVar44 + (iVar20 + 0x87) * auVar25._0_4_;
        iVar45 = iVar45 + (iVar21 + 0x87) * auVar25._4_4_;
        iVar46 = iVar46 + (iVar22 + 0x87) * auVar25._8_4_;
        iVar47 = iVar47 + (iVar23 + 0x87) * auVar25._12_4_;
        iVar52 = iVar52 + (iVar8 + 0x87) * auVar60._0_4_;
        iVar53 = iVar53 + (iVar9 + 0x87) * auVar60._4_4_;
        iVar54 = iVar54 + (iVar10 + 0x87) * auVar60._8_4_;
        iVar55 = iVar55 + (iVar11 + 0x87) * auVar60._12_4_;
        iVar20 = iVar20 + 0x20;
        iVar21 = iVar21 + 0x20;
        iVar22 = iVar22 + 0x20;
        iVar23 = iVar23 + 0x20;
        iVar16 = iVar16 + 0x20;
        iVar17 = iVar17 + 0x20;
        iVar18 = iVar18 + 0x20;
        iVar19 = iVar19 + 0x20;
        iVar12 = iVar12 + 0x20;
        iVar13 = iVar13 + 0x20;
        iVar14 = iVar14 + 0x20;
        iVar15 = iVar15 + 0x20;
        iVar8 = iVar8 + 0x20;
        iVar9 = iVar9 + 0x20;
        iVar10 = iVar10 + 0x20;
        iVar11 = iVar11 + 0x20;
      } while (uVar7 != 0);
      iVar8 = iVar44 + iVar28 + iVar48 + iVar32 + iVar56 + iVar40 + iVar52 + iVar36 +
              iVar45 + iVar29 + iVar49 + iVar33 + iVar57 + iVar41 + iVar53 + iVar37 +
              iVar46 + iVar30 + iVar50 + iVar34 + iVar58 + iVar42 + iVar54 + iVar38 +
              iVar47 + iVar31 + iVar51 + iVar35 + iVar59 + iVar43 + iVar55 + iVar39;
      if (uVar3 == uVar5) {
        return iVar8;
      }
    }
    do {
      iVar9 = (int)uVar5;
      uVar2 = iVar9 + 1;
      uVar5 = (ulong)uVar2;
      iVar8 = iVar8 + (iVar9 + 0x77) * (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (param_2 != uVar2);
  }
  return iVar8;
}


