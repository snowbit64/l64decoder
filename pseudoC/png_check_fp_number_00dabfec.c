// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_check_fp_number
// Entry Point: 00dabfec
// Size: 292 bytes
// Signature: undefined png_check_fp_number(void)


uint png_check_fp_number(long param_1,ulong param_2,uint *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_4;
  uVar3 = *param_3;
  uVar2 = uVar1;
  if (uVar1 < param_2) {
    do {
      uVar4 = 4;
      uVar2 = uVar1;
      switch(*(undefined *)(param_1 + uVar1)) {
      case 0x2b:
        break;
      default:
        goto switchD_00dac05c_caseD_2c;
      case 0x2d:
        uVar4 = 0x84;
        break;
      case 0x2e:
        uVar4 = 0x10;
        break;
      case 0x30:
        uVar4 = 8;
        break;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar4 = 0x108;
        break;
      case 0x45:
      case 0x65:
        uVar4 = 0x20;
      }
      switch(uVar4 & 0x3c | uVar3 & 3) {
      case 4:
        if ((uVar3 & 0x3c) != 0) goto switchD_00dac05c_caseD_2c;
LAB_00dac0dc:
        uVar3 = uVar4 | uVar3;
        break;
      default:
        goto switchD_00dac05c_caseD_2c;
      case 6:
        if ((uVar3 & 0x3c) != 0) goto switchD_00dac05c_caseD_2c;
        uVar3 = uVar3 | 4;
        break;
      case 8:
        if ((uVar3 & 0x10) != 0) {
          uVar3 = uVar3 & 0x180 | 0x11;
        }
      case 9:
        uVar3 = uVar4 | uVar3 | 0x40;
        break;
      case 10:
        uVar3 = uVar3 | 0x48;
        break;
      case 0x10:
        if ((uVar3 >> 4 & 1) != 0) goto switchD_00dac05c_caseD_2c;
        if ((uVar3 >> 3 & 1) != 0) goto LAB_00dac0dc;
        uVar3 = uVar3 & 0x1c0 | uVar4 | 1;
        break;
      case 0x20:
      case 0x21:
        if ((uVar3 >> 3 & 1) == 0) goto switchD_00dac05c_caseD_2c;
        uVar3 = uVar3 & 0x1c0 | 2;
      }
      uVar1 = uVar1 + 1;
      uVar2 = param_2;
    } while (param_2 != uVar1);
  }
switchD_00dac05c_caseD_2c:
  *param_3 = uVar3;
  *param_4 = uVar2;
  return uVar3 >> 3 & 1;
}


