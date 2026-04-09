// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00db4e5c
// Entry Point: 00db4e5c
// Size: 1176 bytes
// Signature: undefined FUN_00db4e5c(void)


void FUN_00db4e5c(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,int param_7)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long **pplVar14;
  
  pplVar14 = (long **)*param_1;
  uVar5 = *(uint *)((long)pplVar14 + 0x14);
  iVar10 = 1;
  if ((uVar5 & 4) != 0) {
    iVar10 = 2;
  }
  uVar3 = 0;
  if ((uVar5 & 2) == 0) {
    uVar3 = (uint)(param_3 != param_4 || param_4 != param_5);
  }
  if (0xff < param_2) {
                    /* WARNING: Subroutine does not return */
    png_error(**pplVar14,"color-map index out of range");
  }
  if ((param_7 == 3) && (param_7 = *(int *)(param_1 + 8), param_7 == 0)) {
    iVar6 = *(int *)(**pplVar14 + 0x4d8);
    iVar8 = png_gamma_significant(iVar6);
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 8) = 4;
      param_3 = param_3 * 0x101;
      param_4 = param_4 * 0x101;
      param_5 = param_5 * 0x101;
LAB_00db5144:
      uVar13 = param_6 * 0x101;
      if (uVar3 != 0) {
        iVar6 = param_3 * 0x1b38 + param_4 * 0x5b8a + param_5 * 0x93e;
        if ((uVar5 >> 2 & 1) == 0) {
          uVar3 = iVar6 + 0x80;
          param_7 = 1;
          uVar3 = ((uVar3 & 0xffffff00) - (uVar3 >> 8)) + 0x40;
          uVar13 = uVar3 >> 0x16;
          param_4 = (uint)(ushort)(&png_sRGB_base)[uVar13] +
                    ((uVar3 >> 7 & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar13] >> 0xc) >> 8 &
                    0xff;
          uVar13 = param_6 * 0xffff + 0x807f >> 0x10;
          param_5 = param_4;
          param_3 = param_4;
        }
        else {
          param_7 = 2;
          param_4 = iVar6 + 0x4000U >> 0xf;
          param_5 = param_4;
          param_3 = param_4;
        }
        goto LAB_00db51ec;
      }
      if ((uVar5 >> 2 & 1) != 0) {
        param_7 = 2;
        goto LAB_00db51ec;
      }
      uVar3 = param_3 * 0xff >> 0xf;
      uVar13 = param_4 * 0xff >> 0xf;
      uVar7 = param_5 * 0xff >> 0xf;
      param_3 = (uint)(ushort)(&png_sRGB_base)[uVar3] +
                ((param_3 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar3] >> 0xc) >> 8 &
                0xff;
      param_5 = (uint)(ushort)(&png_sRGB_base)[uVar7] +
                ((param_5 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar7] >> 0xc) >> 8 &
                0xff;
      param_4 = (uint)(ushort)(&png_sRGB_base)[uVar13] +
                ((param_4 * 0xff & 0x7fff) * (uint)(byte)(&png_sRGB_delta)[uVar13] >> 0xc) >> 8 &
                0xff;
      param_6 = param_6 * 0xffff + 0x807f >> 0x10;
    }
    else {
      if ((99999 < iVar6) ||
         ((iVar6 != 0 && (iVar8 = png_gamma_significant((iVar6 * 0xb + 2) / 5), iVar8 != 0)))) {
        *(undefined4 *)(param_1 + 8) = 3;
        uVar9 = png_reciprocal(iVar6);
        param_7 = *(int *)(param_1 + 8);
        *(undefined4 *)((long)param_1 + 0x44) = uVar9;
        goto joined_r0x00db4ee4;
      }
      *(undefined4 *)(param_1 + 8) = 1;
      if ((uVar3 | (uVar5 & 4) >> 2) == 1) {
        param_3 = (uint)(ushort)(&png_sRGB_table)[param_3];
        param_4 = (uint)(ushort)(&png_sRGB_table)[param_4];
        param_5 = (uint)(ushort)(&png_sRGB_table)[param_5];
        goto LAB_00db5144;
      }
    }
    param_7 = 1;
    uVar13 = param_6;
  }
  else {
joined_r0x00db4ee4:
    uVar13 = param_6;
    if (param_7 - 1U < 4) {
                    /* WARNING: Could not recover jumptable at 0x00db4efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_00db4f00 + (ulong)(byte)(&DAT_00549c5e)[param_7 - 1U] * 4))();
      return;
    }
  }
LAB_00db51ec:
  if (param_7 != iVar10) {
                    /* WARNING: Subroutine does not return */
    png_error(**pplVar14,"bad encoding (internal error)");
  }
  uVar7 = *(uint *)((long)pplVar14 + 0x14);
  uVar3 = uVar7 & 0x21;
  uVar11 = (ulong)(uVar7 >> 3) & 2;
  uVar12 = (uint)(uVar3 == 0x21);
  if ((uVar5 >> 2 & 1) == 0) {
    puVar2 = (undefined *)(param_1[3] + (ulong)(param_2 + param_2 * (uVar7 & 3)));
    switch(uVar7 & 3) {
    case 1:
      puVar2[(ulong)(uVar3 == 0x21) ^ 1] = (char)uVar13;
    case 0:
      if (uVar3 == 0x21) {
        puVar2 = puVar2 + 1;
      }
      *puVar2 = (char)param_4;
      break;
    case 3:
      lVar1 = 0;
      if (uVar3 != 0x21) {
        lVar1 = 3;
      }
      puVar2[lVar1] = (char)uVar13;
    case 2:
      uVar11 = (ulong)((uint)uVar11 | uVar12);
      lVar1 = 1;
      if (uVar3 == 0x21) {
        lVar1 = 2;
      }
      puVar2[uVar11 ^ 2] = (char)param_5;
      puVar2[lVar1] = (char)param_4;
      puVar2[uVar11] = (char)param_3;
    }
  }
  else {
    lVar1 = param_1[3] + ((ulong)param_2 + (ulong)param_2 * ((ulong)uVar7 & 3)) * 2;
    switch((ulong)uVar7 & 3) {
    case 1:
      *(short *)(lVar1 + (ulong)(uVar12 ^ 1) * 2) = (short)uVar13;
    case 0:
      if (uVar13 < 0xffff) {
        if (uVar13 == 0) {
          param_4 = 0;
        }
        else {
          param_4 = (param_4 * uVar13 + 0x7fff) / 0xffff;
        }
      }
      *(short *)(lVar1 + (ulong)(uVar3 == 0x21) * 2) = (short)param_4;
      break;
    case 3:
      lVar4 = 0;
      if (uVar3 != 0x21) {
        lVar4 = 6;
      }
      *(short *)(lVar1 + lVar4) = (short)uVar13;
    case 2:
      if (uVar13 < 0xffff) {
        if (uVar13 == 0) {
          param_5 = 0;
          param_4 = 0;
          param_3 = 0;
        }
        else {
          param_5 = (param_5 * uVar13 + 0x7fff) / 0xffff;
          param_4 = (param_4 * uVar13 + 0x7fff) / 0xffff;
          param_3 = (param_3 * uVar13 + 0x7fff) / 0xffff;
        }
      }
      uVar11 = uVar11 | uVar3 == 0x21;
      lVar4 = 4;
      if (uVar3 != 0x21) {
        lVar4 = 2;
      }
      *(short *)(lVar1 + (uVar11 ^ 2) * 2) = (short)param_5;
      *(short *)(lVar1 + lVar4) = (short)param_4;
      *(short *)(lVar1 + uVar11 * 2) = (short)param_3;
    }
  }
  return;
}


