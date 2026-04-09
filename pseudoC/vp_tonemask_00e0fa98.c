// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vp_tonemask
// Entry Point: 00e0fa98
// Size: 1484 bytes
// Signature: undefined _vp_tonemask(void)


/* WARNING: Type propagation algorithm not settling */

void _vp_tonemask(float param_1,float param_2,uint *param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  long lVar7;
  uint6 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined (*pauVar17) [16];
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  ulong uVar26;
  long lVar27;
  float *pfVar28;
  undefined8 *puVar29;
  long lVar30;
  float fVar31;
  undefined auVar32 [16];
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fStack_54;
  float afStack_50 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar2 = param_3[0x13];
  uVar13 = *param_3;
  uVar18 = (ulong)uVar13;
  uVar16 = (ulong)uVar2;
  lVar15 = (long)(int)uVar13;
  lVar7 = -((long)(int)uVar2 * 4 + 0xfU & 0xfffffffffffffff0);
  lVar30 = (long)afStack_50 + lVar7;
  lVar20 = *(long *)(param_3 + 2);
  param_2 = *(float *)(lVar20 + 4) + param_2;
  if (0 < (int)uVar2) {
    if (uVar2 < 8) {
      uVar22 = 0;
    }
    else {
      uVar22 = uVar16 & 0xfffffff8;
      puVar24 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar7);
      uVar26 = uVar22;
      do {
        *(undefined4 *)puVar24 = 0xc61c3c00;
        *(undefined4 *)((long)puVar24 + 4) = 0xc61c3c00;
        puVar24[-2] = 0xc61c3c00c61c3c00;
        *(undefined4 *)(puVar24 + 2) = 0xc61c3c00;
        *(undefined4 *)((long)puVar24 + 0x14) = 0xc61c3c00;
        *puVar24 = 0xc61c3c00c61c3c00;
        puVar24 = puVar24 + 4;
        uVar26 = uVar26 - 8;
      } while (uVar26 != 0);
      if (uVar22 == uVar16) goto LAB_00e0fb5c;
    }
    lVar23 = uVar16 - uVar22;
    puVar25 = (undefined4 *)(lVar30 + uVar22 * 4);
    do {
      lVar23 = lVar23 + -1;
      *puVar25 = 0xc61c3c00;
      puVar25 = puVar25 + 1;
    } while (lVar23 != 0);
  }
