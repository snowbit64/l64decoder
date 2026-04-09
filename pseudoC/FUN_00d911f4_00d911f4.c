// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d911f4
// Entry Point: 00d911f4
// Size: 1316 bytes
// Signature: undefined FUN_00d911f4(void)


void FUN_00d911f4(long param_1,int *param_2)

{
  bool bVar1;
  undefined (*pauVar2) [16];
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  undefined (*pauVar9) [16];
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  undefined (*pauVar21) [16];
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined auVar37 [16];
  undefined auVar38 [16];
  
  iVar14 = param_2[2];
  iVar15 = param_2[3];
  iVar11 = param_2[4];
  iVar12 = param_2[5];
  iVar17 = *param_2;
  iVar18 = param_2[1];
  lVar16 = (long)iVar14;
  lVar13 = (long)iVar11;
  lVar10 = *(long *)(*(long *)(param_1 + 0x270) + 0x30);
  if (((iVar17 < iVar18) && (iVar14 <= iVar15)) && (iVar11 <= iVar12)) {
    iVar5 = iVar17;
    if (iVar17 <= iVar18) {
      iVar5 = iVar18;
    }
    lVar19 = (long)iVar17;
    do {
      lVar8 = lVar16;
      do {
        psVar7 = (short *)(*(long *)(lVar10 + lVar19 * 8) + lVar8 * 0x40 + lVar13 * 2);
        iVar4 = (iVar12 - iVar11) + 1;
        do {
          if (*psVar7 != 0) {
            iVar17 = (int)lVar19;
            *param_2 = iVar17;
            goto LAB_00d91298;
          }
          psVar7 = psVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar8 = lVar8 + 1;
      } while (iVar15 + 1 != (int)lVar8);
      lVar19 = lVar19 + 1;
    } while (iVar5 + 1 != (int)lVar19);
  }
LAB_00d91298:
  if (((iVar17 < iVar18) && (iVar14 <= iVar15)) && (iVar11 <= iVar12)) {
    lVar19 = (long)iVar18;
    do {
      lVar8 = lVar16;
      do {
        psVar7 = (short *)(*(long *)(lVar10 + lVar19 * 8) + lVar8 * 0x40 + lVar13 * 2);
        iVar5 = (iVar12 - iVar11) + 1;
        do {
          if (*psVar7 != 0) {
            iVar18 = (int)lVar19;
            param_2[1] = iVar18;
            goto LAB_00d91318;
          }
          psVar7 = psVar7 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar8 = lVar8 + 1;
      } while (iVar15 + 1 != (int)lVar8);
      bVar1 = iVar17 < lVar19;
      lVar19 = lVar19 + -1;
    } while (bVar1);
  }
LAB_00d91318:
  if (((iVar14 < iVar15) && (iVar17 <= iVar18)) && (iVar11 <= iVar12)) {
    iVar5 = iVar14;
    if (iVar14 <= iVar15) {
      iVar5 = iVar15;
    }
    lVar19 = (long)iVar17;
    do {
      psVar7 = (short *)(*(long *)(lVar10 + lVar19 * 8) + lVar16 * 0x40 + lVar13 * 2);
      iVar4 = (iVar12 - iVar11) + 1;
      do {
        if (*psVar7 != 0) {
          iVar14 = (int)lVar16;
          param_2[2] = iVar14;
          goto LAB_00d9139c;
        }
        psVar7 = psVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar19 = lVar19 + 1;
    } while ((iVar18 + 1 != (int)lVar19) ||
            (lVar16 = lVar16 + 1, lVar19 = (long)iVar17, iVar5 + 1 != (int)lVar16));
  }
LAB_00d9139c:
  if ((iVar14 < iVar15) && ((iVar17 <= iVar18 && (iVar11 <= iVar12)))) {
    lVar16 = (long)iVar17;
    lVar19 = (long)iVar15;
    do {
      psVar7 = (short *)(*(long *)(lVar10 + lVar16 * 8) + lVar19 * 0x40 + lVar13 * 2);
      iVar5 = (iVar12 - iVar11) + 1;
      do {
        if (*psVar7 != 0) {
          iVar15 = (int)lVar19;
          param_2[3] = iVar15;
          goto LAB_00d91424;
        }
        psVar7 = psVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar16 = lVar16 + 1;
    } while ((iVar18 + 1 != (int)lVar16) ||
            (bVar1 = iVar14 < lVar19, lVar16 = (long)iVar17, lVar19 = lVar19 + -1, bVar1));
  }
LAB_00d91424:
  if ((iVar11 < iVar12) && ((iVar17 <= iVar18 && (iVar14 <= iVar15)))) {
    iVar5 = iVar11;
    if (iVar11 <= iVar12) {
      iVar5 = iVar12;
    }
    lVar16 = (long)iVar17;
    do {
      psVar7 = (short *)(*(long *)(lVar10 + lVar16 * 8) + (long)iVar14 * 0x40 + lVar13 * 2);
      iVar4 = (iVar15 - iVar14) + 1;
      do {
        if (*psVar7 != 0) {
          iVar11 = (int)lVar13;
          param_2[4] = iVar11;
          goto LAB_00d914ac;
        }
        psVar7 = psVar7 + 0x20;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      lVar16 = lVar16 + 1;
    } while ((iVar18 + 1 != (int)lVar16) ||
            (lVar13 = lVar13 + 1, lVar16 = (long)iVar17, iVar5 + 1 != (int)lVar13));
  }
LAB_00d914ac:
  if ((iVar11 < iVar12) && ((iVar17 <= iVar18 && (iVar14 <= iVar15)))) {
    lVar16 = (long)iVar17;
    lVar13 = (long)iVar12;
    do {
      psVar7 = (short *)(*(long *)(lVar10 + lVar16 * 8) + (long)iVar14 * 0x40 + lVar13 * 2);
      iVar5 = (iVar15 - iVar14) + 1;
      do {
        if (*psVar7 != 0) {
          iVar12 = (int)lVar13;
          param_2[5] = iVar12;
          goto LAB_00d91538;
        }
        psVar7 = psVar7 + 0x20;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar16 = lVar16 + 1;
    } while ((iVar18 + 1 != (int)lVar16) ||
            (bVar1 = iVar11 < lVar13, lVar16 = (long)iVar17, lVar13 = lVar13 + -1, bVar1));
  }
LAB_00d91538:
  iVar5 = (iVar18 - iVar17) * 0x10;
  lVar16 = 0;
  iVar4 = (iVar15 - iVar14) * 0xc;
  uVar3 = iVar12 - iVar11;
  *(long *)(param_2 + 6) =
       (long)iVar4 * (long)iVar4 + (long)iVar5 * (long)iVar5 +
       (long)(int)(uVar3 * 8) * (long)(int)(uVar3 * 8);
  if ((iVar17 <= iVar18) && (iVar14 <= iVar15)) {
    uVar6 = (ulong)uVar3 + 1 & 0x1fffffff0;
    lVar16 = 0;
    lVar13 = (long)iVar17;
    do {
      if (iVar11 <= iVar12) {
        lVar8 = *(long *)(lVar10 + lVar13 * 8);
        pauVar9 = (undefined (*) [16])(lVar8 + (long)iVar14 * 0x40 + ((long)iVar11 + 8) * 2);
        lVar19 = (long)iVar14;
        do {
          psVar7 = (short *)(lVar8 + lVar19 * 0x40 + (long)iVar11 * 2);
          iVar17 = iVar11;
          if (uVar3 < 0xf) {
LAB_00d916ec:
            iVar17 = (iVar12 + 1) - iVar17;
            do {
              if (*psVar7 != 0) {
                lVar16 = lVar16 + 1;
              }
              iVar17 = iVar17 + -1;
              psVar7 = psVar7 + 1;
            } while (iVar17 != 0);
          }
          else {
            lVar22 = 0;
            psVar7 = psVar7 + uVar6;
            lVar23 = 0;
            lVar24 = 0;
            lVar25 = 0;
            lVar26 = 0;
            lVar27 = 0;
            lVar28 = 0;
            lVar29 = 0;
            lVar30 = 0;
            lVar35 = 0;
            lVar36 = 0;
            lVar31 = 0;
            lVar32 = 0;
            lVar33 = 0;
            lVar34 = 0;
            uVar20 = uVar6;
            pauVar21 = pauVar9;
            do {
              pauVar2 = pauVar21 + -1;
              auVar38 = *pauVar21;
              pauVar21 = pauVar21 + 2;
              uVar20 = uVar20 - 0x10;
              auVar37 = NEON_cmtst(*pauVar2,*pauVar2,2);
              auVar38 = NEON_cmtst(auVar38,auVar38,2);
              lVar27 = lVar27 + (ulong)(auVar37[12] & 1);
              lVar28 = lVar28 + (ulong)(auVar37[14] & 1);
              lVar25 = lVar25 + (ulong)(auVar37[8] & 1);
              lVar26 = lVar26 + (ulong)(auVar37[10] & 1);
              lVar23 = lVar23 + (ulong)(auVar37[4] & 1);
              lVar24 = lVar24 + (ulong)(auVar37[6] & 1);
              lVar16 = lVar16 + (ulong)(auVar37[0] & 1);
              lVar22 = lVar22 + (ulong)(auVar37[2] & 1);
              lVar33 = lVar33 + (ulong)(auVar38[12] & 1);
              lVar34 = lVar34 + (ulong)(auVar38[14] & 1);
              lVar31 = lVar31 + (ulong)(auVar38[8] & 1);
              lVar32 = lVar32 + (ulong)(auVar38[10] & 1);
              lVar35 = lVar35 + (ulong)(auVar38[4] & 1);
              lVar36 = lVar36 + (ulong)(auVar38[6] & 1);
              lVar29 = lVar29 + (ulong)(auVar38[0] & 1);
              lVar30 = lVar30 + (ulong)(auVar38[2] & 1);
            } while (uVar20 != 0);
            lVar16 = lVar29 + lVar16 + lVar31 + lVar25 + lVar35 + lVar23 + lVar33 + lVar27 +
                     lVar30 + lVar22 + lVar32 + lVar26 + lVar36 + lVar24 + lVar34 + lVar28;
            iVar17 = iVar11 + (int)uVar6;
            if ((ulong)uVar3 + 1 != uVar6) goto LAB_00d916ec;
          }
          lVar19 = lVar19 + 1;
          pauVar9 = pauVar9 + 4;
        } while (iVar15 + 1 != (int)lVar19);
      }
      lVar13 = lVar13 + 1;
    } while (iVar18 + 1 != (int)lVar13);
  }
  *(long *)(param_2 + 8) = lVar16;
  return;
}


