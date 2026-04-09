// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_hIST
// Entry Point: 00dc228c
// Size: 284 bytes
// Signature: undefined png_set_hIST(void)


void png_set_hIST(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(ushort *)(param_2 + 0x20) - 0x101 < 0xffffff00) {
    png_warning(param_1,"Invalid palette size, hIST allocation skipped");
    return;
  }
  png_free_data(param_1,param_2,8,0);
  lVar3 = png_malloc_warn(param_1,0x200);
  *(long *)(param_2 + 0x100) = lVar3;
  if (lVar3 == 0) {
    png_warning(param_1,"Insufficient memory for hIST chunk data");
    return;
  }
  uVar1 = *(ushort *)(param_2 + 0x20);
  uVar4 = (ulong)uVar1;
  *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 8;
  if (uVar1 != 0) {
    if (uVar1 < 0x10) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar4 & 0xfff0;
      puVar6 = (undefined8 *)(param_3 + 0x10);
      puVar8 = (undefined8 *)(lVar3 + 0x10);
      uVar9 = uVar5;
      do {
        puVar2 = puVar6 + -1;
        uVar10 = puVar6[-2];
        uVar12 = puVar6[1];
        uVar11 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar9 = uVar9 - 0x10;
        puVar8[-1] = *puVar2;
        puVar8[-2] = uVar10;
        puVar8[1] = uVar12;
        *puVar8 = uVar11;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar5 == uVar4) goto LAB_00dc238c;
    }
    do {
      lVar7 = uVar5 * 2;
      uVar5 = uVar5 + 1;
      *(undefined2 *)(lVar3 + lVar7) = *(undefined2 *)(param_3 + lVar7);
    } while (uVar5 < uVar4);
  }
LAB_00dc238c:
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
  return;
}


