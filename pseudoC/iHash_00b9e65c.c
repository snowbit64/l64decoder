// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: iHash
// Entry Point: 00b9e65c
// Size: 412 bytes
// Signature: undefined __cdecl iHash(char * param_1, int param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StringUtil::iHash(char const*, int) */

int StringUtil::iHash(char *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
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
  int iVar24;
  int iVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
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
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  
  if (param_2 < 1) {
    iVar10 = 0;
  }
  else {
    if (param_2 - 1U < 0xf) {
      iVar10 = 0;
      uVar7 = 0;
      pbVar8 = (byte *)param_1;
    }
    else {
      uVar2 = (ulong)(param_2 - 1U) + 1;
      iVar20 = 6;
      iVar21 = 7;
      iVar18 = 4;
      iVar19 = 5;
      iVar12 = 0xe;
      iVar13 = 0xf;
      iVar10 = 0xc;
      iVar11 = 0xd;
      iVar16 = 10;
      iVar17 = 0xb;
      iVar14 = 8;
      iVar15 = 9;
      iVar24 = 2;
      iVar25 = 3;
      iVar22 = 0;
      iVar23 = 1;
      uVar7 = uVar2 & 0x1fffffff0;
      pbVar8 = (byte *)(param_1 + uVar7);
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar33 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      iVar38 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      iVar42 = 0;
      iVar43 = 0;
      iVar44 = 0;
      iVar45 = 0;
      uVar6 = uVar7;
      do {
        uVar6 = uVar6 - 0x10;
        auVar46 = a64_TBL(ZEXT816(0),*(undefined (*) [16])param_1,ZEXT816(0),_DAT_004c4a50);
        auVar48 = a64_TBL(ZEXT816(0),*(undefined (*) [16])param_1,ZEXT816(0),_DAT_004c37b0);
        auVar49 = a64_TBL(ZEXT816(0),*(undefined (*) [16])param_1,ZEXT816(0),_DAT_004c4f40);
        auVar50 = a64_TBL(ZEXT816(0),*(undefined (*) [16])param_1,ZEXT816(0),_DAT_004c4d70);
        auVar51._0_4_ = auVar46._0_4_ + -0x41;
        auVar51._4_4_ = auVar46._4_4_ + -0x41;
        auVar51._8_4_ = auVar46._8_4_ - 0x41;
        auVar51._12_4_ = auVar46._12_4_ - 0x41;
        auVar53._0_4_ = auVar48._0_4_ + -0x41;
        auVar53._4_4_ = auVar48._4_4_ + -0x41;
        auVar53._8_4_ = auVar48._8_4_ - 0x41;
        auVar53._12_4_ = auVar48._12_4_ - 0x41;
        auVar26._0_4_ = auVar49._0_4_ + -0x41;
        auVar26._4_4_ = auVar49._4_4_ + -0x41;
        auVar26._8_4_ = auVar49._8_4_ - 0x41;
        auVar26._12_4_ = auVar49._12_4_ - 0x41;
        auVar28._0_4_ = auVar50._0_4_ + -0x41;
        auVar28._4_4_ = auVar50._4_4_ + -0x41;
        auVar28._8_4_ = auVar50._8_4_ - 0x41;
        auVar28._12_4_ = auVar50._12_4_ - 0x41;
        auVar27._8_4_ = 0x1a;
        auVar27._0_8_ = 0x1a0000001a;
        auVar27._12_4_ = 0x1a;
        auVar27 = NEON_cmhi(auVar27,auVar26,4);
        auVar54._8_4_ = 0x1a;
        auVar54._0_8_ = 0x1a0000001a;
        auVar54._12_4_ = 0x1a;
        auVar29 = NEON_cmhi(auVar54,auVar28,4);
        auVar4._8_4_ = 0x1a;
        auVar4._0_8_ = 0x1a0000001a;
        auVar4._12_4_ = 0x1a;
        auVar54 = NEON_cmhi(auVar4,auVar53,4);
        auVar5._8_4_ = 0x1a;
        auVar5._0_8_ = 0x1a0000001a;
        auVar5._12_4_ = 0x1a;
        auVar52 = NEON_cmhi(auVar5,auVar51,4);
        auVar47._8_4_ = auVar46._8_4_ | 0x20;
        auVar47._0_8_ = auVar46._0_8_ | 0x2000000020;
        auVar47._12_4_ = auVar46._12_4_ | 0x20;
        auVar47 = NEON_bit(auVar46,auVar47,auVar52,1);
        auVar52._8_4_ = auVar48._8_4_ | 0x20;
        auVar52._0_8_ = auVar48._0_8_ | 0x2000000020;
        auVar52._12_4_ = auVar48._12_4_ | 0x20;
        auVar52 = NEON_bit(auVar48,auVar52,auVar54,1);
        auVar46._8_4_ = auVar50._8_4_ | 0x20;
        auVar46._0_8_ = auVar50._0_8_ | 0x2000000020;
        auVar46._12_4_ = auVar50._12_4_ | 0x20;
        auVar46 = NEON_bit(auVar50,auVar46,auVar29,1);
        auVar29._8_4_ = auVar49._8_4_ | 0x20;
        auVar29._0_8_ = auVar49._0_8_ | 0x2000000020;
        auVar29._12_4_ = auVar49._12_4_ | 0x20;
        auVar29 = NEON_bit(auVar49,auVar29,auVar27,1);
        iVar42 = iVar42 + auVar47._0_4_ * (iVar10 + 0x77);
        iVar43 = iVar43 + auVar47._4_4_ * (iVar11 + 0x77);
        iVar44 = iVar44 + auVar47._8_4_ * (iVar12 + 0x77);
        iVar45 = iVar45 + auVar47._12_4_ * (iVar13 + 0x77);
        iVar38 = iVar38 + auVar52._0_4_ * (iVar14 + 0x77);
        iVar39 = iVar39 + auVar52._4_4_ * (iVar15 + 0x77);
        iVar40 = iVar40 + auVar52._8_4_ * (iVar16 + 0x77);
        iVar41 = iVar41 + auVar52._12_4_ * (iVar17 + 0x77);
        iVar34 = iVar34 + auVar46._0_4_ * (iVar18 + 0x77);
        iVar35 = iVar35 + auVar46._4_4_ * (iVar19 + 0x77);
        iVar36 = iVar36 + auVar46._8_4_ * (iVar20 + 0x77);
        iVar37 = iVar37 + auVar46._12_4_ * (iVar21 + 0x77);
        iVar30 = iVar30 + auVar29._0_4_ * (iVar22 + 0x77);
        iVar31 = iVar31 + auVar29._4_4_ * (iVar23 + 0x77);
        iVar32 = iVar32 + auVar29._8_4_ * (iVar24 + 0x77);
        iVar33 = iVar33 + auVar29._12_4_ * (iVar25 + 0x77);
        iVar22 = iVar22 + 0x10;
        iVar23 = iVar23 + 0x10;
        iVar24 = iVar24 + 0x10;
        iVar25 = iVar25 + 0x10;
        iVar18 = iVar18 + 0x10;
        iVar19 = iVar19 + 0x10;
        iVar20 = iVar20 + 0x10;
        iVar21 = iVar21 + 0x10;
        iVar14 = iVar14 + 0x10;
        iVar15 = iVar15 + 0x10;
        iVar16 = iVar16 + 0x10;
        iVar17 = iVar17 + 0x10;
        iVar10 = iVar10 + 0x10;
        iVar11 = iVar11 + 0x10;
        iVar12 = iVar12 + 0x10;
        iVar13 = iVar13 + 0x10;
        param_1 = (char *)((long)param_1 + 0x10);
      } while (uVar6 != 0);
      iVar10 = iVar30 + iVar38 + iVar34 + iVar42 + iVar31 + iVar39 + iVar35 + iVar43 +
               iVar32 + iVar40 + iVar36 + iVar44 + iVar33 + iVar41 + iVar37 + iVar45;
      if (uVar2 == uVar7) {
        return iVar10;
      }
    }
    do {
      bVar3 = *pbVar8;
      uVar9 = bVar3 | 0x20;
      iVar11 = (int)uVar7;
      if (0x19 < bVar3 - 0x41) {
        uVar9 = (uint)bVar3;
      }
      uVar1 = iVar11 + 1;
      uVar7 = (ulong)uVar1;
      iVar10 = iVar10 + uVar9 * (iVar11 + 0x77);
      pbVar8 = pbVar8 + 1;
    } while (param_2 != uVar1);
  }
  return iVar10;
}


