// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_lpc_to_lsp
// Entry Point: 00e11f00
// Size: 1516 bytes
// Signature: undefined vorbis_lpc_to_lsp(void)


void vorbis_lpc_to_lsp(long param_1,float *param_2,uint param_3)

{
  bool bVar1;
  undefined (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  undefined (*pauVar19) [16];
  ulong uVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  float *__base;
  ulong uVar24;
  float *pfVar25;
  ulong uVar26;
  float *pfVar27;
  float *pfVar28;
  float fVar29;
  float fVar33;
  double dVar30;
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar34 [16];
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long alStack_70 [2];
  
  lVar7 = tpidr_el0;
  uVar4 = (int)(param_3 + 1) >> 1;
  uVar3 = uVar4 + 1;
  uVar24 = (ulong)param_3;
  alStack_70[1] = *(long *)(lVar7 + 0x28);
  uVar13 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2) + 0xf &
           0xfffffffffffffff0;
  pfVar27 = (float *)((long)alStack_70 - uVar13);
  pfVar28 = (float *)((long)pfVar27 - uVar13);
  pfVar25 = (float *)((long)pfVar28 - uVar13);
  __base = (float *)((long)pfVar25 - uVar13);
  uVar5 = (int)param_3 >> 1;
  uVar26 = (ulong)uVar5;
  uVar13 = (long)((ulong)(param_3 + 1) << 0x20) >> 0x21;
  pfVar27[(int)uVar4] = 1.0;
  if ((int)param_3 < 1) {
    fVar29 = *pfVar27;
    pfVar28[(int)uVar5] = 1.0;
    *pfVar27 = fVar29 * 0.5;
LAB_00e12230:
    *pfVar28 = *pfVar28 * 0.5;
  }
  else {
    uVar6 = uVar4;
    if ((int)uVar4 < 2) {
      uVar6 = 1;
    }
    uVar10 = (ulong)(uVar6 + 1) - 1;
    if (uVar10 < 8) {
      uVar15 = 1;
LAB_00e1203c:
      lVar14 = (uVar6 + 1) - uVar15;
      pfVar12 = pfVar27 + (uVar13 - uVar15);
      pfVar18 = (float *)(param_1 + (uVar24 - uVar15) * 4);
      pfVar21 = (float *)(param_1 + uVar15 * 4 + -4);
      do {
        lVar14 = lVar14 + -1;
        *pfVar12 = *pfVar21 + *pfVar18;
        pfVar12 = pfVar12 + -1;
        pfVar18 = pfVar18 + -1;
        pfVar21 = pfVar21 + 1;
      } while (lVar14 != 0);
    }
    else {
      uVar16 = uVar10 & 0xfffffffffffffff8;
      uVar15 = uVar16 | 1;
      pauVar19 = (undefined (*) [16])(param_1 + 0x10);
      pfVar12 = pfVar27 + (uVar13 - 4);
      puVar22 = (undefined8 *)(param_1 + uVar24 * 4 + -0x10);
      uVar17 = uVar16;
      do {
        pauVar2 = pauVar19 + -1;
        auVar32 = *pauVar19;
        uVar17 = uVar17 - 8;
        pauVar19 = pauVar19 + 2;
        auVar31 = NEON_rev64(*pauVar2,4);
        auVar34 = NEON_rev64(auVar32,4);
        uVar37 = puVar22[-1];
        uVar36 = puVar22[-2];
        uVar35 = puVar22[1];
        uVar9 = *puVar22;
        auVar32 = NEON_ext(auVar31,auVar31,8,1);
        puVar22 = puVar22 + -4;
        auVar31 = NEON_ext(auVar34,auVar34,8,1);
        *pfVar12 = auVar31._8_4_ + (float)uVar37;
        pfVar12[1] = auVar31._12_4_ + (float)((ulong)uVar37 >> 0x20);
        pfVar12[-4] = auVar31._0_4_ + (float)uVar36;
        pfVar12[-3] = auVar31._4_4_ + (float)((ulong)uVar36 >> 0x20);
        pfVar12[4] = auVar32._8_4_ + (float)uVar35;
        pfVar12[5] = auVar32._12_4_ + (float)((ulong)uVar35 >> 0x20);
        *pfVar12 = auVar32._0_4_ + (float)uVar9;
        pfVar12[1] = auVar32._4_4_ + (float)((ulong)uVar9 >> 0x20);
        pfVar12 = pfVar12 + -8;
      } while (uVar17 != 0);
      if (uVar10 != uVar16) goto LAB_00e1203c;
    }
    pfVar28[(int)uVar5] = 1.0;
    if (1 < (int)param_3) {
      uVar6 = uVar5;
      if ((int)uVar5 < 2) {
        uVar6 = 1;
      }
      uVar17 = (ulong)(uVar6 + 1) - 1;
      if (uVar17 < 8) {
        uVar16 = 1;
      }
      else {
        uVar20 = uVar17 & 0xfffffffffffffff8;
        uVar16 = uVar20 | 1;
        pauVar19 = (undefined (*) [16])(param_1 + 0x10);
        pfVar12 = pfVar28 + (long)(int)uVar5 + -4;
        puVar22 = (undefined8 *)(param_1 + uVar24 * 4 + -0x10);
        uVar15 = uVar20;
        do {
          pauVar2 = pauVar19 + -1;
          auVar32 = *pauVar19;
          uVar15 = uVar15 - 8;
          pauVar19 = pauVar19 + 2;
          auVar31 = NEON_rev64(*pauVar2,4);
          auVar34 = NEON_rev64(auVar32,4);
          uVar37 = puVar22[-1];
          uVar36 = puVar22[-2];
          uVar35 = puVar22[1];
          uVar9 = *puVar22;
          auVar32 = NEON_ext(auVar31,auVar31,8,1);
          puVar22 = puVar22 + -4;
          auVar31 = NEON_ext(auVar34,auVar34,8,1);
          *pfVar12 = auVar31._8_4_ - (float)uVar37;
          pfVar12[1] = auVar31._12_4_ - (float)((ulong)uVar37 >> 0x20);
          pfVar12[-4] = auVar31._0_4_ - (float)uVar36;
          pfVar12[-3] = auVar31._4_4_ - (float)((ulong)uVar36 >> 0x20);
          pfVar12[4] = auVar32._8_4_ - (float)uVar35;
          pfVar12[5] = auVar32._12_4_ - (float)((ulong)uVar35 >> 0x20);
          *pfVar12 = auVar32._0_4_ - (float)uVar9;
          pfVar12[1] = auVar32._4_4_ - (float)((ulong)uVar9 >> 0x20);
          pfVar12 = pfVar12 + -8;
        } while (uVar15 != 0);
        if (uVar17 == uVar20) goto LAB_00e1213c;
      }
      lVar14 = (uVar6 + 1) - uVar16;
      pfVar12 = pfVar28 + ((long)(int)uVar5 - uVar16);
      pfVar18 = (float *)(param_1 + (uVar24 - uVar16) * 4);
      pfVar21 = (float *)(param_1 + uVar16 * 4 + -4);
      do {
        lVar14 = lVar14 + -1;
        *pfVar12 = *pfVar21 - *pfVar18;
        pfVar12 = pfVar12 + -1;
        pfVar18 = pfVar18 + -1;
        pfVar21 = pfVar21 + 1;
      } while (lVar14 != 0);
    }
LAB_00e1213c:
    if ((int)uVar5 < (int)uVar4) {
      if (3 < (int)param_3) {
        lVar14 = 2;
        uVar6 = uVar5;
        if ((int)uVar5 < 3) {
          uVar6 = 2;
        }
        uVar24 = (ulong)(uVar6 + 1) - 2;
        if (1 < uVar24) {
          uVar17 = uVar24 & 0xfffffffffffffffe;
          lVar14 = uVar17 + 2;
          puVar22 = (undefined8 *)(pfVar28 + (long)(int)uVar5 + -3);
          uVar10 = uVar17;
          do {
            uVar10 = uVar10 - 2;
            *puVar22 = CONCAT44((float)((ulong)puVar22[1] >> 0x20) +
                                (float)((ulong)*puVar22 >> 0x20),(float)puVar22[1] + (float)*puVar22
                               );
            puVar22 = puVar22 + -1;
          } while (uVar10 != 0);
          if (uVar24 == uVar17) goto LAB_00e12218;
        }
        lVar11 = (ulong)(uVar6 + 1) - lVar14;
        pfVar12 = pfVar28 + ((int)uVar5 - lVar14);
        do {
          lVar11 = lVar11 + -1;
          *pfVar12 = pfVar12[2] + *pfVar12;
          pfVar12 = pfVar12 + -1;
        } while (lVar11 != 0);
      }
    }
    else {
      if (0 < (int)param_3) {
        pfVar12 = pfVar27 + uVar13;
        do {
          pfVar18 = pfVar12 + -1;
          uVar10 = uVar10 - 1;
          *pfVar18 = *pfVar18 - *pfVar12;
          pfVar12 = pfVar18;
        } while (uVar10 != 0);
      }
      if (1 < (int)param_3) {
        uVar6 = uVar5;
        if ((int)uVar5 < 2) {
          uVar6 = 1;
        }
        lVar14 = (ulong)(uVar6 + 1) - 1;
        pfVar12 = pfVar28 + (int)uVar5;
        do {
          pfVar18 = pfVar12 + -1;
          lVar14 = lVar14 + -1;
          *pfVar18 = *pfVar12 + *pfVar18;
          pfVar12 = pfVar18;
        } while (lVar14 != 0);
      }
    }
LAB_00e12218:
    *pfVar27 = *pfVar27 * 0.5;
    if ((int)param_3 < 3) goto LAB_00e12230;
    uVar10 = uVar13 & 0xffffffff;
    uVar24 = 2;
    do {
      uVar17 = uVar24;
      if ((long)uVar10 <= (long)uVar24) {
        uVar17 = uVar10;
      }
      uVar17 = (uVar10 + 1) - uVar17;
      uVar15 = uVar10;
      if (uVar17 < 2) {
LAB_00e12318:
        do {
          pfVar12 = pfVar27 + uVar15;
          fVar29 = *pfVar12;
          pfVar12[-2] = pfVar12[-2] - fVar29;
          *pfVar12 = fVar29 + fVar29;
          bVar1 = (long)uVar24 < (long)uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar1);
      }
      else {
        uVar16 = uVar17 & 0xfffffffffffffffe;
        uVar15 = uVar16;
        puVar22 = (undefined8 *)(pfVar27 + ((uVar13 & 0xffffffff) - 1));
        do {
          uVar15 = uVar15 - 2;
          puVar23 = puVar22 + -1;
          fVar29 = (float)*puVar22;
          fVar33 = (float)((ulong)*puVar22 >> 0x20);
          *puVar22 = CONCAT44(fVar33 + fVar33,fVar29 + fVar29);
          *puVar23 = CONCAT44((float)((ulong)*puVar23 >> 0x20) - fVar33,(float)*puVar23 - fVar29);
          puVar22 = puVar23;
        } while (uVar15 != 0);
        uVar15 = uVar10 - uVar16;
        if (uVar17 != uVar16) goto LAB_00e12318;
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar3);
    *pfVar28 = *pfVar28 * 0.5;
    if (3 < (int)param_3) {
      lVar14 = 0;
      uVar24 = 2;
      do {
        uVar10 = uVar24;
        if ((long)uVar26 <= (long)uVar24) {
          uVar10 = uVar26;
        }
        uVar17 = lVar14 + 2U;
        if ((long)uVar26 <= (long)(lVar14 + 2U)) {
          uVar17 = uVar26;
        }
        uVar17 = (uVar26 + 1) - uVar17;
        uVar15 = uVar26;
        if (uVar17 < 2) {
LAB_00e123f4:
          do {
            pfVar12 = pfVar28 + uVar15;
            fVar29 = *pfVar12;
            pfVar12[-2] = pfVar12[-2] - fVar29;
            *pfVar12 = fVar29 + fVar29;
            bVar1 = (long)uVar24 < (long)uVar15;
            uVar15 = uVar15 - 1;
          } while (bVar1);
        }
        else {
          uVar10 = (uVar26 + 1) - uVar10 & 0xfffffffffffffffe;
          puVar22 = (undefined8 *)(pfVar28 + (uVar26 - 1));
          do {
            uVar10 = uVar10 - 2;
            puVar23 = puVar22 + -1;
            fVar29 = (float)*puVar22;
            fVar33 = (float)((ulong)*puVar22 >> 0x20);
            *puVar22 = CONCAT44(fVar33 + fVar33,fVar29 + fVar29);
            *puVar23 = CONCAT44((float)((ulong)*puVar23 >> 0x20) - fVar33,(float)*puVar23 - fVar29);
            puVar22 = puVar23;
          } while (uVar10 != 0);
          uVar15 = uVar26 - (uVar17 & 0xfffffffffffffffe);
          if (uVar17 != (uVar17 & 0xfffffffffffffffe)) goto LAB_00e123f4;
        }
        uVar24 = uVar24 + 1;
        lVar14 = lVar14 + 1;
      } while (uVar24 != uVar5 + 1);
    }
  }
  iVar8 = FUN_00e124ec(pfVar27,uVar13 & 0xffffffff,pfVar25);
  if ((iVar8 == 0) && (iVar8 = FUN_00e124ec(pfVar28,uVar26,__base), iVar8 == 0)) {
    FUN_00e12858(pfVar27,uVar13 & 0xffffffff,pfVar25);
    FUN_00e12858(pfVar28,uVar26,__base);
    qsort(pfVar25,uVar13,4,FUN_00e12a28);
    qsort(__base,(long)(int)uVar5,4,FUN_00e12a28);
    if (0 < (int)param_3) {
      if ((int)uVar4 < 2) {
        uVar4 = 1;
      }
      uVar13 = (ulong)uVar4;
      pfVar27 = param_2;
      do {
        dVar30 = acos((double)*pfVar25);
        uVar13 = uVar13 - 1;
        *pfVar27 = (float)dVar30;
        pfVar25 = pfVar25 + 1;
        pfVar27 = pfVar27 + 2;
      } while (uVar13 != 0);
      if (1 < (int)param_3) {
        if ((int)uVar5 < 2) {
          uVar5 = 1;
        }
        uVar13 = (ulong)uVar5;
        pfVar25 = param_2 + 1;
        do {
          dVar30 = acos((double)*__base);
          uVar13 = uVar13 - 1;
          *pfVar25 = (float)dVar30;
          pfVar25 = pfVar25 + 2;
          __base = __base + 1;
        } while (uVar13 != 0);
      }
    }
    uVar9 = 0;
    if (*(long *)(lVar7 + 0x28) != alStack_70[1]) {
LAB_00e124e8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
  }
  else {
    uVar9 = 0xffffffff;
    if (*(long *)(lVar7 + 0x28) != alStack_70[1]) goto LAB_00e124e8;
  }
  return;
}


