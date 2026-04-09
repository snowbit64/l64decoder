// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_IHDR
// Entry Point: 00dc83bc
// Size: 748 bytes
// Signature: undefined png_write_IHDR(void)


void png_write_IHDR(long param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5,
                   int param_6,int param_7,uint param_8)

{
  long lVar1;
  undefined uVar2;
  ulong uVar3;
  undefined local_68;
  undefined local_67;
  undefined local_66;
  undefined local_65;
  undefined local_64;
  undefined local_63;
  undefined local_62;
  undefined local_61;
  undefined local_60;
  undefined local_5f;
  undefined local_5e;
  undefined local_5d;
  undefined local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  switch(param_5) {
  case 0:
    if ((0x10 < param_4) || (uVar2 = 1, (1 << (ulong)(param_4 & 0x1f) & 0x10116U) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for grayscale image");
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Invalid image color type specified");
  case 2:
    uVar2 = 3;
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for RGB image");
    }
    break;
  case 3:
    if ((7 < param_4 - 1) || ((0x8bU >> (ulong)(param_4 - 1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for paletted image");
    }
    uVar2 = 1;
    break;
  case 4:
    uVar2 = 2;
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for grayscale+alpha image");
    }
    break;
  case 6:
    uVar2 = 4;
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for RGBA image");
    }
  }
  *(undefined *)(param_1 + 0x2a3) = uVar2;
  if (param_6 != 0) {
    png_warning(param_1,"Invalid compression type specified");
  }
  if (((*(byte *)(param_1 + 0x418) >> 2 & 1) == 0) || ((*(byte *)(param_1 + 0x165) >> 4 & 1) != 0))
  {
    if (param_7 == 0) goto LAB_00dc8534;
  }
  else if ((param_7 == 0) || ((param_5 & 0xfffffffb) == 2 && param_7 == 0x40)) goto LAB_00dc8534;
  png_warning(param_1,"Invalid filter type specified");
  param_7 = 0;
LAB_00dc8534:
  if (1 < param_8) {
    png_warning(param_1,"Invalid interlace type specified");
    param_8 = 1;
  }
  local_60 = (undefined)param_4;
  *(undefined *)(param_1 + 0x2a0) = local_60;
  local_5f = (undefined)param_5;
  *(undefined *)(param_1 + 0x29f) = local_5f;
  param_4 = *(byte *)(param_1 + 0x2a3) * param_4;
  local_5c = (undefined)param_8;
  *(undefined *)(param_1 + 0x29c) = local_5c;
  local_5d = (undefined)param_7;
  *(undefined *)(param_1 + 0x41c) = local_5d;
  *(undefined *)(param_1 + 0x458) = 0;
  *(uint *)(param_1 + 0x230) = param_2;
  *(int *)(param_1 + 0x234) = (int)param_3;
  *(char *)(param_1 + 0x2a2) = (char)param_4;
  if ((param_4 & 0xff) < 8) {
    uVar3 = ((ulong)param_4 & 0xff) * (ulong)param_2 + 7 >> 3;
  }
  else {
    uVar3 = (ulong)(param_4 >> 3 & 0x1f) * (ulong)param_2;
  }
  *(ulong *)(param_1 + 0x240) = uVar3;
  *(byte *)(param_1 + 0x2a4) = *(byte *)(param_1 + 0x2a3);
  local_68 = (undefined)(param_2 >> 0x18);
  local_67 = (undefined)(param_2 >> 0x10);
  local_66 = (undefined)(param_2 >> 8);
  *(uint *)(param_1 + 0x23c) = param_2;
  *(undefined *)(param_1 + 0x2a1) = local_60;
  local_65 = (undefined)param_2;
  local_64 = (undefined)((ulong)param_3 >> 0x18);
  local_63 = (undefined)((ulong)param_3 >> 0x10);
  local_62 = (undefined)((ulong)param_3 >> 8);
  local_5e = 0;
  local_61 = (char)param_3;
  FUN_00dc8238(param_1,0x49484452,&local_68,0xd);
  if (*(char *)(param_1 + 0x29e) == '\0') {
    uVar2 = 8;
    if ((*(char *)(param_1 + 0x29f) != '\x03') && (uVar2 = 0xf8, *(byte *)(param_1 + 0x2a0) < 8)) {
      uVar2 = 8;
    }
    *(undefined *)(param_1 + 0x29e) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x164) = 1;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


