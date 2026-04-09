// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pitch_downsample
// Entry Point: 00e784cc
// Size: 1416 bytes
// Signature: undefined pitch_downsample(void)


void pitch_downsample(int **param_1,short *param_2,uint param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [12];
  undefined auVar16 [12];
  bool bVar17;
  undefined (*pauVar18) [12];
  int *piVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  int iVar26;
  undefined (*pauVar27) [12];
  ulong uVar28;
  long lVar29;
  long lVar30;
  short *psVar31;
  undefined (*pauVar32) [16];
  undefined8 *puVar33;
  int iVar34;
  undefined auVar35 [16];
  undefined auVar36 [16];
  int iVar37;
  int iVar38;
  undefined8 uVar39;
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  undefined auVar44 [16];
  undefined auVar45 [16];
  undefined4 uVar46;
  undefined4 uVar47;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  int local_40;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  piVar19 = *param_1;
  uVar4 = (int)param_3 >> 1;
  if ((int)param_3 < 1) {
    if (param_4 != 2) {
      bVar1 = false;
      uVar20 = 0;
      bVar17 = false;
      goto LAB_00e787b4;
    }
    iVar37 = 0;
    iVar38 = 0;
    iVar34 = 0;
LAB_00e78684:
    bVar17 = true;
    if (iVar38 == -iVar34 || iVar38 + iVar34 < 0 != SBORROW4(iVar38,-iVar34)) {
      iVar38 = -iVar34;
    }
    if (iVar37 <= iVar38) {
      iVar37 = iVar38;
    }
  }
  else {
    uVar21 = (ulong)param_3;
    if (param_3 < 8) {
      uVar23 = 0;
      iVar38 = 0;
      iVar37 = 0;
LAB_00e78594:
      lVar30 = uVar21 - uVar23;
      piVar24 = piVar19 + uVar23;
      do {
        iVar34 = *piVar24;
        if (iVar37 <= iVar34) {
          iVar37 = iVar34;
        }
        if (iVar34 <= iVar38) {
          iVar38 = iVar34;
        }
        lVar30 = lVar30 + -1;
        piVar24 = piVar24 + 1;
      } while (lVar30 != 0);
    }
    else {
      uVar23 = uVar21 & 0xfffffff8;
      pauVar27 = (undefined (*) [12])(piVar19 + 4);
      auVar36 = ZEXT816(0);
      auVar40 = ZEXT816(0);
      auVar42 = ZEXT816(0);
      auVar45 = ZEXT816(0);
      uVar28 = uVar23;
      do {
        pauVar18 = pauVar27 + -2;
        uVar46 = (undefined4)((ulong)*(undefined8 *)((long)pauVar27[-1] + 4) >> 0x20);
        uVar47 = (undefined4)((ulong)*(undefined8 *)((long)*pauVar27 + 8) >> 0x20);
        auVar16 = *pauVar27;
        auVar15 = *pauVar27;
        pauVar27 = (undefined (*) [12])((long)pauVar27[2] + 8);
        uVar28 = uVar28 - 8;
        auVar9._12_4_ = uVar46;
        auVar9._0_12_ = *(undefined (*) [12])((long)*pauVar18 + 8);
        auVar42 = NEON_smax(auVar42,auVar9,4);
        auVar10._12_4_ = uVar46;
        auVar10._0_12_ = *(undefined (*) [12])((long)*pauVar18 + 8);
        auVar36 = NEON_smin(auVar36,auVar10,4);
        auVar13._12_4_ = uVar47;
        auVar13._0_12_ = auVar15;
        auVar45 = NEON_smax(auVar45,auVar13,4);
        auVar14._12_4_ = uVar47;
        auVar14._0_12_ = auVar16;
        auVar40 = NEON_smin(auVar40,auVar14,4);
      } while (uVar28 != 0);
      auVar42 = NEON_smax(auVar42,auVar45,4);
      auVar36 = NEON_smin(auVar36,auVar40,4);
      iVar37 = NEON_smaxv(auVar42,4);
      iVar38 = NEON_sminv(auVar36,4);
      if (uVar23 != uVar21) goto LAB_00e78594;
    }
    if (iVar37 == -iVar38 || iVar37 + iVar38 < 0 != SBORROW4(iVar37,-iVar38)) {
      iVar37 = -iVar38;
    }
    if (param_4 == 2) {
      if (param_3 < 8) {
        uVar23 = 0;
        iVar34 = 0;
        iVar38 = 0;
      }
      else {
        uVar23 = uVar21 & 0xfffffff8;
        pauVar27 = (undefined (*) [12])(param_1[1] + 4);
        auVar36 = ZEXT816(0);
        auVar40 = ZEXT816(0);
        auVar42 = ZEXT816(0);
        auVar45 = ZEXT816(0);
        uVar28 = uVar23;
        do {
          pauVar18 = pauVar27 + -2;
          uVar46 = (undefined4)((ulong)*(undefined8 *)((long)pauVar27[-1] + 4) >> 0x20);
          uVar47 = (undefined4)((ulong)*(undefined8 *)((long)*pauVar27 + 8) >> 0x20);
          auVar16 = *pauVar27;
          auVar15 = *pauVar27;
          pauVar27 = (undefined (*) [12])((long)pauVar27[2] + 8);
          uVar28 = uVar28 - 8;
          auVar7._12_4_ = uVar46;
          auVar7._0_12_ = *(undefined (*) [12])((long)*pauVar18 + 8);
          auVar42 = NEON_smax(auVar42,auVar7,4);
          auVar8._12_4_ = uVar46;
          auVar8._0_12_ = *(undefined (*) [12])((long)*pauVar18 + 8);
          auVar36 = NEON_smin(auVar36,auVar8,4);
          auVar11._12_4_ = uVar47;
          auVar11._0_12_ = auVar15;
          auVar45 = NEON_smax(auVar45,auVar11,4);
          auVar12._12_4_ = uVar47;
          auVar12._0_12_ = auVar16;
          auVar40 = NEON_smin(auVar40,auVar12,4);
        } while (uVar28 != 0);
        auVar42 = NEON_smax(auVar42,auVar45,4);
        auVar36 = NEON_smin(auVar36,auVar40,4);
        iVar38 = NEON_smaxv(auVar42,4);
        iVar34 = NEON_sminv(auVar36,4);
        if (uVar23 == uVar21) goto LAB_00e78684;
      }
      lVar30 = uVar21 - uVar23;
      piVar24 = param_1[1] + uVar23;
      do {
        iVar22 = *piVar24;
        if (iVar38 <= iVar22) {
          iVar38 = iVar22;
        }
        if (iVar22 <= iVar34) {
          iVar34 = iVar22;
        }
        lVar30 = lVar30 + -1;
        piVar24 = piVar24 + 1;
      } while (lVar30 != 0);
      goto LAB_00e78684;
    }
    bVar17 = false;
  }
  if (iVar37 < 2) {
    iVar37 = 1;
  }
  iVar37 = 0x1f - (int)LZCOUNT(iVar37);
  if (iVar37 < 0xb) {
    iVar37 = 10;
  }
  iVar38 = -10;
  if (bVar17) {
    iVar38 = -9;
  }
  uVar20 = iVar37 + iVar38;
  bVar1 = 3 < (int)param_3;
  if ((int)param_3 < 4) {
    bVar1 = false;
  }
  else {
    uVar25 = uVar4;
    if ((int)uVar4 < 3) {
      uVar25 = 2;
    }
    uVar21 = (ulong)uVar25 - 1;
    if (uVar21 < 9) {
      lVar30 = 1;
    }
    else {
      auVar36._4_4_ = uVar20;
      auVar36._0_4_ = uVar20;
      auVar36._8_4_ = uVar20;
      auVar36._12_4_ = uVar20;
      uVar28 = 8;
      if ((uVar21 & 7) != 0) {
        uVar28 = uVar21 & 7;
      }
      lVar29 = uVar21 - uVar28;
      auVar36 = NEON_neg(auVar36,4);
      lVar30 = lVar29 + 1;
      piVar24 = piVar19 + 2;
      puVar33 = (undefined8 *)(param_2 + 1);
      do {
        lVar29 = lVar29 + -8;
        auVar45._0_4_ = *piVar24 + (piVar24[1] + piVar24[-1] >> 1) >> 1;
        auVar45._4_4_ = piVar24[2] + (piVar24[3] + piVar24[1] >> 1) >> 1;
        auVar45._8_4_ = piVar24[4] + (piVar24[5] + piVar24[3] >> 1) >> 1;
        auVar45._12_4_ = piVar24[6] + (piVar24[7] + piVar24[5] >> 1) >> 1;
        auVar42 = NEON_sshl(auVar45,auVar36,4);
        auVar40._0_4_ = piVar24[8] + (piVar24[9] + piVar24[7] >> 1) >> 1;
        auVar40._4_4_ = piVar24[10] + (piVar24[0xb] + piVar24[9] >> 1) >> 1;
        auVar40._8_4_ = piVar24[0xc] + (piVar24[0xd] + piVar24[0xb] >> 1) >> 1;
        auVar40._12_4_ = piVar24[0xe] + (piVar24[0xf] + piVar24[0xd] >> 1) >> 1;
        auVar40 = NEON_sshl(auVar40,auVar36,4);
        auVar42._0_8_ =
             CONCAT26(auVar42._12_2_,CONCAT24(auVar42._8_2_,CONCAT22(auVar42._4_2_,auVar42._0_2_)));
        auVar42._8_2_ = auVar40._0_2_;
        auVar42._10_2_ = auVar40._4_2_;
        auVar42._12_2_ = auVar40._8_2_;
        auVar42._14_2_ = auVar40._12_2_;
        puVar33[1] = auVar42._8_8_;
        *puVar33 = auVar42._0_8_;
        piVar24 = piVar24 + 0x10;
        puVar33 = puVar33 + 2;
      } while (lVar29 != 0);
    }
    lVar29 = (ulong)uVar25 - lVar30;
    piVar24 = piVar19 + lVar30 * 2;
    psVar31 = param_2 + lVar30;
    do {
      piVar3 = piVar24 + -1;
      iVar37 = *piVar24;
      piVar2 = piVar24 + 1;
      lVar29 = lVar29 + -1;
      piVar24 = piVar24 + 2;
      *psVar31 = (short)((iVar37 + (*piVar2 + *piVar3 >> 1) >> 1) >> (uVar20 & 0x1f));
      psVar31 = psVar31 + 1;
    } while (lVar29 != 0);
  }
LAB_00e787b4:
  sVar5 = (short)((*piVar19 + (piVar19[1] >> 1) >> 1) >> (uVar20 & 0x1f));
  *param_2 = sVar5;
  if (bVar17) {
    piVar19 = param_1[1];
    if (bVar1) {
      uVar25 = uVar4;
      if ((int)uVar4 < 3) {
        uVar25 = 2;
      }
      uVar21 = (ulong)uVar25 - 1;
      if (uVar21 < 9) {
        lVar30 = 1;
      }
      else {
        auVar35._4_4_ = uVar20;
        auVar35._0_4_ = uVar20;
        auVar35._8_4_ = uVar20;
        auVar35._12_4_ = uVar20;
        uVar28 = 8;
        if ((uVar21 & 7) != 0) {
          uVar28 = uVar21 & 7;
        }
        lVar29 = uVar21 - uVar28;
        auVar36 = NEON_neg(auVar35,4);
        lVar30 = lVar29 + 1;
        piVar24 = piVar19 + 2;
        pauVar32 = (undefined (*) [16])(param_2 + 1);
        do {
          lVar29 = lVar29 + -8;
          auVar44._0_4_ = *piVar24 + (piVar24[1] + piVar24[-1] >> 1) >> 1;
          auVar44._4_4_ = piVar24[2] + (piVar24[3] + piVar24[1] >> 1) >> 1;
          auVar44._8_4_ = piVar24[4] + (piVar24[5] + piVar24[3] >> 1) >> 1;
          auVar44._12_4_ = piVar24[6] + (piVar24[7] + piVar24[5] >> 1) >> 1;
          auVar45 = NEON_sshl(auVar44,auVar36,4);
          auVar41._0_4_ = piVar24[8] + (piVar24[9] + piVar24[7] >> 1) >> 1;
          auVar41._4_4_ = piVar24[10] + (piVar24[0xb] + piVar24[9] >> 1) >> 1;
          auVar41._8_4_ = piVar24[0xc] + (piVar24[0xd] + piVar24[0xb] >> 1) >> 1;
          auVar41._12_4_ = piVar24[0xe] + (piVar24[0xf] + piVar24[0xd] >> 1) >> 1;
          auVar42 = NEON_sshl(auVar41,auVar36,4);
          auVar40 = *pauVar32;
          auVar43._0_8_ =
               CONCAT26(auVar40._6_2_ + auVar45._12_2_,
                        CONCAT24(auVar40._4_2_ + auVar45._8_2_,
                                 CONCAT22(auVar40._2_2_ + auVar45._4_2_,
                                          auVar40._0_2_ + auVar45._0_2_)));
          auVar43._8_2_ = auVar40._8_2_ + auVar42._0_2_;
          auVar43._10_2_ = auVar40._10_2_ + auVar42._4_2_;
          auVar43._12_2_ = auVar40._12_2_ + auVar42._8_2_;
          auVar43._14_2_ = auVar40._14_2_ + auVar42._12_2_;
          *(long *)((long)*pauVar32 + 8) = auVar43._8_8_;
          *(undefined8 *)*pauVar32 = auVar43._0_8_;
          piVar24 = piVar24 + 0x10;
          pauVar32 = pauVar32 + 1;
        } while (lVar29 != 0);
      }
      lVar29 = (ulong)uVar25 - lVar30;
      piVar24 = piVar19 + lVar30 * 2;
      psVar31 = param_2 + lVar30;
      do {
        piVar3 = piVar24 + -1;
        iVar37 = *piVar24;
        piVar2 = piVar24 + 1;
        lVar29 = lVar29 + -1;
        piVar24 = piVar24 + 2;
        *psVar31 = *psVar31 + (short)((iVar37 + (*piVar2 + *piVar3 >> 1) >> 1) >> (uVar20 & 0x1f));
        psVar31 = psVar31 + 1;
      } while (lVar29 != 0);
    }
    *param_2 = (short)((*piVar19 + (piVar19[1] >> 1) >> 1) >> (uVar20 & 0x1f)) + sVar5;
  }
  _celt_autocorr(param_2,&local_50,0,0,4,uVar4,param_5);
  uVar39 = NEON_sshl(local_50,0xfffffff2fffffff3,4);
  local_48 = local_48 - (local_48 >> 0xc);
  iStack_44 = iStack_44 - (int)((ulong)((long)iStack_44 * 9) >> 0xe);
  local_50 = CONCAT44((int)((ulong)local_50 >> 0x20) - (int)((ulong)uVar39 >> 0x20),
                      (int)local_50 + (int)uVar39);
  local_40 = local_40 - (local_40 >> 10);
  _celt_lpc(&local_58,&local_50,4);
  if (1 < (int)param_3) {
    uVar21 = (ulong)uVar4;
    iVar37 = 0;
    iVar38 = 0;
    iVar34 = 0;
    iVar22 = 0;
    iVar26 = 0;
    do {
      uVar21 = uVar21 - 1;
      sVar5 = *param_2;
      *param_2 = sVar5 + (short)(iVar38 * (short)((short)((uint)(local_52 * 0x53f8) >> 0xf) +
                                                 (short)((uint)((local_54 * 0xba9a >> 0x10) * 0x6666
                                                               ) >> 0xf)) +
                                 iVar37 * ((local_52 * 0xa7f0 >> 0x10) * 0xcccc >> 0x10) +
                                 iVar34 * (short)((short)((uint)(local_54 * 0x5d4d) >> 0xf) +
                                                 (short)((uint)((local_56 * 0xcf58 >> 0x10) * 0x6666
                                                               ) >> 0xf)) +
                                 iVar22 * (short)((short)((uint)(local_56 * 0x67ac) >> 0xf) +
                                                 (short)((uint)((local_58 * 0xe664 >> 0x10) * 0x6666
                                                               ) >> 0xf)) +
                                 iVar26 * ((int)(((uint)(local_58 * 0x7332) >> 0xf) * 0x10000 +
                                                0xccd0000) >> 0x10) + 0x800U >> 0xc);
      param_2 = param_2 + 1;
      iVar37 = iVar38;
      iVar38 = iVar34;
      iVar34 = iVar22;
      iVar22 = iVar26;
      iVar26 = (int)sVar5;
    } while (uVar21 != 0);
  }
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


