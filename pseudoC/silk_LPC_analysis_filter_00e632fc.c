// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_LPC_analysis_filter
// Entry Point: 00e632fc
// Size: 1004 bytes
// Signature: undefined silk_LPC_analysis_filter(void)


void silk_LPC_analysis_filter
               (void *param_1,long param_2,undefined8 *param_3,int param_4,uint param_5)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined2 *puVar13;
  short *psVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  undefined8 uVar25;
  int iVar30;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  int iVar31;
  undefined auVar29 [16];
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  
  if ((int)param_5 < param_4) {
    if ((int)param_5 < 7) {
      uVar15 = (ulong)(int)param_5;
      lVar22 = (long)param_4;
      uVar16 = lVar22 - uVar15;
      uVar17 = uVar15;
      if (7 < uVar16) {
        lVar12 = uVar15 * 2;
        puVar20 = (undefined8 *)((long)param_1 + lVar22 * 2);
        if (((short *)(param_2 + lVar22 * 2) <= (short *)((long)param_1 + lVar12) ||
             puVar20 <= (undefined8 *)(lVar12 + param_2 + -0xc)) &&
           ((short *)((long)param_3 + 0xcU) <= (short *)((long)param_1 + lVar12) ||
            puVar20 <= param_3)) {
          sVar2 = *(short *)param_3;
          sVar3 = *(short *)((long)param_3 + 4);
          sVar4 = *(short *)((long)param_3 + 6);
          sVar5 = *(short *)(param_3 + 1);
          sVar6 = *(short *)((long)param_3 + 10);
          uVar18 = uVar16 & 0xfffffffffffffff8;
          sVar7 = *(short *)((long)param_3 + 2);
          uVar17 = uVar18 + uVar15;
          puVar20 = (undefined8 *)(lVar12 + param_2 + -6);
          puVar19 = (undefined8 *)((long)param_1 + lVar12);
          uVar10 = uVar18;
          do {
            auVar29 = *(undefined (*) [16])((long)puVar20 + 4);
            uVar10 = uVar10 - 8;
            uVar46 = *(undefined8 *)((long)puVar20 + 10);
            uVar25 = *(undefined8 *)((long)puVar20 + 2);
            uVar42 = puVar20[1];
            uVar39 = *puVar20;
            uVar8 = *(undefined8 *)((long)puVar20 + 6);
            uVar33 = *(undefined8 *)((long)puVar20 + -2);
            uVar43 = *(undefined8 *)((long)puVar20 + 4);
            uVar40 = *(undefined8 *)((long)puVar20 + -4);
            uVar9 = *(undefined8 *)((long)puVar20 + 2);
            uVar45 = *(undefined8 *)((long)puVar20 + -6);
            uVar44 = *(undefined8 *)((long)puVar20 + 0xe);
            uVar41 = *(undefined8 *)((long)puVar20 + 6);
            puVar20 = puVar20 + 2;
            iVar24 = ((short)uVar44 * 0x1000 -
                      ((int)sVar2 * (int)auVar29._8_2_ + (int)sVar7 * (int)(short)uVar46 +
                       (int)sVar3 * (int)(short)uVar42 + (int)sVar4 * (int)(short)uVar8 +
                       (int)sVar5 * (int)(short)uVar43 + (int)sVar6 * (int)(short)uVar9) >> 0xb) + 1
            ;
            iVar32 = ((short)((ulong)uVar44 >> 0x10) * 0x1000 -
                      ((int)sVar2 * (int)auVar29._10_2_ +
                       (int)sVar7 * (int)(short)((ulong)uVar46 >> 0x10) +
                       (int)sVar3 * (int)(short)((ulong)uVar42 >> 0x10) +
                       (int)sVar4 * (int)(short)((ulong)uVar8 >> 0x10) +
                       (int)sVar5 * (int)(short)((ulong)uVar43 >> 0x10) +
                      (int)sVar6 * (int)(short)((ulong)uVar9 >> 0x10)) >> 0xb) + 1;
            auVar37._0_8_ =
                 CONCAT44(((short)((ulong)uVar41 >> 0x10) * 0x1000 -
                           ((int)sVar2 * (int)auVar29._2_2_ +
                            (int)sVar7 * (int)(short)((ulong)uVar25 >> 0x10) +
                            (int)sVar3 * (int)(short)((ulong)uVar39 >> 0x10) +
                            (int)sVar4 * (int)(short)((ulong)uVar33 >> 0x10) +
                            (int)sVar5 * (int)(short)((ulong)uVar40 >> 0x10) +
                           (int)sVar6 * (int)(short)((ulong)uVar45 >> 0x10)) >> 0xb) + 1 >> 1,
                          ((short)uVar41 * 0x1000 -
                           ((int)sVar2 * (int)auVar29._0_2_ + (int)sVar7 * (int)(short)uVar25 +
                            (int)sVar3 * (int)(short)uVar39 + (int)sVar4 * (int)(short)uVar33 +
                            (int)sVar5 * (int)(short)uVar40 + (int)sVar6 * (int)(short)uVar45) >>
                          0xb) + 1 >> 1);
            auVar37._8_4_ =
                 ((short)((ulong)uVar41 >> 0x20) * 0x1000 -
                  ((int)sVar2 * (int)auVar29._4_2_ +
                   (int)sVar7 * (int)(short)((ulong)uVar25 >> 0x20) +
                   (int)sVar3 * (int)(short)((ulong)uVar39 >> 0x20) +
                   (int)sVar4 * (int)(short)((ulong)uVar33 >> 0x20) +
                   (int)sVar5 * (int)(short)((ulong)uVar40 >> 0x20) +
                  (int)sVar6 * (int)(short)((ulong)uVar45 >> 0x20)) >> 0xb) + 1 >> 1;
            auVar37._12_4_ =
                 ((short)((ulong)uVar41 >> 0x30) * 0x1000 -
                  ((int)sVar2 * (int)auVar29._6_2_ +
                   (int)sVar7 * (int)(short)((ulong)uVar25 >> 0x30) +
                   (int)sVar3 * (int)(short)((ulong)uVar39 >> 0x30) +
                   (int)sVar4 * (int)(short)((ulong)uVar33 >> 0x30) +
                   (int)sVar5 * (int)(short)((ulong)uVar40 >> 0x30) +
                  (int)sVar6 * (int)(short)((ulong)uVar45 >> 0x30)) >> 0xb) + 1 >> 1;
            auVar38._8_8_ = auVar37._8_8_;
            auVar38._0_8_ = NEON_sqxtn(auVar37._0_8_,auVar37,4);
            auVar27._2_2_ = (short)(iVar24 >> 0x11);
            auVar27._0_2_ = (short)(iVar24 >> 1);
            auVar27._4_2_ = (short)(iVar32 >> 1);
            auVar27._6_2_ = (short)(iVar32 >> 0x11);
            auVar27._8_4_ =
                 ((short)((ulong)uVar44 >> 0x20) * 0x1000 -
                  ((int)sVar2 * (int)auVar29._12_2_ +
                   (int)sVar7 * (int)(short)((ulong)uVar46 >> 0x20) +
                   (int)sVar3 * (int)(short)((ulong)uVar42 >> 0x20) +
                   (int)sVar4 * (int)(short)((ulong)uVar8 >> 0x20) +
                   (int)sVar5 * (int)(short)((ulong)uVar43 >> 0x20) +
                  (int)sVar6 * (int)(short)((ulong)uVar9 >> 0x20)) >> 0xb) + 1 >> 1;
            auVar27._12_4_ =
                 ((short)((ulong)uVar44 >> 0x30) * 0x1000 -
                  ((int)sVar2 * (int)auVar29._14_2_ +
                   (int)sVar7 * (int)(short)((ulong)uVar46 >> 0x30) +
                   (int)sVar3 * (int)(short)((ulong)uVar42 >> 0x30) +
                   (int)sVar4 * (int)(short)((ulong)uVar8 >> 0x30) +
                   (int)sVar5 * (int)(short)((ulong)uVar43 >> 0x30) +
                  (int)sVar6 * (int)(short)((ulong)uVar9 >> 0x30)) >> 0xb) + 1 >> 1;
            auVar27 = NEON_sqxtn2(auVar38,auVar27,4);
            puVar19[1] = auVar27._8_8_;
            *puVar19 = auVar27._0_8_;
            puVar19 = puVar19 + 2;
          } while (uVar10 != 0);
          if (uVar16 == uVar18) goto LAB_00e636d4;
        }
      }
      lVar22 = lVar22 - uVar17;
      puVar21 = (undefined2 *)((long)param_1 + uVar17 * 2);
      psVar14 = (short *)(uVar17 * 2 + param_2 + -0xc);
      do {
        uVar25 = *(undefined8 *)(psVar14 + 2);
        uVar33 = *param_3;
        auVar29._0_4_ = (int)(short)uVar25;
        auVar29._4_4_ = (int)(short)((ulong)uVar25 >> 0x10);
        auVar29._8_4_ = (int)(short)((ulong)uVar25 >> 0x20);
        auVar29._12_4_ = (int)(short)((ulong)uVar25 >> 0x30);
        auVar27 = NEON_rev64(auVar29,4);
        auVar27 = NEON_ext(auVar27,auVar27,8,1);
        iVar24 = (psVar14[6] * 0x1000 -
                  (auVar27._0_4_ * (int)(short)uVar33 +
                   auVar27._4_4_ * (int)(short)((ulong)uVar33 >> 0x10) +
                   auVar27._8_4_ * (int)(short)((ulong)uVar33 >> 0x20) +
                   auVar27._12_4_ * (int)(short)((ulong)uVar33 >> 0x30) +
                   (int)*(short *)(param_3 + 1) * (int)psVar14[1] +
                  (int)*(short *)((long)param_3 + 10) * (int)*psVar14) >> 0xb) + 1 >> 1;
        if (iVar24 == -0x8000 || iVar24 + 0x8000 < 0 != SCARRY4(iVar24,0x8000)) {
          iVar24 = -0x8000;
        }
        if (0x7ffe < iVar24) {
          iVar24 = 0x7fff;
        }
        lVar22 = lVar22 + -1;
        *puVar21 = (short)iVar24;
        puVar21 = puVar21 + 1;
        psVar14 = psVar14 + 1;
      } while (lVar22 != 0);
    }
    else {
      uVar15 = (ulong)param_5;
      uVar17 = uVar15;
      if (uVar15 < 9) {
        uVar17 = 8;
      }
      lVar22 = param_2 + (ulong)param_5 * 2;
      uVar16 = (uVar17 - 7 >> 1) + 1;
      uVar18 = uVar16 & 0x7ffffffffffffff8;
      puVar21 = (undefined2 *)(lVar22 + -0x2c);
      lVar22 = lVar22 + -2;
      uVar10 = uVar15;
      do {
        lVar12 = param_2 + uVar10 * 2;
        uVar33 = *param_3;
        uVar25 = *(undefined8 *)(lVar12 + -8);
        auVar26._0_4_ = (int)(short)uVar25;
        auVar26._4_4_ = (int)(short)((ulong)uVar25 >> 0x10);
        auVar26._8_4_ = (int)(short)((ulong)uVar25 >> 0x20);
        auVar26._12_4_ = (int)(short)((ulong)uVar25 >> 0x30);
        auVar27 = NEON_rev64(auVar26,4);
        auVar27 = NEON_ext(auVar27,auVar27,8,1);
        iVar24 = auVar27._0_4_ * (int)(short)uVar33 +
                 auVar27._4_4_ * (int)(short)((ulong)uVar33 >> 0x10) +
                 auVar27._8_4_ * (int)(short)((ulong)uVar33 >> 0x20) +
                 auVar27._12_4_ * (int)(short)((ulong)uVar33 >> 0x30) +
                 (int)*(short *)(param_3 + 1) * (int)*(short *)(lVar12 + -10) +
                 (int)*(short *)((long)param_3 + 10) * (int)*(short *)(lVar12 + -0xc);
        if (uVar17 - 7 < 0xe) {
          uVar11 = 6;
LAB_00e63470:
          psVar14 = (short *)(lVar22 + uVar11 * -2);
          do {
            uVar23 = uVar11 * 2;
            sVar2 = *psVar14;
            psVar1 = psVar14 + -1;
            uVar11 = uVar11 + 2;
            psVar14 = psVar14 + -2;
            iVar24 = iVar24 + (int)*(short *)((long)param_3 + uVar23) * (int)sVar2 +
                     (int)*(short *)((long)param_3 + (uVar23 | 2)) * (int)*psVar1;
          } while (uVar11 < uVar15);
        }
        else {
          iVar32 = 0;
          iVar34 = 0;
          iVar35 = 0;
          iVar36 = 0;
          auVar28._4_12_ = SUB1612(ZEXT816(0),4);
          auVar28._0_4_ = iVar24;
          uVar11 = uVar18;
          puVar13 = puVar21;
          psVar14 = (short *)((long)param_3 + 0x1c);
          do {
            uVar11 = uVar11 - 8;
            uVar46 = NEON_rev64(CONCAT26(puVar13[7],
                                         CONCAT24(puVar13[5],CONCAT22(puVar13[3],puVar13[1]))),2);
            uVar25 = NEON_rev64(CONCAT26(puVar13[6],
                                         CONCAT24(puVar13[4],CONCAT22(puVar13[2],*puVar13))),2);
            uVar45 = NEON_rev64(CONCAT26(puVar13[0xf],
                                         CONCAT24(puVar13[0xd],CONCAT22(puVar13[0xb],puVar13[9]))),2
                               );
            uVar33 = NEON_rev64(CONCAT26(puVar13[0xe],
                                         CONCAT24(puVar13[0xc],CONCAT22(puVar13[10],puVar13[8]))),2)
            ;
            iVar32 = iVar32 + (int)*psVar14 * (int)(short)uVar46 +
                     (int)psVar14[1] * (int)(short)uVar25;
            iVar34 = iVar34 + (int)psVar14[2] * (int)(short)((ulong)uVar46 >> 0x10) +
                     (int)psVar14[3] * (int)(short)((ulong)uVar25 >> 0x10);
            iVar35 = iVar35 + (int)psVar14[4] * (int)(short)((ulong)uVar46 >> 0x20) +
                     (int)psVar14[5] * (int)(short)((ulong)uVar25 >> 0x20);
            iVar36 = iVar36 + (int)psVar14[6] * (int)(short)((ulong)uVar46 >> 0x30) +
                     (int)psVar14[7] * (int)(short)((ulong)uVar25 >> 0x30);
            iVar24 = auVar28._4_4_;
            iVar30 = auVar28._8_4_;
            iVar31 = auVar28._12_4_;
            auVar28._0_4_ =
                 auVar28._0_4_ + (int)psVar14[-8] * (int)(short)uVar45 +
                 (int)psVar14[-7] * (int)(short)uVar33;
            auVar28._4_4_ =
                 iVar24 + (int)psVar14[-6] * (int)(short)((ulong)uVar45 >> 0x10) +
                 (int)psVar14[-5] * (int)(short)((ulong)uVar33 >> 0x10);
            auVar28._8_4_ =
                 iVar30 + (int)psVar14[-4] * (int)(short)((ulong)uVar45 >> 0x20) +
                 (int)psVar14[-3] * (int)(short)((ulong)uVar33 >> 0x20);
            auVar28._12_4_ =
                 iVar31 + (int)psVar14[-2] * (int)(short)((ulong)uVar45 >> 0x30) +
                 (int)psVar14[-1] * (int)(short)((ulong)uVar33 >> 0x30);
            puVar13 = puVar13 + -0x10;
            psVar14 = psVar14 + 0x10;
          } while (uVar11 != 0);
          iVar24 = iVar32 + auVar28._0_4_ + iVar34 + auVar28._4_4_ +
                   iVar35 + auVar28._8_4_ + iVar36 + auVar28._12_4_;
          uVar11 = (uVar18 >> 3) << 4 | 6;
          if (uVar16 != uVar18) goto LAB_00e63470;
        }
        lVar12 = uVar10 * 2;
        uVar10 = uVar10 + 1;
        puVar21 = puVar21 + 1;
        lVar22 = lVar22 + 2;
        iVar24 = (*(short *)(param_2 + lVar12) * 0x1000 - iVar24 >> 0xb) + 1 >> 1;
        if (iVar24 == -0x8000 || iVar24 + 0x8000 < 0 != SCARRY4(iVar24,0x8000)) {
          iVar24 = -0x8000;
        }
        if (0x7ffe < iVar24) {
          iVar24 = 0x7fff;
        }
        *(short *)((long)param_1 + lVar12) = (short)iVar24;
      } while (uVar10 != (long)param_4);
    }
  }
  else {
    uVar15 = (ulong)(int)param_5;
  }
LAB_00e636d4:
  memset(param_1,0,uVar15 << 1);
  return;
}