LAB_00e0fb5c:
  fVar31 = *(float *)(lVar20 + 8);
  if (*(float *)(lVar20 + 8) <= param_2) {
    fVar31 = param_2;
  }
  if (0 < (int)uVar13) {
    uVar16 = *(ulong *)(param_3 + 8);
    if ((uVar13 < 8) || ((param_5 < uVar16 + uVar18 * 4 && (uVar16 < param_5 + uVar18 * 4)))) {
      uVar26 = 0;
LAB_00e0fb9c:
      lVar23 = uVar18 - uVar26;
      pfVar12 = (float *)(uVar16 + uVar26 * 4);
      pfVar28 = (float *)(param_5 + uVar26 * 4);
      do {
        lVar23 = lVar23 + -1;
        *pfVar28 = fVar31 + *pfVar12;
        pfVar12 = pfVar12 + 1;
        pfVar28 = pfVar28 + 1;
      } while (lVar23 != 0);
    }
    else {
      uVar26 = uVar18 & 0xfffffff8;
      puVar24 = (undefined8 *)(uVar16 + 0x10);
      puVar29 = (undefined8 *)(param_5 + 0x10);
      uVar22 = uVar26;
      do {
        puVar4 = puVar24 + -1;
        uVar33 = puVar24[-2];
        uVar35 = puVar24[1];
        uVar34 = *puVar24;
        puVar24 = puVar24 + 4;
        uVar22 = uVar22 - 8;
        puVar29[-1] = CONCAT44(fVar31 + (float)((ulong)*puVar4 >> 0x20),fVar31 + (float)*puVar4);
        puVar29[-2] = CONCAT44(fVar31 + (float)((ulong)uVar33 >> 0x20),fVar31 + (float)uVar33);
        puVar29[1] = CONCAT44(fVar31 + (float)((ulong)uVar35 >> 0x20),fVar31 + (float)uVar35);
        *puVar29 = CONCAT44(fVar31 + (float)((ulong)uVar34 >> 0x20),fVar31 + (float)uVar34);
        puVar29 = puVar29 + 4;
      } while (uVar22 != 0);
      if (uVar26 != uVar18) goto LAB_00e0fb9c;
    }
    if (0 < (int)uVar13) {
      fVar31 = *(float *)(lVar20 + 0x1f0);
      lVar21 = *(long *)(param_3 + 10);
      lVar23 = *(long *)(param_3 + 4);
      lVar20 = 0;
      do {
        fVar36 = *(float *)(param_4 + lVar20 * 4);
        lVar9 = lVar20 + 1;
        lVar11 = *(long *)(lVar21 + lVar20 * 8);
        if ((lVar9 < lVar15) && (fVar38 = fVar36, *(long *)(lVar21 + lVar9 * 8) == lVar11)) {
          do {
            lVar9 = lVar20;
            fVar36 = *(float *)(param_4 + 4 + lVar9 * 4);
            if (fVar36 <= fVar38) {
              fVar36 = fVar38;
            }
            if (lVar15 + -2 == lVar9) {
              lVar9 = lVar15;
              lVar20 = lVar15 + -1;
              if (*(float *)(param_5 + (lVar15 + -1) * 4) < fVar36 + 6.0) goto LAB_00e0fc90;
              goto LAB_00e0fc0c;
            }
            lVar20 = lVar9 + 1;
            fVar38 = fVar36;
          } while (*(long *)(lVar21 + 0x10 + lVar9 * 8) == lVar11);
          lVar9 = lVar9 + 2;
          if (*(float *)(param_5 + lVar20 * 4) < fVar36 + 6.0) {
LAB_00e0fc90:
            uVar16 = lVar11 >> (*(ulong *)(param_3 + 0x10) & 0x3f);
            if (0xf < (long)uVar16) {
              uVar16 = 0x10;
            }
            uVar13 = (uint)(((fVar31 - param_1) + fVar36 + -30.0) * 0.1);
            uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
            if (6 < uVar13) {
              uVar13 = 7;
            }
            pfVar12 = *(float **)
                       (*(long *)(lVar23 + (uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU)) *
                                           8) + (ulong)uVar13 * 8);
            fVar38 = pfVar12[1];
            iVar14 = (int)*pfVar12;
            if (iVar14 < (int)fVar38) {
              uVar1 = param_3[0x12];
              lVar11 = (long)iVar14;
              fVar37 = (float)NEON_fmadd(*pfVar12 + -16.0,(float)uVar1,
                                         (float)((int)*(undefined8 *)(lVar21 + lVar20 * 8) -
                                                param_3[0xe]));
              uVar13 = (uint)(fVar37 - (float)((int)uVar1 >> 1));
              do {
                if ((0 < (int)uVar13) &&
                   (*(float *)(lVar30 + (ulong)uVar13 * 4) < fVar36 + pfVar12[lVar11 + 2])) {
                  *(float *)(lVar30 + (ulong)uVar13 * 4) = fVar36 + pfVar12[lVar11 + 2];
                }
                uVar13 = uVar13 + uVar1;
              } while (((int)uVar13 < (int)uVar2) && (lVar11 = lVar11 + 1, lVar11 < (int)fVar38));
            }
          }
        }
        else if (*(float *)(param_5 + lVar20 * 4) < fVar36 + 6.0) goto LAB_00e0fc90;
LAB_00e0fc0c:
        lVar20 = lVar9;
      } while (lVar9 < lVar15);
    }
  }
  uVar13 = param_3[0x12];
  FUN_00e1137c(lVar30,uVar13);
  lVar15 = (long)(int)*param_3;
  if (1 < (int)*param_3) {
    plVar19 = *(long **)(param_3 + 10);
    lVar11 = *(long *)(param_3 + 0xe);
    lVar20 = 0;
    lVar27 = *(long *)(param_3 + 2);
    lVar21 = 1;
    lVar9 = *plVar19;
    lVar23 = (-((int)uVar13 >> 1) - lVar11) + lVar9;
    do {
      fVar36 = *(float *)(lVar30 + lVar23 * 4);
      fVar31 = *(float *)(lVar27 + 0x20);
      if (fVar36 <= *(float *)(lVar27 + 0x20)) {
        fVar31 = fVar36;
      }
      lVar10 = (plVar19[lVar21] + lVar9 >> 1) - lVar11;
      for (lVar21 = lVar23; lVar21 < lVar10; lVar21 = lVar21 + 1) {
        fVar36 = *(float *)((long)afStack_50 + lVar21 * 4 + lVar7 + 4);
        if (fVar36 <= -9999.0) {
          if (fVar31 == -9999.0) goto LAB_00e0fe10;
        }
        else if (fVar31 == -9999.0 || fVar36 < fVar31) {
LAB_00e0fe10:
          fVar31 = fVar36;
        }
        lVar23 = lVar10;
      }
      lVar21 = lVar20;
      if (lVar20 < lVar15) {
        while (lVar21 = lVar20, lVar9 <= lVar23 + lVar11) {
          if (*(float *)(param_5 + lVar20 * 4) < fVar31) {
            *(float *)(param_5 + lVar20 * 4) = fVar31;
          }
          lVar21 = lVar15;
          if (lVar15 + -1 == lVar20) break;
          lVar21 = lVar20 + 1;
          lVar20 = lVar20 + 1;
          lVar9 = plVar19[lVar21];
        }
      }
      lVar20 = lVar21;
      lVar21 = lVar20 + 1;
      if (lVar15 <= lVar21) goto LAB_00e0feb0;
      lVar9 = plVar19[lVar20];
    } while( true );
  }
  lVar20 = 0;
