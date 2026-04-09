// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_transform_info
// Entry Point: 00db8b58
// Size: 580 bytes
// Signature: undefined png_read_transform_info(void)


void png_read_transform_info(long param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x16c);
  if ((uVar1 >> 0xc & 1) != 0) {
    if (*(byte *)((long)param_2 + 0x25) == 3) {
      uVar6 = 2;
      if (*(short *)(param_1 + 0x298) != 0) {
        uVar6 = 6;
      }
      lVar8 = *(long *)(param_1 + 0x288);
      *(undefined2 *)((long)param_2 + 0x22) = 0;
      *(undefined *)(param_2 + 9) = 8;
      *(undefined *)((long)param_2 + 0x25) = uVar6;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Palette is NULL in indexed image");
      }
    }
    else {
      if ((*(short *)(param_1 + 0x298) != 0) && ((uVar1 >> 0x19 & 1) != 0)) {
        *(byte *)((long)param_2 + 0x25) = *(byte *)((long)param_2 + 0x25) | 4;
      }
      if (*(byte *)(param_2 + 9) < 8) {
        *(undefined *)(param_2 + 9) = 8;
      }
      *(undefined2 *)((long)param_2 + 0x22) = 0;
    }
  }
  if ((uVar1 >> 7 & 1) != 0) {
    uVar3 = *(undefined2 *)(param_1 + 700);
    *(undefined8 *)((long)param_2 + 0xca) = *(undefined8 *)(param_1 + 0x2b4);
    *(undefined2 *)((long)param_2 + 0xd2) = uVar3;
  }
  uVar5 = (uint)*(byte *)(param_2 + 9);
  param_2[0xd] = *(uint *)(param_1 + 0x4d8);
  if ((*(byte *)(param_2 + 9) == 0x10) && ((uVar1 & 0x4000400) != 0)) {
    uVar5 = 8;
    *(undefined *)(param_2 + 9) = 8;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    *(byte *)((long)param_2 + 0x25) = *(byte *)((long)param_2 + 0x25) | 2;
  }
  if ((uVar1 & 0x600000) != 0) {
    *(byte *)((long)param_2 + 0x25) = *(byte *)((long)param_2 + 0x25) & 0xfd;
  }
  if (((((uVar1 >> 6 & 1) == 0) || ((*(byte *)((long)param_2 + 0x25) | 4) != 6)) ||
      (*(long *)(param_1 + 0x3b0) == 0)) || (uVar5 != 8)) {
    if (((uVar1 >> 9 & 1) == 0) || (uVar5 != 8)) goto joined_r0x00db8d78;
  }
  else {
    *(undefined *)((long)param_2 + 0x25) = 3;
    if ((uVar1 >> 9 & 1) == 0) {
      uVar5 = 8;
      goto joined_r0x00db8d78;
    }
  }
  if (*(char *)((long)param_2 + 0x25) == '\x03') {
    uVar5 = 8;
  }
  else {
    uVar5 = 0x10;
    *(undefined *)(param_2 + 9) = 0x10;
  }
joined_r0x00db8d78:
  if (((uVar1 >> 2 & 1) != 0) && (uVar5 < 8)) {
    uVar5 = 8;
    *(undefined *)(param_2 + 9) = 8;
  }
  bVar2 = *(byte *)((long)param_2 + 0x25);
  uVar9 = (uint)bVar2;
  if ((bVar2 == 3) || ((bVar2 >> 1 & 1) == 0)) {
    uVar7 = 1;
    *(undefined *)((long)param_2 + 0x29) = 1;
  }
  else {
    uVar7 = 3;
    *(undefined *)((long)param_2 + 0x29) = 3;
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffb;
    *(undefined2 *)((long)param_2 + 0x22) = 0;
    *(char *)((long)param_2 + 0x25) = (char)uVar9;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    uVar7 = uVar7 + 1;
    *(char *)((long)param_2 + 0x29) = (char)uVar7;
  }
  if (((uVar1 >> 0xf & 1) != 0) && ((uVar9 | 2) == 2)) {
    uVar7 = uVar7 + 1;
    *(char *)((long)param_2 + 0x29) = (char)uVar7;
    if ((uVar1 >> 0x18 & 1) != 0) {
      *(byte *)((long)param_2 + 0x25) = (byte)uVar9 | 4;
    }
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x160);
    if (bVar2 != 0) {
      *(byte *)(param_2 + 9) = bVar2;
      uVar5 = (uint)bVar2;
    }
    bVar2 = *(byte *)(param_1 + 0x161);
    if (bVar2 != 0) {
      *(byte *)((long)param_2 + 0x29) = bVar2;
      uVar7 = (uint)bVar2;
    }
  }
  uVar5 = uVar5 * uVar7;
  *(char *)((long)param_2 + 0x2a) = (char)uVar5;
  if (7 < (uVar5 & 0xff)) {
    lVar8 = (ulong)*param_2 * (ulong)(uVar5 >> 3 & 0x1f);
    *(long *)(param_2 + 4) = lVar8;
    *(long *)(param_1 + 0x278) = lVar8;
    return;
  }
  uVar4 = (ulong)*param_2 * ((ulong)uVar5 & 0xff) + 7 >> 3;
  *(ulong *)(param_2 + 4) = uVar4;
  *(ulong *)(param_1 + 0x278) = uVar4;
  return;
}


