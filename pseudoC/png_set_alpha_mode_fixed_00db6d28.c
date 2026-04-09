// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_alpha_mode_fixed
// Entry Point: 00db6d28
// Size: 536 bytes
// Signature: undefined png_set_alpha_mode_fixed(void)


void png_set_alpha_mode_fixed(long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x168);
  if ((uVar1 >> 6 & 1) != 0) {
    png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
    return;
  }
  iVar5 = 0x250ac;
  *(uint *)(param_1 + 0x168) = uVar1 | 0x4000;
  if (param_3 == -3 || param_3 + 3 < 0 != SCARRY4(param_3,3)) {
    if (param_3 == -100000) {
LAB_00db6db0:
      iVar5 = 220000;
      *(uint *)(param_1 + 0x168) = uVar1 | 0x5000;
    }
    else {
      iVar5 = 0x250ac;
      if (param_3 != -50000) {
LAB_00db6dc8:
        iVar5 = param_3;
        if (param_3 - 0x989681U < 0xff676d67) {
                    /* WARNING: Subroutine does not return */
          png_error(param_1,"output gamma out of expected range");
        }
      }
    }
  }
  else if (param_3 != -2) {
    if (param_3 != -1) goto LAB_00db6dc8;
    goto LAB_00db6db0;
  }
  iVar3 = png_reciprocal(iVar5);
  switch(param_2) {
  case 0:
    uVar1 = *(uint *)(param_1 + 0x16c) & 0xff7fffff;
    bVar2 = true;
    iVar4 = *(int *)(param_1 + 0x4d8);
    *(uint *)(param_1 + 0x16c) = uVar1;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
    goto joined_r0x00db6eb0;
  case 1:
    bVar2 = false;
    iVar5 = 100000;
    uVar1 = *(uint *)(param_1 + 0x16c) & 0xff7fffff;
    iVar4 = *(int *)(param_1 + 0x4d8);
    *(uint *)(param_1 + 0x16c) = uVar1;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
    goto joined_r0x00db6eb0;
  case 2:
    uVar1 = *(uint *)(param_1 + 0x16c) & 0xff7fffff;
    iVar4 = *(int *)(param_1 + 0x4d8);
    *(uint *)(param_1 + 0x16c) = uVar1;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x2000;
    break;
  case 3:
    uVar1 = *(uint *)(param_1 + 0x16c) | 0x800000;
    iVar4 = *(int *)(param_1 + 0x4d8);
    *(uint *)(param_1 + 0x16c) = uVar1;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xffffdfff;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"invalid alpha mode");
  }
  bVar2 = false;
joined_r0x00db6eb0:
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x4d8) = iVar3;
    *(ushort *)(param_1 + 0x522) = *(ushort *)(param_1 + 0x522) | 1;
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x2dc) = iVar5;
  if (!bVar2) {
    *(int *)(param_1 + 0x2b0) = iVar4;
    *(undefined2 *)(param_1 + 700) = 0;
    *(undefined8 *)(param_1 + 0x2b4) = 0;
    *(undefined *)(param_1 + 0x2ac) = 2;
    *(uint *)(param_1 + 0x16c) = uVar1 & 0xfffffeff;
    if ((uVar1 >> 7 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"conflicting calls to set alpha mode and background");
    }
    *(uint *)(param_1 + 0x16c) = uVar1 & 0xfffffeff | 0x80;
  }
  return;
}


