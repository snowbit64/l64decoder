// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringResourceType
// Entry Point: 00ae1258
// Size: 168 bytes
// Signature: undefined __cdecl ToStringResourceType(SpvReflectResourceType param_1)


/* ToStringResourceType(SpvReflectResourceType) */

void ToStringResourceType(SpvReflectResourceType param_1)

{
  undefined *in_x8;
  uint uVar1;
  
  switch(param_1) {
  case 0:
    *in_x8 = 0x12;
    *(undefined2 *)(in_x8 + 9) = 0x44;
    *(undefined8 *)(in_x8 + 1) = 0x454e494645444e55;
    return;
  case 1:
    in_x8[8] = 0;
    *in_x8 = 0xe;
    *(undefined4 *)(in_x8 + 1) = 0x504d4153;
    *(undefined4 *)(in_x8 + 4) = 0x52454c50;
    return;
  case 2:
    uVar1 = 0x4243;
    break;
  default:
    uVar1 = 0x3f3f3f;
    goto LAB_00ae12f4;
  case 4:
    uVar1 = 0x5253;
    break;
  case 8:
    uVar1 = 0x4155;
  }
  uVar1 = uVar1 | 0x560000;
LAB_00ae12f4:
  *in_x8 = 6;
  *(uint *)(in_x8 + 1) = uVar1;
  return;
}


