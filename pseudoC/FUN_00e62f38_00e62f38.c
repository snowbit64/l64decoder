// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e62f38
// Entry Point: 00e62f38
// Size: 860 bytes
// Signature: undefined FUN_00e62f38(void)


void FUN_00e62f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,int *param_6,ulong param_7,int param_8)

{
  undefined2 uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  ulong uVar10;
  undefined auVar11 [16];
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  undefined2 *puVar25;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  undefined8 *puVar29;
  undefined2 uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  undefined8 *puVar40;
  long lVar41;
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined auVar46 [16];
  char cVar47;
  char cVar48;
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  long alStack_60 [2];
  
  lVar2 = tpidr_el0;
  uVar22 = (uint)param_7;
  alStack_60[1] = *(long *)(lVar2 + 0x28);
  uVar39 = param_7 & 0xffffffff;
  puVar40 = (undefined8 *)
            ((long)alStack_60 -
            ((-(ulong)((uVar22 << 1) >> 0x1f) & 0xfffffffe00000000 | (ulong)(uVar22 << 1) << 1) +
             0xf & 0xfffffffffffffff0));
  lVar41 = (long)(int)uVar22;
  if ((int)uVar22 < 1) goto LAB_00e63244;
  lVar23 = (long)*param_6;
  lVar24 = (param_8 + -2) * lVar41;
  if (uVar22 < 8) {
    uVar26 = 0;
LAB_00e630a8:
    lVar27 = uVar39 - uVar26;
    puVar25 = (undefined2 *)((long)puVar40 + uVar26 * 2);
    piVar28 = (int *)(param_5 + (uVar26 + lVar24) * 4);
    do {
      iVar33 = (int)((ulong)(lVar23 * *piVar28) >> 0x10);
      uVar30 = 0x8000;
      if (iVar33 + 0x800000 < 0 == SCARRY4(iVar33,0x800000)) {
        uVar30 = (undefined2)((ulong)(lVar23 * *piVar28) >> 0x18);
      }
      uVar1 = 0x7fff;
      if (iVar33 < 0x800000) {
        uVar1 = uVar30;
      }
      lVar27 = lVar27 + -1;
      *puVar25 = uVar1;
      puVar25 = puVar25 + 1;
      piVar28 = piVar28 + 1;
    } while (lVar27 != 0);
  }
  else {
    uVar26 = param_7 & 0xfffffff8;
    puVar29 = (undefined8 *)(param_5 + lVar24 * 4);
    uVar31 = uVar26;
    puVar32 = puVar40;
    do {
      auVar44 = *(undefined (*) [16])(puVar29 + 2);
      uVar31 = uVar31 - 8;
      cVar47 = (char)(auVar44._8_4_ >> 0x1f);
      cVar48 = (char)(auVar44._12_4_ >> 0x1f);
      lVar20 = lVar23 * (int)*puVar29;
      lVar21 = lVar23 * (ulong)(uint6)(int6)(int)puVar29[1];
      lVar34 = lVar23 * CONCAT17(cVar47,CONCAT16(cVar47,CONCAT15(cVar47,(int5)auVar44._8_4_)));
      lVar37 = lVar23 * auVar44._0_4_;
      lVar35 = lVar23 * auVar44._4_4_;
      lVar36 = lVar23 * (int)((ulong)*puVar29 >> 0x20);
      lVar38 = lVar23 * CONCAT17(cVar48,CONCAT16(cVar48,CONCAT15(cVar48,(int5)auVar44._12_4_)));
      lVar27 = lVar23 * (ulong)(uint6)(int6)(int)((ulong)puVar29[1] >> 0x20);
      auVar50._4_4_ = (int)((ulong)lVar35 >> 0x10);
      auVar50._0_4_ = (int)((ulong)lVar37 >> 0x10);
      auVar53._4_4_ = (int)((ulong)lVar36 >> 0x10);
      auVar53._0_4_ = (int)((ulong)lVar20 >> 0x10);
      auVar50._12_4_ = (int)((ulong)lVar38 >> 0x10);
      auVar50._8_4_ = (int)((ulong)lVar34 >> 0x10);
      auVar53._12_4_ = (int)((ulong)lVar27 >> 0x10);
      auVar53._8_4_ = (int)((ulong)lVar21 >> 0x10);
      auVar52._8_4_ = 0xff800000;
      auVar52._0_8_ = 0xff800000ff800000;
      auVar52._12_4_ = 0xff800000;
      auVar52 = NEON_cmgt(auVar52,auVar50,4);
      auVar55._8_4_ = 0xff800000;
      auVar55._0_8_ = 0xff800000ff800000;
      auVar55._12_4_ = 0xff800000;
      auVar55 = NEON_cmgt(auVar55,auVar53,4);
      auVar44._8_4_ = 0x7fffff;
      auVar44._0_8_ = 0x7fffff007fffff;
      auVar44._12_4_ = 0x7fffff;
      auVar50 = NEON_cmgt(auVar50,auVar44,4);
      auVar49._8_4_ = 0x7fffff;
      auVar49._0_8_ = 0x7fffff007fffff;
      auVar49._12_4_ = 0x7fffff;
      auVar49 = NEON_cmgt(auVar53,auVar49,4);
      uVar10 = (ulong)CONCAT24((short)((ulong)lVar35 >> 0x18),(int)((ulong)lVar37 >> 0x18)) &
               0xffffffff0000ffff;
      auVar42._2_2_ = auVar55._4_2_;
      auVar42._0_2_ = auVar55._0_2_;
      auVar42._4_2_ = auVar55._8_2_;
      auVar42._6_2_ = auVar55._12_2_;
      auVar42._8_2_ = auVar52._0_2_;
      auVar42._10_2_ = auVar52._4_2_;
      auVar42._12_2_ = auVar52._8_2_;
      auVar42._14_2_ = auVar52._12_2_;
      auVar8._8_2_ = 0x8000;
      auVar8._0_8_ = 0x8000800080008000;
      auVar8._10_2_ = 0x8000;
      auVar8._12_2_ = 0x8000;
      auVar8._14_2_ = 0x8000;
      auVar11._2_2_ = (short)((ulong)lVar36 >> 0x18);
      auVar11._0_2_ = (short)((ulong)lVar20 >> 0x18);
      auVar11._4_2_ = (short)((ulong)lVar21 >> 0x18);
      auVar11._6_2_ = (short)((ulong)lVar27 >> 0x18);
      auVar11._8_2_ = (short)uVar10;
      auVar11._10_2_ = (short)(uVar10 >> 0x20);
      auVar11._12_2_ = (short)((ulong)lVar34 >> 0x18);
      auVar11._14_2_ = (short)((ulong)lVar38 >> 0x18);
      auVar44 = NEON_bsl(auVar42,auVar8,auVar11,1);
      uVar12 = auVar49._0_2_ & 0x7fff;
      uVar13 = auVar49._4_2_ & 0x7fff;
      uVar14 = auVar49._8_2_ & 0x7fff;
      uVar15 = auVar49._12_2_ & 0x7fff;
      uVar16 = auVar50._0_2_ & 0x7fff;
      uVar17 = auVar50._4_2_ & 0x7fff;
      uVar18 = auVar50._8_2_ & 0x7fff;
      uVar19 = auVar50._12_2_ & 0x7fff;
      auVar43._0_8_ =
           CONCAT17((byte)(uVar15 >> 8) | auVar44[7] & ~auVar49[13],
                    CONCAT16((byte)uVar15 | auVar44[6] & ~auVar49[12],
                             CONCAT15((byte)(uVar14 >> 8) | auVar44[5] & ~auVar49[9],
                                      CONCAT14((byte)uVar14 | auVar44[4] & ~auVar49[8],
                                               CONCAT13((byte)(uVar13 >> 8) |
                                                        auVar44[3] & ~auVar49[5],
                                                        CONCAT12((byte)uVar13 |
                                                                 auVar44[2] & ~auVar49[4],
                                                                 CONCAT11((byte)(uVar12 >> 8) |
                                                                          auVar44[1] & ~auVar49[1],
                                                                          (byte)uVar12 |
                                                                          auVar44[0] & ~auVar49[0]))
                                                       )))));
      auVar43[8] = (byte)uVar16 | auVar44[8] & ~auVar50[0];
      auVar43[9] = (byte)(uVar16 >> 8) | auVar44[9] & ~auVar50[1];
      auVar43[10] = (byte)uVar17 | auVar44[10] & ~auVar50[4];
      auVar43[11] = (byte)(uVar17 >> 8) | auVar44[11] & ~auVar50[5];
      auVar43[12] = (byte)uVar18 | auVar44[12] & ~auVar50[8];
      auVar43[13] = (byte)(uVar18 >> 8) | auVar44[13] & ~auVar50[9];
      auVar43[14] = (byte)uVar19 | auVar44[14] & ~auVar50[12];
      auVar43[15] = (byte)(uVar19 >> 8) | auVar44[15] & ~auVar50[13];
      puVar32[1] = auVar43._8_8_;
      *puVar32 = auVar43._0_8_;
      puVar29 = puVar29 + 4;
      puVar32 = puVar32 + 2;
    } while (uVar31 != 0);
    if (uVar26 != uVar39) goto LAB_00e630a8;
  }
  lVar24 = (param_8 + -1) * lVar41;
  lVar23 = (long)param_6[1];
  if (uVar22 < 8) {
    param_7 = 0;
  }
  else {
    param_7 = param_7 & 0xfffffff8;
    puVar29 = (undefined8 *)((long)puVar40 + lVar41 * 2);
    puVar32 = (undefined8 *)(param_5 + lVar24 * 4);
    uVar31 = param_7;
    do {
      auVar44 = *(undefined (*) [16])(puVar32 + 2);
      uVar31 = uVar31 - 8;
      cVar47 = (char)(auVar44._8_4_ >> 0x1f);
      cVar48 = (char)(auVar44._12_4_ >> 0x1f);
      lVar20 = lVar23 * (int)*puVar32;
      lVar21 = lVar23 * (ulong)(uint6)(int6)(int)puVar32[1];
      lVar34 = lVar23 * CONCAT17(cVar47,CONCAT16(cVar47,CONCAT15(cVar47,(int5)auVar44._8_4_)));
      lVar37 = lVar23 * auVar44._0_4_;
      lVar35 = lVar23 * auVar44._4_4_;
      lVar36 = lVar23 * (int)((ulong)*puVar32 >> 0x20);
      lVar38 = lVar23 * CONCAT17(cVar48,CONCAT16(cVar48,CONCAT15(cVar48,(int5)auVar44._12_4_)));
      lVar27 = lVar23 * (ulong)(uint6)(int6)(int)((ulong)puVar32[1] >> 0x20);
      auVar51._4_4_ = (int)((ulong)lVar35 >> 0x10);
      auVar51._0_4_ = (int)((ulong)lVar37 >> 0x10);
      auVar54._4_4_ = (int)((ulong)lVar36 >> 0x10);
      auVar54._0_4_ = (int)((ulong)lVar20 >> 0x10);
      auVar51._12_4_ = (int)((ulong)lVar38 >> 0x10);
      auVar51._8_4_ = (int)((ulong)lVar34 >> 0x10);
      auVar54._12_4_ = (int)((ulong)lVar27 >> 0x10);
      auVar54._8_4_ = (int)((ulong)lVar21 >> 0x10);
      auVar5._8_4_ = 0xff800000;
      auVar5._0_8_ = 0xff800000ff800000;
      auVar5._12_4_ = 0xff800000;
      auVar44 = NEON_cmgt(auVar5,auVar51,4);
      auVar6._8_4_ = 0xff800000;
      auVar6._0_8_ = 0xff800000ff800000;
      auVar6._12_4_ = 0xff800000;
      auVar49 = NEON_cmgt(auVar6,auVar54,4);
      auVar3._8_4_ = 0x7fffff;
      auVar3._0_8_ = 0x7fffff007fffff;
      auVar3._12_4_ = 0x7fffff;
      auVar52 = NEON_cmgt(auVar51,auVar3,4);
      auVar4._8_4_ = 0x7fffff;
      auVar4._0_8_ = 0x7fffff007fffff;
      auVar4._12_4_ = 0x7fffff;
      auVar55 = NEON_cmgt(auVar54,auVar4,4);
      uVar26 = (ulong)CONCAT24((short)((ulong)lVar35 >> 0x18),(int)((ulong)lVar37 >> 0x18)) &
               0xffffffff0000ffff;
      auVar45._2_2_ = auVar49._4_2_;
      auVar45._0_2_ = auVar49._0_2_;
      auVar45._4_2_ = auVar49._8_2_;
      auVar45._6_2_ = auVar49._12_2_;
      auVar45._8_2_ = auVar44._0_2_;
      auVar45._10_2_ = auVar44._4_2_;
      auVar45._12_2_ = auVar44._8_2_;
      auVar45._14_2_ = auVar44._12_2_;
      auVar7._8_2_ = 0x8000;
      auVar7._0_8_ = 0x8000800080008000;
      auVar7._10_2_ = 0x8000;
      auVar7._12_2_ = 0x8000;
      auVar7._14_2_ = 0x8000;
      auVar9._2_2_ = (short)((ulong)lVar36 >> 0x18);
      auVar9._0_2_ = (short)((ulong)lVar20 >> 0x18);
      auVar9._4_2_ = (short)((ulong)lVar21 >> 0x18);
      auVar9._6_2_ = (short)((ulong)lVar27 >> 0x18);
      auVar9._8_2_ = (short)uVar26;
      auVar9._10_2_ = (short)(uVar26 >> 0x20);
      auVar9._12_2_ = (short)((ulong)lVar34 >> 0x18);
      auVar9._14_2_ = (short)((ulong)lVar38 >> 0x18);
      auVar44 = NEON_bsl(auVar45,auVar7,auVar9,1);
      uVar12 = auVar55._0_2_ & 0x7fff;
      uVar13 = auVar55._4_2_ & 0x7fff;
      uVar14 = auVar55._8_2_ & 0x7fff;
      uVar15 = auVar55._12_2_ & 0x7fff;
      uVar16 = auVar52._0_2_ & 0x7fff;
      uVar17 = auVar52._4_2_ & 0x7fff;
      uVar18 = auVar52._8_2_ & 0x7fff;
      uVar19 = auVar52._12_2_ & 0x7fff;
      auVar46._0_8_ =
           CONCAT17((byte)(uVar15 >> 8) | auVar44[7] & ~auVar55[13],
                    CONCAT16((byte)uVar15 | auVar44[6] & ~auVar55[12],
                             CONCAT15((byte)(uVar14 >> 8) | auVar44[5] & ~auVar55[9],
                                      CONCAT14((byte)uVar14 | auVar44[4] & ~auVar55[8],
                                               CONCAT13((byte)(uVar13 >> 8) |
                                                        auVar44[3] & ~auVar55[5],
                                                        CONCAT12((byte)uVar13 |
                                                                 auVar44[2] & ~auVar55[4],
                                                                 CONCAT11((byte)(uVar12 >> 8) |
                                                                          auVar44[1] & ~auVar55[1],
                                                                          (byte)uVar12 |
                                                                          auVar44[0] & ~auVar55[0]))
                                                       )))));
      auVar46[8] = (byte)uVar16 | auVar44[8] & ~auVar52[0];
      auVar46[9] = (byte)(uVar16 >> 8) | auVar44[9] & ~auVar52[1];
      auVar46[10] = (byte)uVar17 | auVar44[10] & ~auVar52[4];
      auVar46[11] = (byte)(uVar17 >> 8) | auVar44[11] & ~auVar52[5];
      auVar46[12] = (byte)uVar18 | auVar44[12] & ~auVar52[8];
      auVar46[13] = (byte)(uVar18 >> 8) | auVar44[13] & ~auVar52[9];
      auVar46[14] = (byte)uVar19 | auVar44[14] & ~auVar52[12];
      auVar46[15] = (byte)(uVar19 >> 8) | auVar44[15] & ~auVar52[13];
      puVar29[1] = auVar46._8_8_;
      *puVar29 = auVar46._0_8_;
      puVar29 = puVar29 + 2;
      puVar32 = puVar32 + 4;
    } while (uVar31 != 0);
    if (param_7 == uVar39) goto LAB_00e63244;
  }
  lVar27 = uVar39 - param_7;
  puVar25 = (undefined2 *)((long)puVar40 + (param_7 + lVar41) * 2);
  piVar28 = (int *)(param_5 + (param_7 + lVar24) * 4);
  do {
    iVar33 = (int)((ulong)(lVar23 * *piVar28) >> 0x10);
    uVar30 = 0x8000;
    if (iVar33 + 0x800000 < 0 == SCARRY4(iVar33,0x800000)) {
      uVar30 = (undefined2)((ulong)(lVar23 * *piVar28) >> 0x18);
    }
    uVar1 = 0x7fff;
    if (iVar33 < 0x800000) {
      uVar1 = uVar30;
    }
    lVar27 = lVar27 + -1;
    *puVar25 = uVar1;
    puVar25 = puVar25 + 1;
    piVar28 = piVar28 + 1;
  } while (lVar27 != 0);
LAB_00e63244:
  silk_sum_sqr_shift(param_1,param_2,puVar40,uVar39);
  silk_sum_sqr_shift(param_3,param_4,(long)puVar40 + lVar41 * 2,uVar39);
  if (*(long *)(lVar2 + 0x28) == alStack_60[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


