// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: alg_quant
// Entry Point: 00e77738
// Size: 720 bytes
// Signature: undefined alg_quant(void)


void alg_quant(undefined8 *param_1,ulong param_2,undefined4 param_3,undefined4 param_4,uint param_5,
              undefined8 param_6,short param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  short *psVar10;
  ulong uVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined (*pauVar14) [16];
  undefined (*pauVar15) [16];
  ulong uVar16;
  uint uVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  long local_70 [2];
  
  local_70[0] = tpidr_el0;
  uVar5 = (uint)param_2;
  local_70[1] = *(long *)(local_70[0] + 0x28);
  uVar16 = param_2 & 0xffffffff;
  pauVar15 = (undefined (*) [16])
             ((long)local_70 -
             ((-(ulong)(uVar5 + 3 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar5 + 3) << 2) + 0xf &
             0xfffffffffffffff0));
  exp_rotation(param_1,param_2,1,param_5,param_3,param_4);
  sVar4 = op_pvq_search_c(param_1,pauVar15,param_3,uVar16);
  encode_pulses(pauVar15,uVar16,param_3,param_6);
  if (param_8 == 0) goto LAB_00e77904;
  iVar3 = (int)sVar4;
  uVar17 = 0x1f - (uint)LZCOUNT(iVar3);
  uVar1 = uVar17 & 0xfffffffe;
  iVar2 = iVar3 >> (uVar1 - 0xe & 0x1f);
  if (0xf < (uint)LZCOUNT(iVar3)) {
    iVar2 = iVar3 << (ulong)(0xe - uVar1 & 0x1f);
  }
  sVar4 = celt_rsqrt_norm(iVar2);
  uVar1 = ((int)uVar17 >> 1) + 1;
  uVar17 = uVar5;
  if ((int)uVar5 < 2) {
    uVar17 = 1;
  }
  uVar7 = (ulong)uVar17;
  iVar2 = (int)param_7 * (int)sVar4 * 2 + 0x8000 >> 0x10;
  uVar6 = (uint)(1 << (ulong)(uVar1 & 0x1f)) >> 1;
  if (uVar17 < 8) {
    uVar9 = 0;
LAB_00e778c4:
    lVar8 = uVar7 - uVar9;
    psVar10 = (short *)(*pauVar15 + uVar9 * 4);
    puVar12 = (undefined2 *)((long)param_1 + uVar9 * 2);
    do {
      lVar8 = lVar8 + -1;
      *puVar12 = (short)((int)(uVar6 + *psVar10 * iVar2) >> (uVar1 & 0x1f));
      psVar10 = psVar10 + 2;
      puVar12 = puVar12 + 1;
    } while (lVar8 != 0);
  }
  else {
    auVar21._4_4_ = uVar1;
    auVar21._0_4_ = uVar1;
    auVar21._8_4_ = uVar1;
    auVar21._12_4_ = uVar1;
    uVar9 = uVar7 & 0x7ffffff8;
    auVar21 = NEON_neg(auVar21,4);
    uVar11 = uVar9;
    puVar13 = param_1;
    pauVar14 = pauVar15;
    do {
      auVar24 = *pauVar14;
      auVar25 = pauVar14[1];
      uVar11 = uVar11 - 8;
      auVar26._4_4_ = uVar6 + auVar24._4_2_ * iVar2;
      auVar26._0_4_ = uVar6 + auVar24._0_2_ * iVar2;
      auVar26._8_4_ = uVar6 + auVar24._8_2_ * iVar2;
      auVar26._12_4_ = uVar6 + auVar24._12_2_ * iVar2;
      auVar26 = NEON_sshl(auVar26,auVar21,4);
      auVar24._4_4_ = uVar6 + auVar25._4_2_ * iVar2;
      auVar24._0_4_ = uVar6 + auVar25._0_2_ * iVar2;
      auVar24._8_4_ = uVar6 + auVar25._8_2_ * iVar2;
      auVar24._12_4_ = uVar6 + auVar25._12_2_ * iVar2;
      auVar24 = NEON_sshl(auVar24,auVar21,4);
      auVar25._0_8_ =
           CONCAT26(auVar26._12_2_,CONCAT24(auVar26._8_2_,CONCAT22(auVar26._4_2_,auVar26._0_2_)));
      auVar25._8_2_ = auVar24._0_2_;
      auVar25._10_2_ = auVar24._4_2_;
      auVar25._12_2_ = auVar24._8_2_;
      auVar25._14_2_ = auVar24._12_2_;
      puVar13[1] = auVar25._8_8_;
      *puVar13 = auVar25._0_8_;
      puVar13 = puVar13 + 2;
      pauVar14 = pauVar14 + 2;
    } while (uVar11 != 0);
    if (uVar9 != uVar7) goto LAB_00e778c4;
  }
  exp_rotation(param_1,uVar16,0xffffffff,param_5,param_3,param_4);
LAB_00e77904:
  if ((int)param_5 < 2) {
    uVar5 = 1;
  }
  else {
    uVar1 = 0;
    if (param_5 != 0) {
      uVar1 = uVar5 / param_5;
    }
    uVar7 = (ulong)uVar1;
    uVar16 = 0;
    uVar5 = 0;
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar11 = (ulong)uVar1 & 0x7ffffff8;
    do {
      if (7 < uVar1) {
        uVar9 = 0;
        auVar21 = ZEXT816(0);
        auVar24 = ZEXT816(0);
        do {
          lVar8 = uVar9 + uVar16 * uVar7;
          uVar9 = uVar9 + 8;
          puVar13 = (undefined8 *)(*pauVar15 + lVar8 * 4);
          uVar23 = puVar13[1];
          uVar22 = *puVar13;
          auVar26 = *(undefined (*) [16])(puVar13 + 2);
          auVar18[0] = (byte)uVar22 | auVar21[0];
          auVar18[1] = (byte)((ulong)uVar22 >> 8) | auVar21[1];
          auVar18[2] = (byte)((ulong)uVar22 >> 0x10) | auVar21[2];
          auVar18[3] = (byte)((ulong)uVar22 >> 0x18) | auVar21[3];
          auVar18[4] = (byte)((ulong)uVar22 >> 0x20) | auVar21[4];
          auVar18[5] = (byte)((ulong)uVar22 >> 0x28) | auVar21[5];
          auVar18[6] = (byte)((ulong)uVar22 >> 0x30) | auVar21[6];
          auVar18[7] = (byte)((ulong)uVar22 >> 0x38) | auVar21[7];
          auVar18[8] = (byte)uVar23 | auVar21[8];
          auVar18[9] = (byte)((ulong)uVar23 >> 8) | auVar21[9];
          auVar18[10] = (byte)((ulong)uVar23 >> 0x10) | auVar21[10];
          auVar18[11] = (byte)((ulong)uVar23 >> 0x18) | auVar21[11];
          auVar18[12] = (byte)((ulong)uVar23 >> 0x20) | auVar21[12];
          auVar18[13] = (byte)((ulong)uVar23 >> 0x28) | auVar21[13];
          auVar18[14] = (byte)((ulong)uVar23 >> 0x30) | auVar21[14];
          auVar18[15] = (byte)((ulong)uVar23 >> 0x38) | auVar21[15];
          auVar20[0] = auVar26[0] | auVar24[0];
          auVar20[1] = auVar26[1] | auVar24[1];
          auVar20[2] = auVar26[2] | auVar24[2];
          auVar20[3] = auVar26[3] | auVar24[3];
          auVar20[4] = auVar26[4] | auVar24[4];
          auVar20[5] = auVar26[5] | auVar24[5];
          auVar20[6] = auVar26[6] | auVar24[6];
          auVar20[7] = auVar26[7] | auVar24[7];
          auVar20[8] = auVar26[8] | auVar24[8];
          auVar20[9] = auVar26[9] | auVar24[9];
          auVar20[10] = auVar26[10] | auVar24[10];
          auVar20[11] = auVar26[11] | auVar24[11];
          auVar20[12] = auVar26[12] | auVar24[12];
          auVar20[13] = auVar26[13] | auVar24[13];
          auVar20[14] = auVar26[14] | auVar24[14];
          auVar20[15] = auVar26[15] | auVar24[15];
          auVar21 = auVar18;
          auVar24 = auVar20;
        } while (uVar9 != uVar11);
        auVar19[0] = auVar20[0] | auVar18[0];
        auVar19[1] = auVar20[1] | auVar18[1];
        auVar19[2] = auVar20[2] | auVar18[2];
        auVar19[3] = auVar20[3] | auVar18[3];
        auVar19[4] = auVar20[4] | auVar18[4];
        auVar19[5] = auVar20[5] | auVar18[5];
        auVar19[6] = auVar20[6] | auVar18[6];
        auVar19[7] = auVar20[7] | auVar18[7];
        auVar19[8] = auVar20[8] | auVar18[8];
        auVar19[9] = auVar20[9] | auVar18[9];
        auVar19[10] = auVar20[10] | auVar18[10];
        auVar19[11] = auVar20[11] | auVar18[11];
        auVar19[12] = auVar20[12] | auVar18[12];
        auVar19[13] = auVar20[13] | auVar18[13];
        auVar19[14] = auVar20[14] | auVar18[14];
        auVar19[15] = auVar20[15] | auVar18[15];
        auVar21 = NEON_ext(auVar19,auVar19,8,1);
        uVar17 = CONCAT13(auVar19[3] | auVar21[3],
                          CONCAT12(auVar19[2] | auVar21[2],
                                   CONCAT11(auVar19[1] | auVar21[1],auVar19[0] | auVar21[0])));
        uVar17 = uVar17 | (uint)(CONCAT17(auVar19[7] | auVar21[7],
                                          CONCAT16(auVar19[6] | auVar21[6],
                                                   CONCAT15(auVar19[5] | auVar21[5],
                                                            CONCAT14(auVar19[4] | auVar21[4],uVar17)
                                                           ))) >> 0x20);
        uVar9 = uVar11;
        goto joined_r0x00e779e4;
      }
      uVar9 = 0;
      uVar17 = 0;
      do {
        lVar8 = uVar9 + uVar16 * uVar7;
        uVar9 = uVar9 + 1;
        uVar17 = *(uint *)(*pauVar15 + lVar8 * 4) | uVar17;
joined_r0x00e779e4:
      } while (uVar9 != uVar1);
      uVar6 = (uint)uVar16;
      uVar16 = uVar16 + 1;
      uVar5 = (uint)(uVar17 != 0) << (ulong)(uVar6 & 0x1f) | uVar5;
    } while (uVar16 != param_5);
  }
  if (*(long *)(local_70[0] + 0x28) == local_70[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


