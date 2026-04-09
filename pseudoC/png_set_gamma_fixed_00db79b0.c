// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_gamma_fixed
// Entry Point: 00db79b0
// Size: 300 bytes
// Signature: undefined png_set_gamma_fixed(void)


void png_set_gamma_fixed(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x168);
  if ((uVar1 >> 6 & 1) != 0) {
    png_app_error(param_1,"invalid after png_start_read_image or png_read_update_info");
    return;
  }
  uVar2 = uVar1 | 0x4000;
  *(uint *)(param_1 + 0x168) = uVar2;
  if (param_2 == -3 || param_2 + 3 < 0 != SCARRY4(param_2,3)) {
    if (param_2 == -100000) {
LAB_00db7a14:
      uVar2 = uVar1 | 0x5000;
      param_2 = 220000;
      *(uint *)(param_1 + 0x168) = uVar2;
    }
    else if (param_2 == -50000) goto LAB_00db7a58;
LAB_00db7a28:
    if (param_3 == -3 || param_3 + 3 < 0 != SCARRY4(param_3,3)) goto LAB_00db7a38;
LAB_00db7a70:
    iVar3 = 0x10175;
    if (param_3 == -2) goto LAB_00db7a9c;
    if (param_3 == -1) goto LAB_00db7a80;
  }
  else {
    if (param_2 != -2) {
      if (param_2 != -1) goto LAB_00db7a28;
      goto LAB_00db7a14;
    }
LAB_00db7a58:
    param_2 = 0x250ac;
    if (param_3 != -3 && param_3 + 3 < 0 == SCARRY4(param_3,3)) goto LAB_00db7a70;
LAB_00db7a38:
    if (param_3 == -100000) {
LAB_00db7a80:
      iVar3 = 0xb18f;
      *(uint *)(param_1 + 0x168) = uVar2 | 0x1000;
      goto LAB_00db7a9c;
    }
    iVar3 = 0x10175;
    if (param_3 == -50000) goto LAB_00db7a9c;
  }
  iVar3 = param_3;
  if (param_3 < 1) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"invalid file gamma in png_set_gamma");
  }
LAB_00db7a9c:
  if (0 < param_2) {
    *(int *)(param_1 + 0x4d8) = iVar3;
    *(int *)(param_1 + 0x2dc) = param_2;
    *(ushort *)(param_1 + 0x522) = *(ushort *)(param_1 + 0x522) | 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"invalid screen gamma in png_set_gamma");
}


