// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f17aac
// Entry Point: 00f17aac
// Size: 356 bytes
// Signature: undefined FUN_00f17aac(void)


ulong FUN_00f17aac(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < 0) {
    uVar10 = (ulong)*(uint *)(param_1 + 8);
    lVar11 = *(long *)(param_1 + 0x18);
    iVar3 = *(int *)(lVar11 + (long)(int)*(uint *)(param_1 + 8) * 0x10 + -4);
    uVar5 = (ulong)(uint)-iVar2;
  }
  else {
    uVar6 = *(uint *)(param_1 + 8);
    uVar10 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      return uVar10;
    }
    lVar11 = *(long *)(param_1 + 0x18);
    iVar3 = *(int *)(lVar11 + (long)(int)uVar6 * 0x10 + -4);
    uVar5 = uVar10;
  }
  if ((iVar3 != 0) && (*(undefined1 **)(param_1 + 0x20) == luaH_dummynode)) {
    return uVar10;
  }
  uVar6 = (uint)uVar5;
  uVar9 = (uint)uVar10;
  if ((int)uVar6 < (int)uVar9) {
    uVar7 = uVar6 - 1;
    if (*(int *)(lVar11 + (ulong)uVar7 * 0x10 + 0xc) != 0) {
      if (*(int *)(lVar11 + uVar5 * 0x10 + 0xc) == 0) {
        return uVar5;
      }
      goto LAB_00f17b28;
    }
    if ((1 < uVar6) && (*(int *)(lVar11 + (ulong)(uVar6 - 2) * 0x10 + 0xc) != 0)) {
      if (0 < iVar2) goto LAB_00f17bf4;
      uVar6 = 1 - uVar6;
      goto LAB_00f17c00;
    }
  }
  else {
LAB_00f17b28:
    uVar7 = uVar6 + 1;
    if ((((int)uVar7 < (int)uVar9) && (*(int *)(lVar11 + uVar5 * 0x10 + 0xc) != 0)) &&
       (*(int *)(lVar11 + (ulong)uVar7 * 0x10 + 0xc) == 0)) {
      if (0 < iVar2) goto LAB_00f17bf4;
      uVar6 = ~uVar6;
      goto LAB_00f17c00;
    }
  }
  if (((int)uVar9 < 1) ||
     (lVar8 = *(long *)(param_1 + 0x18), lVar11 = lVar8,
     *(int *)(lVar8 + (ulong)(uVar9 - 1) * 0x10 + 0xc) != 0)) {
    return uVar10;
  }
  while (1 < uVar9) {
    iVar3 = (int)uVar10 >> 1;
    lVar4 = uVar10 << 0x20;
    uVar9 = (int)uVar10 - iVar3;
    uVar10 = (ulong)uVar9;
    lVar1 = 0;
    if (*(int *)(lVar11 + (long)iVar3 * 0x10 + 0xc) != 0) {
      lVar1 = lVar4 >> 0x21;
    }
    lVar11 = lVar11 + lVar1 * 0x10;
  }
  uVar7 = (uint)((ulong)(lVar11 - lVar8) >> 4);
  if (*(int *)(lVar11 + 0xc) != 0) {
    uVar7 = uVar7 + 1;
  }
  if (0 < iVar2) {
LAB_00f17bf4:
    return (ulong)uVar7;
  }
  uVar6 = -uVar7;
LAB_00f17c00:
  *(uint *)(param_1 + 0xc) = uVar6;
  return (ulong)uVar7;
}


