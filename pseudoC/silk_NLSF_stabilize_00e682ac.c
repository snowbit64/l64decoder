// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_NLSF_stabilize
// Entry Point: 00e682ac
// Size: 980 bytes
// Signature: undefined silk_NLSF_stabilize(void)


void silk_NLSF_stabilize(short *param_1,short *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  short sVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  short sVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  
  lVar16 = (long)(int)param_3;
  iVar6 = 0;
  lVar17 = lVar16 + -1;
  do {
    sVar26 = *param_2;
    iVar10 = (int)sVar26;
    iVar19 = (int)sVar26;
    iVar18 = *param_1 - iVar19;
    if ((int)param_3 < 2) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      uVar13 = 1;
      iVar20 = iVar18;
      sVar14 = *param_1;
      do {
        psVar7 = param_1 + uVar13;
        iVar18 = (int)*psVar7 - ((int)param_2[uVar13] + (int)sVar14);
        uVar1 = (uint)uVar13;
        if (iVar20 <= iVar18) {
          iVar18 = iVar20;
          uVar1 = uVar12;
        }
        uVar12 = uVar1;
        uVar13 = uVar13 + 1;
        iVar20 = iVar18;
        sVar14 = *psVar7;
      } while (param_3 != uVar13);
    }
    sVar14 = param_2[lVar16];
    iVar20 = 0x8000 - ((int)param_1[lVar17] + (int)sVar14);
    uVar1 = param_3;
    if (iVar18 <= iVar20) {
      uVar1 = uVar12;
      iVar20 = iVar18;
    }
    if (-1 < iVar20) {
      return;
    }
    if (uVar1 == 0) {
      *param_1 = sVar26;
    }
    else if (uVar1 == param_3) {
      param_1[lVar17] = -0x8000 - sVar14;
    }
    else {
      if ((int)uVar1 < 1) {
        iVar10 = 0;
      }
      else if (uVar1 != 1) {
        uVar13 = (ulong)uVar1 - 1;
        if (uVar13 < 0x10) {
          uVar15 = 1;
        }
        else {
          iVar18 = 0;
          iVar20 = 0;
          uVar3 = uVar13 & 0xfffffffffffffff0;
          iVar22 = 0;
          iVar21 = 0;
          iVar23 = 0;
          iVar24 = 0;
          uVar15 = uVar3 | 1;
          iVar25 = 0;
          iVar27 = 0;
          iVar28 = 0;
          iVar29 = 0;
          iVar30 = 0;
          iVar31 = 0;
          iVar32 = 0;
          iVar33 = 0;
          iVar10 = 0;
          puVar2 = (undefined8 *)(param_2 + 9);
          uVar11 = uVar3;
          do {
            uVar35 = puVar2[-1];
            uVar34 = puVar2[-2];
            uVar37 = puVar2[1];
            uVar36 = *puVar2;
            puVar2 = puVar2 + 4;
            uVar11 = uVar11 - 0x10;
            iVar22 = iVar22 + (short)uVar35;
            iVar21 = iVar21 + (short)((ulong)uVar35 >> 0x10);
            iVar23 = iVar23 + (short)((ulong)uVar35 >> 0x20);
            iVar24 = iVar24 + (short)((ulong)uVar35 >> 0x30);
            iVar19 = iVar19 + (short)uVar34;
            iVar10 = iVar10 + (short)((ulong)uVar34 >> 0x10);
            iVar18 = iVar18 + (short)((ulong)uVar34 >> 0x20);
            iVar20 = iVar20 + (short)((ulong)uVar34 >> 0x30);
            iVar30 = iVar30 + (short)uVar37;
            iVar31 = iVar31 + (short)((ulong)uVar37 >> 0x10);
            iVar32 = iVar32 + (short)((ulong)uVar37 >> 0x20);
            iVar33 = iVar33 + (short)((ulong)uVar37 >> 0x30);
            iVar25 = iVar25 + (short)uVar36;
            iVar27 = iVar27 + (short)((ulong)uVar36 >> 0x10);
            iVar28 = iVar28 + (short)((ulong)uVar36 >> 0x20);
            iVar29 = iVar29 + (short)((ulong)uVar36 >> 0x30);
          } while (uVar11 != 0);
          iVar10 = iVar25 + iVar19 + iVar30 + iVar22 + iVar27 + iVar10 + iVar31 + iVar21 +
                   iVar28 + iVar18 + iVar32 + iVar23 + iVar29 + iVar20 + iVar33 + iVar24;
          if (uVar13 == uVar3) goto LAB_00e6843c;
        }
        lVar9 = uVar1 - uVar15;
        psVar7 = param_2 + uVar15;
        do {
          lVar9 = lVar9 + -1;
          iVar10 = iVar10 + *psVar7;
          psVar7 = psVar7 + 1;
        } while (lVar9 != 0);
      }
LAB_00e6843c:
      uVar13 = (ulong)(int)uVar1;
      if ((int)uVar1 < (int)param_3) {
        iVar18 = 0x8000 - sVar14;
        if ((long)uVar13 < lVar17) {
          uVar11 = ~uVar13 + lVar16;
          lVar9 = lVar17;
          if (3 < uVar11) {
            uVar15 = uVar11 & 0xfffffffffffffffc;
            iVar20 = 0;
            iVar22 = 0;
            lVar9 = lVar17 - uVar15;
            iVar19 = 0;
            uVar3 = uVar15;
            psVar7 = param_2 + (long)(int)param_3 + -2;
            do {
              psVar8 = psVar7 + 1;
              psVar5 = psVar7 + -1;
              uVar3 = uVar3 - 4;
              psVar4 = psVar7 + -2;
              sVar26 = *psVar7;
              psVar7 = psVar7 + -4;
              iVar18 = iVar18 - *psVar8;
              iVar19 = iVar19 - sVar26;
              iVar20 = iVar20 - *psVar5;
              iVar22 = iVar22 - *psVar4;
            } while (uVar3 != 0);
            iVar18 = iVar20 + iVar18 + iVar22 + iVar19;
            if (uVar11 == uVar15) goto LAB_00e684f8;
          }
          do {
            psVar7 = param_2 + lVar9;
            lVar9 = lVar9 + -1;
            iVar18 = iVar18 - *psVar7;
          } while ((long)uVar13 < lVar9);
        }
      }
      else {
        iVar18 = 0x8000;
      }
LAB_00e684f8:
      iVar20 = (int)param_2[(int)uVar1] >> 1;
      iVar18 = iVar18 - iVar20;
      iVar10 = iVar10 + iVar20;
      iVar19 = ((int)param_1[uVar13] + (int)param_1[uVar13 - 1] & 1U) +
               ((int)param_1[uVar13] + (int)param_1[uVar13 - 1] >> 1);
      if (iVar18 < iVar10) {
        iVar22 = iVar10;
        if ((iVar19 <= iVar10) && (iVar22 = iVar18, iVar18 <= iVar19)) {
          iVar22 = iVar19;
        }
      }
      else {
        iVar22 = iVar18;
        if ((iVar19 <= iVar18) && (iVar22 = iVar10, iVar10 <= iVar19)) {
          iVar22 = iVar19;
        }
      }
      sVar26 = (short)iVar22 - (short)iVar20;
      param_1[uVar13 - 1] = sVar26;
      param_1[uVar13] = sVar26 + param_2[uVar13];
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 0x14) {
      silk_insertion_sort_increasing_all_values_int16(param_1,param_3);
      sVar26 = *param_1;
      if (*param_1 <= *param_2) {
        sVar26 = *param_2;
      }
      iVar6 = (int)sVar26;
      *param_1 = sVar26;
      if (1 < (int)param_3) {
        lVar9 = (ulong)param_3 - 1;
        psVar7 = param_2 + 1;
        psVar8 = param_1 + 1;
        do {
          iVar10 = (int)*psVar7 + (int)(short)iVar6;
          if (0x7ffe < iVar10) {
            iVar10 = 0x7fff;
          }
          if (iVar10 == -0x8000 || iVar10 + 0x8000 < 0 != SCARRY4(iVar10,0x8000)) {
            iVar10 = -0x8000;
          }
          iVar6 = (int)*psVar8;
          if (*psVar8 <= iVar10) {
            iVar6 = iVar10;
          }
          lVar9 = lVar9 + -1;
          *psVar8 = (short)iVar6;
          psVar7 = psVar7 + 1;
          psVar8 = psVar8 + 1;
        } while (lVar9 != 0);
        iVar6 = (int)param_1[lVar17];
        if (0x8000 - param_2[lVar16] <= (int)param_1[lVar17]) {
          iVar6 = 0x8000 - param_2[lVar16];
        }
        param_1[lVar17] = (short)iVar6;
        if (1 < (int)param_3) {
          lVar16 = (ulong)(param_3 - 2) << 1;
          do {
            psVar7 = (short *)((long)param_1 + lVar16);
            lVar17 = lVar16 + 2;
            lVar16 = lVar16 + -2;
            iVar10 = (int)psVar7[1] - (int)*(short *)((long)param_2 + lVar17);
            iVar6 = (int)*psVar7;
            if (iVar10 <= *psVar7) {
              iVar6 = iVar10;
            }
            *psVar7 = (short)iVar6;
          } while (lVar16 != -2);
        }
        return;
      }
      iVar6 = (int)param_1[lVar17];
      if (0x8000 - param_2[lVar16] <= (int)param_1[lVar17]) {
        iVar6 = 0x8000 - param_2[lVar16];
      }
      param_1[lVar17] = (short)iVar6;
      return;
    }
  } while( true );
}


