// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_find_pitch_lags_FIX
// Entry Point: 00e8a3dc
// Size: 1124 bytes
// Signature: undefined silk_find_pitch_lags_FIX(void)


void silk_find_pitch_lags_FIX
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  long lVar18;
  int iVar19;
  ulong uVar20;
  undefined (*pauVar21) [16];
  undefined2 *puVar22;
  byte *pbVar23;
  uint *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  ulong uVar29;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  undefined auVar30 [16];
  ushort uVar34;
  ulong uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined4 auStack_170 [8];
  undefined auStack_150 [4];
  int local_14c;
  long local_148;
  long local_140;
  undefined auStack_138 [4];
  undefined2 local_134;
  byte abStack_132 [14];
  byte abStack_124 [16];
  undefined4 local_114;
  byte abStack_110 [28];
  undefined auStack_f4 [32];
  undefined auStack_d4 [32];
  int local_b4 [17];
  long local_70;
  
  local_140 = tpidr_el0;
  local_70 = *(long *)(local_140 + 0x28);
  local_14c = *(int *)(param_1 + 0x11e8) + *(int *)(param_1 + 0x11f4) + *(int *)(param_1 + 0x11f0);
  lVar18 = -((long)*(int *)(param_1 + 0x11c4) * 2 + 0xfU & 0xfffffffffffffff0);
  puVar27 = auStack_150 + lVar18;
  lVar28 = param_4 + (long)local_14c * 2 + (long)*(int *)(param_1 + 0x11c4) * -2;
  local_148 = param_4;
  silk_apply_sine_window(puVar27,lVar28,1);
  iVar19 = *(int *)(param_1 + 0x11f4);
  uVar14 = *(int *)(param_1 + 0x11c4) + iVar19 * -2;
  __src = (void *)(lVar28 + (long)iVar19 * 2);
  uVar26 = -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1;
  memcpy(puVar27 + (long)iVar19 * 2,__src,uVar26);
  silk_apply_sine_window(puVar27 + (long)iVar19 * 2 + uVar26,(long)__src + uVar26,2,iVar19);
  silk_autocorr(local_b4,auStack_138,puVar27,*(undefined4 *)(param_1 + 0x11c4),
                *(int *)(param_1 + 0x1228) + 1,param_5);
  local_b4[0] = local_b4[0] + (int)((ulong)((long)local_b4[0] * 0x21) >> 0xf) + 1;
  iVar19 = silk_schur(auStack_d4,local_b4,*(undefined4 *)(param_1 + 0x1228));
  if (iVar19 < 2) {
    iVar19 = 1;
  }
  iVar1 = -local_b4[0];
  if (-1 < local_b4[0]) {
    iVar1 = local_b4[0];
  }
  iVar11 = iVar19 << (ulong)((int)LZCOUNT(iVar19) - 1U & 0x1f);
  iVar3 = iVar11 >> 0x10;
  sVar13 = 0;
  if (iVar3 != 0) {
    sVar13 = (short)(0x1fffffff / iVar3);
  }
  iVar3 = (int)LZCOUNT(iVar1) - (int)LZCOUNT(iVar19);
  iVar19 = local_b4[0] << (ulong)((int)LZCOUNT(iVar1) - 1U & 0x1f);
  lVar28 = (long)sVar13 * (long)iVar19;
  uVar14 = (int)((ulong)((long)sVar13 *
                        (long)(int)(iVar19 - ((uint)((ulong)((lVar28 >> 0x10) * (long)iVar11) >>
                                                    0x1d) & 0xfffffff8))) >> 0x10) +
           (int)((ulong)lVar28 >> 0x10);
  if (iVar3 == -0xe || iVar3 + 0xe < 0 != SCARRY4(iVar3,0xe)) {
    uVar15 = -iVar3 - 0xd;
    uVar2 = -0x80000000 >> (uVar15 & 0x1f);
    uVar12 = 0x7fffffff >> (ulong)(uVar15 & 0x1f);
    if ((int)uVar2 <= (int)uVar14) {
      uVar2 = uVar14;
    }
    if ((int)uVar14 <= (int)uVar12) {
      uVar12 = uVar2;
    }
    iVar19 = uVar12 << (ulong)(uVar15 & 0x1f);
  }
  else {
    iVar19 = (int)uVar14 >> (iVar3 + 0xdU & 0x1f);
    if (0x2f < iVar3 + 0x1dU) {
      iVar19 = 0;
    }
  }
  *(int *)(param_2 + 0x188) = iVar19;
  silk_k2a(&local_114,auStack_d4,*(undefined4 *)(param_1 + 0x1228));
  uVar14 = *(uint *)(param_1 + 0x1228);
  uVar26 = (ulong)uVar14;
  if (0 < (int)uVar14) {
    if (uVar14 < 0x10) {
      uVar20 = 0;
    }
    else {
      uVar20 = uVar26 & 0xfffffff0;
      pbVar23 = abStack_124;
      pauVar21 = (undefined (*) [16])auStack_f4;
      uVar25 = uVar20;
      do {
        auVar40 = pauVar21[-2];
        auVar41 = pauVar21[-1];
        uVar25 = uVar25 - 0x10;
        auVar43._8_4_ = 0xf8000000;
        auVar43._0_8_ = 0xf8000000f8000000;
        auVar43._12_4_ = 0xf8000000;
        auVar46 = NEON_cmgt(auVar43,auVar40,4);
        auVar43 = *pauVar21;
        auVar17 = pauVar21[1];
        auVar48._8_4_ = 0xf8000000;
        auVar48._0_8_ = 0xf8000000f8000000;
        auVar48._12_4_ = 0xf8000000;
        auVar44 = NEON_cmgt(auVar48,auVar41,4);
        auVar30._8_4_ = 0x7ffffff;
        auVar30._0_8_ = 0x7ffffff07ffffff;
        auVar30._12_4_ = 0x7ffffff;
        auVar48 = NEON_cmgt(auVar41,auVar30,4);
        auVar49._8_4_ = 0xf8000000;
        auVar49._0_8_ = 0xf8000000f8000000;
        auVar49._12_4_ = 0xf8000000;
        auVar51 = NEON_cmgt(auVar49,auVar43,4);
        auVar16._8_4_ = 0xf8000000;
        auVar16._0_8_ = 0xf8000000f8000000;
        auVar16._12_4_ = 0xf8000000;
        auVar49 = NEON_cmgt(auVar16,auVar17,4);
        auVar45._0_8_ =
             CONCAT26(auVar46._12_2_,CONCAT24(auVar46._8_2_,CONCAT22(auVar46._4_2_,auVar46._0_2_)));
        auVar45._8_2_ = auVar44._0_2_;
        auVar45._10_2_ = auVar44._4_2_;
        auVar45._12_2_ = auVar44._8_2_;
        auVar45._14_2_ = auVar44._12_2_;
        auVar47._2_2_ = (short)(auVar40._4_4_ >> 0xc);
        auVar47._0_2_ = (short)(auVar40._0_4_ >> 0xc);
        auVar47._4_2_ = (short)(auVar40._8_4_ >> 0xc);
        auVar47._6_2_ = (short)(auVar40._12_4_ >> 0xc);
        auVar44._8_4_ = 0x7ffffff;
        auVar44._0_8_ = 0x7ffffff07ffffff;
        auVar44._12_4_ = 0x7ffffff;
        auVar30 = NEON_cmgt(auVar40,auVar44,4);
        auVar50._0_8_ =
             CONCAT26(auVar51._12_2_,CONCAT24(auVar51._8_2_,CONCAT22(auVar51._4_2_,auVar51._0_2_)));
        auVar50._8_2_ = auVar49._0_2_;
        auVar50._10_2_ = auVar49._4_2_;
        auVar50._12_2_ = auVar49._8_2_;
        auVar50._14_2_ = auVar49._12_2_;
        auVar52._2_2_ = (short)(auVar43._4_4_ >> 0xc);
        auVar52._0_2_ = (short)(auVar43._0_4_ >> 0xc);
        auVar52._4_2_ = (short)(auVar43._8_4_ >> 0xc);
        auVar52._6_2_ = (short)(auVar43._12_4_ >> 0xc);
        auVar47._10_2_ = (short)(auVar41._4_4_ >> 0xc);
        auVar47._8_2_ = (short)(auVar41._0_4_ >> 0xc);
        auVar47._12_2_ = (short)(auVar41._8_4_ >> 0xc);
        auVar47._14_2_ = (short)(auVar41._12_4_ >> 0xc);
        auVar40._8_4_ = 0x7ffffff;
        auVar40._0_8_ = 0x7ffffff07ffffff;
        auVar40._12_4_ = 0x7ffffff;
        auVar44 = NEON_cmgt(auVar17,auVar40,4);
        auVar41._8_4_ = 0x7ffffff;
        auVar41._0_8_ = 0x7ffffff07ffffff;
        auVar41._12_4_ = 0x7ffffff;
        auVar40 = NEON_cmgt(auVar43,auVar41,4);
        auVar52._10_2_ = (short)(auVar17._4_4_ >> 0xc);
        auVar52._8_2_ = (short)(auVar17._0_4_ >> 0xc);
        auVar52._12_2_ = (short)(auVar17._8_4_ >> 0xc);
        auVar52._14_2_ = (short)(auVar17._12_4_ >> 0xc);
        auVar42._8_8_ = auVar45._8_8_;
        auVar42._0_8_ = auVar45._0_8_;
        auVar51._8_8_ = auVar50._8_8_;
        auVar51._0_8_ = auVar50._0_8_;
        auVar17._8_2_ = 0x8000;
        auVar17._0_8_ = 0x8000800080008000;
        auVar17._10_2_ = 0x8000;
        auVar17._12_2_ = 0x8000;
        auVar17._14_2_ = 0x8000;
        auVar43 = NEON_bsl(auVar42,auVar17,auVar47,1);
        auVar46._8_2_ = 0x8000;
        auVar46._0_8_ = 0x8000800080008000;
        auVar46._10_2_ = 0x8000;
        auVar46._12_2_ = 0x8000;
        auVar46._14_2_ = 0x8000;
        auVar41 = NEON_bsl(auVar51,auVar46,auVar52,1);
        uVar29 = CONCAT26(auVar30._12_2_,
                          CONCAT24(auVar30._8_2_,CONCAT22(auVar30._4_2_,auVar30._0_2_))) &
                 0x7fff7fff7fff7fff;
        uVar31 = auVar48._0_2_ & 0x7fff;
        uVar32 = auVar48._4_2_ & 0x7fff;
        uVar33 = auVar48._8_2_ & 0x7fff;
        uVar34 = auVar48._12_2_ & 0x7fff;
        uVar35 = CONCAT26(auVar40._12_2_,
                          CONCAT24(auVar40._8_2_,CONCAT22(auVar40._4_2_,auVar40._0_2_))) &
                 0x7fff7fff7fff7fff;
        uVar36 = auVar44._0_2_ & 0x7fff;
        uVar37 = auVar44._4_2_ & 0x7fff;
        uVar38 = auVar44._8_2_ & 0x7fff;
        uVar39 = auVar44._12_2_ & 0x7fff;
        *pbVar23 = (byte)uVar31 | auVar43[8] & ~auVar48[0];
        pbVar23[1] = (byte)(uVar31 >> 8) | auVar43[9] & ~auVar48[1];
        pbVar23[2] = (byte)uVar32 | auVar43[10] & ~auVar48[4];
        pbVar23[3] = (byte)(uVar32 >> 8) | auVar43[11] & ~auVar48[5];
        pbVar23[4] = (byte)uVar33 | auVar43[12] & ~auVar48[8];
        pbVar23[5] = (byte)(uVar33 >> 8) | auVar43[13] & ~auVar48[9];
        pbVar23[6] = (byte)uVar34 | auVar43[14] & ~auVar48[12];
        pbVar23[7] = (byte)(uVar34 >> 8) | auVar43[15] & ~auVar48[13];
        pbVar23[-0x10] = (byte)uVar29 | auVar43[0] & ~auVar30[0];
        pbVar23[-0xf] = (byte)(uVar29 >> 8) | auVar43[1] & ~auVar30[1];
        pbVar23[-0xe] = (byte)(uVar29 >> 0x10) | auVar43[2] & ~auVar30[4];
        pbVar23[-0xd] = (byte)(uVar29 >> 0x18) | auVar43[3] & ~auVar30[5];
        pbVar23[-0xc] = (byte)(uVar29 >> 0x20) | auVar43[4] & ~auVar30[8];
        pbVar23[-0xb] = (byte)(uVar29 >> 0x28) | auVar43[5] & ~auVar30[9];
        pbVar23[-10] = (byte)(uVar29 >> 0x30) | auVar43[6] & ~auVar30[12];
        pbVar23[-9] = (byte)(uVar29 >> 0x38) | auVar43[7] & ~auVar30[13];
        pbVar23[0x10] = (byte)uVar36 | auVar41[8] & ~auVar44[0];
        pbVar23[0x11] = (byte)(uVar36 >> 8) | auVar41[9] & ~auVar44[1];
        pbVar23[0x12] = (byte)uVar37 | auVar41[10] & ~auVar44[4];
        pbVar23[0x13] = (byte)(uVar37 >> 8) | auVar41[11] & ~auVar44[5];
        pbVar23[0x14] = (byte)uVar38 | auVar41[12] & ~auVar44[8];
        pbVar23[0x15] = (byte)(uVar38 >> 8) | auVar41[13] & ~auVar44[9];
        pbVar23[0x16] = (byte)uVar39 | auVar41[14] & ~auVar44[12];
        pbVar23[0x17] = (byte)(uVar39 >> 8) | auVar41[15] & ~auVar44[13];
        *pbVar23 = (byte)uVar35 | auVar41[0] & ~auVar40[0];
        pbVar23[1] = (byte)(uVar35 >> 8) | auVar41[1] & ~auVar40[1];
        pbVar23[2] = (byte)(uVar35 >> 0x10) | auVar41[2] & ~auVar40[4];
        pbVar23[3] = (byte)(uVar35 >> 0x18) | auVar41[3] & ~auVar40[5];
        pbVar23[4] = (byte)(uVar35 >> 0x20) | auVar41[4] & ~auVar40[8];
        pbVar23[5] = (byte)(uVar35 >> 0x28) | auVar41[5] & ~auVar40[9];
        pbVar23[6] = (byte)(uVar35 >> 0x30) | auVar41[6] & ~auVar40[12];
        pbVar23[7] = (byte)(uVar35 >> 0x38) | auVar41[7] & ~auVar40[13];
        pbVar23 = pbVar23 + 0x20;
        pauVar21 = pauVar21 + 4;
      } while (uVar25 != 0);
      if (uVar20 == uVar26) goto LAB_00e8a6e4;
    }
    lVar28 = uVar26 - uVar20;
    puVar22 = &local_134 + uVar20;
    puVar24 = &local_114 + uVar20;
    do {
      uVar14 = *puVar24;
      uVar4 = 0x8000;
      if (-0x8000001 < (int)uVar14) {
        uVar4 = (short)(uVar14 >> 0xc);
      }
      uVar5 = 0x7fff;
      if ((int)uVar14 < 0x8000000) {
        uVar5 = uVar4;
      }
      lVar28 = lVar28 + -1;
      *puVar22 = uVar5;
      puVar22 = puVar22 + 1;
      puVar24 = puVar24 + 1;
    } while (lVar28 != 0);
  }
