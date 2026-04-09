// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_colorspace_set_rgb_coefficients
// Entry Point: 00dabaec
// Size: 540 bytes
// Signature: undefined png_colorspace_set_rgb_coefficients(void)


void png_colorspace_set_rgb_coefficients(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if ((*(char *)(param_1 + 0x409) != '\0') || ((*(ushort *)(param_1 + 0x522) >> 1 & 1) == 0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x500);
  iVar3 = *(int *)(param_1 + 0x50c);
  uVar4 = *(uint *)(param_1 + 0x518);
  iVar5 = iVar3 + iVar2 + uVar4;
  if ((iVar5 < 1) || (iVar2 < 0)) {
LAB_00dabcf0:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error handling cHRM->XYZ");
  }
  dVar8 = (double)iVar5;
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    dVar9 = ((double)iVar2 * 32768.0) / dVar8 + 0.5;
    dVar10 = (double)(long)dVar9;
    uVar6 = (uint)dVar9;
    if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) goto LAB_00dabcf0;
  }
  if ((((int)uVar6 < 0) || (0x8000 < (int)uVar6)) || (iVar3 < 0)) goto LAB_00dabcf0;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    dVar9 = ((double)iVar3 * 32768.0) / dVar8 + 0.5;
    dVar10 = (double)(long)dVar9;
    uVar7 = (uint)dVar9;
    if (2147483647.0 < dVar10 || dVar10 < -2147483648.0) goto LAB_00dabcf0;
  }
  if (((((int)uVar7 < 0) || (0x8000 < (int)uVar7)) || ((int)uVar4 < 0)) ||
     ((uVar4 != 0 &&
      ((dVar8 = ((double)uVar4 * 32768.0) / dVar8 + 0.5, dVar9 = (double)(long)dVar8,
       2147483647.0 < dVar9 || dVar9 < -2147483648.0 || (uVar4 = (uint)dVar8, 0x8000 < uVar4))))))
  goto LAB_00dabcf0;
  uVar1 = uVar7 + uVar6 + uVar4;
  if (0x8001 < uVar1) goto LAB_00dabcf0;
  if (uVar1 == 0x8001) {
    iVar5 = -1;
  }
  else {
    if (uVar1 >> 0xf != 0) goto LAB_00dabcd0;
    iVar5 = 1;
  }
  if ((uVar7 < uVar6) || (uVar7 < uVar4)) {
    if ((uVar6 < uVar7) || (uVar6 < uVar4)) {
      uVar4 = iVar5 + uVar4;
    }
    else {
      uVar6 = iVar5 + uVar6;
    }
  }
  else {
    uVar7 = iVar5 + uVar7;
  }
LAB_00dabcd0:
  if (uVar7 + uVar6 + uVar4 == 0x8000) {
    *(short *)(param_1 + 0x40a) = (short)uVar6;
    *(short *)(param_1 + 0x40c) = (short)uVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"internal error handling cHRM coefficients");
}