LAB_00e0feb0:
  if (lVar20 < lVar15) {
    uVar16 = lVar15 - lVar20;
    fVar31 = *(float *)(lVar30 + (long)(int)param_3[0x13] * 4 + -4);
    if (7 < uVar16) {
      uVar26 = uVar16 & 0xfffffffffffffff8;
      pauVar17 = (undefined (*) [16])(param_5 + lVar20 * 4 + 0x10);
      uVar18 = uVar26;
      do {
        auVar32._4_4_ = fVar31;
        auVar32._0_4_ = fVar31;
        auVar32._8_4_ = fVar31;
        auVar32._12_4_ = fVar31;
        auVar32 = NEON_fcmgt(auVar32,pauVar17[-1],4);
        if ((auVar32 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          if ((auVar32 & (undefined  [16])0x100000000) == (undefined  [16])0x0) goto LAB_00e0ff20;
LAB_00e0ff74:
          *(float *)(pauVar17[-1] + 4) = fVar31;
          if ((auVar32 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00e0ff28;
LAB_00e0ff80:
          if ((auVar32 & (undefined  [16])0x100000000) == (undefined  [16])0x0) goto LAB_00e0ff34;
LAB_00e0ff88:
          *(float *)(pauVar17[-1] + 0xc) = fVar31;
          auVar6._4_4_ = fVar31;
          auVar6._0_4_ = fVar31;
          auVar6._8_4_ = fVar31;
          auVar6._12_4_ = fVar31;
          auVar32 = NEON_fcmgt(auVar6,*pauVar17,4);
          uVar8 = CONCAT24(auVar32._12_2_,CONCAT22(auVar32._8_2_,auVar32._4_2_));
        }
        else {
          *(float *)pauVar17[-1] = fVar31;
          if ((auVar32 & (undefined  [16])0x100000000) != (undefined  [16])0x0) goto LAB_00e0ff74;
LAB_00e0ff20:
          if ((auVar32 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_00e0ff80;
LAB_00e0ff28:
          *(float *)(pauVar17[-1] + 8) = fVar31;
          if ((auVar32 & (undefined  [16])0x100000000) != (undefined  [16])0x0) goto LAB_00e0ff88;
LAB_00e0ff34:
          auVar5._4_4_ = fVar31;
          auVar5._0_4_ = fVar31;
          auVar5._8_4_ = fVar31;
          auVar5._12_4_ = fVar31;
          auVar32 = NEON_fcmgt(auVar5,*pauVar17,4);
          uVar8 = CONCAT24(auVar32._12_2_,CONCAT22(auVar32._8_2_,auVar32._4_2_));
        }
        auVar5 = ZEXT616(uVar8) << 0x10;
        if ((auVar32 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          *(float *)*pauVar17 = fVar31;
        }
        if ((auVar5 & (undefined  [16])0x10000) != (undefined  [16])0x0) {
          *(float *)(*pauVar17 + 4) = fVar31;
        }
        if ((auVar5 & (undefined  [16])0x100000000) != (undefined  [16])0x0) {
          *(float *)(*pauVar17 + 8) = fVar31;
        }
        if ((auVar5 & (undefined  [16])0x1000000000000) != (undefined  [16])0x0) {
          *(float *)(*pauVar17 + 0xc) = fVar31;
        }
        uVar18 = uVar18 - 8;
        pauVar17 = pauVar17 + 2;
      } while (uVar18 != 0);
      lVar20 = lVar20 + uVar26;
      if (uVar16 == uVar26) goto LAB_00e0ffcc;
    }
    lVar15 = lVar15 - lVar20;
    pfVar12 = (float *)(param_5 + lVar20 * 4);
    do {
      if (*pfVar12 < fVar31) {
        *pfVar12 = fVar31;
      }
      lVar15 = lVar15 + -1;
      pfVar12 = pfVar12 + 1;
    } while (lVar15 != 0);
  }
LAB_00e0ffcc:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


