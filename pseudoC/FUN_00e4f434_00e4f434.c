// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4f434
// Entry Point: 00e4f434
// Size: 456 bytes
// Signature: undefined FUN_00e4f434(void)


void FUN_00e4f434(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  
  if (*(char *)(param_1 + 0x1b) == '\0') {
    iVar6 = *(int *)(param_1 + 4);
    if (0 < iVar6) {
      lVar7 = 0;
      iVar11 = 0;
      do {
        if (0xb < (byte)(*(char *)(param_2 + lVar7) + 1U)) {
          uVar1 = *(uint *)(*(long *)(param_1 + 0x28) + lVar7 * 4);
          uVar1 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
          uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
          uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
          uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
          *(uint *)(*(long *)(param_1 + 0x830) + (long)iVar11 * 4) = uVar1 >> 0x10 | uVar1 << 0x10;
          iVar6 = *(int *)(param_1 + 4);
          iVar11 = iVar11 + 1;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar6);
    }
  }
  else if (0 < *(int *)(param_1 + 0x840)) {
    lVar7 = 0;
    lVar8 = *(long *)(param_1 + 0x28);
    lVar12 = *(long *)(param_1 + 0x830);
    do {
      lVar13 = lVar7 * 4;
      lVar7 = lVar7 + 1;
      uVar1 = *(uint *)(lVar8 + lVar13);
      uVar1 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      *(uint *)(lVar12 + lVar13) = uVar1 >> 0x10 | uVar1 << 0x10;
    } while (lVar7 < *(int *)(param_1 + 0x840));
  }
  qsort(*(void **)(param_1 + 0x830),(long)*(int *)(param_1 + 0x840),4,FUN_00e50304);
  cVar10 = *(char *)(param_1 + 0x1b);
  lVar7 = 4;
  if (cVar10 != '\0') {
    lVar7 = 0x840;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x830) + (long)*(int *)(param_1 + 0x840) * 4) = 0xffffffff;
  uVar1 = *(uint *)(param_1 + lVar7);
  if ((int)uVar1 < 1) {
    return;
  }
  uVar9 = 0;
  if (cVar10 == '\0') goto LAB_00e4f54c;
LAB_00e4f540:
  cVar3 = *(char *)(param_2 + (ulong)*(uint *)(param_3 + uVar9 * 4));
  do {
    uVar14 = *(uint *)(param_1 + 0x840);
    if ((int)uVar14 < 2) {
      iVar6 = 0;
      if (cVar10 != '\0') goto LAB_00e4f5a8;
LAB_00e4f5cc:
      *(int *)(*(long *)(param_1 + 0x838) + (long)iVar6 * 4) = (int)uVar9;
    }
    else {
      iVar6 = 0;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + uVar9 * 4);
      uVar2 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      do {
        uVar4 = uVar14 >> 1;
        uVar5 = uVar14 - uVar4;
        uVar14 = uVar4;
        if (*(uint *)(*(long *)(param_1 + 0x830) + (long)(int)(uVar4 + iVar6) * 4) <=
            (uVar2 >> 0x10 | uVar2 << 0x10)) {
          uVar14 = uVar5;
          iVar6 = uVar4 + iVar6;
        }
      } while (1 < (int)uVar14);
      if (cVar10 == '\0') goto LAB_00e4f5cc;
LAB_00e4f5a8:
      lVar7 = *(long *)(param_1 + 8);
      *(undefined4 *)(*(long *)(param_1 + 0x838) + (long)iVar6 * 4) =
           *(undefined4 *)(param_3 + uVar9 * 4);
      *(char *)(lVar7 + iVar6) = cVar3;
    }
    do {
      uVar9 = uVar9 + 1;
      if (uVar9 == uVar1) {
        return;
      }
      cVar10 = *(char *)(param_1 + 0x1b);
      if (cVar10 != '\0') goto LAB_00e4f540;
LAB_00e4f54c:
      cVar3 = *(char *)(param_2 + uVar9);
    } while ((byte)(cVar3 + 1U) < 0xc);
  } while( true );
}


