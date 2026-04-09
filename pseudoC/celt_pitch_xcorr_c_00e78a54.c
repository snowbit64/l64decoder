// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: celt_pitch_xcorr_c
// Entry Point: 00e78a54
// Size: 976 bytes
// Signature: undefined celt_pitch_xcorr_c(void)


uint celt_pitch_xcorr_c(short *param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  undefined (*pauVar1) [16];
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  short sVar12;
  short sVar13;
  short *psVar14;
  short sVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  undefined (*pauVar21) [16];
  uint uVar22;
  uint uVar23;
  undefined (*pauVar24) [16];
  long lVar25;
  short sVar26;
  ulong uVar27;
  undefined (*pauVar28) [16];
  short *psVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined auVar34 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined auVar39 [16];
  undefined auVar40 [16];
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  
  if ((int)param_5 < 4) {
    uVar16 = 0;
    uVar33 = 1;
  }
  else {
    uVar16 = 0;
    uVar32 = param_4 & 0xfffffffc;
    uVar33 = 1;
    do {
      psVar14 = (short *)(param_2 + uVar16 * 2);
      psVar29 = psVar14 + 3;
      sVar26 = *psVar14;
      sVar13 = psVar14[1];
      sVar12 = psVar14[2];
      psVar14 = param_1;
      if ((int)param_4 < 4) {
        uVar22 = 0;
        uVar23 = 0;
        uVar20 = 0;
        uVar19 = 0;
        sVar15 = 0;
        uVar30 = 0;
        uVar31 = 0;
        if (0 < (int)param_4) goto LAB_00e78be4;
      }
      else {
        uVar19 = 0;
        uVar20 = 0;
        uVar23 = 0;
        uVar22 = 0;
        iVar35 = 0;
        do {
          sVar2 = *psVar14;
          iVar36 = (int)sVar26;
          sVar15 = *psVar29;
          iVar37 = (int)sVar13;
          iVar38 = (int)sVar12;
          sVar26 = psVar29[1];
          sVar3 = psVar14[1];
          sVar13 = psVar29[2];
          sVar4 = psVar14[3];
          sVar5 = psVar14[2];
          sVar12 = psVar29[3];
          psVar29 = psVar29 + 4;
          iVar35 = iVar35 + 4;
          psVar14 = psVar14 + 4;
          uVar22 = uVar22 + sVar2 * iVar36 + sVar3 * iVar37 + sVar5 * iVar38 +
                   (int)sVar4 * (int)sVar15;
          uVar23 = uVar23 + sVar2 * iVar37 + sVar3 * iVar38 + (int)sVar5 * (int)sVar15 +
                   (int)sVar4 * (int)sVar26;
          uVar20 = uVar20 + sVar2 * iVar38 + (int)sVar3 * (int)sVar15 + (int)sVar5 * (int)sVar26 +
                   (int)sVar4 * (int)sVar13;
          uVar19 = uVar19 + (int)sVar15 * (int)sVar2 + (int)sVar26 * (int)sVar3 +
                   (int)sVar13 * (int)sVar5 + (int)sVar12 * (int)sVar4;
        } while (iVar35 < (int)(param_4 - 3));
        uVar31 = uVar32;
        uVar30 = uVar32;
        if ((int)uVar32 < (int)param_4) {
LAB_00e78be4:
          sVar2 = *psVar14;
          sVar15 = *psVar29;
          uVar22 = uVar22 + (int)sVar2 * (int)sVar26;
          uVar23 = uVar23 + (int)sVar2 * (int)sVar13;
          uVar20 = uVar20 + (int)sVar2 * (int)sVar12;
          uVar19 = uVar19 + (int)sVar15 * (int)sVar2;
          psVar14 = psVar14 + 1;
          psVar29 = psVar29 + 1;
          uVar31 = uVar30;
        }
      }
      if ((int)(uVar31 | 1) < (int)param_4) {
        sVar2 = *psVar14;
        sVar26 = *psVar29;
        uVar22 = uVar22 + (int)sVar2 * (int)sVar13;
        uVar23 = uVar23 + (int)sVar2 * (int)sVar12;
        uVar20 = uVar20 + (int)sVar2 * (int)sVar15;
        uVar19 = uVar19 + (int)sVar26 * (int)sVar2;
        psVar14 = psVar14 + 1;
        psVar29 = psVar29 + 1;
      }
      if ((int)(uVar31 | 2) < (int)param_4) {
        sVar13 = *psVar14;
        uVar22 = uVar22 + (int)sVar13 * (int)sVar12;
        uVar23 = uVar23 + (int)sVar13 * (int)sVar15;
        uVar20 = uVar20 + (int)sVar13 * (int)sVar26;
        uVar19 = uVar19 + (int)*psVar29 * (int)sVar13;
      }
      uVar27 = uVar16 * 4;
      uVar31 = uVar22;
      if ((int)uVar22 <= (int)uVar23) {
        uVar31 = uVar23;
      }
      uVar16 = uVar16 + 4;
      *(uint *)(param_3 + uVar27) = uVar22;
      *(uint *)(param_3 + (uVar27 | 4)) = uVar23;
      uVar22 = uVar20;
      if ((int)uVar20 <= (int)uVar19) {
        uVar22 = uVar19;
      }
      if ((int)uVar31 <= (int)uVar22) {
        uVar31 = uVar22;
      }
      *(uint *)(param_3 + (uVar27 | 8)) = uVar20;
      if ((int)uVar33 <= (int)uVar31) {
        uVar33 = uVar31;
      }
      *(uint *)(param_3 + (uVar27 | 0xc)) = uVar19;
    } while (uVar16 < param_5 - 3);
  }
  if ((int)(uint)uVar16 < (int)param_5) {
    uVar27 = uVar16 & 0xffffffff;
    if ((int)param_4 < 1) {
      memset((void *)(param_3 + uVar27 * 4),0,(ulong)(~(uint)uVar16 + param_5) * 4 + 4);
      uVar16 = param_5 - uVar27;
      if (7 < uVar16) {
        auVar48._0_8_ = CONCAT44(uVar33,uVar33);
        auVar48._8_4_ = uVar33;
        auVar48._12_4_ = uVar33;
        uVar17 = uVar16 & 0xfffffffffffffff8;
        uVar27 = uVar17 + uVar27;
        auVar40._8_8_ = auVar48._8_8_;
        auVar40._0_8_ = auVar48._0_8_;
        uVar18 = uVar17;
        do {
          auVar48 = NEON_smax(auVar48,ZEXT816(0),4);
          uVar18 = uVar18 - 8;
          auVar40 = NEON_smax(auVar40,ZEXT816(0),4);
        } while (uVar18 != 0);
        auVar48 = NEON_smax(auVar48,auVar40,4);
        uVar33 = NEON_smaxv(auVar48,4);
        if (uVar16 == uVar17) {
          return uVar33;
        }
      }
      lVar25 = param_5 - uVar27;
      do {
        uVar33 = uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU);
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
    }
    else {
      uVar16 = (ulong)param_4;
      param_2 = param_2 + uVar27 * 2;
      uVar18 = uVar16 & 0xfffffff0;
      pauVar21 = (undefined (*) [16])(param_2 + 0x10);
      do {
        if (param_4 < 0x10) {
          uVar32 = 0;
          uVar17 = 0;
LAB_00e78d64:
          lVar25 = uVar16 - uVar17;
          psVar29 = (short *)(param_2 + uVar17 * 2);
          psVar14 = param_1 + uVar17;
          do {
            lVar25 = lVar25 + -1;
            uVar32 = uVar32 + (int)*psVar29 * (int)*psVar14;
            psVar29 = psVar29 + 1;
            psVar14 = psVar14 + 1;
          } while (lVar25 != 0);
        }
        else {
          iVar35 = 0;
          iVar36 = 0;
          iVar37 = 0;
          iVar38 = 0;
          iVar41 = 0;
          iVar42 = 0;
          iVar43 = 0;
          iVar44 = 0;
          uVar17 = uVar18;
          pauVar24 = pauVar21;
          pauVar28 = (undefined (*) [16])(param_1 + 8);
          auVar48 = ZEXT816(0);
          auVar40 = ZEXT816(0);
          do {
            pauVar1 = pauVar28 + -1;
            uVar6 = *(undefined8 *)*pauVar1;
            uVar7 = *(undefined8 *)*pauVar28;
            auVar39 = *pauVar28;
            auVar34 = *pauVar28;
            pauVar28 = pauVar28 + 2;
            uVar17 = uVar17 - 0x10;
            auVar45 = NEON_ext(*pauVar1,*pauVar1,8,1);
            pauVar1 = pauVar24 + -1;
            uVar8 = *(undefined8 *)*pauVar1;
            uVar9 = *(undefined8 *)*pauVar24;
            auVar11 = *pauVar24;
            auVar10 = *pauVar24;
            auVar46 = NEON_ext(auVar34,auVar39,8,1);
            pauVar24 = pauVar24 + 2;
            auVar47 = NEON_ext(*pauVar1,*pauVar1,8,1);
            auVar34._0_4_ = auVar48._0_4_ + (int)(short)uVar8 * (int)(short)uVar6;
            auVar34._4_4_ =
                 auVar48._4_4_ +
                 (int)(short)((ulong)uVar8 >> 0x10) * (int)(short)((ulong)uVar6 >> 0x10);
            auVar34._8_4_ =
                 auVar48._8_4_ +
                 (int)(short)((ulong)uVar8 >> 0x20) * (int)(short)((ulong)uVar6 >> 0x20);
            auVar34._12_4_ =
                 auVar48._12_4_ +
                 (int)(short)((ulong)uVar8 >> 0x30) * (int)(short)((ulong)uVar6 >> 0x30);
            auVar48 = NEON_ext(auVar10,auVar11,8,1);
            auVar39._0_4_ = auVar40._0_4_ + (int)(short)uVar9 * (int)(short)uVar7;
            auVar39._4_4_ =
                 auVar40._4_4_ +
                 (int)(short)((ulong)uVar9 >> 0x10) * (int)(short)((ulong)uVar7 >> 0x10);
            auVar39._8_4_ =
                 auVar40._8_4_ +
                 (int)(short)((ulong)uVar9 >> 0x20) * (int)(short)((ulong)uVar7 >> 0x20);
            auVar39._12_4_ =
                 auVar40._12_4_ +
                 (int)(short)((ulong)uVar9 >> 0x30) * (int)(short)((ulong)uVar7 >> 0x30);
            iVar35 = iVar35 + (int)auVar47._0_2_ * (int)auVar45._0_2_;
            iVar36 = iVar36 + (int)auVar47._2_2_ * (int)auVar45._2_2_;
            iVar37 = iVar37 + (int)auVar47._4_2_ * (int)auVar45._4_2_;
            iVar38 = iVar38 + (int)auVar47._6_2_ * (int)auVar45._6_2_;
            iVar41 = iVar41 + (int)auVar48._0_2_ * (int)auVar46._0_2_;
            iVar42 = iVar42 + (int)auVar48._2_2_ * (int)auVar46._2_2_;
            iVar43 = iVar43 + (int)auVar48._4_2_ * (int)auVar46._4_2_;
            iVar44 = iVar44 + (int)auVar48._6_2_ * (int)auVar46._6_2_;
            auVar48 = auVar34;
            auVar40 = auVar39;
          } while (uVar17 != 0);
          uVar32 = auVar39._0_4_ + auVar34._0_4_ + iVar41 + iVar35 +
                   auVar39._4_4_ + auVar34._4_4_ + iVar42 + iVar36 +
                   auVar39._8_4_ + auVar34._8_4_ + iVar43 + iVar37 +
                   auVar39._12_4_ + auVar34._12_4_ + iVar44 + iVar38;
          uVar17 = uVar18;
          if (uVar18 != uVar16) goto LAB_00e78d64;
        }
        *(uint *)(param_3 + uVar27 * 4) = uVar32;
        uVar27 = uVar27 + 1;
        if ((int)uVar33 <= (int)uVar32) {
          uVar33 = uVar32;
        }
        pauVar21 = (undefined (*) [16])(*pauVar21 + 2);
        param_2 = param_2 + 2;
      } while (uVar27 != param_5);
    }
  }
  return uVar33;
}


