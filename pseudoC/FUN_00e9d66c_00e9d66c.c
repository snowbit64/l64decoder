// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e9d66c
// Entry Point: 00e9d66c
// Size: 652 bytes
// Signature: undefined FUN_00e9d66c(void)


void FUN_00e9d66c(long param_1,short *param_2,ulong param_3,uint param_4,uint param_5)

{
  undefined (*pauVar1) [16];
  uint uVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  undefined (*pauVar8) [16];
  ulong uVar9;
  short *psVar10;
  int iVar11;
  long lVar12;
  undefined2 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined (*pauVar18) [16];
  undefined (*pauVar19) [16];
  short *psVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  short local_6c [10];
  undefined auStack_58 [32];
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  iVar11 = (int)*param_2;
  iVar7 = (int)param_3;
  if (param_5 == 1) {
    local_6c[0] = *param_2;
    if (1 < (int)param_4) {
      lVar15 = (ulong)param_4 - 1;
      puVar13 = (undefined2 *)((ulong)local_6c | 2);
      psVar10 = param_2 + 1;
      do {
        iVar11 = (short)iVar11 + -0x400;
        if (iVar11 <= *psVar10) {
          iVar11 = (int)*psVar10;
        }
        lVar15 = lVar15 + -1;
        *puVar13 = (short)iVar11;
        puVar13 = puVar13 + 1;
        psVar10 = psVar10 + 1;
      } while (lVar15 != 0);
LAB_00e9d740:
      if (1 < (int)param_4) {
        lVar15 = (ulong)(param_4 - 2) << 1;
        do {
          lVar12 = lVar15 + -2;
          sVar3 = *(short *)((long)local_6c + lVar15);
          iVar21 = *(short *)((long)local_6c + lVar15 + 2) + -0x400;
          iVar11 = (int)sVar3;
          if (sVar3 <= iVar21) {
            iVar11 = iVar21;
          }
          *(short *)((long)local_6c + lVar15) = (short)iVar11;
          lVar15 = lVar12;
        } while (lVar12 != -2);
        if (3 < (int)param_4) {
          uVar16 = (ulong)(param_4 - 1) - 2;
          uVar17 = uVar16 & 0xfffffffffffffff0;
          lVar15 = 0;
          uVar14 = 0;
          iVar11 = 0;
          uVar2 = param_5;
          if ((int)param_5 < 2) {
            uVar2 = 1;
          }
          pauVar18 = (undefined (*) [16])(param_1 + 0x14);
          do {
            if (uVar16 < 0x10) {
              uVar9 = 2;
LAB_00e9d87c:
              lVar12 = (param_4 - 1) - uVar9;
              psVar10 = local_6c + uVar9;
              psVar20 = (short *)(param_1 + (uVar9 + lVar15) * 2);
              do {
                lVar12 = lVar12 + -1;
                uVar4 = ((int)*psVar20 & ((uint)(int)*psVar20 >> 0xf ^ 0xffffffff) & 0xffff) -
                        ((int)*psVar10 & ((uint)(int)*psVar10 >> 0xf ^ 0xffffffff) & 0xffff);
                iVar11 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) + iVar11;
                psVar10 = psVar10 + 1;
                psVar20 = psVar20 + 1;
              } while (lVar12 != 0);
            }
            else {
              iVar22 = 0;
              iVar23 = 0;
              iVar24 = 0;
              iVar25 = 0;
              iVar26 = 0;
              iVar27 = 0;
              iVar28 = 0;
              iVar29 = 0;
              iVar30 = 0;
              iVar31 = 0;
              iVar32 = 0;
              iVar33 = 0;
              iVar34 = 0;
              iVar35 = 0;
              iVar21 = 0;
              pauVar8 = (undefined (*) [16])auStack_58;
              uVar9 = uVar17;
              pauVar19 = pauVar18;
              do {
                pauVar1 = pauVar19 + -1;
                auVar37 = *pauVar19;
                pauVar19 = pauVar19 + 2;
                uVar9 = uVar9 - 0x10;
                auVar36 = NEON_smax(*pauVar1,ZEXT816(0),2);
                pauVar1 = pauVar8 + -1;
                auVar39 = *pauVar8;
                auVar37 = NEON_smax(auVar37,ZEXT816(0),2);
                pauVar8 = pauVar8 + 2;
                auVar40 = NEON_smax(*pauVar1,ZEXT816(0),2);
                auVar42 = NEON_smax(auVar39,ZEXT816(0),2);
                auVar39._0_4_ = (uint)auVar36._0_2_ - (uint)auVar40._0_2_;
                auVar39._4_4_ = (uint)auVar36._2_2_ - (uint)auVar40._2_2_;
                auVar39._8_4_ = (uint)auVar36._4_2_ - (uint)auVar40._4_2_;
                auVar39._12_4_ = (uint)auVar36._6_2_ - (uint)auVar40._6_2_;
                auVar41._0_4_ = (uint)auVar37._8_2_ - (uint)auVar42._8_2_;
                auVar41._4_4_ = (uint)auVar37._10_2_ - (uint)auVar42._10_2_;
                auVar41._8_4_ = (uint)auVar37._12_2_ - (uint)auVar42._12_2_;
                auVar41._12_4_ = (uint)auVar37._14_2_ - (uint)auVar42._14_2_;
                auVar38._0_4_ = (uint)auVar37._0_2_ - (uint)auVar42._0_2_;
                auVar38._4_4_ = (uint)auVar37._2_2_ - (uint)auVar42._2_2_;
                auVar38._8_4_ = (uint)auVar37._4_2_ - (uint)auVar42._4_2_;
                auVar38._12_4_ = (uint)auVar37._6_2_ - (uint)auVar42._6_2_;
                auVar37._4_4_ = (uint)auVar36._10_2_ - (uint)auVar40._10_2_;
                auVar37._0_4_ = (uint)auVar36._8_2_ - (uint)auVar40._8_2_;
                auVar37._8_4_ = (uint)auVar36._12_2_ - (uint)auVar40._12_2_;
                auVar37._12_4_ = (uint)auVar36._14_2_ - (uint)auVar40._14_2_;
                auVar40 = NEON_smax(auVar37,ZEXT816(0),4);
                auVar37 = NEON_smax(auVar39,ZEXT816(0),4);
                auVar36 = NEON_smax(auVar41,ZEXT816(0),4);
                auVar39 = NEON_smax(auVar38,ZEXT816(0),4);
                iVar24 = auVar40._0_4_ + iVar24;
                iVar25 = auVar40._4_4_ + iVar25;
                iVar26 = auVar40._8_4_ + iVar26;
                iVar27 = auVar40._12_4_ + iVar27;
                iVar11 = auVar37._0_4_ + iVar11;
                iVar21 = auVar37._4_4_ + iVar21;
                iVar22 = auVar37._8_4_ + iVar22;
                iVar23 = auVar37._12_4_ + iVar23;
                iVar32 = auVar36._0_4_ + iVar32;
                iVar33 = auVar36._4_4_ + iVar33;
                iVar34 = auVar36._8_4_ + iVar34;
                iVar35 = auVar36._12_4_ + iVar35;
                iVar28 = auVar39._0_4_ + iVar28;
                iVar29 = auVar39._4_4_ + iVar29;
                iVar30 = auVar39._8_4_ + iVar30;
                iVar31 = auVar39._12_4_ + iVar31;
              } while (uVar9 != 0);
              iVar11 = iVar28 + iVar11 + iVar32 + iVar24 + iVar29 + iVar21 + iVar33 + iVar25 +
                       iVar30 + iVar22 + iVar34 + iVar26 + iVar31 + iVar23 + iVar35 + iVar27;
              uVar9 = uVar17 | 2;
              if (uVar16 != uVar17) goto LAB_00e9d87c;
            }
            uVar14 = uVar14 + 1;
            pauVar18 = (undefined (*) [16])
                       (*pauVar18 +
                       (-(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1));
            lVar15 = lVar15 + iVar7;
          } while (uVar14 != uVar2);
          goto LAB_00e9d8bc;
        }
      }
    }
  }
  else {
    if (iVar11 <= param_2[iVar7]) {
      iVar11 = (int)param_2[iVar7];
    }
    local_6c[0] = (short)iVar11;
    if (1 < (int)param_4) {
      param_2 = param_2 + 1;
      lVar15 = (ulong)param_4 - 1;
      puVar13 = (undefined2 *)((ulong)local_6c | 2);
      do {
        psVar10 = param_2 + iVar7;
        sVar5 = (short)iVar11;
        sVar3 = *param_2;
        param_2 = param_2 + 1;
        if (sVar3 <= *psVar10) {
          sVar3 = *psVar10;
        }
        iVar11 = iVar11 + -0x400;
        if (sVar5 + -0x400 <= (int)sVar3) {
          iVar11 = (int)sVar3;
        }
        lVar15 = lVar15 + -1;
        *puVar13 = (short)iVar11;
        puVar13 = puVar13 + 1;
      } while (lVar15 != 0);
      goto LAB_00e9d740;
    }
  }
  iVar11 = 0;
LAB_00e9d8bc:
  iVar7 = (param_4 - 3) * param_5;
  iVar21 = 0;
  if (iVar7 != 0) {
    iVar21 = iVar11 / iVar7;
  }
  if (*(long *)(lVar6 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0x400 < iVar21);
  }
  return;
}


