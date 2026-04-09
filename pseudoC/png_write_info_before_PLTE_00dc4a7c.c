// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_info_before_PLTE
// Entry Point: 00dc4a7c
// Size: 472 bytes
// Signature: undefined png_write_info_before_PLTE(void)


void png_write_info_before_PLTE(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x165) >> 2 & 1) != 0) {
    return;
  }
  png_write_sig(param_1);
  if (((*(byte *)(param_1 + 0x165) >> 4 & 1) != 0) && (*(int *)(param_1 + 0x418) != 0)) {
    png_warning(param_1,"MNG features are not allowed in a PNG datastream");
    *(undefined4 *)(param_1 + 0x418) = 0;
  }
  png_write_IHDR(param_1,*param_2,param_2[1],*(undefined *)(param_2 + 9),
                 *(undefined *)((long)param_2 + 0x25),*(undefined *)((long)param_2 + 0x26),
                 *(undefined *)((long)param_2 + 0x27),*(undefined *)(param_2 + 10));
  uVar3 = *(ushort *)((long)param_2 + 0x7e);
  if ((uVar3 & 0x8008) == 8) {
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      png_write_gAMA_fixed(param_1,param_2[0xd]);
      uVar3 = *(ushort *)((long)param_2 + 0x7e);
      goto LAB_00dc4b1c;
    }
  }
  else {
LAB_00dc4b1c:
    if ((short)uVar3 < 0) goto LAB_00dc4b5c;
  }
  uVar2 = param_2[2];
  if ((uVar2 >> 0xc & 1) == 0) {
    if ((uVar2 >> 0xb & 1) != 0) {
      png_write_sRGB(param_1,*(undefined2 *)(param_2 + 0x1f));
    }
  }
  else {
    if ((uVar2 >> 0xb & 1) != 0) {
      png_app_warning(param_1,"profile matches sRGB but writing iCCP instead");
    }
    png_write_iCCP(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x22));
  }
LAB_00dc4b5c:
  if ((*(byte *)(param_2 + 2) >> 1 & 1) != 0) {
    png_write_sBIT(param_1,param_2 + 0x2c,*(undefined *)((long)param_2 + 0x25));
  }
  if (((*(ushort *)((long)param_2 + 0x7e) & 0x8010) == 0x10) &&
     ((*(byte *)(param_2 + 2) >> 2 & 1) != 0)) {
    png_write_cHRM_fixed(param_1,param_2 + 0xe);
  }
  iVar4 = param_2[0x4e];
  if ((iVar4 != 0) && (0 < iVar4)) {
    uVar6 = *(ulong *)(param_2 + 0x4c);
    uVar1 = uVar6 + (long)iVar4 * 0x20;
    do {
      if ((((*(byte *)(uVar6 + 0x18) & 1) != 0) &&
          (iVar4 = png_handle_as_unknown(param_1,uVar6), iVar4 != 1)) &&
         ((((*(byte *)(uVar6 + 3) >> 5 & 1) != 0 || (iVar4 == 3)) ||
          ((iVar4 == 0 && (*(int *)(param_1 + 0x3f8) == 3)))))) {
        lVar5 = *(long *)(uVar6 + 0x10);
        if (lVar5 == 0) {
          png_warning(param_1,"Writing zero-length unknown chunk");
          lVar5 = *(long *)(uVar6 + 0x10);
        }
        png_write_chunk(param_1,uVar6,*(undefined8 *)(uVar6 + 8),lVar5);
      }
      uVar6 = uVar6 + 0x20;
    } while (uVar6 < uVar1);
  }
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x400;
  return;
}


