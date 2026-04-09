// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d382a0
// Entry Point: 00d382a0
// Size: 236 bytes
// Signature: undefined FUN_00d382a0(void)


undefined8 FUN_00d382a0(code **param_1,int param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  switch(param_2) {
  case 0xb:
    return 0x37;
  default:
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
    break;
  case 0xd:
    return 0x38;
  case 0xe:
  case 0xf:
    return 0;
  case 0x10:
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + (long)*(int *)(param_5 + 0x80) * 2,param_4,"DOCTYPE");
    if (iVar1 != 0) {
      *param_1 = FUN_00d3838c;
      return 3;
    }
    break;
  case 0x1d:
    uVar2 = 2;
    goto LAB_00d38374;
  }
  uVar2 = 0xffffffff;
LAB_00d38374:
  *param_1 = FUN_00d383e8;
  return uVar2;
}


