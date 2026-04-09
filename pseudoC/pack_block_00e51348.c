// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pack_block
// Entry Point: 00e51348
// Size: 1184 bytes
// Signature: undefined __cdecl pack_block(uint * param_1, astc_block * param_2)


/* pack_block(unsigned int*, astc_block*) */

void pack_block(uint *param_1,astc_block *param_2)

{
  undefined (*pauVar1) [16];
  int iVar2;
  uint uVar3;
  int iVar4;
  astc_block aVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined (*pauVar12) [16];
  ulong uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined auVar19 [12];
  undefined auVar20 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  int iVar24;
  int iVar25;
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  undefined auVar21 [16];
  undefined auVar26 [12];
  undefined auVar27 [16];
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar7 = pack_block_mode(param_2);
  *param_1 = *param_1 | uVar7;
  aVar5 = param_2[8];
  lVar11 = (long)*(int *)(param_2 + 0xc) * 0xc;
  iVar15 = 1;
  if (aVar5 != (astc_block)0x0) {
    iVar15 = 2;
  }
  iVar15 = *(int *)(param_2 + 4) * *(int *)param_2 * iVar15;
  iVar17 = *(int *)(range_table + lVar11);
  iVar2 = iVar15 * *(int *)(range_table + lVar11 + 8) * 7 + 2;
  uVar7 = *(int *)(param_2 + 0x54) * 8 - 8U | *(uint *)((long)param_1 + 1);
  iVar24 = (int)((ulong)((long)(int)(iVar15 * *(int *)(range_table + lVar11 + 4) * 8 | 4) *
                        -0x66666667) >> 0x20);
  *(uint *)((long)param_1 + 1) = uVar7;
  iVar2 = (int)((ulong)((long)iVar2 * 0x55555555) >> 0x20) - iVar2;
  iVar2 = (((iVar24 >> 1) - (iVar24 >> 0x1f)) - iVar15 * iVar17) + ((iVar2 >> 1) - (iVar2 >> 0x1f));
  if (*(int *)(param_2 + 0x54) < 2) {
    iVar17 = 0;
    iVar18 = 0x11;
    iVar24 = 0x11;
    *(uint *)((long)param_1 + 1) = uVar7 | *(int *)(param_2 + 100) << 5;
  }
  else {
    *(uint *)((long)param_1 + 1) = uVar7 | *(int *)(param_2 + 0x58) << 5;
    uVar7 = *(uint *)(param_2 + 0x54);
    uVar8 = (ulong)uVar7;
    if ((int)uVar7 < 1) {
      uVar9 = 3;
LAB_00e515b0:
      iVar17 = iVar2 + uVar7 * -3;
      uVar16 = iVar17 + 0x84;
      uVar3 = iVar17 + 0x8b;
      if (-1 < (int)uVar16) {
        uVar3 = uVar16;
      }
      lVar11 = (long)((ulong)uVar3 << 0x20) >> 0x23;
      iVar17 = uVar7 * 3 + -4;
      *(uint *)((long)param_1 + lVar11) =
           *(uint *)((long)param_1 + lVar11) | ((int)uVar9 >> 6) << (ulong)(uVar16 & 7);
    }
    else {
      if (uVar7 < 8) {
        uVar10 = 0;
        iVar24 = 0;
        iVar17 = 0x10;
LAB_00e514e8:
        lVar11 = uVar8 - uVar10;
        piVar14 = (int *)(param_2 + uVar10 * 4 + 100);
        iVar18 = iVar24;
        iVar25 = iVar17;
        do {
          iVar24 = *piVar14;
          iVar17 = iVar24;
          if (iVar25 <= iVar24) {
            iVar17 = iVar25;
          }
          if (iVar24 <= iVar18) {
            iVar24 = iVar18;
          }
          lVar11 = lVar11 + -1;
          piVar14 = piVar14 + 1;
          iVar18 = iVar24;
          iVar25 = iVar17;
        } while (lVar11 != 0);
      }
      else {
        uVar10 = uVar8 & 0xfffffff8;
        pauVar12 = (undefined (*) [16])(param_2 + 0x74);
        auVar22 = ZEXT816(0);
        auVar20._8_4_ = 0x10;
        auVar20._0_8_ = 0x1000000010;
        auVar20._12_4_ = 0x10;
        auVar28._8_4_ = 0x10;
        auVar28._0_8_ = 0x1000000010;
        auVar28._12_4_ = 0x10;
        auVar29 = ZEXT816(0);
        uVar13 = uVar10;
        do {
          pauVar1 = pauVar12 + -1;
          auVar21 = *pauVar12;
          pauVar12 = pauVar12 + 2;
          uVar13 = uVar13 - 8;
          auVar20 = NEON_smin(*pauVar1,auVar20,4);
          auVar22 = NEON_smax(auVar22,*pauVar1,4);
          auVar28 = NEON_smin(auVar21,auVar28,4);
          auVar29 = NEON_smax(auVar29,auVar21,4);
        } while (uVar13 != 0);
        auVar22 = NEON_smax(auVar22,auVar29,4);
        auVar20 = NEON_smin(auVar20,auVar28,4);
        iVar24 = NEON_smaxv(auVar22,4);
        iVar17 = NEON_sminv(auVar20,4);
        if (uVar10 != uVar8) goto LAB_00e514e8;
      }
      iVar18 = *(int *)(param_2 + 100);
      if (iVar24 != iVar17) {
        iVar24 = iVar17 + 3;
        if (-1 < iVar17) {
          iVar24 = iVar17;
        }
        iVar24 = iVar24 >> 2;
        if (1 < iVar24) {
          iVar24 = 2;
        }
        uVar9 = iVar24 + 1;
        if (0 < (int)uVar7) {
          lVar11 = 0;
          uVar16 = uVar7;
          while( true ) {
            uVar16 = uVar16 + 2;
            iVar17 = iVar18 + 3;
            if (-1 < iVar18) {
              iVar17 = iVar18;
            }
            uVar9 = iVar18 % 4 << (ulong)(uVar16 & 0x1f) | uVar9 |
                    ((iVar17 >> 2) - (uVar9 & 3)) + 1 << (ulong)((int)lVar11 + 2U & 0x1f);
            if (uVar8 - 1 == lVar11) break;
            iVar18 = *(int *)(param_2 + lVar11 * 4 + 0x68);
            lVar11 = lVar11 + 1;
          }
        }
        goto LAB_00e515b0;
      }
      iVar17 = 0;
      uVar9 = iVar18 << 2;
    }
    iVar18 = 0x1d;
    iVar24 = 0x1d;
    *(uint *)((long)param_1 + 2) = (uVar9 & 0x3f) << 7 | *(uint *)((long)param_1 + 2);
  }
  if (aVar5 != (astc_block)0x0) {
    iVar24 = iVar2 - iVar17;
    uVar7 = iVar24 + 0x7e;
    iVar17 = iVar17 + 2;
    uVar9 = iVar24 + 0x85;
    if (-1 < (int)uVar7) {
      uVar9 = uVar7;
    }
    lVar11 = (long)((ulong)uVar9 << 0x20) >> 0x23;
    *(uint *)((long)param_1 + lVar11) =
         *(int *)(param_2 + 0x50) << (ulong)(uVar7 & 7) | *(uint *)((long)param_1 + lVar11);
    iVar24 = iVar18;
  }
  uVar7 = *(uint *)(param_2 + 0x54);
  uVar8 = (ulong)uVar7;
  if ((int)uVar7 < 1) {
    iVar18 = 0;
  }
  else {
    if (uVar7 < 8) {
      uVar10 = 0;
      iVar18 = 0;
    }
    else {
      uVar10 = uVar8 & 0xfffffff8;
      pauVar12 = (undefined (*) [16])(param_2 + 0x74);
      auVar22 = ZEXT816(0);
      auVar29 = ZEXT816(0);
      uVar13 = uVar10;
      do {
        auVar20 = pauVar12[-1];
        auVar28 = *pauVar12;
        iVar18 = CONCAT13(~auVar22[3],CONCAT12(~auVar22[2],CONCAT11(~auVar22[1],~auVar22[0])));
        auVar19._0_8_ =
             CONCAT17(~auVar22[7],
                      CONCAT16(~auVar22[6],CONCAT15(~auVar22[5],CONCAT14(~auVar22[4],iVar18))));
        auVar19[8] = ~auVar22[8];
        auVar19[9] = ~auVar22[9];
        auVar19[10] = ~auVar22[10];
        auVar19[11] = ~auVar22[11];
        auVar21[12] = ~auVar22[12];
        auVar21._0_12_ = auVar19;
        auVar21[13] = ~auVar22[13];
        auVar21[14] = ~auVar22[14];
        auVar21[15] = ~auVar22[15];
        pauVar12 = pauVar12 + 2;
        iVar25 = CONCAT13(~auVar29[3],CONCAT12(~auVar29[2],CONCAT11(~auVar29[1],~auVar29[0])));
        auVar26._0_8_ =
             CONCAT17(~auVar29[7],
                      CONCAT16(~auVar29[6],CONCAT15(~auVar29[5],CONCAT14(~auVar29[4],iVar25))));
        auVar26[8] = ~auVar29[8];
        auVar26[9] = ~auVar29[9];
        auVar26[10] = ~auVar29[10];
        auVar26[11] = ~auVar29[11];
        auVar27[12] = ~auVar29[12];
        auVar27._0_12_ = auVar26;
        auVar27[13] = ~auVar29[13];
        auVar27[14] = ~auVar29[14];
        auVar27[15] = ~auVar29[15];
        uVar13 = uVar13 - 8;
        auVar29 = NEON_cmlt(auVar20,0,4);
        auVar30 = NEON_cmlt(auVar28,0,4);
        auVar22._0_4_ = ((int)(auVar20._0_4_ + (auVar29._0_4_ >> 0x1e)) >> 2) - iVar18;
        auVar22._4_4_ =
             ((int)(auVar20._4_4_ + (auVar29._4_4_ >> 0x1e)) >> 2) -
             (int)((ulong)auVar19._0_8_ >> 0x20);
        auVar22._8_4_ = ((int)(auVar20._8_4_ + (auVar29._8_4_ >> 0x1e)) >> 2) - auVar19._8_4_;
        auVar22._12_4_ = ((int)(auVar20._12_4_ + (auVar29._12_4_ >> 0x1e)) >> 2) - auVar21._12_4_;
        auVar29._0_4_ = ((int)(auVar28._0_4_ + (auVar30._0_4_ >> 0x1e)) >> 2) - iVar25;
        auVar29._4_4_ =
             ((int)(auVar28._4_4_ + (auVar30._4_4_ >> 0x1e)) >> 2) -
             (int)((ulong)auVar26._0_8_ >> 0x20);
        auVar29._8_4_ = ((int)(auVar28._8_4_ + (auVar30._8_4_ >> 0x1e)) >> 2) - auVar26._8_4_;
        auVar29._12_4_ = ((int)(auVar28._12_4_ + (auVar30._12_4_ >> 0x1e)) >> 2) - auVar27._12_4_;
      } while (uVar13 != 0);
      iVar18 = auVar29._0_4_ + auVar22._0_4_ + auVar29._4_4_ + auVar22._4_4_ +
               auVar29._8_4_ + auVar22._8_4_ + auVar29._12_4_ + auVar22._12_4_;
      if (uVar10 == uVar8) goto LAB_00e516f0;
    }
    lVar11 = uVar8 - uVar10;
    piVar14 = (int *)(param_2 + uVar10 * 4 + 100);
    do {
      iVar4 = *piVar14;
      iVar25 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar25 = iVar4;
      }
      lVar11 = lVar11 + -1;
      iVar18 = iVar18 + (iVar25 >> 2) + 1;
      piVar14 = piVar14 + 1;
    } while (lVar11 != 0);
  }
