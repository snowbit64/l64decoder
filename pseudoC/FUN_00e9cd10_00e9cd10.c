// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e9cd10
// Entry Point: 00e9cd10
// Size: 1656 bytes
// Signature: undefined FUN_00e9cd10(void)


/* WARNING: Removing unreachable block (ram,0x00e9cf6c) */

bool FUN_00e9cd10(int *param_1,ulong param_2,uint param_3,undefined2 *param_4,undefined4 *param_5,
                 int param_6,undefined4 *param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined auVar5 [16];
  long lVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  short *psVar20;
  undefined (*pauVar21) [16];
  long lVar22;
  long lVar23;
  int iVar24;
  int *piVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  bool bVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined4 *local_120;
  int local_114;
  long local_110;
  undefined2 *puStack_108;
  short *local_100;
  long local_f8;
  undefined (*local_f0) [16];
  long local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  undefined4 *local_b0;
  long local_a8;
  ulong local_a0;
  int local_98;
  int local_94;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  int local_74;
  long local_70;
  
  local_b0 = param_5;
  lVar16 = tpidr_el0;
  local_70 = *(long *)(lVar16 + 0x28);
  lVar6 = -((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + 0xf &
           0xfffffffffffffff0);
  puVar31 = (undefined8 *)(&stack0xfffffffffffffee8 + lVar6 + -8);
  uVar14 = 4;
  if (param_6 != 0) {
    uVar14 = 5;
  }
  iVar10 = (int)param_2;
  iVar11 = iVar10;
  if (iVar10 < 0) {
    iVar11 = iVar10 + 1;
  }
  *param_7 = 0;
  if ((int)param_3 < 1) {
    iVar11 = 0;
    bVar29 = false;
  }
  else {
    uVar12 = iVar11 >> 1;
    lVar30 = (long)(int)(uVar12 - 5);
    local_110 = lVar16;
    puStack_108 = param_4;
    lVar16 = lVar30;
    if (lVar30 < 0x11) {
      lVar16 = 0x10;
    }
    local_e0 = (lVar16 - 0xdU >> 2) + 1;
    local_98 = uVar12 * 6 + -0x66;
    local_94 = (int)(uVar12 << 0xf) >> 0x10;
    local_d0 = local_e0 & 0x7ffffffffffffffe;
    uVar13 = 0;
    iVar11 = 0;
    local_a0 = (ulong)param_3;
    local_c0 = lVar16 - 0xdU;
    local_b8 = (ulong)uVar12;
    local_d8 = param_2 & 0xfffffff0;
    local_114 = param_6;
    local_a8 = (long)iVar10 << 2;
    local_120 = param_7;
    local_c4 = uVar12 << 0x14;
    local_f0 = (undefined (*) [16])((long)&local_110 + lVar6);
    local_e8 = local_d0 * 4 + 0xc;
    local_90 = param_2;
    local_88 = param_2 & 0xffffffff;
    local_100 = (short *)((long)&local_100 + lVar6);
    local_f8 = (ulong)uVar12 + 1;
    do {
      uVar12 = (uint)local_90;
      if ((int)uVar12 < 1) {
        *puVar31 = 0;
        *(undefined8 *)(&stack0xfffffffffffffee8 + lVar6) = 0;
        *(undefined8 *)((long)&local_110 + lVar6) = 0;
        uVar17 = 0xe;
LAB_00e9cf88:
        if (0 < (int)uVar12) {
          uVar27 = local_d8;
          pauVar21 = local_f0;
          if (uVar12 < 0x10) {
            uVar27 = 0;
          }
          else {
            do {
              auVar33 = pauVar21[-1];
              auVar36 = *pauVar21;
              uVar27 = uVar27 - 0x10;
              auVar37._2_2_ = 0;
              auVar37._0_2_ = auVar33._8_2_;
              auVar37._4_2_ = auVar33._10_2_;
              auVar37._6_2_ = 0;
              auVar37._8_2_ = auVar33._12_2_;
              auVar37._10_2_ = 0;
              auVar37._12_2_ = auVar33._14_2_;
              auVar37._14_2_ = 0;
              auVar32._2_2_ = 0;
              auVar32._0_2_ = auVar33._0_2_;
              auVar32._4_2_ = auVar33._2_2_;
              auVar32._6_2_ = 0;
              auVar32._8_2_ = auVar33._4_2_;
              auVar32._10_2_ = 0;
              auVar32._12_2_ = auVar33._6_2_;
              auVar32._14_2_ = 0;
              auVar39._2_2_ = 0;
              auVar39._0_2_ = auVar36._8_2_;
              auVar39._4_2_ = auVar36._10_2_;
              auVar39._6_2_ = 0;
              auVar39._8_2_ = auVar36._12_2_;
              auVar39._10_2_ = 0;
              auVar39._12_2_ = auVar36._14_2_;
              auVar39._14_2_ = 0;
              auVar35._2_2_ = 0;
              auVar35._0_2_ = auVar36._0_2_;
              auVar35._4_2_ = auVar36._2_2_;
              auVar35._6_2_ = 0;
              auVar35._8_2_ = auVar36._4_2_;
              auVar35._10_2_ = 0;
              auVar35._12_2_ = auVar36._6_2_;
              auVar35._14_2_ = 0;
              auVar33._4_4_ = uVar17;
              auVar33._0_4_ = uVar17;
              auVar33._8_4_ = uVar17;
              auVar33._12_4_ = uVar17;
              auVar38 = NEON_ushl(auVar37,auVar33,4);
              auVar36._4_4_ = uVar17;
              auVar36._0_4_ = uVar17;
              auVar36._8_4_ = uVar17;
              auVar36._12_4_ = uVar17;
              auVar33 = NEON_ushl(auVar32,auVar36,4);
              auVar40._4_4_ = uVar17;
              auVar40._0_4_ = uVar17;
              auVar40._8_4_ = uVar17;
              auVar40._12_4_ = uVar17;
              auVar40 = NEON_ushl(auVar39,auVar40,4);
              auVar5._4_4_ = uVar17;
              auVar5._0_4_ = uVar17;
              auVar5._8_4_ = uVar17;
              auVar5._12_4_ = uVar17;
              auVar36 = NEON_ushl(auVar35,auVar5,4);
              auVar34._0_8_ =
                   CONCAT26(auVar33._12_2_,
                            CONCAT24(auVar33._8_2_,CONCAT22(auVar33._4_2_,auVar33._0_2_)));
              auVar34._8_2_ = auVar38._0_2_;
              auVar34._10_2_ = auVar38._4_2_;
              auVar34._12_2_ = auVar38._8_2_;
              auVar34._14_2_ = auVar38._12_2_;
              auVar38._0_8_ =
                   CONCAT26(auVar36._12_2_,
                            CONCAT24(auVar36._8_2_,CONCAT22(auVar36._4_2_,auVar36._0_2_)));
              auVar38._8_2_ = auVar40._0_2_;
              auVar38._10_2_ = auVar40._4_2_;
              auVar38._12_2_ = auVar40._8_2_;
              auVar38._14_2_ = auVar40._12_2_;
              *(long *)(pauVar21[-1] + 8) = auVar34._8_8_;
              *(undefined8 *)pauVar21[-1] = auVar34._0_8_;
              *(long *)(*pauVar21 + 8) = auVar38._8_8_;
              *(undefined8 *)*pauVar21 = auVar38._0_8_;
              pauVar21 = pauVar21 + 2;
            } while (uVar27 != 0);
            uVar27 = local_d8;
            if (local_d8 == local_88) goto LAB_00e9d01c;
          }
          lVar16 = local_88 - uVar27;
          psVar20 = (short *)((long)puVar31 + uVar27 * 2);
          do {
            lVar16 = lVar16 + -1;
            *psVar20 = *psVar20 << (ulong)(uVar17 & 0x1f);
            psVar20 = psVar20 + 1;
          } while (lVar16 != 0);
        }
      }
      else {
        iVar10 = 0;
        iVar24 = 0;
        uVar27 = local_88;
        puVar19 = puVar31;
        piVar25 = param_1;
        do {
          iVar2 = *piVar25 >> 0xc;
          iVar18 = iVar2 + iVar10;
          iVar3 = iVar18 + 2 >> 2;
          if (iVar3 < -0x7ffe) {
            iVar3 = -0x7fff;
          }
          iVar10 = iVar18 + iVar24 + iVar2 * -2;
          uVar9 = 0x7fff;
          if (iVar18 < 0x1fffe) {
            uVar9 = (short)iVar3;
          }
          iVar24 = iVar2 - (iVar18 >> 1);
          uVar27 = uVar27 - 1;
          *(undefined2 *)puVar19 = uVar9;
          puVar19 = (undefined8 *)((long)puVar19 + 2);
          piVar25 = piVar25 + 1;
        } while (uVar27 != 0);
        *puVar31 = 0;
        *(undefined8 *)(&stack0xfffffffffffffee8 + lVar6) = 0;
        *(undefined8 *)((long)&local_110 + lVar6) = 0;
        if ((int)uVar12 < 1) {
LAB_00e9cf5c:
          uVar17 = 0xe;
          goto LAB_00e9cf88;
        }
        uVar15 = 0;
        uVar17 = 0;
        puVar19 = puVar31;
        uVar27 = local_88;
        do {
          uVar26 = (uint)*(short *)puVar19;
          if ((int)uVar17 <= (int)*(short *)puVar19) {
            uVar17 = uVar26;
          }
          if ((int)uVar26 <= (int)uVar15) {
            uVar15 = uVar26;
          }
          uVar17 = uVar17 & 0xffff;
          uVar27 = uVar27 - 1;
          puVar19 = (undefined8 *)((long)puVar19 + 2);
        } while (uVar27 != 0);
        if (uVar17 == -uVar15 || (int)(uVar17 + uVar15) < 0 != SBORROW4(uVar17,-uVar15)) {
          uVar17 = -uVar15;
        }
        if (uVar17 == 0) goto LAB_00e9cf5c;
        uVar15 = 0;
        uVar17 = 0;
        puVar19 = puVar31;
        uVar27 = local_88;
        do {
          uVar26 = (uint)*(short *)puVar19;
          if ((int)uVar17 <= (int)*(short *)puVar19) {
            uVar17 = uVar26;
          }
          if ((int)uVar26 <= (int)uVar15) {
            uVar15 = uVar26;
          }
          uVar17 = uVar17 & 0xffff;
          uVar27 = uVar27 - 1;
          puVar19 = (undefined8 *)((long)puVar19 + 2);
        } while (uVar27 != 0);
        if (uVar17 == -uVar15 || (int)(uVar17 + uVar15) < 0 != SBORROW4(uVar17,-uVar15)) {
          uVar17 = -uVar15;
        }
        uVar17 = (int)LZCOUNT(uVar17) - 0x11;
        if (uVar17 != 0) goto LAB_00e9cf88;
      }
LAB_00e9d01c:
      local_74 = iVar11;
      local_80 = uVar13;
      if ((int)uVar12 < 2) {
        iVar11 = 0;
LAB_00e9d0e0:
        iVar10 = 0;
      }
      else {
        lVar16 = 0;
        iVar10 = 0;
        iVar11 = 0;
        uVar13 = local_b8;
        do {
          psVar20 = (short *)((long)puVar31 + lVar16 * 2);
          uVar13 = uVar13 - 1;
          iVar18 = (int)psVar20[1];
          iVar24 = (int)*psVar20;
          uVar17 = iVar18 * iVar18 + iVar24 * iVar24 + 0x8000U >> 0x10;
          iVar11 = uVar17 + iVar11;
          sVar7 = (short)((int)((((uint)(1 << (ulong)uVar14) >> 1) - iVar10) + uVar17) >> uVar14) +
                  (short)iVar10;
          iVar10 = (int)sVar7;
          *(short *)((long)puVar31 + lVar16) = sVar7;
          lVar16 = lVar16 + 2;
        } while (uVar13 != 0);
        if ((int)uVar12 < 2) goto LAB_00e9d0e0;
        iVar24 = 0;
        iVar10 = 0;
        lVar16 = local_f8;
        do {
          iVar18 = (int)lVar16;
          lVar16 = lVar16 + -1;
          lVar22 = (ulong)(iVar18 - 2) * 2;
          sVar7 = (short)iVar24 + (short)((*(short *)((long)puVar31 + lVar22) - iVar24) + 4U >> 3);
          iVar24 = (int)sVar7;
          *(short *)((long)puVar31 + lVar22) = sVar7;
          if (iVar10 <= iVar24) {
            iVar10 = iVar24;
          }
        } while (1 < lVar16);
      }
      sVar7 = celt_sqrt(iVar11);
      sVar8 = celt_sqrt(iVar10 * local_94);
      param_4 = puStack_108;
      lVar16 = local_110;
      if ((int)local_90 < 0x24) {
        iVar11 = 0;
      }
      else {
        iVar11 = ((int)sVar8 * (int)sVar7 >> 1) + 1;
        iVar10 = 0;
        if (iVar11 != 0) {
          iVar10 = local_c4 / iVar11;
        }
        iVar11 = 0;
        lVar22 = (long)iVar10;
        if (local_c0 < 4) {
          lVar23 = 0xc;
        }
        else {
          iVar10 = 0;
          uVar13 = local_d0;
          psVar20 = local_100;
          do {
            uVar27 = (short)(psVar20[-4] + 1) * lVar22;
            uVar28 = (short)(*psVar20 + 1) * lVar22;
            iVar24 = (int)(uVar27 >> 0xf);
            lVar23 = 0x7f;
            if (iVar24 < 0x80) {
              lVar23 = (long)(uVar27 * 0x20000) >> 0x20;
            }
            iVar18 = (int)(uVar28 >> 0xf);
            lVar1 = 0x7f;
            if (iVar18 < 0x80) {
              lVar1 = (long)(uVar28 * 0x20000) >> 0x20;
            }
            lVar4 = 0;
            if (-1 < iVar24) {
              lVar4 = lVar23;
            }
            lVar23 = 0;
            if (-1 < iVar18) {
              lVar23 = lVar1;
            }
            uVar13 = uVar13 - 2;
            iVar11 = iVar11 + (uint)(byte)(&DAT_00569221)[lVar4];
            iVar10 = iVar10 + (uint)(byte)(&DAT_00569221)[lVar23];
            psVar20 = psVar20 + 8;
          } while (uVar13 != 0);
          iVar11 = iVar10 + iVar11;
          lVar23 = local_e8;
          if (local_e0 == local_d0) goto LAB_00e9d244;
        }
        do {
          lVar1 = lVar23 + 4;
          uVar13 = (short)(*(short *)((long)puVar31 + lVar23 * 2) + 1) * lVar22;
          iVar10 = (int)(uVar13 >> 0xf);
          lVar23 = 0x7f;
          if (iVar10 < 0x80) {
            lVar23 = (long)(uVar13 * 0x20000) >> 0x20;
          }
          lVar4 = 0;
          if (-1 < iVar10) {
            lVar4 = lVar23;
          }
          iVar11 = iVar11 + (uint)(byte)(&DAT_00569221)[lVar4];
          lVar23 = lVar1;
        } while (lVar1 < lVar30);
      }
LAB_00e9d244:
      iVar10 = 0;
      if (local_98 != 0) {
        iVar10 = (iVar11 << 8) / local_98;
      }
      iVar11 = local_74;
      if (local_74 < iVar10) {
        *local_b0 = (int)local_80;
        iVar11 = iVar10;
      }
      uVar13 = local_80 + 1;
      param_1 = (int *)((long)param_1 + local_a8);
    } while (uVar13 != local_a0);
    bVar29 = 200 < iVar11;
    if (local_114 == 0) {
      iVar11 = iVar11 * 0x1b;
      iVar10 = celt_sqrt(iVar11);
      goto joined_r0x00e9d2f0;
    }
    if ((200 < iVar11) && (iVar11 < 600)) {
      bVar29 = false;
      *local_120 = 1;
      iVar11 = iVar11 * 0x1b;
      iVar10 = celt_sqrt(iVar11);
      goto joined_r0x00e9d2f0;
    }
  }
  iVar11 = iVar11 * 0x1b;
  iVar10 = celt_sqrt(iVar11);
joined_r0x00e9d2f0:
  if (iVar10 < 0x2a) {
    iVar11 = 0;
  }
  else {
    iVar11 = celt_sqrt(iVar11);
    iVar11 = iVar11 * 0x10000 + -0x2a0000;
    if (iVar11 < 0xa30000) {
      iVar11 = iVar11 >> 0x10;
    }
    else {
      iVar11 = 0xa3;
    }
  }
  iVar10 = 0;
  if (0x239580f < iVar11 * 0x1c4000) {
    iVar10 = iVar11 * 0x1c4000 + -0x2395810;
  }
  uVar9 = celt_sqrt(iVar10);
  *param_4 = uVar9;
  if (*(long *)(lVar16 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar29;
}


