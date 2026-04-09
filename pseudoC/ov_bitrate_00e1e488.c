// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_bitrate
// Entry Point: 00e1e488
// Size: 504 bytes
// Signature: undefined ov_bitrate(void)


ulong ov_bitrate(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  if (*(int *)(param_1 + 0x80) < 2) {
    return 0xffffffffffffff7d;
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar8 = (ulong)uVar3;
  if ((int)uVar3 <= (int)param_2) {
    return 0xffffffffffffff7d;
  }
  if ((param_2 != 0) && (*(int *)(param_1 + 8) == 0)) {
    if ((int)uVar3 < 1) {
      return 0xffffffffffffff7d;
    }
    lVar9 = *(long *)(param_1 + 0x68);
    if (0 < (long)*(ulong *)(lVar9 + 0x18)) {
      return *(ulong *)(lVar9 + 0x18);
    }
    uVar8 = *(ulong *)(lVar9 + 0x10);
    if ((long)uVar8 < 1) {
      return 0xffffffffffffffff;
    }
LAB_00e1e598:
    if (*(long *)(lVar9 + 0x20) < 1) {
      return uVar8;
    }
    return *(long *)(lVar9 + 0x20) + uVar8 >> 1;
  }
  if (-1 < (int)param_2) {
    if (*(int *)(param_1 + 8) != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x48) + (ulong)(param_2 + 1) * 8);
      lVar10 = *(long *)(*(long *)(param_1 + 0x50) + (ulong)param_2 * 8);
      dVar15 = (double)ov_time_total();
      return (long)(double)(long)((double)((lVar9 - lVar10) * 8) / dVar15);
    }
    lVar9 = *(long *)(param_1 + 0x68);
    uVar8 = *(ulong *)(lVar9 + (ulong)param_2 * 0x38 + 0x18);
    if (0 < (long)uVar8) {
      return uVar8;
    }
    uVar8 = *(ulong *)(lVar9 + (ulong)param_2 * 0x38 + 0x10);
    if ((long)uVar8 < 1) {
      return 0xffffffffffffffff;
    }
    lVar9 = lVar9 + (ulong)param_2 * 0x38;
    goto LAB_00e1e598;
  }
  if ((int)uVar3 < 1) {
    dVar15 = 0.0;
    goto LAB_00e1e65c;
  }
  if (uVar3 < 4) {
    uVar12 = 0;
    lVar9 = 0;
LAB_00e1e62c:
    lVar10 = uVar8 - uVar12;
    plVar13 = (long *)(uVar12 * 8 + *(long *)(param_1 + 0x48));
    plVar11 = (long *)(*(long *)(param_1 + 0x50) + uVar12 * 8);
    do {
      plVar13 = plVar13 + 1;
      lVar10 = lVar10 + -1;
      lVar9 = lVar9 + (*plVar13 - *plVar11) * 8;
      plVar11 = plVar11 + 1;
    } while (lVar10 != 0);
  }
  else {
    uVar12 = uVar8 & 0xfffffffc;
    plVar13 = (long *)(*(long *)(param_1 + 0x48) + 0x18);
    lVar9 = 0;
    lVar10 = 0;
    plVar11 = (long *)(*(long *)(param_1 + 0x50) + 0x10);
    lVar17 = 0;
    lVar18 = 0;
    uVar14 = uVar12;
    do {
      plVar1 = plVar13 + -2;
      plVar4 = plVar13 + -1;
      plVar5 = plVar13 + 1;
      lVar19 = *plVar13;
      plVar13 = plVar13 + 4;
      uVar14 = uVar14 - 4;
      plVar2 = plVar11 + -2;
      plVar6 = plVar11 + -1;
      plVar7 = plVar11 + 1;
      lVar20 = *plVar11;
      plVar11 = plVar11 + 4;
      lVar9 = (*plVar1 - *plVar2) * 8 + lVar9;
      lVar10 = (*plVar4 - *plVar6) * 8 + lVar10;
      lVar17 = (lVar19 - lVar20) * 8 + lVar17;
      lVar18 = (*plVar5 - *plVar7) * 8 + lVar18;
    } while (uVar14 != 0);
    lVar9 = lVar17 + lVar9 + lVar18 + lVar10;
    if (uVar12 != uVar8) goto LAB_00e1e62c;
  }
  dVar15 = (double)lVar9;
LAB_00e1e65c:
  dVar16 = (double)ov_time_total(param_1,0xffffffff);
  return (long)(float)(int)(dVar15 / dVar16);
}


