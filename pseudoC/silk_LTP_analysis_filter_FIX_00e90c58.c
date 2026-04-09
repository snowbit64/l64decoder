// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_LTP_analysis_filter_FIX
// Entry Point: 00e90c58
// Size: 704 bytes
// Signature: undefined silk_LTP_analysis_filter_FIX(void)


void silk_LTP_analysis_filter_FIX
               (ulong param_1,ulong param_2,long param_3,long param_4,long param_5,int param_6,
               uint param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  short *psVar21;
  short *psVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  if ((0 < (int)param_7) && (uVar1 = param_8 + param_6, 0 < (int)uVar1)) {
    uVar12 = (ulong)(int)uVar1;
    uVar13 = (ulong)uVar1;
    uVar11 = 0;
    uVar14 = uVar12 & 0xfffffff8;
    uVar10 = param_2;
    uVar15 = param_1;
    do {
      psVar21 = (short *)(param_3 + uVar11 * 10);
      lVar23 = (long)*(int *)(param_4 + uVar11 * 4);
      iVar2 = *(int *)(param_5 + uVar11 * 4);
      sVar3 = *psVar21;
      sVar4 = psVar21[1];
      psVar22 = (short *)(uVar10 + lVar23 * -2);
      sVar5 = psVar21[2];
      sVar6 = psVar21[3];
      sVar7 = psVar21[4];
      if (uVar1 < 8) {
        uVar24 = 0;
      }
      else {
        lVar25 = uVar11 * (long)param_6;
        uVar24 = 0;
        lVar23 = lVar23 * -2;
        uVar26 = param_1 + (uVar13 + uVar11 * uVar12) * 2;
        if ((param_2 + (uVar13 + 2 + lVar25) * 2 + lVar23 <= uVar15 ||
             uVar26 <= (param_2 + lVar25 * 2 + lVar23) - 4) &&
           (param_2 + (lVar25 + uVar13) * 2 <= uVar15 || uVar26 <= uVar10)) {
          lVar23 = 0;
          uVar26 = uVar14;
          do {
            iVar16 = (int)sVar3;
            iVar17 = (int)sVar4;
            uVar26 = uVar26 - 8;
            auVar28 = *(undefined (*) [16])((long)psVar22 + lVar23 + 4);
            auVar30 = *(undefined (*) [16])((long)psVar22 + lVar23 + 2);
            uVar33 = ((undefined8 *)((long)psVar22 + lVar23))[1];
            uVar31 = *(undefined8 *)((long)psVar22 + lVar23);
            uVar36 = *(undefined8 *)((long)psVar22 + lVar23 + 6);
            uVar35 = *(undefined8 *)((long)psVar22 + lVar23 + -2);
            iVar18 = (int)sVar5;
            uVar34 = *(undefined8 *)((long)psVar22 + lVar23 + 4);
            uVar32 = *(undefined8 *)((long)psVar22 + lVar23 + -4);
            iVar19 = (int)sVar6;
            iVar20 = (int)sVar7;
            uVar38 = ((undefined8 *)(uVar10 + lVar23))[1];
            uVar37 = *(undefined8 *)(uVar10 + lVar23);
            auVar27._0_4_ =
                 (int)(short)uVar37 -
                 ((iVar16 * auVar28._0_2_ + iVar17 * auVar30._0_2_ + iVar18 * (short)uVar31 +
                   iVar19 * (short)uVar35 + iVar20 * (short)uVar32 >> 0xd) + 1 >> 1);
            auVar27._4_4_ =
                 (int)(short)((ulong)uVar37 >> 0x10) -
                 ((iVar16 * auVar28._2_2_ + iVar17 * auVar30._2_2_ +
                   iVar18 * (short)((ulong)uVar31 >> 0x10) + iVar19 * (short)((ulong)uVar35 >> 0x10)
                   + iVar20 * (short)((ulong)uVar32 >> 0x10) >> 0xd) + 1 >> 1);
            auVar27._8_4_ =
                 (int)(short)((ulong)uVar37 >> 0x20) -
                 ((iVar16 * auVar28._4_2_ + iVar17 * auVar30._4_2_ +
                   iVar18 * (short)((ulong)uVar31 >> 0x20) + iVar19 * (short)((ulong)uVar35 >> 0x20)
                   + iVar20 * (short)((ulong)uVar32 >> 0x20) >> 0xd) + 1 >> 1);
            auVar27._12_4_ =
                 (int)(short)((ulong)uVar37 >> 0x30) -
                 ((iVar16 * auVar28._6_2_ + iVar17 * auVar30._6_2_ +
                   iVar18 * (short)((ulong)uVar31 >> 0x30) + iVar19 * (short)((ulong)uVar35 >> 0x30)
                   + iVar20 * (short)((ulong)uVar32 >> 0x30) >> 0xd) + 1 >> 1);
            auVar29._0_4_ =
                 (int)(short)uVar38 -
                 ((iVar16 * auVar28._8_2_ + iVar17 * auVar30._8_2_ + iVar18 * (short)uVar33 +
                   iVar19 * (short)uVar36 + iVar20 * (short)uVar34 >> 0xd) + 1 >> 1);
            auVar29._4_4_ =
                 (int)(short)((ulong)uVar38 >> 0x10) -
                 ((iVar16 * auVar28._10_2_ + iVar17 * auVar30._10_2_ +
                   iVar18 * (short)((ulong)uVar33 >> 0x10) + iVar19 * (short)((ulong)uVar36 >> 0x10)
                   + iVar20 * (short)((ulong)uVar34 >> 0x10) >> 0xd) + 1 >> 1);
            auVar29._8_4_ =
                 (int)(short)((ulong)uVar38 >> 0x20) -
                 ((iVar16 * auVar28._12_2_ + iVar17 * auVar30._12_2_ +
                   iVar18 * (short)((ulong)uVar33 >> 0x20) + iVar19 * (short)((ulong)uVar36 >> 0x20)
                   + iVar20 * (short)((ulong)uVar34 >> 0x20) >> 0xd) + 1 >> 1);
            auVar29._12_4_ =
                 (int)(short)((ulong)uVar38 >> 0x30) -
                 ((iVar16 * auVar28._14_2_ + iVar17 * auVar30._14_2_ +
                   iVar18 * (short)((ulong)uVar33 >> 0x30) + iVar19 * (short)((ulong)uVar36 >> 0x30)
                   + iVar20 * (short)((ulong)uVar34 >> 0x30) >> 0xd) + 1 >> 1);
            auVar28._8_4_ = 0xffff8000;
            auVar28._0_8_ = 0xffff8000ffff8000;
            auVar28._12_4_ = 0xffff8000;
            auVar28 = NEON_smax(auVar27,auVar28,4);
            auVar30._8_4_ = 0xffff8000;
            auVar30._0_8_ = 0xffff8000ffff8000;
            auVar30._12_4_ = 0xffff8000;
            auVar30 = NEON_smax(auVar29,auVar30,4);
            auVar8._8_4_ = 0x7fff;
            auVar8._0_8_ = 0x7fff00007fff;
            auVar8._12_4_ = 0x7fff;
            auVar28 = NEON_smin(auVar28,auVar8,4);
            auVar9._8_4_ = 0x7fff;
            auVar9._0_8_ = 0x7fff00007fff;
            auVar9._12_4_ = 0x7fff;
            auVar30 = NEON_smin(auVar30,auVar9,4);
            ((undefined8 *)(uVar15 + lVar23))[1] =
                 CONCAT26((short)((uint)(auVar30._12_4_ * iVar2) >> 0x10),
                          CONCAT24((short)((uint)(auVar30._8_4_ * iVar2) >> 0x10),
                                   CONCAT22((short)((uint)(auVar30._4_4_ * iVar2) >> 0x10),
                                            (short)((uint)(auVar30._0_4_ * iVar2) >> 0x10))));
            *(undefined8 *)(uVar15 + lVar23) =
                 CONCAT26((short)((uint)(auVar28._12_4_ * iVar2) >> 0x10),
                          CONCAT24((short)((uint)(auVar28._8_4_ * iVar2) >> 0x10),
                                   CONCAT22((short)((uint)(auVar28._4_4_ * iVar2) >> 0x10),
                                            (short)((uint)(auVar28._0_4_ * iVar2) >> 0x10))));
            lVar23 = lVar23 + 0x10;
            uVar24 = uVar14;
            psVar21 = psVar22 + uVar14;
            if (uVar26 == 0) goto joined_r0x00e90ef0;
          } while( true );
        }
      }
      do {
        lVar23 = uVar24 * 2;
        *(undefined2 *)(uVar15 + lVar23) = *(undefined2 *)(uVar10 + lVar23);
        iVar16 = (int)*(short *)(uVar10 + lVar23) -
                 (((int)psVar22[2] * (int)sVar3 + (int)psVar22[1] * (int)sVar4 +
                   (int)*psVar22 * (int)sVar5 + (int)psVar22[-1] * (int)sVar6 +
                   (int)psVar22[-2] * (int)sVar7 >> 0xd) + 1 >> 1);
        if (iVar16 == -0x8000 || iVar16 + 0x8000 < 0 != SCARRY4(iVar16,0x8000)) {
          iVar16 = -0x8000;
        }
        if (0x7ffe < iVar16) {
          iVar16 = 0x7fff;
        }
        *(short *)(uVar15 + lVar23) = (short)((uint)(iVar16 * iVar2) >> 0x10);
        uVar24 = uVar24 + 1;
        psVar21 = psVar22 + 1;
joined_r0x00e90ef0:
        psVar22 = psVar21;
      } while (uVar24 != uVar13);
      uVar15 = uVar15 + uVar12 * 2;
      uVar10 = uVar10 + (long)param_6 * 2;
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_7);
  }
  return;
}


