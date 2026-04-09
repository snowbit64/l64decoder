// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_idct_ifast
// Entry Point: 00d85cc4
// Size: 988 bytes
// Signature: undefined jpeg_idct_ifast(void)


void jpeg_idct_ifast(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  ushort uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  short *psVar19;
  int *piVar20;
  uint uVar21;
  int iVar22;
  int local_168 [16];
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  long local_68;
  
  lVar11 = tpidr_el0;
  piVar17 = local_168;
  psVar19 = (short *)(param_3 + 0x40);
  uVar21 = 9;
  local_68 = *(long *)(lVar11 + 0x28);
  lVar18 = *(long *)(param_1 + 0x198);
  piVar20 = *(int **)(param_2 + 0x58);
  do {
    uVar13 = psVar19[-0x10];
    if ((ushort)(psVar19[-0x18] | uVar13) == 0) {
      if ((((psVar19[-8] != 0) || (*psVar19 != 0)) || (psVar19[8] != 0)) ||
         ((psVar19[0x10] != 0 || (psVar19[0x18] != 0)))) {
        uVar13 = 0;
        goto LAB_00d85d54;
      }
      iVar12 = *piVar20 * (int)psVar19[-0x20];
      lVar14 = 0x38;
      *piVar17 = iVar12;
      piVar17[8] = iVar12;
      piVar17[0x10] = iVar12;
      piVar17[0x18] = iVar12;
      piVar17[0x20] = iVar12;
      piVar17[0x28] = iVar12;
      piVar17[0x30] = iVar12;
    }
    else {
LAB_00d85d54:
      iVar1 = piVar20[0x20] * (int)*psVar19 + *piVar20 * (int)psVar19[-0x20];
      iVar9 = *piVar20 * (int)psVar19[-0x20] - piVar20[0x20] * (int)*psVar19;
      iVar2 = piVar20[0x30] * (int)psVar19[0x10] + piVar20[0x10] * (int)(short)uVar13;
      iVar8 = piVar20[8] * (int)psVar19[-0x18];
      iVar3 = iVar2 + iVar1;
      iVar12 = (int)((ulong)((long)(piVar20[0x10] * (int)(short)uVar13 -
                                   piVar20[0x30] * (int)psVar19[0x10]) * 0x16a) >> 8) - iVar2;
      iVar1 = iVar1 - iVar2;
      iVar2 = iVar12 + iVar9;
      iVar9 = iVar9 - iVar12;
      iVar12 = piVar20[0x28] * (int)psVar19[8] + piVar20[0x18] * (int)psVar19[-8];
      iVar10 = piVar20[0x28] * (int)psVar19[8] - piVar20[0x18] * (int)psVar19[-8];
      iVar4 = piVar20[0x38] * (int)psVar19[0x18] + iVar8;
      iVar8 = iVar8 - piVar20[0x38] * (int)psVar19[0x18];
      iVar5 = iVar4 + iVar12;
      iVar16 = (int)((ulong)((long)(iVar8 + iVar10) * 0x1d9) >> 8);
      iVar10 = iVar16 - (iVar5 + (int)((ulong)((long)iVar10 * 0x29d) >> 8));
      *piVar17 = iVar5 + iVar3;
      iVar4 = (int)((ulong)((long)(iVar4 - iVar12) * 0x16a) >> 8) - iVar10;
      iVar16 = iVar16 - (iVar4 + (int)((ulong)((long)iVar8 * 0x115) >> 8));
      piVar17[0x30] = iVar2 - iVar10;
      iVar12 = iVar1 - iVar16;
      lVar14 = 0x20;
      piVar17[0x38] = iVar3 - iVar5;
      piVar17[8] = iVar10 + iVar2;
      piVar17[0x10] = iVar4 + iVar9;
      piVar17[0x28] = iVar9 - iVar4;
      piVar17[0x18] = iVar16 + iVar1;
    }
    piVar17[lVar14] = iVar12;
    piVar17 = piVar17 + 1;
    piVar20 = piVar20 + 1;
    uVar21 = uVar21 - 1;
    psVar19 = psVar19 + 1;
  } while (1 < uVar21);
  lVar14 = 0;
  lVar18 = lVar18 + -0x180;
  piVar17 = local_168 + 4;
  do {
    while( true ) {
      uVar7 = piVar17[-3];
      uVar15 = piVar17[-2];
      plVar6 = (long *)(*(long *)(param_4 + lVar14) + (param_5 & 0xffffffff));
      uVar21 = piVar17[-4] + 0x4010;
      if ((uVar7 | uVar15) == 0) break;
LAB_00d85f30:
      iVar1 = *piVar17 + uVar21;
      iVar16 = uVar21 - *piVar17;
      iVar2 = piVar17[2] + uVar15;
      iVar3 = piVar17[-1] + piVar17[1];
      iVar12 = piVar17[3] + uVar7;
      iVar4 = iVar2 + iVar1;
      iVar5 = iVar12 + iVar3;
      uVar21 = piVar17[1] - piVar17[-1];
      uVar7 = uVar7 - piVar17[3];
      iVar9 = (int)((ulong)(uVar15 - piVar17[2]) * 0x16a >> 8) - iVar2;
      *(undefined *)plVar6 = *(undefined *)(lVar18 + ((ulong)((uint)(iVar5 + iVar4) >> 5) & 0x3ff));
      iVar8 = iVar9 + iVar16;
      iVar22 = (int)((ulong)(uVar7 + uVar21) * 0x1d9 >> 8);
      iVar10 = iVar22 - (iVar5 + (int)((ulong)uVar21 * 0x29d >> 8));
      iVar16 = iVar16 - iVar9;
      iVar1 = iVar1 - iVar2;
      *(undefined *)((long)plVar6 + 7) =
           *(undefined *)(lVar18 + ((ulong)((uint)(iVar4 - iVar5) >> 5) & 0x3ff));
      *(undefined *)((long)plVar6 + 1) =
           *(undefined *)(lVar18 + ((ulong)((uint)(iVar10 + iVar8) >> 5) & 0x3ff));
      iVar2 = (int)((ulong)(uint)(iVar12 - iVar3) * 0x16a >> 8) - iVar10;
      iVar22 = iVar22 - (iVar2 + (int)((ulong)uVar7 * 0x115 >> 8));
      *(undefined *)((long)plVar6 + 6) =
           *(undefined *)(lVar18 + ((ulong)((uint)(iVar8 - iVar10) >> 5) & 0x3ff));
      *(undefined *)((long)plVar6 + 2) =
           *(undefined *)(lVar18 + ((ulong)((uint)(iVar2 + iVar16) >> 5) & 0x3ff));
      *(undefined *)((long)plVar6 + 5) =
           *(undefined *)(lVar18 + ((ulong)((uint)(iVar16 - iVar2) >> 5) & 0x3ff));
      *(undefined *)((long)plVar6 + 3) =
           *(undefined *)(lVar18 + ((ulong)((uint)(iVar22 + iVar1) >> 5) & 0x3ff));
      *(undefined *)((long)plVar6 + 4) =
           *(undefined *)(lVar18 + ((ulong)((uint)(iVar1 - iVar22) >> 5) & 0x3ff));
      lVar14 = lVar14 + 8;
      piVar17 = piVar17 + 8;
      if (lVar14 == 0x40) goto LAB_00d8606c;
    }
    if (((piVar17[-1] != 0) || (*piVar17 != 0)) ||
       ((piVar17[1] != 0 || ((piVar17[2] != 0 || (piVar17[3] != 0)))))) {
      uVar15 = 0;
      goto LAB_00d85f30;
    }
    *plVar6 = (ulong)*(byte *)(lVar18 + ((ulong)(uVar21 >> 5) & 0x3ff)) * 0x101010101010101;
    lVar14 = lVar14 + 8;
    piVar17 = piVar17 + 8;
  } while (lVar14 != 0x40);
LAB_00d8606c:
  if (*(long *)(lVar11 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


