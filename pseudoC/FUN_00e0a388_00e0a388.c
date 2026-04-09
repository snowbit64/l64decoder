// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e0a388
// Entry Point: 00e0a388
// Size: 344 bytes
// Signature: undefined FUN_00e0a388(void)


ulong FUN_00e0a388(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  
  uVar8 = *(uint *)(param_1 + 0x4c);
  lVar7 = oggpack_look(param_2,*(undefined4 *)(param_1 + 0x48));
  if (lVar7 < 0) {
    uVar11 = 0;
    lVar13 = *(long *)(param_1 + 0x10);
    lVar7 = oggpack_look(param_2,uVar8);
    iVar5 = (int)((ulong)lVar7 >> 0x20);
    if (-1 < lVar7) goto LAB_00e0a440;
LAB_00e0a3ec:
    uVar6 = (uint)lVar7;
    uVar12 = uVar8;
    if (1 < (int)uVar8) {
      do {
        uVar8 = uVar12 - 1;
        lVar7 = oggpack_look(param_2,uVar8);
        uVar9 = (uint)((ulong)lVar7 >> 0x3f);
        if (-1 < lVar7) break;
        bVar1 = 2 < uVar12;
        uVar12 = uVar8;
      } while (bVar1);
      goto LAB_00e0a444;
    }
    if (iVar5 < 0) {
      return 0xffffffffffffffff;
    }
  }
  else {
    uVar12 = *(uint *)(*(long *)(param_1 + 0x40) + lVar7 * 4);
    if (-1 < (int)uVar12) {
      uVar11 = (ulong)uVar12 - 1;
      uVar8 = (uint)*(byte *)(*(long *)(param_1 + 0x38) + uVar11);
      goto LAB_00e0a4c0;
    }
    uVar11 = (ulong)(uVar12 >> 0xf) & 0x7fff;
    lVar13 = *(long *)(param_1 + 0x10) - ((ulong)uVar12 & 0x7fff);
    lVar7 = oggpack_look(param_2,uVar8);
    iVar5 = (int)((ulong)lVar7 >> 0x20);
    if (lVar7 < 0) goto LAB_00e0a3ec;
LAB_00e0a440:
    uVar9 = (uint)((ulong)lVar7 >> 0x3f);
LAB_00e0a444:
    uVar6 = (uint)lVar7;
    if (uVar9 != 0) {
      return 0xffffffffffffffff;
    }
  }
  uVar10 = lVar13 - uVar11;
  if (1 < (long)uVar10) {
    uVar12 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
    uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    do {
      uVar10 = uVar10 >> 1;
      uVar2 = uVar10;
      uVar4 = 0;
      if (*(uint *)(*(long *)(param_1 + 0x28) + (uVar10 + uVar11) * 4) <=
          (uVar12 >> 0x10 | uVar12 << 0x10)) {
        uVar2 = 0;
        uVar4 = uVar10;
      }
      uVar11 = uVar4 + uVar11;
      lVar13 = lVar13 - uVar2;
      uVar10 = lVar13 - uVar11;
    } while (1 < (long)uVar10);
  }
  bVar3 = *(byte *)(*(long *)(param_1 + 0x38) + uVar11);
  if ((int)uVar8 < (int)(uint)bVar3) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar8 = (uint)bVar3;
  }
LAB_00e0a4c0:
  oggpack_adv(param_2,uVar8);
  return uVar11;
}