LAB_00e8a6e4:
  silk_bwexpander(&local_134,uVar26,0xfd71);
  silk_LPC_analysis_filter
            (param_3,local_148,&local_134,local_14c,*(undefined4 *)(param_1 + 0x1228),
             *(undefined4 *)(param_1 + 0x13f4));
  if ((*(char *)(param_1 + 0x12ad) == '\0') || (*(int *)(param_1 + 0x1238) != 0)) {
    *(undefined8 *)(param_2 + 0x84) = 0;
    *(undefined8 *)(param_2 + 0x7c) = 0;
    *(undefined2 *)(param_1 + 0x12aa) = 0;
    *(undefined *)(param_1 + 0x12ac) = 0;
    *(undefined4 *)(param_1 + 0x21c8) = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x11c0);
    iVar19 = (((int)*(char *)(param_1 + 0x11bd) >> 1) * -0x4cc -
             ((*(int *)(param_1 + 0x1228) << 0x10) >> 0xb)) +
             (int)((ulong)((long)*(short *)(param_1 + 0x11b4) * -0x33332) >> 0x10) +
             (int)((ulong)((long)*(short *)(param_1 + 0x1278) * -0x665) >> 0x10);
    iVar1 = iVar19 + 0x1333;
    uVar7 = *(undefined4 *)(param_1 + 0x122c);
    if (iVar1 == -0x8000 || iVar19 + 0x9333 < 0 != SCARRY4(iVar1,0x8000)) {
      iVar1 = -0x8000;
    }
    if (0x7ffe < iVar1) {
      iVar1 = 0x7fff;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x11e0);
    uVar9 = *(undefined4 *)(param_1 + 0x1224);
    uVar10 = *(undefined4 *)(param_1 + 0x11e4);
    *(undefined4 *)((long)auStack_170 + lVar18 + 0x18) = *(undefined4 *)(param_1 + 0x13f4);
    *(undefined4 *)((long)auStack_170 + lVar18 + 0x10) = uVar10;
    *(undefined4 *)((long)auStack_170 + lVar18 + 8) = uVar9;
    *(undefined4 *)((long)auStack_170 + lVar18) = uVar8;
    iVar19 = silk_pitch_analysis_core
                       (param_3,param_2 + 0x7c,param_1 + 0x12aa,param_1 + 0x12ac,param_1 + 0x21c8,
                        uVar6,uVar7,iVar1);
    if (iVar19 == 0) {
      *(undefined *)(param_1 + 0x12ad) = 2;
    }
    else {
      *(undefined *)(param_1 + 0x12ad) = 1;
    }
  }
  if (*(long *)(local_140 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


