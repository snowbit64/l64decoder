// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4cf68
// Entry Point: 00e4cf68
// Size: 428 bytes
// Signature: undefined FUN_00e4cf68(void)


ulong FUN_00e4cf68(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  
  if (*(int *)(param_1 + 0x6f8) < 0x19) {
    if (*(int *)(param_1 + 0x6f8) == 0) {
      *(undefined4 *)(param_1 + 0x6f4) = 0;
    }
    do {
      if (((*(int *)(param_1 + 0x6ec) != 0) && (*(char *)(param_1 + 0x6e4) == '\0')) ||
         (iVar9 = FUN_00e4c7e4(param_1), iVar9 == -1)) break;
      uVar12 = *(uint *)(param_1 + 0x6f8);
      *(int *)(param_1 + 0x6f4) = *(int *)(param_1 + 0x6f4) + (iVar9 << (ulong)(uVar12 & 0x1f));
      *(uint *)(param_1 + 0x6f8) = uVar12 + 8;
    } while ((int)uVar12 < 0x11);
  }
  if (*(long *)(param_2 + 0x28) == 0) {
    lVar13 = *(long *)(param_2 + 0x830);
    if (lVar13 == 0) {
      return 0xffffffff;
    }
LAB_00e4cffc:
    uVar12 = *(uint *)(param_2 + 0x840);
    uVar2 = *(uint *)(param_1 + 0x6f4);
    if ((int)uVar12 < 2) {
      uVar11 = 0;
      uVar10 = 0;
      cVar4 = *(char *)(param_2 + 0x1b);
    }
    else {
      uVar11 = 0;
      uVar10 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
      uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      uVar7 = uVar10 >> 0x10 | uVar10 << 0x10;
      do {
        uVar6 = uVar12 >> 1;
        uVar1 = uVar6 + (uint)uVar11;
        uVar8 = uVar12 - uVar6;
        uVar3 = *(uint *)(lVar13 + (long)(int)uVar1 * 4);
        uVar10 = (uint)uVar11;
        if (uVar3 <= uVar7) {
          uVar10 = uVar1;
        }
        uVar11 = (ulong)uVar10;
        uVar12 = uVar6;
        if (uVar3 <= uVar7) {
          uVar12 = uVar8;
        }
      } while (1 < (int)uVar12);
      cVar4 = *(char *)(param_2 + 0x1b);
    }
    if (cVar4 == '\0') {
      uVar11 = (ulong)*(uint *)(*(long *)(param_2 + 0x838) + (long)(int)uVar10 * 4);
    }
    uVar12 = (uint)*(byte *)(*(long *)(param_2 + 8) + (long)(int)uVar11);
    iVar9 = *(int *)(param_1 + 0x6f8) - uVar12;
    if (*(int *)(param_1 + 0x6f8) < (int)uVar12) {
LAB_00e4d0b4:
      iVar9 = 0;
      uVar11 = 0xffffffff;
    }
    else {
      *(uint *)(param_1 + 0x6f4) = uVar2 >> (ulong)(uVar12 & 0x1f);
    }
    goto LAB_00e4d0d0;
  }
  uVar12 = *(uint *)(param_2 + 4);
  if ((int)uVar12 < 9) {
    if (0 < (int)uVar12) goto LAB_00e4d068;
  }
  else {
    lVar13 = *(long *)(param_2 + 0x830);
    if (lVar13 != 0) goto LAB_00e4cffc;
LAB_00e4d068:
    uVar11 = 0;
    lVar13 = *(long *)(param_2 + 8);
    do {
      bVar5 = *(byte *)(lVar13 + uVar11);
      if ((bVar5 != 0xff) &&
         (*(uint *)(*(long *)(param_2 + 0x28) + uVar11 * 4) ==
          (*(uint *)(param_1 + 0x6f4) & (-1 << (ulong)(bVar5 & 0x1f) ^ 0xffffffffU)))) {
        if (*(int *)(param_1 + 0x6f8) < (int)(uint)bVar5) goto LAB_00e4d0b4;
        *(uint *)(param_1 + 0x6f4) = *(uint *)(param_1 + 0x6f4) >> (ulong)(bVar5 & 0x1f);
        iVar9 = *(int *)(param_1 + 0x6f8) - (uint)*(byte *)(lVar13 + (uVar11 & 0xffffffff));
        goto LAB_00e4d0d0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar12 != uVar11);
  }
  iVar9 = 0;
  uVar11 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x15;
LAB_00e4d0d0:
  *(int *)(param_1 + 0x6f8) = iVar9;
  return uVar11;
}


