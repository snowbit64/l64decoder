// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d38138
// Entry Point: 00d38138
// Size: 308 bytes
// Signature: undefined FUN_00d38138(void)


undefined4 FUN_00d38138(code **param_1,int param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  switch(param_2) {
  case 0xb:
    *param_1 = FUN_00d382a0;
    return 0x37;
  case 0xc:
    uVar2 = 1;
  case 0xf:
    *param_1 = FUN_00d382a0;
    return uVar2;
  case 0xd:
    *param_1 = FUN_00d382a0;
    return 0x38;
  case 0xe:
    return 0;
  case 0x10:
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + (long)*(int *)(param_5 + 0x80) * 2,param_4,"DOCTYPE");
    if (iVar1 != 0) {
      *param_1 = FUN_00d3838c;
      return 3;
    }
    break;
  default:
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
    break;
  case 0x1d:
    uVar2 = 2;
    goto LAB_00d38250;
  }
  uVar2 = 0xffffffff;
LAB_00d38250:
  *param_1 = FUN_00d383e8;
  return uVar2;
}


