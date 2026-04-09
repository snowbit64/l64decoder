// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NLSF2A
// Entry Point: 00e6110c
// Size: 2020 bytes
// Signature: undefined silk_NLSF2A(void)


void silk_NLSF2A(long param_1,short *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  int *piVar16;
  ulong *puVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined8 uVar33;
  ulong uVar34;
  ulong uVar35;
  uint local_198 [8];
  ulong auStack_178 [6];
  undefined8 uStack_144;
  int local_138 [10];
  undefined8 uStack_110;
  int local_104 [13];
  int local_d0 [24];
  long local_70;
  
  lVar3 = tpidr_el0;
  uVar21 = (ulong)param_3;
  pbVar12 = &UNK_004c4a20;
  if (param_3 != 0x10) {
    pbVar12 = &DAT_00563d14;
  }
  uVar23 = (int)param_3 >> 1;
  local_70 = *(long *)(lVar3 + 0x28);
  if ((int)param_3 < 1) {
    local_104[0] = 0x10000;
  }
  else {
    do {
      uVar21 = uVar21 - 1;
      iVar5 = (int)*param_2 >> 8;
      local_d0[*pbVar12] =
           ((int)(((int)(short)(&DAT_00563d20)[iVar5] - (int)(short)(&silk_LSFCosTab_FIX_Q12)[iVar5]
                  ) * ((int)*param_2 & 0xffU) + (short)(&silk_LSFCosTab_FIX_Q12)[iVar5] * 0x100) >>
           3) + 1 >> 1;
      param_2 = param_2 + 1;
      pbVar12 = pbVar12 + 1;
    } while (uVar21 != 0);
    local_104[1] = -local_d0[0];
    local_104[0] = 0x10000;
    if (3 < (int)param_3) {
      lVar13 = 0;
      puVar14 = &uStack_110;
      iVar5 = 0x10000;
      uVar21 = 0xffffffffffffffff;
      uVar20 = 0xfffffffe;
      uVar26 = 1;
      iVar11 = local_104[1];
      do {
        iVar19 = local_d0[uVar26 * 2];
        lVar6 = (long)iVar19;
        uVar9 = uVar26 + 1;
        local_104[uVar9] = iVar5 * 2 - (int)(((ulong)(lVar6 * iVar11) >> 0xf) + 1 >> 1);
        if (1 < uVar26) {
          uVar7 = uVar26 - 1;
          local_104[uVar26] =
               (local_104[(int)uVar26 - 2] + iVar11) -
               (int)(((ulong)(local_104[uVar7 & 0xffffffff] * lVar6) >> 0xf) + 1 >> 1);
          if (uVar26 != 2) {
            uVar8 = lVar13 - 1;
            if (3 < uVar8) {
              uVar24 = lVar13 - 2;
              uVar22 = (int)lVar13 - 1;
              bVar4 = uVar24 >> 0x3e == 0;
              if (((((uVar22 != 0) && (uVar24 >> 0x20 == 0)) &&
                   (local_104 + lVar13 + -uVar24 <= local_104 + lVar13)) &&
                  ((bVar4 && (local_104 + (uVar24 & 0xffffffff) + -uVar24 <=
                              local_104 + (uVar24 & 0xffffffff))))) &&
                 ((bVar4 && ((local_104 + uVar22 + -uVar24 <= local_104 + uVar22 && (bVar4)))))) {
                uVar24 = (ulong)((int)lVar13 - 2);
                if ((local_104 + uVar24 + 1 <= local_104 + 2 ||
                     local_104 + uVar26 <= local_104 + (2 - lVar13) + uVar24) &&
                   (local_104 + (ulong)uVar22 + 1 <= local_104 + 2 ||
                    local_104 + uVar26 <= local_104 + (2 - lVar13) + (ulong)uVar22)) {
                  uVar24 = uVar21 & 0xfffffffffffffffc;
                  uVar7 = uVar7 - (uVar8 & 0xfffffffffffffffc);
                  puVar25 = puVar14;
                  uVar22 = uVar20;
                  do {
                    uVar24 = uVar24 - 4;
                    auVar30 = NEON_rev64(*(undefined (*) [16])
                                          ((long)&uStack_110 + (ulong)(uVar22 + 1) * 4),4);
                    auVar30 = NEON_ext(auVar30,auVar30,8,1);
                    uVar34 = (ulong)uVar22;
                    uVar22 = uVar22 - 4;
                    auVar28._4_4_ = (int)(((ulong)(lVar6 * auVar30._4_4_) >> 0xf) + 1 >> 1);
                    auVar28._0_4_ = (int)(((ulong)(lVar6 * auVar30._0_4_) >> 0xf) + 1 >> 1);
                    uVar33 = *(undefined8 *)((long)&uStack_110 + uVar34 * 4);
                    uVar27 = ((ulong)(lVar6 * auVar30._12_4_) >> 0xf) + 1 >> 1;
                    auVar28._12_2_ = (short)uVar27;
                    auVar28._8_4_ = (int)(((ulong)(lVar6 * auVar30._8_4_) >> 0xf) + 1 >> 1);
                    auVar28._14_2_ = (short)(uVar27 >> 0x10);
                    auVar30 = NEON_rev64(auVar28,4);
                    auVar30 = NEON_ext(auVar30,auVar30,8,1);
                    auVar29._0_8_ =
                         CONCAT44(((int)((ulong)uVar33 >> 0x20) + (int)((ulong)*puVar25 >> 0x20)) -
                                  auVar30._4_4_,((int)uVar33 + (int)*puVar25) - auVar30._0_4_);
                    auVar29._8_4_ =
                         ((int)*(undefined8 *)(&stack0xfffffffffffffef8 + uVar34 * 4) +
                         (int)puVar25[1]) - auVar30._8_4_;
                    auVar29._12_4_ =
                         ((int)((ulong)*(undefined8 *)(&stack0xfffffffffffffef8 + uVar34 * 4) >>
                               0x20) + (int)((ulong)puVar25[1] >> 0x20)) - auVar30._12_4_;
                    puVar25[1] = auVar29._8_8_;
                    *puVar25 = auVar29._0_8_;
                    puVar25 = puVar25 + -2;
                  } while (uVar24 != 0);
                  if (uVar8 == (uVar8 & 0xfffffffffffffffc)) goto LAB_00e612b8;
                }
              }
            }
            do {
              local_104[uVar7] =
                   (local_104[(int)uVar7 - 2] + local_104[uVar7]) -
                   (int)(((ulong)(local_104[uVar7 - 1 & 0xffffffff] * lVar6) >> 0xf) + 1 >> 1);
              bVar4 = 2 < (long)uVar7;
              uVar7 = uVar7 - 1;
            } while (bVar4);
          }
        }
LAB_00e612b8:
        local_104[1] = local_104[1] - iVar19;
        if (uVar9 == uVar23) goto LAB_00e6161c;
        iVar5 = local_104[uVar26];
        lVar13 = lVar13 + 1;
        iVar11 = local_104[uVar9];
        uVar21 = uVar21 + 1;
        puVar14 = (undefined8 *)((long)puVar14 + 4);
        uVar20 = uVar20 + 1;
        uVar26 = uVar9;
      } while( true );
    }
  }
  local_104[0] = 0x10000;
  local_138[0] = 0x10000;
  local_138[1] = -local_d0[1];
LAB_00e61464:
  if (1 < (int)param_3) {
    piVar16 = local_138;
    piVar18 = local_104;
    if ((int)uVar23 < 2) {
      uVar23 = 1;
    }
    uVar21 = (ulong)uVar23;
    iVar11 = param_3 - 1;
    puVar10 = local_198;
    iVar5 = local_104[0];
    iVar19 = local_138[0];
    do {
      piVar18 = piVar18 + 1;
      piVar16 = piVar16 + 1;
      iVar1 = *piVar18;
      iVar2 = *piVar16;
      uVar21 = uVar21 - 1;
      iVar5 = iVar5 + iVar1;
      iVar19 = iVar2 - iVar19;
      *puVar10 = -(iVar5 + iVar19);
      local_198[iVar11] = iVar19 - iVar5;
      iVar11 = iVar11 + -1;
      puVar10 = puVar10 + 1;
      iVar5 = iVar1;
      iVar19 = iVar2;
    } while (uVar21 != 0);
  }
  silk_LPC_fit(param_1,local_198,0xc,0x11,param_3);
  iVar5 = silk_LPC_inverse_pred_gain_c(param_1,param_3);
  if (iVar5 == 0) {
    if ((int)param_3 < 1) {
      uVar23 = 0;
      do {
        silk_bwexpander_32(local_198,param_3,(-2 << (ulong)(uVar23 & 0x1f)) + 0x10000);
        iVar5 = silk_LPC_inverse_pred_gain_c(param_1,param_3);
        if (iVar5 != 0) break;
        bVar4 = uVar23 < 0xf;
        uVar23 = uVar23 + 1;
      } while (bVar4);
    }
    else {
      uVar21 = (ulong)param_3;
      uVar26 = uVar21 & 0xfffffff0;
      uVar23 = 0;
      do {
        silk_bwexpander_32(local_198,param_3,(-2 << (ulong)(uVar23 & 0x1f)) + 0x10000);
        uVar9 = uVar26;
        puVar14 = (undefined8 *)(param_1 + 0x10);
        puVar17 = auStack_178;
        if (param_3 < 0x10) {
          uVar9 = 0;
LAB_00e615d0:
          lVar13 = uVar21 - uVar9;
          puVar10 = local_198 + uVar9;
          puVar15 = (undefined2 *)(param_1 + uVar9 * 2);
          do {
            lVar13 = lVar13 + -1;
            *puVar15 = (short)((*puVar10 >> 4) + 1 >> 1);
            puVar10 = puVar10 + 1;
            puVar15 = puVar15 + 1;
          } while (lVar13 != 0);
        }
        else {
          do {
            uVar9 = uVar9 - 0x10;
            uVar8 = puVar17[-3];
            uVar7 = puVar17[-4];
            uVar34 = puVar17[1];
            uVar24 = *puVar17;
            uVar35 = puVar17[3];
            uVar27 = puVar17[2];
            puVar14[-1] = CONCAT26((short)((uint)(puVar17[-1] >> 0x24) + 1 >> 1),
                                   CONCAT24((short)(((uint)(puVar17[-1] >> 4) & 0xfffffff) + 1 >> 1)
                                            ,CONCAT22((short)((uint)(puVar17[-2] >> 0x24) + 1 >> 1),
                                                      (short)(((uint)(puVar17[-2] >> 4) & 0xfffffff)
                                                              + 1 >> 1))));
            puVar14[-2] = CONCAT26((short)((uint)(uVar8 >> 0x24) + 1 >> 1),
                                   CONCAT24((short)(((uint)(uVar8 >> 4) & 0xfffffff) + 1 >> 1),
                                            CONCAT22((short)((uint)(uVar7 >> 0x24) + 1 >> 1),
                                                     (short)(((uint)(uVar7 >> 4) & 0xfffffff) + 1 >>
                                                            1))));
            puVar14[1] = CONCAT26((short)((uint)(uVar35 >> 0x24) + 1 >> 1),
                                  CONCAT24((short)(((uint)(uVar35 >> 4) & 0xfffffff) + 1 >> 1),
                                           CONCAT22((short)((uint)(uVar27 >> 0x24) + 1 >> 1),
                                                    (short)(((uint)(uVar27 >> 4) & 0xfffffff) + 1 >>
                                                           1))));
            *puVar14 = CONCAT26((short)((uint)(uVar34 >> 0x24) + 1 >> 1),
                                CONCAT24((short)(((uint)(uVar34 >> 4) & 0xfffffff) + 1 >> 1),
                                         CONCAT22((short)((uint)(uVar24 >> 0x24) + 1 >> 1),
                                                  (short)(((uint)(uVar24 >> 4) & 0xfffffff) + 1 >> 1
                                                         ))));
            puVar14 = puVar14 + 4;
            puVar17 = puVar17 + 8;
          } while (uVar9 != 0);
          uVar9 = uVar26;
          if (uVar26 != uVar21) goto LAB_00e615d0;
        }
        iVar5 = silk_LPC_inverse_pred_gain_c(param_1,param_3);
      } while ((iVar5 == 0) && (bVar4 = uVar23 < 0xf, uVar23 = uVar23 + 1, bVar4));
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00e6161c:
  lVar13 = 0;
  iVar5 = 0x10000;
  local_138[1] = -local_d0[1];
  puVar14 = &uStack_144;
  uVar21 = 0xffffffffffffffff;
  uVar20 = 0xfffffffe;
  local_138[0] = 0x10000;
  uVar26 = 1;
  iVar11 = local_138[1];
  do {
    iVar19 = local_d0[uVar26 * 2 + 1];
    lVar6 = (long)iVar19;
    uVar9 = uVar26 + 1;
    local_138[uVar9] = iVar5 * 2 - (int)(((ulong)(lVar6 * iVar11) >> 0xf) + 1 >> 1);
    if (1 < uVar26) {
      uVar7 = uVar26 - 1;
      local_138[uVar26] =
           (local_138[(int)uVar26 - 2] + iVar11) -
           (int)(((ulong)(local_138[uVar7 & 0xffffffff] * lVar6) >> 0xf) + 1 >> 1);
      if (uVar26 != 2) {
        uVar8 = lVar13 - 1;
        if (3 < uVar8) {
          uVar24 = lVar13 - 2;
          uVar22 = (int)lVar13 - 1;
          bVar4 = uVar24 >> 0x3e == 0;
          if ((((uVar22 != 0) && (uVar24 >> 0x20 == 0)) &&
              (local_138 + lVar13 + -uVar24 <= local_138 + lVar13)) &&
             (((bVar4 && (local_138 + (uVar24 & 0xffffffff) + -uVar24 <=
                          local_138 + (uVar24 & 0xffffffff))) &&
              ((bVar4 && ((local_138 + uVar22 + -uVar24 <= local_138 + uVar22 && (bVar4)))))))) {
            uVar24 = (ulong)((int)lVar13 - 2);
            if ((local_138 + uVar24 + 1 <= local_138 + 2 ||
                 local_138 + uVar26 <= local_138 + (2 - lVar13) + uVar24) &&
               (local_138 + (ulong)uVar22 + 1 <= local_138 + 2 ||
                local_138 + uVar26 <= local_138 + (2 - lVar13) + (ulong)uVar22)) {
              uVar24 = uVar21 & 0xfffffffffffffffc;
              uVar7 = uVar7 - (uVar8 & 0xfffffffffffffffc);
              puVar25 = puVar14;
              uVar22 = uVar20;
              do {
                uVar24 = uVar24 - 4;
                auVar30 = NEON_rev64(*(undefined (*) [16])
                                      ((long)&uStack_144 + (ulong)(uVar22 + 1) * 4),4);
                auVar30 = NEON_ext(auVar30,auVar30,8,1);
                uVar34 = (ulong)uVar22;
                uVar22 = uVar22 - 4;
                auVar31._4_4_ = (int)(((ulong)(lVar6 * auVar30._4_4_) >> 0xf) + 1 >> 1);
                auVar31._0_4_ = (int)(((ulong)(lVar6 * auVar30._0_4_) >> 0xf) + 1 >> 1);
                uVar33 = *(undefined8 *)((long)&uStack_144 + uVar34 * 4);
                uVar27 = ((ulong)(lVar6 * auVar30._12_4_) >> 0xf) + 1 >> 1;
                auVar31._12_2_ = (short)uVar27;
                auVar31._8_4_ = (int)(((ulong)(lVar6 * auVar30._8_4_) >> 0xf) + 1 >> 1);
                auVar31._14_2_ = (short)(uVar27 >> 0x10);
                auVar30 = NEON_rev64(auVar31,4);
                auVar30 = NEON_ext(auVar30,auVar30,8,1);
                auVar32._0_8_ =
                     CONCAT44(((int)((ulong)uVar33 >> 0x20) + (int)((ulong)*puVar25 >> 0x20)) -
                              auVar30._4_4_,((int)uVar33 + (int)*puVar25) - auVar30._0_4_);
                auVar32._8_4_ =
                     ((int)*(undefined8 *)(&stack0xfffffffffffffec4 + uVar34 * 4) + (int)puVar25[1])
                     - auVar30._8_4_;
                auVar32._12_4_ =
                     ((int)((ulong)*(undefined8 *)(&stack0xfffffffffffffec4 + uVar34 * 4) >> 0x20) +
                     (int)((ulong)puVar25[1] >> 0x20)) - auVar30._12_4_;
                puVar25[1] = auVar32._8_8_;
                *puVar25 = auVar32._0_8_;
                puVar25 = puVar25 + -2;
              } while (uVar24 != 0);
              if (uVar8 == (uVar8 & 0xfffffffffffffffc)) goto LAB_00e61718;
            }
          }
        }
        do {
          local_138[uVar7] =
               (local_138[(int)uVar7 - 2] + local_138[uVar7]) -
               (int)(((ulong)(local_138[uVar7 - 1 & 0xffffffff] * lVar6) >> 0xf) + 1 >> 1);
          bVar4 = 2 < (long)uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar4);
      }
    }
LAB_00e61718:
    local_138[1] = local_138[1] - iVar19;
    if (uVar9 == uVar23) goto LAB_00e61464;
    iVar5 = local_138[uVar26];
    lVar13 = lVar13 + 1;
    iVar11 = local_138[uVar9];
    uVar21 = uVar21 + 1;
    puVar14 = (undefined8 *)((long)puVar14 + 4);
    uVar20 = uVar20 + 1;
    uVar26 = uVar9;
  } while( true );
}


