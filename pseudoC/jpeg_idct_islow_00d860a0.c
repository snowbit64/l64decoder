// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_islow
// Entry Point: 00d860a0
// Size: 1112 bytes
// Signature: undefined jpeg_idct_islow(void)


void jpeg_idct_islow(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  short *psVar22;
  int *piVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  ushort uVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  long lVar38;
  int local_170 [16];
  int local_130 [8];
  int local_110 [8];
  int local_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  long local_70;
  
  lVar15 = tpidr_el0;
  piVar20 = local_170;
  psVar22 = (short *)(param_3 + 0x40);
  uVar24 = 9;
  local_70 = *(long *)(lVar15 + 0x28);
  lVar17 = *(long *)(param_1 + 0x198);
  piVar23 = *(int **)(param_2 + 0x58);
  do {
    uVar29 = psVar22[-0x10];
    if ((ushort)(psVar22[-0x18] | uVar29) == 0) {
      if ((((psVar22[-8] != 0) || (*psVar22 != 0)) || (psVar22[8] != 0)) ||
         ((psVar22[0x10] != 0 || (psVar22[0x18] != 0)))) {
        uVar29 = 0;
        goto LAB_00d86150;
      }
      lVar19 = 0x38;
      iVar27 = (int)psVar22[-0x20] * *piVar23 * 4;
      *piVar20 = iVar27;
      piVar20[8] = iVar27;
      piVar20[0x10] = iVar27;
      piVar20[0x18] = iVar27;
      piVar20[0x20] = iVar27;
      piVar20[0x28] = iVar27;
      piVar20[0x30] = iVar27;
    }
    else {
LAB_00d86150:
      lVar19 = (long)piVar23[0x38] * (long)psVar22[0x18];
      lVar21 = (long)piVar23[0x28] * (long)psVar22[8];
      lVar36 = (long)piVar23[0x18] * (long)psVar22[-8];
      lVar28 = (long)piVar23[8] * (long)psVar22[-0x18];
      lVar35 = ((long)piVar23[0x30] * (long)psVar22[0x10] +
               (long)piVar23[0x10] * (long)(short)uVar29) * 0x1151;
      lVar31 = lVar35 + (long)piVar23[0x10] * (long)(short)uVar29 * 0x187e;
      lVar35 = lVar35 + (long)piVar23[0x30] * (long)psVar22[0x10] * -0x3b21;
      lVar18 = (lVar28 + lVar21 + lVar36 + lVar19) * 0x25a1;
      uVar5 = (long)(*piVar23 * (int)psVar22[-0x20]) << 0xd | 0x400;
      lVar32 = (lVar28 + lVar19) * -0x1ccd;
      lVar26 = (ulong)(uint)(piVar23[0x20] * (int)*psVar22) * 0x2000 + uVar5;
      lVar38 = lVar18 + (lVar28 + lVar21) * -0xc7c;
      lVar25 = uVar5 + (ulong)(uint)(piVar23[0x20] * (int)*psVar22) * -0x2000;
      lVar34 = (lVar36 + lVar21) * -0x5203;
      lVar2 = lVar31 + lVar26;
      lVar28 = lVar32 + lVar28 * 0x300b + lVar38;
      lVar18 = lVar18 + (lVar36 + lVar19) * -0x3ec5;
      lVar3 = lVar35 + lVar25;
      lVar25 = lVar25 - lVar35;
      lVar38 = lVar34 + lVar21 * 0x41b3 + lVar38;
      piVar20[0x38] = (int)((ulong)(lVar2 - lVar28) >> 0xb);
      lVar21 = lVar34 + lVar36 * 0x6254 + lVar18;
      lVar26 = lVar26 - lVar31;
      lVar18 = lVar32 + lVar19 * 0x98e + lVar18;
      piVar20[0x10] = (int)((ulong)(lVar38 + lVar25) >> 0xb);
      iVar27 = (int)((ulong)(lVar26 - lVar18) >> 0xb);
      lVar19 = 0x20;
      *piVar20 = (int)((ulong)(lVar28 + lVar2) >> 0xb);
      piVar20[8] = (int)((ulong)(lVar21 + lVar3) >> 0xb);
      piVar20[0x30] = (int)((ulong)(lVar3 - lVar21) >> 0xb);
      piVar20[0x28] = (int)((ulong)(lVar25 - lVar38) >> 0xb);
      piVar20[0x18] = (int)((ulong)(lVar18 + lVar26) >> 0xb);
    }
    piVar20[lVar19] = iVar27;
    piVar20 = piVar20 + 1;
    piVar23 = piVar23 + 1;
    uVar24 = uVar24 - 1;
    psVar22 = psVar22 + 1;
  } while (1 < uVar24);
  lVar26 = 0;
  lVar17 = lVar17 + -0x180;
  piVar20 = local_170 + 4;
  do {
    while( true ) {
      uVar24 = piVar20[-3];
      uVar33 = piVar20[-2];
      plVar4 = (long *)(*(long *)(param_4 + lVar26) + (ulong)param_5);
      if ((uVar24 | uVar33) == 0) break;
LAB_00d8636c:
      iVar6 = piVar20[3];
      iVar8 = piVar20[-1];
      iVar7 = piVar20[1];
      iVar37 = (piVar20[2] + uVar33) * 0x1151;
      iVar13 = (iVar6 + uVar24) * -0x1ccd;
      iVar16 = (iVar8 + iVar6 + iVar7 + uVar24) * 0x25a1;
      iVar11 = iVar37 + uVar33 * 0x187e;
      iVar30 = (int)((long)piVar20[-4] + 0x4010U);
      iVar12 = iVar16 + (iVar7 + uVar24) * -0xc7c;
      iVar9 = (iVar30 + *piVar20) * 0x2000;
      iVar27 = iVar11 + iVar9;
      iVar1 = iVar13 + uVar24 * 0x300b + iVar12;
      iVar37 = iVar37 + piVar20[2] * -0x3b21;
      iVar14 = (iVar8 + iVar7) * -0x5203;
      iVar10 = (iVar30 - *piVar20) * 0x2000;
      iVar16 = iVar16 + (iVar8 + iVar6) * -0x3ec5;
      iVar30 = iVar37 + iVar10;
      iVar10 = iVar10 - iVar37;
      iVar9 = iVar9 - iVar11;
      *(undefined *)plVar4 =
           *(undefined *)(lVar17 + ((ulong)((uint)(iVar1 + iVar27) >> 0x12) & 0x3ff));
      iVar8 = iVar14 + iVar8 * 0x6254 + iVar16;
      iVar12 = iVar14 + iVar7 * 0x41b3 + iVar12;
      iVar16 = iVar13 + iVar6 * 0x98e + iVar16;
      *(undefined *)((long)plVar4 + 7) =
           *(undefined *)(lVar17 + ((ulong)((uint)(iVar27 - iVar1) >> 0x12) & 0x3ff));
      *(undefined *)((long)plVar4 + 1) =
           *(undefined *)(lVar17 + ((ulong)((uint)(iVar8 + iVar30) >> 0x12) & 0x3ff));
      *(undefined *)((long)plVar4 + 6) =
           *(undefined *)(lVar17 + ((ulong)((uint)(iVar30 - iVar8) >> 0x12) & 0x3ff));
      *(undefined *)((long)plVar4 + 2) =
           *(undefined *)(lVar17 + ((ulong)((uint)(iVar12 + iVar10) >> 0x12) & 0x3ff));
      *(undefined *)((long)plVar4 + 5) =
           *(undefined *)(lVar17 + ((ulong)((uint)(iVar10 - iVar12) >> 0x12) & 0x3ff));
      *(undefined *)((long)plVar4 + 3) =
           *(undefined *)(lVar17 + ((ulong)((uint)(iVar16 + iVar9) >> 0x12) & 0x3ff));
      *(undefined *)((long)plVar4 + 4) =
           *(undefined *)(lVar17 + ((ulong)((uint)(iVar9 - iVar16) >> 0x12) & 0x3ff));
      lVar26 = lVar26 + 8;
      piVar20 = piVar20 + 8;
      if (lVar26 == 0x40) goto LAB_00d864c0;
    }
    if (((piVar20[-1] != 0) || (*piVar20 != 0)) ||
       ((piVar20[1] != 0 || ((piVar20[2] != 0 || (piVar20[3] != 0)))))) {
      uVar33 = 0;
      goto LAB_00d8636c;
    }
    *plVar4 = (ulong)*(byte *)(lVar17 + ((long)piVar20[-4] + 0x4010U >> 5 & 0x3ff)) *
              0x101010101010101;
    lVar26 = lVar26 + 8;
    piVar20 = piVar20 + 8;
  } while (lVar26 != 0x40);
LAB_00d864c0:
  if (*(long *)(lVar15 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