LAB_00e516f0:
  uVar7 = 0x15;
  do {
    uVar7 = uVar7 - 1;
    lVar11 = (ulong)uVar7 * 0xc;
    if ((int)(iVar18 * 0x10 * *(int *)(range_table + lVar11 + 4) | 4U) / 5 +
        iVar18 * 2 * *(int *)(range_table + lVar11) +
        (iVar18 * 0xe * *(int *)(range_table + lVar11 + 8) + 2) / 3 <=
        (iVar2 - (iVar24 + iVar17)) + 0x80) goto LAB_00e51778;
  } while (1 < uVar7);
  uVar7 = 0xffffffff;
LAB_00e51778:
  pack_integer_sequence(param_1,(uchar *)(param_2 + 0x78),iVar24,iVar18 * 2,uVar7);
  local_50 = 0;
  uStack_48 = 0;
  pack_integer_sequence
            ((uint *)&local_50,(uchar *)(param_2 + 0x10),0,iVar15,*(int *)(param_2 + 0xc));
  auVar30._8_8_ = uStack_48;
  auVar30._0_8_ = local_50;
  auVar20 = *(undefined (*) [16])param_1;
  auVar22 = NEON_rev32(auVar30,1);
  auVar22 = NEON_rbit(auVar22,1);
  auVar22 = NEON_rev64(auVar22,4);
  auVar22 = NEON_ext(auVar22,auVar22,8,1);
  auVar23._0_8_ =
       CONCAT17(auVar20[7] | auVar22[7],
                CONCAT16(auVar20[6] | auVar22[6],
                         CONCAT15(auVar20[5] | auVar22[5],
                                  CONCAT14(auVar20[4] | auVar22[4],
                                           CONCAT13(auVar20[3] | auVar22[3],
                                                    CONCAT12(auVar20[2] | auVar22[2],
                                                             CONCAT11(auVar20[1] | auVar22[1],
                                                                      auVar20[0] | auVar22[0])))))))
  ;
  auVar23[8] = auVar20[8] | auVar22[8];
  auVar23[9] = auVar20[9] | auVar22[9];
  auVar23[10] = auVar20[10] | auVar22[10];
  auVar23[11] = auVar20[11] | auVar22[11];
  auVar23[12] = auVar20[12] | auVar22[12];
  auVar23[13] = auVar20[13] | auVar22[13];
  auVar23[14] = auVar20[14] | auVar22[14];
  auVar23[15] = auVar20[15] | auVar22[15];
  *(long *)(param_1 + 2) = auVar23._8_8_;
  *(undefined8 *)param_1 = auVar23._0_8_;
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


