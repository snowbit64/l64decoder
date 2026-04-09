// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringSpvDim
// Entry Point: 00ae1170
// Size: 232 bytes
// Signature: undefined __cdecl ToStringSpvDim(SpvDim_ param_1)


/* ToStringSpvDim(SpvDim_) */

void ToStringSpvDim(SpvDim_ param_1)

{
  undefined *in_x8;
  undefined2 uVar1;
  undefined4 uVar2;
  
  switch(param_1) {
  case 0:
    uVar1 = 0x4431;
    break;
  case 1:
    uVar1 = 0x4432;
    break;
  case 2:
    uVar1 = 0x4433;
    break;
  case 3:
    uVar2 = 0x65627543;
    goto LAB_00ae11f8;
  case 4:
    uVar2 = 0x74636552;
LAB_00ae11f8:
    *in_x8 = 8;
    *(undefined4 *)(in_x8 + 1) = uVar2;
    in_x8[5] = 0;
    return;
  case 5:
    in_x8[7] = 0;
    *in_x8 = 0xc;
    *(undefined4 *)(in_x8 + 1) = 0x66667542;
    *(undefined2 *)(in_x8 + 5) = 0x7265;
    return;
  case 6:
    in_x8[0xc] = 0;
    *in_x8 = 0x16;
    *(undefined4 *)(in_x8 + 8) = 0x61746144;
    *(undefined8 *)(in_x8 + 1) = 0x4473736170627553;
    return;
  default:
    *in_x8 = 6;
    *(undefined4 *)(in_x8 + 1) = 0x3f3f3f;
    return;
  }
  *in_x8 = 4;
  *(undefined2 *)(in_x8 + 1) = uVar1;
  in_x8[3] = 0;
  return;
}


