// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _celt_autocorr
// Entry Point: 00e7af9c
// Size: 1520 bytes
// Signature: undefined _celt_autocorr(void)


int _celt_autocorr(short *param_1,uint *param_2,long param_3,uint param_4,uint param_5,uint param_6,
                  undefined4 param_7)

{
  unkbyte10 *pVar1;
  uint uVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 uVar11;
  unkbyte10 Var12;
  unkbyte10 Var13;
  unkbyte10 *pVar14;
  int iVar15;
  long lVar16;
  short *psVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined (*pauVar27) [16];
  short *psVar28;
  long lVar29;
  ulong uVar30;
  short *psVar31;
  undefined8 *puVar32;
  ulong uVar33;
  ulong uVar34;
  int iVar35;
  int iVar39;
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  int iVar42;
  int iVar43;
  int iVar44;
  undefined auVar40 [16];
  undefined auVar41 [16];
  int iVar49;
  int iVar50;
  int iVar51;
  undefined auVar45 [16];
  undefined auVar46 [16];
  undefined auVar47 [16];
  undefined auVar48 [16];
  int iVar53;
  int iVar54;
  int iVar55;
  undefined auVar52 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined2 uVar60;
  undefined2 uVar61;
  undefined2 uVar62;
  undefined2 uVar63;
  undefined2 uVar64;
  undefined2 uVar65;
  undefined auVar66 [16];
  undefined auVar67 [16];
  undefined auVar68 [16];
  short asStack_70 [4];
  long local_68;
  
  lVar18 = tpidr_el0;
  uVar34 = (ulong)param_6;
  local_68 = *(long *)(lVar18 + 0x28);
  lVar25 = -((-(ulong)(param_6 >> 0x1f) & 0xfffffffe00000000 | uVar34 << 1) + 0xf &
            0xfffffffffffffff0);
  psVar31 = (short *)((long)asStack_70 + lVar25);
  psVar17 = param_1;
  if (param_4 != 0) {
    uVar23 = param_6 - 1;
    if (0 < (int)param_6) {
      memcpy(psVar31,param_1,uVar34 << 1);
    }
    psVar17 = psVar31;
    if (0 < (int)param_4) {
      lVar16 = 0;
      do {
        uVar24 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar23 << 1;
        sVar4 = *(short *)(param_3 + lVar16);
        uVar23 = uVar23 - 1;
        sVar5 = *(short *)((long)param_1 + uVar24);
        *(short *)((long)psVar31 + lVar16) =
             (short)((uint)((int)sVar4 * (int)*(short *)((long)param_1 + lVar16)) >> 0xf);
        lVar16 = lVar16 + 2;
        *(short *)((long)psVar31 + uVar24) = (short)((uint)((int)sVar5 * (int)sVar4) >> 0xf);
      } while ((ulong)param_4 * 2 - lVar16 != 0);
    }
  }
  uVar23 = param_6 << 7 | 1;
  if ((param_6 & 1) != 0) {
    uVar23 = uVar23 + ((uint)((int)*psVar17 * (int)*psVar17) >> 9);
  }
  iVar15 = param_6 - param_5;
  lVar16 = (long)(int)param_6;
  if (1 < (int)param_6) {
    uVar24 = (ulong)(param_6 & 1);
    if (0x1d < ~uVar24 + lVar16) {
      uVar19 = 0;
      uVar30 = (~uVar24 + lVar16 >> 1) + 1;
      auVar46 = ZEXT816(0);
      auVar41 = ZEXT416(uVar23);
      auVar48 = ZEXT816(0);
      auVar57 = ZEXT816(0);
      uVar26 = uVar30 & 0xfffffffffffffff0;
      do {
        uVar33 = uVar19 | uVar24;
        uVar19 = uVar19 + 0x20;
        uVar26 = uVar26 - 0x10;
        psVar28 = psVar17 + uVar33;
        psVar3 = (short *)((long)psVar17 + (uVar33 * 2 | 0x20));
        iVar42 = auVar46._4_4_;
        iVar43 = auVar46._8_4_;
        iVar44 = auVar46._12_4_;
        iVar21 = auVar41._4_4_;
        iVar35 = auVar41._8_4_;
        iVar39 = auVar41._12_4_;
        iVar53 = auVar57._4_4_;
        iVar54 = auVar57._8_4_;
        iVar55 = auVar57._12_4_;
        iVar49 = auVar48._4_4_;
        iVar50 = auVar48._8_4_;
        iVar51 = auVar48._12_4_;
        auVar46._0_4_ =
             auVar46._0_4_ + ((uint)((int)psVar28[8] * (int)psVar28[8]) >> 9) +
             ((uint)((int)psVar28[9] * (int)psVar28[9]) >> 9);
        auVar46._4_4_ =
             iVar42 + ((uint)((int)psVar28[10] * (int)psVar28[10]) >> 9) +
             ((uint)((int)psVar28[0xb] * (int)psVar28[0xb]) >> 9);
        auVar46._8_4_ =
             iVar43 + ((uint)((int)psVar28[0xc] * (int)psVar28[0xc]) >> 9) +
             ((uint)((int)psVar28[0xd] * (int)psVar28[0xd]) >> 9);
        auVar46._12_4_ =
             iVar44 + ((uint)((int)psVar28[0xe] * (int)psVar28[0xe]) >> 9) +
             ((uint)((int)psVar28[0xf] * (int)psVar28[0xf]) >> 9);
        auVar41._0_4_ =
             auVar41._0_4_ + ((uint)((int)*psVar28 * (int)*psVar28) >> 9) +
             ((uint)((int)psVar28[1] * (int)psVar28[1]) >> 9);
        auVar41._4_4_ =
             iVar21 + ((uint)((int)psVar28[2] * (int)psVar28[2]) >> 9) +
             ((uint)((int)psVar28[3] * (int)psVar28[3]) >> 9);
        auVar41._8_4_ =
             iVar35 + ((uint)((int)psVar28[4] * (int)psVar28[4]) >> 9) +
             ((uint)((int)psVar28[5] * (int)psVar28[5]) >> 9);
        auVar41._12_4_ =
             iVar39 + ((uint)((int)psVar28[6] * (int)psVar28[6]) >> 9) +
             ((uint)((int)psVar28[7] * (int)psVar28[7]) >> 9);
        auVar57._0_4_ =
             auVar57._0_4_ + ((uint)((int)psVar3[8] * (int)psVar3[8]) >> 9) +
             ((uint)((int)psVar3[9] * (int)psVar3[9]) >> 9);
        auVar57._4_4_ =
             iVar53 + ((uint)((int)psVar3[10] * (int)psVar3[10]) >> 9) +
             ((uint)((int)psVar3[0xb] * (int)psVar3[0xb]) >> 9);
        auVar57._8_4_ =
             iVar54 + ((uint)((int)psVar3[0xc] * (int)psVar3[0xc]) >> 9) +
             ((uint)((int)psVar3[0xd] * (int)psVar3[0xd]) >> 9);
        auVar57._12_4_ =
             iVar55 + ((uint)((int)psVar3[0xe] * (int)psVar3[0xe]) >> 9) +
             ((uint)((int)psVar3[0xf] * (int)psVar3[0xf]) >> 9);
        auVar48._0_4_ =
             auVar48._0_4_ + ((uint)((int)*psVar3 * (int)*psVar3) >> 9) +
             ((uint)((int)psVar3[1] * (int)psVar3[1]) >> 9);
        auVar48._4_4_ =
             iVar49 + ((uint)((int)psVar3[2] * (int)psVar3[2]) >> 9) +
             ((uint)((int)psVar3[3] * (int)psVar3[3]) >> 9);
        auVar48._8_4_ =
             iVar50 + ((uint)((int)psVar3[4] * (int)psVar3[4]) >> 9) +
             ((uint)((int)psVar3[5] * (int)psVar3[5]) >> 9);
        auVar48._12_4_ =
             iVar51 + ((uint)((int)psVar3[6] * (int)psVar3[6]) >> 9) +
             ((uint)((int)psVar3[7] * (int)psVar3[7]) >> 9);
      } while (uVar26 != 0);
      uVar23 = auVar48._0_4_ + auVar41._0_4_ + auVar57._0_4_ + auVar46._0_4_ +
               auVar48._4_4_ + auVar41._4_4_ + auVar57._4_4_ + auVar46._4_4_ +
               auVar48._8_4_ + auVar41._8_4_ + auVar57._8_4_ + auVar46._8_4_ +
               auVar48._12_4_ + auVar41._12_4_ + auVar57._12_4_ + auVar46._12_4_;
      uVar24 = uVar24 | (uVar30 >> 4) << 5;
      if (uVar30 == (uVar30 & 0xfffffffffffffff0)) goto LAB_00e7b1a8;
    }
    do {
      uVar30 = uVar24 + 2;
      iVar35 = (int)psVar17[uVar24];
      iVar21 = (int)(psVar17 + uVar24)[1];
      uVar23 = uVar23 + ((uint)(iVar35 * iVar35) >> 9) + ((uint)(iVar21 * iVar21) >> 9);
      uVar24 = uVar30;
    } while ((long)uVar30 < lVar16);
  }
LAB_00e7b1a8:
  if ((uint)LZCOUNT(uVar23) < 10) {
    uVar23 = 0xb - (uint)LZCOUNT(uVar23);
    uVar23 = (int)((uVar23 + ((uVar23 & 0x80) >> 7)) * 0x1000000) >> 0x19;
    if (0 < (int)param_6) {
      iVar21 = (1 << (ulong)(uVar23 & 0x1f)) >> 1;
      if ((param_6 < 0x10) || ((psVar31 < psVar17 + uVar34 && (psVar17 < psVar31 + uVar34)))) {
        uVar24 = 0;
      }
      else {
        auVar59._4_4_ = uVar23;
        auVar59._0_4_ = uVar23;
        auVar59._8_4_ = uVar23;
        auVar59._12_4_ = uVar23;
        uVar24 = uVar34 & 0xfffffff0;
        pauVar27 = (undefined (*) [16])(psVar17 + 8);
        puVar32 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar25);
        auVar41 = NEON_neg(auVar59,4);
        uVar30 = uVar24;
        do {
          auVar46 = pauVar27[-1];
          auVar48 = *pauVar27;
          pauVar27 = pauVar27 + 2;
          uVar30 = uVar30 - 0x10;
          auVar56._0_4_ = iVar21 + auVar46._8_2_;
          auVar56._4_4_ = iVar21 + auVar46._10_2_;
          auVar56._8_4_ = iVar21 + auVar46._12_2_;
          auVar56._12_4_ = iVar21 + auVar46._14_2_;
          auVar47._0_4_ = iVar21 + auVar46._0_2_;
          auVar47._4_4_ = iVar21 + auVar46._2_2_;
          auVar47._8_4_ = iVar21 + auVar46._4_2_;
          auVar47._12_4_ = iVar21 + auVar46._6_2_;
          auVar58._0_4_ = iVar21 + auVar48._8_2_;
          auVar58._4_4_ = iVar21 + auVar48._10_2_;
          auVar58._8_4_ = iVar21 + auVar48._12_2_;
          auVar58._12_4_ = iVar21 + auVar48._14_2_;
          auVar67._0_4_ = iVar21 + auVar48._0_2_;
          auVar67._4_4_ = iVar21 + auVar48._2_2_;
          auVar67._8_4_ = iVar21 + auVar48._4_2_;
          auVar67._12_4_ = iVar21 + auVar48._6_2_;
          auVar57 = NEON_sshl(auVar56,auVar41,4);
          auVar46 = NEON_sshl(auVar47,auVar41,4);
          auVar59 = NEON_sshl(auVar58,auVar41,4);
          auVar48 = NEON_sshl(auVar67,auVar41,4);
          auVar66._0_8_ =
               CONCAT26(auVar46._12_2_,CONCAT24(auVar46._8_2_,CONCAT22(auVar46._4_2_,auVar46._0_2_))
                       );
          auVar66._8_2_ = auVar57._0_2_;
          auVar66._10_2_ = auVar57._4_2_;
          auVar66._12_2_ = auVar57._8_2_;
          auVar66._14_2_ = auVar57._12_2_;
          auVar68._0_8_ =
               CONCAT26(auVar48._12_2_,CONCAT24(auVar48._8_2_,CONCAT22(auVar48._4_2_,auVar48._0_2_))
                       );
          auVar68._8_2_ = auVar59._0_2_;
          auVar68._10_2_ = auVar59._4_2_;
          auVar68._12_2_ = auVar59._8_2_;
          auVar68._14_2_ = auVar59._12_2_;
          puVar32[-1] = auVar66._8_8_;
          puVar32[-2] = auVar66._0_8_;
          puVar32[1] = auVar68._8_8_;
          *puVar32 = auVar68._0_8_;
          puVar32 = puVar32 + 4;
        } while (uVar30 != 0);
        if (uVar24 == uVar34) goto LAB_00e7b230;
      }
      lVar25 = uVar34 - uVar24;
      psVar17 = psVar17 + uVar24;
      psVar28 = psVar31 + uVar24;
      do {
        lVar25 = lVar25 + -1;
        *psVar28 = (short)(iVar21 + *psVar17 >> (uVar23 & 0x1f));
        psVar17 = psVar17 + 1;
        psVar28 = psVar28 + 1;
      } while (lVar25 != 0);
    }
LAB_00e7b230:
    iVar21 = uVar23 << 1;
    psVar17 = psVar31;
  }
  else {
    iVar21 = 0;
  }
  uVar34 = (ulong)(param_5 + 1);
  celt_pitch_xcorr_c(psVar17,psVar17,param_2,iVar15,uVar34,param_7);
  if (-1 < (int)param_5) {
    lVar25 = 0;
    lVar22 = (long)iVar15;
    uVar24 = 0;
    uVar23 = param_5;
    do {
      uVar23 = uVar23 - 1;
      if ((long)(uVar24 + lVar22) < lVar16) {
        uVar2 = ~(uint)uVar24 + param_5;
        lVar29 = (long)iVar15;
        if (uVar2 < 0xf) {
          iVar35 = 0;
        }
        else {
          uVar30 = (ulong)uVar2 + 1;
          uVar19 = (ulong)uVar23 + 1 & 0x1fffffff0;
          uVar26 = uVar30 & 0x1fffffff0;
          pauVar27 = (undefined (*) [16])(psVar17 + (long)iVar15 + 8);
          pVar14 = (unkbyte10 *)(psVar17 + lVar25 + iVar15 + 8);
          lVar29 = uVar26 + lVar29;
          auVar41 = ZEXT816(0);
          auVar46 = ZEXT816(0);
          auVar48 = ZEXT816(0);
          auVar57 = ZEXT816(0);
          do {
            auVar59 = pauVar27[-1];
            auVar47 = *pauVar27;
            uVar19 = uVar19 - 0x10;
            pauVar27 = pauVar27 + 2;
            auVar66 = NEON_ext(auVar59,auVar59,8,1);
            pVar1 = pVar14 + -1;
            uVar8 = *(undefined8 *)((long)pVar14 + -8);
            uVar60 = (undefined2)((ulong)uVar8 >> 0x10);
            uVar61 = (undefined2)((ulong)uVar8 >> 0x20);
            uVar62 = (undefined2)((ulong)uVar8 >> 0x30);
            uVar8 = *(undefined8 *)pVar1;
            uVar11 = *(undefined8 *)((long)pVar14 + 8);
            uVar63 = (undefined2)((ulong)uVar11 >> 0x10);
            uVar64 = (undefined2)((ulong)uVar11 >> 0x20);
            uVar65 = (undefined2)((ulong)uVar11 >> 0x30);
            uVar11 = *(undefined8 *)pVar14;
            Var13 = *pVar14;
            Var12 = *pVar14;
            auVar67 = NEON_ext(auVar47,auVar47,8,1);
            pVar14 = pVar14 + 2;
            auVar6._10_2_ = uVar60;
            auVar6._0_10_ = *pVar1;
            auVar6._12_2_ = uVar61;
            auVar6._14_2_ = uVar62;
            auVar7._10_2_ = uVar60;
            auVar7._0_10_ = *pVar1;
            auVar7._12_2_ = uVar61;
            auVar7._14_2_ = uVar62;
            auVar68 = NEON_ext(auVar6,auVar7,8,1);
            auVar36._0_4_ = auVar41._0_4_ + (int)(short)uVar8 * (int)auVar59._0_2_;
            auVar36._4_4_ = auVar41._4_4_ + (int)(short)((ulong)uVar8 >> 0x10) * (int)auVar59._2_2_;
            auVar36._8_4_ = auVar41._8_4_ + (int)(short)((ulong)uVar8 >> 0x20) * (int)auVar59._4_2_;
            auVar36._12_4_ =
                 auVar41._12_4_ + (int)(short)((ulong)uVar8 >> 0x30) * (int)auVar59._6_2_;
            auVar9._10_2_ = uVar63;
            auVar9._0_10_ = Var12;
            auVar9._12_2_ = uVar64;
            auVar9._14_2_ = uVar65;
            auVar10._10_2_ = uVar63;
            auVar10._0_10_ = Var13;
            auVar10._12_2_ = uVar64;
            auVar10._14_2_ = uVar65;
            auVar41 = NEON_ext(auVar9,auVar10,8,1);
            auVar45._0_4_ = auVar48._0_4_ + (int)(short)uVar11 * (int)auVar47._0_2_;
            auVar45._4_4_ = auVar48._4_4_ + (int)(short)((ulong)uVar11 >> 0x10) * (int)auVar47._2_2_
            ;
            auVar45._8_4_ = auVar48._8_4_ + (int)(short)((ulong)uVar11 >> 0x20) * (int)auVar47._4_2_
            ;
            auVar45._12_4_ =
                 auVar48._12_4_ + (int)(short)((ulong)uVar11 >> 0x30) * (int)auVar47._6_2_;
            auVar40._0_4_ = auVar46._0_4_ + (int)auVar68._0_2_ * (int)auVar66._0_2_;
            auVar40._4_4_ = auVar46._4_4_ + (int)auVar68._2_2_ * (int)auVar66._2_2_;
            auVar40._8_4_ = auVar46._8_4_ + (int)auVar68._4_2_ * (int)auVar66._4_2_;
            auVar40._12_4_ = auVar46._12_4_ + (int)auVar68._6_2_ * (int)auVar66._6_2_;
            auVar52._0_4_ = auVar57._0_4_ + (int)auVar41._0_2_ * (int)auVar67._0_2_;
            auVar52._4_4_ = auVar57._4_4_ + (int)auVar41._2_2_ * (int)auVar67._2_2_;
            auVar52._8_4_ = auVar57._8_4_ + (int)auVar41._4_2_ * (int)auVar67._4_2_;
            auVar52._12_4_ = auVar57._12_4_ + (int)auVar41._6_2_ * (int)auVar67._6_2_;
            auVar41 = auVar36;
            auVar46 = auVar40;
            auVar48 = auVar45;
            auVar57 = auVar52;
          } while (uVar19 != 0);
          iVar35 = auVar45._0_4_ + auVar36._0_4_ + auVar52._0_4_ + auVar40._0_4_ +
                   auVar45._4_4_ + auVar36._4_4_ + auVar52._4_4_ + auVar40._4_4_ +
                   auVar45._8_4_ + auVar36._8_4_ + auVar52._8_4_ + auVar40._8_4_ +
                   auVar45._12_4_ + auVar36._12_4_ + auVar52._12_4_ + auVar40._12_4_;
          if (uVar30 == uVar26) goto LAB_00e7b284;
        }
        iVar39 = param_6 - (int)lVar29;
        psVar31 = psVar17 + lVar29 + lVar25;
        psVar28 = psVar17 + lVar29;
        do {
          iVar39 = iVar39 + -1;
          iVar35 = iVar35 + (int)*psVar31 * (int)*psVar28;
          psVar31 = psVar31 + 1;
          psVar28 = psVar28 + 1;
        } while (iVar39 != 0);
      }
      else {
        iVar35 = 0;
      }
LAB_00e7b284:
      uVar30 = uVar24 + 1;
      iVar15 = iVar15 + 1;
      lVar25 = lVar25 + -1;
      param_2[uVar24] = param_2[uVar24] + iVar35;
      uVar24 = uVar30;
    } while (uVar30 != uVar34);
  }
  if (iVar21 < 1) {
    uVar23 = *param_2 + (1 << (ulong)(-iVar21 & 0x1f));
    *param_2 = uVar23;
    if (0xfffffff < (int)uVar23) goto LAB_00e7b3ec;
LAB_00e7b39c:
    uVar2 = (int)LZCOUNT(uVar23) - 3;
    if ((-1 < (int)param_5) && (*param_2 = uVar23 << (ulong)(uVar2 & 0x1f), param_5 != 0)) {
      uVar24 = uVar34 - 1;
      if (uVar24 < 8) {
        uVar19 = 1;
      }
      else {
        uVar26 = uVar24 & 0xfffffffffffffff8;
        pauVar27 = (undefined (*) [16])(param_2 + 5);
        uVar19 = uVar26 | 1;
        auVar37._4_4_ = uVar2;
        auVar37._0_4_ = uVar2;
        auVar37._8_4_ = uVar2;
        auVar37._12_4_ = uVar2;
        uVar30 = uVar26;
        do {
          uVar30 = uVar30 - 8;
          auVar41 = NEON_ushl(pauVar27[-1],auVar37,4);
          auVar46 = NEON_ushl(*pauVar27,auVar37,4);
          *(long *)((long)pauVar27[-1] + 8) = auVar41._8_8_;
          *(long *)pauVar27[-1] = auVar41._0_8_;
          *(long *)((long)*pauVar27 + 8) = auVar46._8_8_;
          *(long *)*pauVar27 = auVar46._0_8_;
          pauVar27 = pauVar27 + 2;
        } while (uVar30 != 0);
        if (uVar24 == uVar26) goto LAB_00e7b47c;
      }
      lVar25 = uVar34 - uVar19;
      puVar20 = param_2 + uVar19;
      do {
        lVar25 = lVar25 + -1;
        *puVar20 = *puVar20 << (ulong)(uVar2 & 0x1f);
        puVar20 = puVar20 + 1;
      } while (lVar25 != 0);
    }
LAB_00e7b47c:
    iVar21 = iVar21 - uVar2;
  }
  else {
    uVar23 = *param_2;
    if ((int)uVar23 < 0x10000000) goto LAB_00e7b39c;
LAB_00e7b3ec:
    if (uVar23 >> 0x1d != 0) {
      iVar15 = 1;
      if (uVar23 >> 0x1e != 0) {
        iVar15 = 2;
      }
      if ((-1 < (int)param_5) && (*param_2 = (int)uVar23 >> iVar15, param_5 != 0)) {
        uVar24 = uVar34 - 1;
        if (uVar24 < 8) {
          uVar19 = 1;
        }
        else {
          auVar38._4_4_ = iVar15;
          auVar38._0_4_ = iVar15;
          auVar38._8_4_ = iVar15;
          auVar38._12_4_ = iVar15;
          uVar26 = uVar24 & 0xfffffffffffffff8;
          uVar19 = uVar26 | 1;
          pauVar27 = (undefined (*) [16])(param_2 + 5);
          auVar41 = NEON_neg(auVar38,4);
          uVar30 = uVar26;
          do {
            uVar30 = uVar30 - 8;
            auVar46 = NEON_sshl(pauVar27[-1],auVar41,4);
            auVar48 = NEON_sshl(*pauVar27,auVar41,4);
            *(long *)((long)pauVar27[-1] + 8) = auVar46._8_8_;
            *(long *)pauVar27[-1] = auVar46._0_8_;
            *(long *)((long)*pauVar27 + 8) = auVar48._8_8_;
            *(long *)*pauVar27 = auVar48._0_8_;
            pauVar27 = pauVar27 + 2;
          } while (uVar30 != 0);
          if (uVar24 == uVar26) goto LAB_00e7b574;
        }
        lVar25 = uVar34 - uVar19;
        puVar20 = param_2 + uVar19;
        do {
          lVar25 = lVar25 + -1;
          *puVar20 = (int)*puVar20 >> iVar15;
          puVar20 = puVar20 + 1;
        } while (lVar25 != 0);
      }
LAB_00e7b574:
      iVar21 = iVar15 + iVar21;
      lVar18 = *(long *)(lVar18 + 0x28);
      goto joined_r0x00e7b584;
    }
  }
  lVar18 = *(long *)(lVar18 + 0x28);
joined_r0x00e7b584:
  if (lVar18 != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar21;
}


