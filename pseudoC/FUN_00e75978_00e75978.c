// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e75978
// Entry Point: 00e75978
// Size: 3140 bytes
// Signature: undefined FUN_00e75978(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10, undefined8 param_11)


void FUN_00e75978(int *param_1,undefined4 *param_2,undefined (*param_3) [16],
                 undefined (*param_4) [16],ulong param_5,int *param_6,uint param_7,int param_8,
                 int param_9,int param_10,uint *param_11)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  ulong uVar13;
  short *psVar14;
  undefined (*pauVar15) [16];
  undefined8 uVar16;
  long lVar17;
  undefined (*pauVar18) [16];
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  undefined auVar24 [16];
  int iVar26;
  int iVar27;
  int iVar28;
  undefined auVar25 [16];
  int iVar29;
  int iVar31;
  int iVar32;
  undefined auVar30 [16];
  int iVar33;
  short sVar34;
  short sVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  int local_84;
  
  lVar20 = *(long *)(param_1 + 2);
  iVar27 = param_1[4];
  lVar23 = (long)iVar27;
  uVar6 = (uint)param_5;
  uVar21 = param_5 & 0xffffffff;
  iVar9 = (int)*(short *)(*(long *)(lVar20 + 0x38) + lVar23 * 2) + param_9 * 8;
  iVar26 = -0x10;
  if (uVar6 != 2 || param_10 == 0) {
    iVar26 = -4;
  }
  iVar29 = *param_1;
  iVar28 = -2;
  if (uVar6 != 2 || param_10 == 0) {
    iVar28 = -1;
  }
  iVar28 = iVar28 + uVar6 * 2;
  uVar22 = (*param_6 - iVar9) - 0x20;
  lVar17 = *(long *)(param_1 + 0xc);
  uVar5 = 0;
  if (iVar28 != 0) {
    uVar5 = (*param_6 + (iVar26 + (iVar9 >> 1)) * iVar28) / iVar28;
  }
  uVar16 = *(undefined8 *)(param_1 + 8);
  if ((int)uVar5 <= (int)uVar22) {
    uVar22 = uVar5;
  }
  if (0x3f < (int)uVar22) {
    uVar22 = 0x40;
  }
  if ((int)uVar22 < 4) {
    uVar22 = 1;
    if (iVar29 == 0) goto LAB_00e75ba0;
LAB_00e75a5c:
    uVar5 = stereo_itheta(param_3,param_4,param_10,uVar21,param_1[0xf]);
    local_84 = ec_tell_frac(uVar16);
    if (uVar22 - 1 == 0) {
      if (param_10 == 0) goto LAB_00e7623c;
      if (((int)uVar5 < 0x2001) || (param_1[0x11] != 0)) {
        uVar8 = 0;
      }
      else {
        if (0 < (int)uVar6) {
          if (uVar6 < 0x10) {
            uVar11 = 0;
          }
          else {
            uVar11 = param_5 & 0xfffffff0;
            pauVar15 = param_4 + 1;
            uVar13 = uVar11;
            do {
              uVar13 = uVar13 - 0x10;
              auVar24 = NEON_neg(pauVar15[-1],2);
              auVar25 = NEON_neg(*pauVar15,2);
              *(long *)(pauVar15[-1] + 8) = auVar24._8_8_;
              *(long *)pauVar15[-1] = auVar24._0_8_;
              *(long *)(*pauVar15 + 8) = auVar25._8_8_;
              *(long *)*pauVar15 = auVar25._0_8_;
              pauVar15 = pauVar15 + 2;
            } while (uVar13 != 0);
            if (uVar11 == uVar21) goto LAB_00e765b4;
          }
          lVar10 = uVar21 - uVar11;
          psVar12 = (short *)(*param_4 + uVar11 * 2);
          do {
            lVar10 = lVar10 + -1;
            *psVar12 = -*psVar12;
            psVar12 = psVar12 + 1;
          } while (lVar10 != 0);
        }
LAB_00e765b4:
        uVar8 = 1;
      }
      iVar26 = *(int *)(lVar17 + lVar23 * 4);
      iVar27 = *(int *)(lVar17 + (long)(*(int *)(lVar20 + 8) + iVar27) * 4);
      iVar9 = iVar26;
      if (iVar26 <= iVar27) {
        iVar9 = iVar27;
      }
      iVar28 = 0;
      if (0 < iVar9) {
        iVar28 = 0x1f - (int)LZCOUNT(iVar9);
      }
      uVar22 = iVar27 << (ulong)(0xdU - iVar28 & 0x1f);
      if (0xd < iVar28) {
        uVar22 = iVar27 >> (iVar28 - 0xdU & 0x1f);
      }
      uVar5 = iVar26 << (ulong)(0xdU - iVar28 & 0x1f);
      if (0xd < iVar28) {
        uVar5 = iVar26 >> (iVar28 - 0xdU & 0x1f);
      }
      sVar4 = celt_sqrt((int)(short)uVar22 * (int)(short)uVar22 +
                        (int)(short)uVar5 * (int)(short)uVar5 + 1);
      if (0 < (int)uVar6) {
        iVar9 = (int)(short)(sVar4 + 1);
        sVar4 = 0;
        if (iVar9 != 0) {
          sVar4 = (short)((int)(-(uVar5 >> 0xf & 1) & 0xc0000000 | (uVar5 & 0xffff) << 0xe) / iVar9)
          ;
        }
        sVar34 = 0;
        if (iVar9 != 0) {
          sVar34 = (short)((int)(-(uVar22 >> 0xf & 1) & 0xc0000000 | (uVar22 & 0xffff) << 0xe) /
                          iVar9);
        }
        iVar9 = (int)sVar4;
        iVar26 = (int)sVar34;
        if (uVar6 < 8) {
          param_5 = 0;
        }
        else if ((param_3 < (undefined (*) [16])(*param_4 + uVar21 * 2)) &&
                (param_4 < (undefined (*) [16])(*param_3 + uVar21 * 2))) {
          param_5 = 0;
        }
        else {
          param_5 = param_5 & 0xfffffff8;
          uVar13 = param_5;
          pauVar15 = param_4;
          pauVar18 = param_3;
          do {
            auVar24 = *pauVar18;
            uVar13 = uVar13 - 8;
            uVar37 = *(undefined8 *)(*pauVar15 + 8);
            uVar36 = *(undefined8 *)*pauVar15;
            uVar3 = CONCAT22((short)((uint)(iVar9 * auVar24._10_2_ +
                                           iVar26 * (short)((ulong)uVar37 >> 0x10)) >> 0xe),
                             (short)((uint)(iVar9 * auVar24._8_2_ + iVar26 * (short)uVar37) >> 0xe))
            ;
            *(ulong *)(*pauVar18 + 8) =
                 CONCAT44((int)(CONCAT26((short)((uint)(iVar9 * auVar24._14_2_ +
                                                       iVar26 * (short)((ulong)uVar37 >> 0x30)) >>
                                                0xe),
                                         CONCAT24((short)((uint)(iVar9 * auVar24._12_2_ +
                                                                iVar26 * (short)((ulong)uVar37 >>
                                                                                0x20)) >> 0xe),uVar3
                                                 )) >> 0x20),uVar3);
            *(ulong *)*pauVar18 =
                 CONCAT26((short)((uint)(iVar9 * auVar24._6_2_ +
                                        iVar26 * (short)((ulong)uVar36 >> 0x30)) >> 0xe),
                          CONCAT24((short)((uint)(iVar9 * auVar24._4_2_ +
                                                 iVar26 * (short)((ulong)uVar36 >> 0x20)) >> 0xe),
                                   CONCAT22((short)((uint)(iVar9 * auVar24._2_2_ +
                                                          iVar26 * (short)((ulong)uVar36 >> 0x10))
                                                   >> 0xe),
                                            (short)((uint)(iVar9 * auVar24._0_2_ +
                                                          iVar26 * (short)uVar36) >> 0xe))));
            pauVar15 = pauVar15 + 1;
            pauVar18 = pauVar18 + 1;
          } while (uVar13 != 0);
          if (param_5 == uVar21) goto LAB_00e75ff4;
        }
        lVar20 = uVar21 - param_5;
        psVar12 = (short *)(*param_4 + param_5 * 2);
        psVar14 = (short *)(*param_3 + param_5 * 2);
        do {
          lVar20 = lVar20 + -1;
          *psVar14 = (short)((uint)(iVar9 * *psVar14 + iVar26 * *psVar12) >> 0xe);
          psVar12 = psVar12 + 1;
          psVar14 = psVar14 + 1;
        } while (lVar20 != 0);
      }
      goto LAB_00e75ff4;
    }
    if (param_10 == 0) {
      uVar2 = uVar5 * uVar22 + 0x2000;
      uVar1 = (int)uVar2 >> 0xe;
      uVar7 = uVar1;
      if (((param_1[0x12] != 0) && (0x1fff < (int)(uVar5 * uVar22))) && ((int)uVar1 < (int)uVar22))
      {
        uVar5 = 0;
        if (uVar22 != 0) {
          uVar5 = (uVar2 & 0xffffc000) / uVar22;
        }
        iVar9 = uVar5 * -0x10000 + 0x40000000;
        iVar28 = (-(uVar5 >> 0xf & 1) & 0xfff80000 | (uVar5 & 0xffff) << 3) * (int)(short)uVar5 +
                 0x8000;
        iVar29 = (iVar9 >> 0xd) * (iVar9 >> 0x10) + 0x8000;
        iVar9 = iVar28 >> 0x10;
        iVar26 = iVar29 >> 0x10;
        iVar9 = (int)(short)(((short)((iVar9 * ((iVar9 * -0x272 + 0x4000 >> 0xf) + 0x2055) * 2 +
                                       -0x1de28000 >> 0x10) * iVar9 + 0x4000U >> 0xf) -
                             (short)((uint)iVar28 >> 0x10)) + -0x8000);
        iVar26 = (int)(short)(((short)((iVar26 * ((iVar26 * -0x272 + 0x4000 >> 0xf) + 0x2055) * 2 +
                                        -0x1de28000 >> 0x10) * iVar26 + 0x4000U >> 0xf) -
                              (short)((uint)iVar29 >> 0x10)) + -0x8000);
        lVar10 = LZCOUNT(iVar9);
        lVar19 = LZCOUNT(iVar26);
        iVar9 = (int)(short)(iVar9 << (ulong)((int)lVar10 - 0x11U & 0x1f));
        iVar26 = (int)(short)(iVar26 << (ulong)((int)lVar19 - 0x11U & 0x1f));
        iVar9 = (int)(short)((((short)lVar10 - (short)lVar19) * 0x800 -
                             (short)(((iVar9 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar9 + 0x4000U
                                    >> 0xf)) +
                            (short)(((iVar26 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar26 + 0x4000U
                                   >> 0xf)) * (int)(short)((short)param_5 * 0x80 + -0x80) + 0x4000
                >> 0xf;
        iVar26 = *param_6;
        uVar7 = uVar22;
        if ((iVar9 <= iVar26) && (uVar7 = 0, iVar9 + iVar26 < 0 == SBORROW4(iVar9,-iVar26))) {
          uVar7 = uVar1;
        }
      }
      if (1 < param_8) goto LAB_00e76044;
      iVar9 = ((int)uVar22 >> 1) + 1;
      iVar26 = (uVar22 - uVar7) + 1;
      if ((int)uVar22 >> 1 < (int)uVar7) {
        iVar9 = iVar9 * iVar9 - ((int)(iVar26 * ((uVar22 - uVar7) + 2)) >> 1);
      }
      else {
        iVar26 = uVar7 + 1;
        iVar9 = (int)((uVar7 + 1) * uVar7) >> 1;
      }
      ec_encode(uVar16,iVar9,iVar9 + iVar26);
      goto LAB_00e76234;
    }
    if (param_1[0x10] == 0) {
      uVar7 = (int)(uVar5 * uVar22 + 0x2000) >> 0xe;
      if ((int)uVar6 < 3) goto LAB_00e76044;
LAB_00e75e70:
      uVar5 = uVar22;
      if ((int)uVar22 < 0) {
        uVar5 = uVar22 + 1;
      }
      uVar2 = (int)uVar5 >> 1;
      iVar9 = (uVar5 & 0xfffffffe) + uVar2 + 3;
      iVar26 = (iVar9 - uVar2) + uVar7;
      iVar28 = iVar9 + ~uVar2 + uVar7;
      if ((int)uVar7 <= (int)uVar2) {
        iVar26 = uVar7 * 3 + 3;
        iVar28 = uVar7 * 3;
      }
      ec_encode(uVar16,iVar28,iVar26,iVar9 + uVar2);
      uVar7 = uVar7 << 0xe;
      uVar5 = 0;
      if (uVar22 != 0) {
        uVar5 = uVar7 / uVar22;
      }
    }
    else {
      iVar9 = -0x7fff;
      if (0x2000 < (int)uVar5) {
        iVar9 = 0x7fff;
      }
      iVar26 = 0;
      if (uVar22 != 0) {
        iVar26 = iVar9 / (int)uVar22;
      }
      iVar26 = iVar26 + uVar5 * uVar22;
      iVar9 = 0;
      if (-1 < iVar26) {
        iVar9 = iVar26 >> 0xe;
      }
      if ((int)uVar22 <= iVar9) {
        iVar9 = uVar22 - 1;
      }
      uVar7 = iVar9 - (~param_1[0x10] >> 0x1f);
      if (2 < (int)uVar6) goto LAB_00e75e70;
LAB_00e76044:
      ec_enc_uint(uVar16,uVar7,uVar22 + 1);
      uVar7 = uVar7 << 0xe;
      uVar5 = 0;
      if (uVar22 != 0) {
        uVar5 = uVar7 / uVar22;
      }
      if (param_10 == 0) goto LAB_00e7623c;
    }
    if (uVar7 < uVar22) {
      iVar26 = *(int *)(lVar17 + lVar23 * 4);
      iVar27 = *(int *)(lVar17 + (long)(*(int *)(lVar20 + 8) + iVar27) * 4);
      iVar9 = iVar26;
      if (iVar26 <= iVar27) {
        iVar9 = iVar27;
      }
      iVar28 = 0;
      if (0 < iVar9) {
        iVar28 = 0x1f - (int)LZCOUNT(iVar9);
      }
      if (iVar28 < 0xe) {
        uVar22 = iVar26 << (ulong)(0xdU - iVar28 & 0x1f);
        uVar5 = iVar27 << (ulong)(0xdU - iVar28 & 0x1f);
      }
      else {
        uVar22 = iVar26 >> (iVar28 - 0xdU & 0x1f);
        uVar5 = iVar27 >> (iVar28 - 0xdU & 0x1f);
      }
      sVar4 = celt_sqrt((int)(short)uVar5 * (int)(short)uVar5 +
                        (int)(short)uVar22 * (int)(short)uVar22 + 1);
      if ((int)uVar6 < 1) goto LAB_00e76154;
      iVar9 = (int)(short)(sVar4 + 1);
      sVar4 = 0;
      if (iVar9 != 0) {
        sVar4 = (short)((int)(-(uVar22 >> 0xf & 1) & 0xc0000000 | (uVar22 & 0xffff) << 0xe) / iVar9)
        ;
      }
      sVar34 = 0;
      if (iVar9 != 0) {
        sVar34 = (short)((int)(-(uVar5 >> 0xf & 1) & 0xc0000000 | (uVar5 & 0xffff) << 0xe) / iVar9);
      }
      iVar9 = (int)sVar4;
      iVar26 = (int)sVar34;
      if (uVar6 < 8) {
        param_5 = 0;
LAB_00e764c4:
        lVar20 = uVar21 - param_5;
        psVar12 = (short *)(*param_4 + param_5 * 2);
        psVar14 = (short *)(*param_3 + param_5 * 2);
        do {
          lVar20 = lVar20 + -1;
          *psVar14 = (short)((uint)(iVar9 * *psVar14 + iVar26 * *psVar12) >> 0xe);
          psVar12 = psVar12 + 1;
          psVar14 = psVar14 + 1;
        } while (lVar20 != 0);
      }
      else {
        if ((param_3 < (undefined (*) [16])(*param_4 + uVar21 * 2)) &&
           (param_4 < (undefined (*) [16])(*param_3 + uVar21 * 2))) {
          param_5 = 0;
          goto LAB_00e764c4;
        }
        param_5 = param_5 & 0xfffffff8;
        uVar13 = param_5;
        pauVar15 = param_4;
        pauVar18 = param_3;
        do {
          auVar24 = *pauVar18;
          uVar13 = uVar13 - 8;
          uVar37 = *(undefined8 *)(*pauVar15 + 8);
          uVar36 = *(undefined8 *)*pauVar15;
          uVar8 = CONCAT22((short)((uint)(iVar9 * auVar24._10_2_ +
                                         iVar26 * (short)((ulong)uVar37 >> 0x10)) >> 0xe),
                           (short)((uint)(iVar9 * auVar24._8_2_ + iVar26 * (short)uVar37) >> 0xe));
          *(ulong *)(*pauVar18 + 8) =
               CONCAT44((int)(CONCAT26((short)((uint)(iVar9 * auVar24._14_2_ +
                                                     iVar26 * (short)((ulong)uVar37 >> 0x30)) >> 0xe
                                              ),CONCAT24((short)((uint)(iVar9 * auVar24._12_2_ +
                                                                       iVar26 * (short)((ulong)
                                                  uVar37 >> 0x20)) >> 0xe),uVar8)) >> 0x20),uVar8);
          *(ulong *)*pauVar18 =
               CONCAT26((short)((uint)(iVar9 * auVar24._6_2_ +
                                      iVar26 * (short)((ulong)uVar36 >> 0x30)) >> 0xe),
                        CONCAT24((short)((uint)(iVar9 * auVar24._4_2_ +
                                               iVar26 * (short)((ulong)uVar36 >> 0x20)) >> 0xe),
                                 CONCAT22((short)((uint)(iVar9 * auVar24._2_2_ +
                                                        iVar26 * (short)((ulong)uVar36 >> 0x10)) >>
                                                 0xe),
                                          (short)((uint)(iVar9 * auVar24._0_2_ +
                                                        iVar26 * (short)uVar36) >> 0xe))));
          pauVar15 = pauVar15 + 1;
          pauVar18 = pauVar18 + 1;
        } while (uVar13 != 0);
        if (param_5 != uVar21) goto LAB_00e764c4;
      }
      uVar8 = 0;
      goto LAB_00e764f8;
    }
    if (0 < (int)uVar6) {
      if (uVar6 < 8) {
        uVar11 = 0;
      }
      else if ((param_3 < (undefined (*) [16])(*param_4 + uVar21 * 2)) &&
              (param_4 < (undefined (*) [16])(*param_3 + uVar21 * 2))) {
        uVar11 = 0;
      }
      else {
        uVar11 = param_5 & 0xfffffff8;
        uVar13 = uVar11;
        pauVar15 = param_4;
        pauVar18 = param_3;
        do {
          auVar24 = *pauVar15;
          uVar13 = uVar13 - 8;
          uVar8 = (undefined4)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20);
          uVar36 = *(undefined8 *)*pauVar18;
          sVar4 = (short)((ulong)uVar36 >> 0x10);
          sVar34 = (short)((ulong)uVar36 >> 0x20);
          sVar35 = (short)((ulong)uVar36 >> 0x30);
          auVar30 = NEON_ext(auVar24,auVar24,8,1);
          iVar9 = auVar24._0_2_ * 0x5a82;
          iVar26 = auVar24._2_2_ * 0x5a82;
          iVar27 = auVar24._4_2_ * 0x5a82;
          iVar28 = auVar24._6_2_ * 0x5a82;
          auVar24._12_4_ = uVar8;
          auVar24._0_12_ = *(undefined (*) [12])*pauVar18;
          auVar25._12_4_ = uVar8;
          auVar25._0_12_ = *(undefined (*) [12])*pauVar18;
          auVar24 = NEON_ext(auVar24,auVar25,8,1);
          iVar29 = auVar30._0_2_ * 0x5a82;
          iVar31 = auVar30._2_2_ * 0x5a82;
          iVar32 = auVar30._4_2_ * 0x5a82;
          iVar33 = auVar30._6_2_ * 0x5a82;
          uVar8 = CONCAT22((short)((uint)(iVar31 + auVar24._2_2_ * 0x5a82) >> 0xf),
                           (short)((uint)(iVar29 + auVar24._0_2_ * 0x5a82) >> 0xf));
          *(ulong *)(*pauVar15 + 8) =
               CONCAT26((short)((uint)(iVar33 + auVar24._6_2_ * -0x5a82) >> 0xf),
                        CONCAT24((short)((uint)(iVar32 + auVar24._4_2_ * -0x5a82) >> 0xf),
                                 CONCAT22((short)((uint)(iVar31 + auVar24._2_2_ * -0x5a82) >> 0xf),
                                          (short)((uint)(iVar29 + auVar24._0_2_ * -0x5a82) >> 0xf)))
                       );
          *(ulong *)*pauVar15 =
               CONCAT26((short)((uint)(iVar28 + sVar35 * -0x5a82) >> 0xf),
                        CONCAT24((short)((uint)(iVar27 + sVar34 * -0x5a82) >> 0xf),
                                 CONCAT22((short)((uint)(iVar26 + sVar4 * -0x5a82) >> 0xf),
                                          (short)((uint)(iVar9 + (short)uVar36 * -0x5a82) >> 0xf))))
          ;
          *(ulong *)(*pauVar18 + 8) =
               CONCAT44((int)(CONCAT26((short)((uint)(iVar33 + auVar24._6_2_ * 0x5a82) >> 0xf),
                                       CONCAT24((short)((uint)(iVar32 + auVar24._4_2_ * 0x5a82) >>
                                                       0xf),uVar8)) >> 0x20),uVar8);
          *(ulong *)*pauVar18 =
               CONCAT26((short)((uint)(iVar28 + sVar35 * 0x5a82) >> 0xf),
                        CONCAT24((short)((uint)(iVar27 + sVar34 * 0x5a82) >> 0xf),
                                 CONCAT22((short)((uint)(iVar26 + sVar4 * 0x5a82) >> 0xf),
                                          (short)((uint)(iVar9 + (short)uVar36 * 0x5a82) >> 0xf))));
          pauVar15 = pauVar15 + 1;
          pauVar18 = pauVar18 + 1;
        } while (uVar13 != 0);
        if (uVar11 == uVar21) goto LAB_00e7623c;
      }
      lVar20 = uVar21 - uVar11;
      psVar12 = (short *)(*param_4 + uVar11 * 2);
      psVar14 = (short *)(*param_3 + uVar11 * 2);
      do {
        sVar4 = *psVar14;
        lVar20 = lVar20 + -1;
        sVar34 = *psVar12;
        *psVar14 = (short)((uint)(sVar34 * 0x5a82 + sVar4 * 0x5a82) >> 0xf);
        *psVar12 = (short)((uint)(sVar34 * 0x5a82 + sVar4 * -0x5a82) >> 0xf);
        psVar12 = psVar12 + 1;
        psVar14 = psVar14 + 1;
      } while (lVar20 != 0);
    }
LAB_00e7623c:
    iVar9 = ec_tell_frac(uVar16);
    iVar9 = iVar9 - local_84;
    *param_6 = *param_6 - iVar9;
    if (uVar5 == 0x4000) {
      uVar8 = 0;
      iVar27 = 0;
      iVar28 = 0x7fff;
      iVar26 = 0x4000;
      *param_11 = *param_11 & ~(-1 << (ulong)(param_7 & 0x1f)) << (ulong)(param_7 & 0x1f);
      goto LAB_00e76538;
    }
    if (uVar5 != 0) {
      iVar26 = uVar5 * -0x10000 + 0x40000000;
      iVar27 = (-(uVar5 >> 0xf & 1) & 0xfff80000 | (uVar5 & 0xffff) << 3) * (int)(short)uVar5 +
               0x8000;
      iVar29 = (iVar26 >> 0xd) * (iVar26 >> 0x10) + 0x8000;
      iVar26 = iVar27 >> 0x10;
      iVar28 = iVar29 >> 0x10;
      uVar8 = 0;
      iVar27 = (int)(short)(((short)((iVar26 * ((iVar26 * -0x272 + 0x4000 >> 0xf) + 0x2055) * 2 +
                                      -0x1de28000 >> 0x10) * iVar26 + 0x4000U >> 0xf) -
                            (short)((uint)iVar27 >> 0x10)) + -0x8000);
      iVar28 = (int)(short)(((short)((iVar28 * ((iVar28 * -0x272 + 0x4000 >> 0xf) + 0x2055) * 2 +
                                      -0x1de28000 >> 0x10) * iVar28 + 0x4000U >> 0xf) -
                            (short)((uint)iVar29 >> 0x10)) + -0x8000);
      iVar26 = (int)(short)(iVar27 << (ulong)((int)LZCOUNT(iVar27) - 0x11U & 0x1f));
      iVar29 = (int)(short)(iVar28 << (ulong)((int)LZCOUNT(iVar28) - 0x11U & 0x1f));
      iVar26 = (int)(short)((((short)LZCOUNT(iVar27) - (short)LZCOUNT(iVar28)) * 0x800 -
                            (short)(((iVar26 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar26 + 0x4000U
                                   >> 0xf)) +
                           (short)(((iVar29 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar29 + 0x4000U
                                  >> 0xf)) * (int)(short)((short)param_5 * 0x80 + -0x80) + 0x4000 >>
               0xf;
      goto LAB_00e76538;
    }
    uVar8 = 0;
  }
  else {
    uVar22 = ((int)*(short *)(&DAT_004c3b50 + (ulong)(uVar22 & 7) * 2) >>
             (0xe - (uVar22 >> 3) & 0x1f)) + 1U & 0xfffffffe;
    if (param_1[5] <= iVar27 && param_10 != 0) {
      uVar22 = 1;
    }
    if (iVar29 != 0) goto LAB_00e75a5c;
LAB_00e75ba0:
    local_84 = ec_tell_frac(uVar16);
    if (uVar22 != 1) {
      if (((int)uVar6 < 3) || (param_10 == 0)) {
        if ((param_8 < 2) && (param_10 == 0)) {
          iVar9 = ((int)uVar22 >> 1) + 1;
          iVar26 = iVar9 * iVar9;
          uVar6 = ec_decode(uVar16,iVar26);
          if ((int)uVar6 < ((int)uVar22 >> 1) * iVar9 >> 1) {
            iVar9 = isqrt32(uVar6 << 3 | 1);
            uVar7 = iVar9 - 1U >> 1;
            iVar9 = uVar7 + 1;
            uVar6 = iVar9 * uVar7 >> 1;
          }
          else {
            iVar9 = isqrt32((iVar26 + ~uVar6) * 8 | 1);
            uVar7 = (uVar22 + 1) * 2 - iVar9 >> 1;
            iVar9 = (uVar22 + 1) - uVar7;
            uVar6 = iVar26 - ((int)(iVar9 * ((uVar22 - uVar7) + 2)) >> 1);
          }
          iVar9 = uVar6 + iVar9;
          goto LAB_00e76228;
        }
        uVar7 = ec_dec_uint(uVar16,uVar22 + 1);
      }
      else {
        uVar5 = uVar22;
        if ((int)uVar22 < 0) {
          uVar5 = uVar22 + 1;
        }
        uVar5 = (int)uVar5 >> 1;
        iVar27 = (uVar5 + 1) * 3;
        iVar26 = iVar27 + uVar5;
        iVar9 = ec_decode(uVar16,iVar26);
        if (iVar9 < iVar27) {
          uVar7 = iVar9 / 3;
        }
        else {
          uVar7 = iVar9 + (uVar5 + 1) * -2;
        }
        iVar9 = (iVar27 - uVar5) + uVar7;
        uVar6 = iVar27 + ~uVar5 + uVar7;
        if ((int)uVar7 <= (int)uVar5) {
          iVar9 = uVar7 * 3 + 3;
          uVar6 = uVar7 * 3;
        }
LAB_00e76228:
        ec_dec_update(uVar16,uVar6,iVar9,iVar26);
      }
LAB_00e76234:
      uVar5 = 0;
      if (uVar22 != 0) {
        uVar5 = (uVar7 << 0xe) / uVar22;
      }
      goto LAB_00e7623c;
    }
    if (param_10 == 0) {
LAB_00e76154:
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
LAB_00e75ff4:
      if ((*param_6 < 0x11) || (param_1[10] < 0x11)) {
        uVar8 = 0;
      }
      else if (iVar29 == 0) {
        uVar8 = ec_dec_bit_logp(uVar16,2);
      }
      else {
        ec_enc_bit_logp(uVar16,uVar8,2);
      }
      if (param_1[0x11] != 0) {
        uVar8 = 0;
      }
    }
LAB_00e764f8:
    iVar9 = ec_tell_frac(uVar16);
    iVar9 = iVar9 - local_84;
    *param_6 = *param_6 - iVar9;
  }
  iVar28 = 0;
  uVar5 = 0;
  iVar26 = -0x4000;
  iVar27 = 0x7fff;
  *param_11 = *param_11 & (-1 << (ulong)(param_7 & 0x1f) ^ 0xffffffffU);
LAB_00e76538:
  *param_2 = uVar8;
  param_2[1] = iVar27;
  param_2[2] = iVar28;
  param_2[3] = iVar26;
  param_2[4] = uVar5;
  param_2[5] = iVar9;
  return;
}


