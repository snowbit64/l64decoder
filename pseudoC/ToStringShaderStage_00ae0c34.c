// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringShaderStage
// Entry Point: 00ae0c34
// Size: 484 bytes
// Signature: undefined __cdecl ToStringShaderStage(SpvReflectShaderStageFlagBits param_1)


/* ToStringShaderStage(SpvReflectShaderStageFlagBits) */

void ToStringShaderStage(SpvReflectShaderStageFlagBits param_1)

{
  undefined *in_x8;
  undefined2 uVar1;
  undefined4 uVar2;
  
  if ((int)param_1 < 0x80) {
    switch(param_1) {
    case 1:
      uVar1 = 0x5356;
      break;
    case 2:
      uVar1 = 0x5348;
      break;
    default:
      goto switchD_00ae0c5c_caseD_3;
    case 4:
      uVar1 = 0x5344;
      break;
    case 8:
      uVar1 = 0x5347;
      break;
    case 0x10:
      uVar1 = 0x5350;
      break;
    case 0x20:
      uVar1 = 0x5343;
      break;
    case 0x40:
      uVar2 = 0x4b534154;
LAB_00ae0da0:
      *in_x8 = 8;
      *(undefined4 *)(in_x8 + 1) = uVar2;
      in_x8[5] = 0;
      return;
    }
    *in_x8 = 4;
    *(undefined2 *)(in_x8 + 1) = uVar1;
    in_x8[3] = 0;
    return;
  }
  if ((int)param_1 < 0x400) {
    if (param_1 == 0x80) {
      uVar2 = 0x4853454d;
      goto LAB_00ae0da0;
    }
    if (param_1 == 0x100) {
      in_x8[7] = 0;
      *in_x8 = 0xc;
      *(undefined4 *)(in_x8 + 1) = 0x47594152;
      *(undefined2 *)(in_x8 + 5) = 0x4e45;
      return;
    }
    if (param_1 == 0x200) {
      in_x8[8] = 0;
      *in_x8 = 0xe;
      *(undefined4 *)(in_x8 + 1) = 0x5f594e41;
      *(undefined4 *)(in_x8 + 4) = 0x5449485f;
      return;
    }
  }
  else if ((int)param_1 < 0x1000) {
    if (param_1 == 0x400) {
      in_x8[0xc] = 0;
      *in_x8 = 0x16;
      *(undefined4 *)(in_x8 + 8) = 0x5449485f;
      *(undefined8 *)(in_x8 + 1) = 0x5f545345534f4c43;
      return;
    }
    if (param_1 == 0x800) {
      uVar2 = 0x5353494d;
      goto LAB_00ae0da0;
    }
  }
  else {
    if (param_1 == 0x1000) {
      in_x8[0xd] = 0;
      *in_x8 = 0x18;
      *(undefined4 *)(in_x8 + 9) = 0x4e4f4954;
      *(undefined8 *)(in_x8 + 1) = 0x4345535245544e49;
      return;
    }
    if (param_1 == 0x2000) {
      in_x8[9] = 0;
      *in_x8 = 0x10;
      *(undefined8 *)(in_x8 + 1) = 0x454c42414c4c4143;
      return;
    }
  }
switchD_00ae0c5c_caseD_3:
  *in_x8 = 6;
  *(undefined4 *)(in_x8 + 1) = 0x3f3f3f;
  return;
}


