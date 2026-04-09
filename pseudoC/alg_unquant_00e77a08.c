// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: alg_unquant
// Entry Point: 00e77a08
// Size: 640 bytes
// Signature: undefined alg_unquant(void)


void alg_unquant(undefined8 *param_1,ulong param_2,ulong param_3,undefined4 param_4,uint param_5,
                undefined8 param_6,short param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined (*pauVar15) [16];
  ulong uVar16;
  undefined (*pauVar17) [16];
  uint uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  long alStack_70 [2];
  
  lVar3 = tpidr_el0;
  alStack_70[1] = *(long *)(lVar3 + 0x28);
  pauVar17 = (undefined (*) [16])
             ((long)alStack_70 -
             ((-((param_2 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2)
              + 0xf & 0xfffffffffffffff0));
  iVar5 = decode_pulses(pauVar17,param_2,param_3,param_6);
  uVar6 = 0x1f - (uint)LZCOUNT(iVar5);
  uVar1 = uVar6 & 0xfffffffe;
  iVar2 = iVar5 >> (uVar1 - 0xe & 0x1f);
  if (0xf < (uint)LZCOUNT(iVar5)) {
    iVar2 = iVar5 << (ulong)(0xe - uVar1 & 0x1f);
  }
  sVar4 = celt_rsqrt_norm(iVar2);
  uVar18 = (uint)param_2;
  uVar1 = ((int)uVar6 >> 1) + 1;
  uVar6 = uVar18;
  if ((int)uVar18 < 2) {
    uVar6 = 1;
  }
  uVar9 = (ulong)uVar6;
  iVar2 = (int)param_7 * (int)sVar4 * 2 + 0x8000 >> 0x10;
  uVar7 = (uint)(1 << (ulong)(uVar1 & 0x1f)) >> 1;
  if (uVar6 < 8) {
    uVar11 = 0;
  }
  else {
    auVar22._4_4_ = uVar1;
    auVar22._0_4_ = uVar1;
    auVar22._8_4_ = uVar1;
    auVar22._12_4_ = uVar1;
    uVar11 = uVar9 & 0x7ffffff8;
    auVar22 = NEON_neg(auVar22,4);
    uVar8 = uVar11;
    puVar14 = param_1;
    pauVar15 = pauVar17;
    do {
      auVar25 = *pauVar15;
      auVar26 = pauVar15[1];
      uVar8 = uVar8 - 8;
      auVar27._4_4_ = uVar7 + auVar25._4_2_ * iVar2;
      auVar27._0_4_ = uVar7 + auVar25._0_2_ * iVar2;
      auVar27._8_4_ = uVar7 + auVar25._8_2_ * iVar2;
      auVar27._12_4_ = uVar7 + auVar25._12_2_ * iVar2;
      auVar27 = NEON_sshl(auVar27,auVar22,4);
      auVar25._4_4_ = uVar7 + auVar26._4_2_ * iVar2;
      auVar25._0_4_ = uVar7 + auVar26._0_2_ * iVar2;
      auVar25._8_4_ = uVar7 + auVar26._8_2_ * iVar2;
      auVar25._12_4_ = uVar7 + auVar26._12_2_ * iVar2;
      auVar25 = NEON_sshl(auVar25,auVar22,4);
      auVar26._0_8_ =
           CONCAT26(auVar27._12_2_,CONCAT24(auVar27._8_2_,CONCAT22(auVar27._4_2_,auVar27._0_2_)));
      auVar26._8_2_ = auVar25._0_2_;
      auVar26._10_2_ = auVar25._4_2_;
      auVar26._12_2_ = auVar25._8_2_;
      auVar26._14_2_ = auVar25._12_2_;
      puVar14[1] = auVar26._8_8_;
      *puVar14 = auVar26._0_8_;
      puVar14 = puVar14 + 2;
      pauVar15 = pauVar15 + 2;
    } while (uVar8 != 0);
    if (uVar11 == uVar9) goto LAB_00e77b6c;
  }
  lVar10 = uVar9 - uVar11;
  psVar12 = (short *)(*pauVar17 + uVar11 * 4);
  puVar13 = (undefined2 *)((long)param_1 + uVar11 * 2);
  do {
    lVar10 = lVar10 + -1;
    *puVar13 = (short)((int)(uVar7 + *psVar12 * iVar2) >> (uVar1 & 0x1f));
    psVar12 = psVar12 + 2;
    puVar13 = puVar13 + 1;
  } while (lVar10 != 0);
LAB_00e77b6c:
  exp_rotation(param_1,param_2 & 0xffffffff,0xffffffff,param_5,param_3 & 0xffffffff,param_4);
  if ((int)param_5 < 2) {
    uVar6 = 1;
  }
  else {
    uVar1 = 0;
    if (param_5 != 0) {
      uVar1 = uVar18 / param_5;
    }
    uVar8 = (ulong)uVar1;
    uVar9 = 0;
    uVar6 = 0;
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar11 = (ulong)uVar1 & 0x7ffffff8;
    do {
      if (7 < uVar1) {
        uVar16 = 0;
        auVar22 = ZEXT816(0);
        auVar25 = ZEXT816(0);
        do {
          lVar10 = uVar16 + uVar9 * uVar8;
          uVar16 = uVar16 + 8;
          puVar14 = (undefined8 *)(*pauVar17 + lVar10 * 4);
          uVar24 = puVar14[1];
          uVar23 = *puVar14;
          auVar27 = *(undefined (*) [16])(puVar14 + 2);
          auVar19[0] = (byte)uVar23 | auVar22[0];
          auVar19[1] = (byte)((ulong)uVar23 >> 8) | auVar22[1];
          auVar19[2] = (byte)((ulong)uVar23 >> 0x10) | auVar22[2];
          auVar19[3] = (byte)((ulong)uVar23 >> 0x18) | auVar22[3];
          auVar19[4] = (byte)((ulong)uVar23 >> 0x20) | auVar22[4];
          auVar19[5] = (byte)((ulong)uVar23 >> 0x28) | auVar22[5];
          auVar19[6] = (byte)((ulong)uVar23 >> 0x30) | auVar22[6];
          auVar19[7] = (byte)((ulong)uVar23 >> 0x38) | auVar22[7];
          auVar19[8] = (byte)uVar24 | auVar22[8];
          auVar19[9] = (byte)((ulong)uVar24 >> 8) | auVar22[9];
          auVar19[10] = (byte)((ulong)uVar24 >> 0x10) | auVar22[10];
          auVar19[11] = (byte)((ulong)uVar24 >> 0x18) | auVar22[11];
          auVar19[12] = (byte)((ulong)uVar24 >> 0x20) | auVar22[12];
          auVar19[13] = (byte)((ulong)uVar24 >> 0x28) | auVar22[13];
          auVar19[14] = (byte)((ulong)uVar24 >> 0x30) | auVar22[14];
          auVar19[15] = (byte)((ulong)uVar24 >> 0x38) | auVar22[15];
          auVar21[0] = auVar27[0] | auVar25[0];
          auVar21[1] = auVar27[1] | auVar25[1];
          auVar21[2] = auVar27[2] | auVar25[2];
          auVar21[3] = auVar27[3] | auVar25[3];
          auVar21[4] = auVar27[4] | auVar25[4];
          auVar21[5] = auVar27[5] | auVar25[5];
          auVar21[6] = auVar27[6] | auVar25[6];
          auVar21[7] = auVar27[7] | auVar25[7];
          auVar21[8] = auVar27[8] | auVar25[8];
          auVar21[9] = auVar27[9] | auVar25[9];
          auVar21[10] = auVar27[10] | auVar25[10];
          auVar21[11] = auVar27[11] | auVar25[11];
          auVar21[12] = auVar27[12] | auVar25[12];
          auVar21[13] = auVar27[13] | auVar25[13];
          auVar21[14] = auVar27[14] | auVar25[14];
          auVar21[15] = auVar27[15] | auVar25[15];
          auVar22 = auVar19;
          auVar25 = auVar21;
        } while (uVar16 != uVar11);
        auVar20[0] = auVar21[0] | auVar19[0];
        auVar20[1] = auVar21[1] | auVar19[1];
        auVar20[2] = auVar21[2] | auVar19[2];
        auVar20[3] = auVar21[3] | auVar19[3];
        auVar20[4] = auVar21[4] | auVar19[4];
        auVar20[5] = auVar21[5] | auVar19[5];
        auVar20[6] = auVar21[6] | auVar19[6];
        auVar20[7] = auVar21[7] | auVar19[7];
        auVar20[8] = auVar21[8] | auVar19[8];
        auVar20[9] = auVar21[9] | auVar19[9];
        auVar20[10] = auVar21[10] | auVar19[10];
        auVar20[11] = auVar21[11] | auVar19[11];
        auVar20[12] = auVar21[12] | auVar19[12];
        auVar20[13] = auVar21[13] | auVar19[13];
        auVar20[14] = auVar21[14] | auVar19[14];
        auVar20[15] = auVar21[15] | auVar19[15];
        auVar22 = NEON_ext(auVar20,auVar20,8,1);
        uVar18 = CONCAT13(auVar20[3] | auVar22[3],
                          CONCAT12(auVar20[2] | auVar22[2],
                                   CONCAT11(auVar20[1] | auVar22[1],auVar20[0] | auVar22[0])));
        uVar18 = uVar18 | (uint)(CONCAT17(auVar20[7] | auVar22[7],
                                          CONCAT16(auVar20[6] | auVar22[6],
                                                   CONCAT15(auVar20[5] | auVar22[5],
                                                            CONCAT14(auVar20[4] | auVar22[4],uVar18)
                                                           ))) >> 0x20);
        uVar16 = uVar11;
        goto joined_r0x00e77c64;
      }
      uVar16 = 0;
      uVar18 = 0;
      do {
        lVar10 = uVar16 + uVar9 * uVar8;
        uVar16 = uVar16 + 1;
        uVar18 = *(uint *)(*pauVar17 + lVar10 * 4) | uVar18;
joined_r0x00e77c64:
      } while (uVar16 != uVar1);
      uVar7 = (uint)uVar9;
      uVar9 = uVar9 + 1;
      uVar6 = (uint)(uVar18 != 0) << (ulong)(uVar7 & 0x1f) | uVar6;
    } while (uVar9 != param_5);
  }
  if (*(long *)(lVar3 + 0x28) == alStack_70[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


