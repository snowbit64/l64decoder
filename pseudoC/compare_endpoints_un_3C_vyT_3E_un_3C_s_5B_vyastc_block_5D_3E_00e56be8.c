// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compare_endpoints___un_3C_vyT_3E_un_3C_s_5B_vyastc_block_5D__3E_
// Entry Point: 00e56be8
// Size: 948 bytes
// Signature: undefined compare_endpoints___un_3C_vyT_3E_un_3C_s_5B_vyastc_block_5D__3E_(void)


/* WARNING: Type propagation algorithm not settling */

undefined  [16]
compare_endpoints___un_3C_vyT_3E_un_3C_s_5B_vyastc_block_5D__3E_
          (undefined param_1 [16],byte *param_2,long param_3)

{
  byte *pbVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  long lVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  byte bVar13;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined auVar14 [16];
  undefined auVar15 [16];
  int iVar25;
  undefined auVar26 [16];
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  uint uVar35;
  int iVar36;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  
  auVar12._0_4_ =
       ((uint)*param_2 + (uint)param_2[8] + (uint)param_2[0x10]) -
       ((uint)param_2[4] + (uint)param_2[0xc] + (uint)param_2[0x14]);
  auVar12._4_4_ =
       ((uint)param_2[1] + (uint)param_2[9] + (uint)param_2[0x11]) -
       ((uint)param_2[5] + (uint)param_2[0xd] + (uint)param_2[0x15]);
  auVar12._8_4_ =
       ((uint)param_2[2] + (uint)param_2[10] + (uint)param_2[0x12]) -
       ((uint)param_2[6] + (uint)param_2[0xe] + (uint)param_2[0x16]);
  auVar12._12_4_ =
       ((uint)param_2[3] + (uint)param_2[0xb] + (uint)param_2[0x13]) -
       ((uint)param_2[7] + (uint)param_2[0xf] + (uint)param_2[0x17]);
  auVar14._8_4_ = 3;
  auVar14._0_8_ = 0x300000003;
  auVar14._12_4_ = 3;
  auVar15._8_4_ = 0xfffffffd;
  auVar15._0_8_ = 0xfffffffdfffffffd;
  auVar15._12_4_ = 0xfffffffd;
  auVar26 = NEON_cmgt(auVar12,auVar15,4);
  auVar15 = NEON_cmgt(auVar14,auVar12,4);
  bVar13 = auVar26[0] & auVar15[0];
  bVar16 = auVar26[1] & auVar15[1];
  bVar17 = auVar26[2] & auVar15[2];
  bVar18 = auVar26[4] & auVar15[4];
  bVar19 = auVar26[5] & auVar15[5];
  bVar20 = auVar26[7] & auVar15[7];
  bVar21 = auVar26[8] & auVar15[8];
  bVar22 = auVar26[9] & auVar15[9];
  bVar23 = auVar26[12] & auVar15[12];
  bVar24 = auVar26[13] & auVar15[13];
  auVar38[0] = param_1[0] & bVar13;
  auVar38[1] = param_1[1] & bVar16;
  auVar38[2] = param_1[2] & bVar17;
  auVar38[3] = param_1[3] & auVar26[3] & auVar15[3];
  auVar38[4] = param_1[4] & bVar18;
  auVar38[5] = param_1[5] & bVar19;
  auVar38[6] = param_1[6] & auVar26[6] & auVar15[6];
  auVar38[7] = param_1[7] & bVar20;
  auVar38[8] = param_1[8] & bVar21;
  auVar38[9] = param_1[9] & bVar22;
  auVar38[10] = param_1[10] & auVar26[10] & auVar15[10];
  auVar38[11] = param_1[11] & auVar26[11] & auVar15[11];
  auVar38[12] = param_1[12] & bVar23;
  auVar38[13] = param_1[13] & bVar24;
  auVar38[14] = param_1[14] & auVar26[14] & auVar15[14];
  auVar38[15] = param_1[15] & auVar26[15] & auVar15[15];
  iVar25 = NEON_umaxv(auVar38,4);
  if (iVar25 != 0) {
    lVar10 = 0;
    auVar15 = NEON_cmgt(auVar12,0,4);
    bVar27 = auVar38[0] & auVar15[0];
    bVar28 = auVar38[4] & auVar15[4];
    bVar29 = auVar38[8] & auVar15[8];
    bVar30 = auVar38[12] & auVar15[12];
    bVar31 = auVar38[0] & ~auVar15[0];
    bVar32 = auVar38[4] & ~auVar15[4];
    bVar33 = auVar38[8] & ~auVar15[8];
    bVar34 = auVar38[12] & ~auVar15[12];
    auVar5[1] = auVar38[1] & ~auVar15[1];
    auVar5[0] = bVar31;
    auVar5[2] = auVar38[2] & ~auVar15[2];
    auVar5[3] = auVar38[3] & ~auVar15[3];
    auVar5[4] = bVar32;
    auVar5[5] = auVar38[5] & ~auVar15[5];
    auVar5[6] = auVar38[6] & ~auVar15[6];
    auVar5[7] = auVar38[7] & ~auVar15[7];
    auVar5[8] = bVar33;
    auVar5[9] = auVar38[9] & ~auVar15[9];
    auVar5[10] = auVar38[10] & ~auVar15[10];
    auVar5[11] = auVar38[11] & ~auVar15[11];
    auVar5[12] = bVar34;
    auVar5[13] = auVar38[13] & ~auVar15[13];
    auVar5[14] = auVar38[14] & ~auVar15[14];
    auVar5[15] = auVar38[15] & ~auVar15[15];
    iVar25 = NEON_umaxv(auVar5,4);
    auVar26[1] = auVar38[1] & auVar15[1];
    auVar26[0] = bVar27;
    auVar26[2] = auVar38[2] & auVar15[2];
    auVar26[3] = auVar38[3] & auVar15[3];
    auVar26[4] = bVar28;
    auVar26[5] = auVar38[5] & auVar15[5];
    auVar26[6] = auVar38[6] & auVar15[6];
    auVar26[7] = auVar38[7] & auVar15[7];
    auVar26[8] = bVar29;
    auVar26[9] = auVar38[9] & auVar15[9];
    auVar26[10] = auVar38[10] & auVar15[10];
    auVar26[11] = auVar38[11] & auVar15[11];
    auVar26[12] = bVar30;
    auVar26[13] = auVar38[13] & auVar15[13];
    auVar26[14] = auVar38[14] & auVar15[14];
    auVar26[15] = auVar38[15] & auVar15[15];
    iVar45 = NEON_umaxv(auVar26,4);
    bVar27 = (bVar27 & 1) + (bVar28 & 2) + (bVar29 & 4) + (bVar30 & 8);
    uVar35 = (uint)(bVar31 & 1) + (uint)(bVar32 & 2) + (uint)(bVar33 & 4) + (uint)(bVar34 & 8);
    do {
      if (iVar25 != 0) {
        auVar15 = *(undefined (*) [16])(param_3 + 0x1a0);
        iVar46 = auVar15._0_4_ * 0x5556 >> 0x10;
        iVar47 = auVar15._4_4_ * 0x5556 >> 0x10;
        iVar48 = auVar15._8_4_ * 0x5556 >> 0x10;
        iVar49 = auVar15._12_4_ * 0x5556 >> 0x10;
        pbVar1 = param_2 + lVar10;
        iVar36 = auVar15._0_4_ + iVar46 * -3;
        iVar40 = auVar15._4_4_ + iVar47 * -3;
        iVar41 = auVar15._8_4_ + iVar48 * -3;
        iVar42 = auVar15._12_4_ + iVar49 * -3;
        auVar37._0_4_ = iVar36 + iVar46;
        auVar37._4_4_ = iVar40 + iVar47;
        auVar37._8_4_ = iVar41 + iVar48;
        auVar37._12_4_ = iVar42 + iVar49;
        auVar3._8_4_ = 2;
        auVar3._0_8_ = 0x200000002;
        auVar3._12_4_ = 2;
        auVar6._4_4_ = iVar40 * -2 + 5;
        auVar6._0_4_ = iVar36 * -2 + 5;
        auVar6._8_4_ = iVar41 * -2 + 5;
        auVar6._12_4_ = iVar42 * -2 + 5;
        auVar15 = NEON_smax(auVar3,auVar6,4);
        auVar15 = NEON_ushl(auVar15,auVar37,4);
        auVar43._0_4_ = *pbVar1 - 1;
        auVar43._4_4_ = pbVar1[1] - 1;
        auVar43._8_4_ = pbVar1[2] - 1;
        auVar43._12_4_ = pbVar1[3] - 1;
        auVar38 = NEON_smax(auVar43,ZEXT216(0),4);
        auVar7._4_4_ = (auVar15._4_4_ >> 1) + -1;
        auVar7._0_4_ = (auVar15._0_4_ >> 1) + -1;
        auVar7._8_4_ = (auVar15._8_4_ >> 1) + -1;
        auVar7._12_4_ = (auVar15._12_4_ >> 1) + -1;
        auVar15 = NEON_smin(auVar38,auVar7,4);
        if ((uVar35 & 1) != 0) {
          param_2[lVar10] = auVar15[0];
        }
        if ((uVar35 >> 1 & 1) != 0) {
          param_2[lVar10 + 1] = auVar15[4];
        }
        if ((uVar35 >> 2 & 1) != 0) {
          param_2[lVar10 + 2] = auVar15[8];
        }
        if ((uVar35 >> 3 & 1) != 0) {
          param_2[lVar10 + 3] = auVar15[12];
        }
      }
      if (iVar45 != 0) {
        auVar15 = *(undefined (*) [16])(param_3 + 0x1a0);
        iVar46 = auVar15._0_4_ * 0x5556 >> 0x10;
        iVar47 = auVar15._4_4_ * 0x5556 >> 0x10;
        iVar48 = auVar15._8_4_ * 0x5556 >> 0x10;
        iVar49 = auVar15._12_4_ * 0x5556 >> 0x10;
        iVar36 = auVar15._0_4_ + iVar46 * -3;
        iVar40 = auVar15._4_4_ + iVar47 * -3;
        iVar41 = auVar15._8_4_ + iVar48 * -3;
        iVar42 = auVar15._12_4_ + iVar49 * -3;
        auVar39._0_4_ = iVar36 + iVar46;
        auVar39._4_4_ = iVar40 + iVar47;
        auVar39._8_4_ = iVar41 + iVar48;
        auVar39._12_4_ = iVar42 + iVar49;
        auVar4._8_4_ = 2;
        auVar4._0_8_ = 0x200000002;
        auVar4._12_4_ = 2;
        auVar8._4_4_ = iVar40 * -2 + 5;
        auVar8._0_4_ = iVar36 * -2 + 5;
        auVar8._8_4_ = iVar41 * -2 + 5;
        auVar8._12_4_ = iVar42 * -2 + 5;
        auVar15 = NEON_smax(auVar4,auVar8,4);
        auVar15 = NEON_ushl(auVar15,auVar39,4);
        auVar44._0_4_ = param_2[lVar10 + 4] - 1;
        auVar44._4_4_ = param_2[lVar10 + 5] - 1;
        auVar44._8_4_ = param_2[lVar10 + 6] - 1;
        auVar44._12_4_ = param_2[lVar10 + 7] - 1;
        auVar38 = NEON_smax(auVar44,ZEXT216(0),4);
        auVar9._4_4_ = (auVar15._4_4_ >> 1) + -1;
        auVar9._0_4_ = (auVar15._0_4_ >> 1) + -1;
        auVar9._8_4_ = (auVar15._8_4_ >> 1) + -1;
        auVar9._12_4_ = (auVar15._12_4_ >> 1) + -1;
        auVar15 = NEON_smin(auVar38,auVar9,4);
        if ((bVar27 & 1) != 0) {
          param_2[lVar10 + 4] = auVar15[0];
        }
        if ((bVar27 >> 1 & 1) != 0) {
          param_2[lVar10 + 5] = auVar15[4];
        }
        if ((bVar27 >> 2 & 1) != 0) {
          param_2[lVar10 + 6] = auVar15[8];
        }
        if ((bVar27 >> 3 & 1) != 0) {
          param_2[lVar10 + 7] = auVar15[12];
        }
      }
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    auVar11._0_4_ = (int)((uint)CONCAT12(bVar17,CONCAT11(bVar16,bVar13)) << 0x1f) >> 0x1f;
    auVar11._4_4_ = (int)((uint)CONCAT11(bVar19,bVar18) << 0x1f) >> 0x1f;
    auVar11._8_4_ =
         (int)((uint)(ushort)(CONCAT12(bVar22,CONCAT11(bVar21,bVar20)) >> 8) << 0x1f) >> 0x1f;
    auVar11._12_4_ = (int)((uint)CONCAT11(bVar24,bVar23) << 0x1f) >> 0x1f;
    auVar2._4_4_ = ((uint)param_2[1] + (uint)param_2[9] + (uint)param_2[0x11]) -
                   ((uint)param_2[5] + (uint)param_2[0xd] + (uint)param_2[0x15]);
    auVar2._0_4_ = ((uint)*param_2 + (uint)param_2[8] + (uint)param_2[0x10]) -
                   ((uint)param_2[4] + (uint)param_2[0xc] + (uint)param_2[0x14]);
    auVar2._8_4_ = ((uint)param_2[2] + (uint)param_2[10] + (uint)param_2[0x12]) -
                   ((uint)param_2[6] + (uint)param_2[0xe] + (uint)param_2[0x16]);
    auVar2._12_4_ =
         ((uint)param_2[3] + (uint)param_2[0xb] + (uint)param_2[0x13]) -
         ((uint)param_2[7] + (uint)param_2[0xf] + (uint)param_2[0x17]);
    auVar12 = NEON_bit(auVar12,auVar2,auVar11,1);
  }
  auVar15 = NEON_cmgt(auVar12,0,4);
  return auVar15;
}


