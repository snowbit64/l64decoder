// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d38e90
// Entry Point: 00d38e90
// Size: 132 bytes
// Signature: undefined FUN_00d38e90(void)


ulong FUN_00d38e90(code **param_1,undefined4 param_2)

{
  ulong uVar1;
  
  switch(param_2) {
  case 0xf:
    return 0;
  case 0x1a:
    break;
  case 0x21:
    *param_1 = FUN_00d38f14;
    return 0;
  case 0x22:
    if (*(int *)(param_1 + 2) != 0) {
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
      return 0;
    }
    break;
  case 0xfffffffc:
    if (*(uint *)(param_1 + 2) == 0) {
      return (ulong)*(uint *)(param_1 + 2);
    }
    break;
  default:
    uVar1 = FUN_00d38538();
    return uVar1;
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


