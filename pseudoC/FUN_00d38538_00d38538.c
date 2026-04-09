// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d38538
// Entry Point: 00d38538
// Size: 520 bytes
// Signature: undefined FUN_00d38538(void)


undefined8 FUN_00d38538(code **param_1,int param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  
  switch(param_2) {
  case 0xb:
    return 0x37;
  case 0xd:
    return 0x38;
  case 0x10:
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + (long)*(int *)(param_5 + 0x80) * 2,param_4,"ENTITY");
    if (iVar1 != 0) {
      *param_1 = FUN_00d38864;
      return 0xb;
    }
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + (long)*(int *)(param_5 + 0x80) * 2,param_4,"ATTLIST");
    if (iVar1 != 0) {
      *param_1 = FUN_00d388d0;
      return 0x21;
    }
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + (long)*(int *)(param_5 + 0x80) * 2,param_4,"ELEMENT");
    if (iVar1 != 0) {
      *param_1 = FUN_00d3892c;
      return 0x27;
    }
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + (long)*(int *)(param_5 + 0x80) * 2,param_4,"NOTATION");
    if (iVar1 != 0) {
      *param_1 = FUN_00d38988;
      return 0x11;
    }
    break;
  case 0x1a:
    *param_1 = FUN_00d389e0;
    return 3;
  case 0x1c:
    return 0x3c;
  case -4:
  case 0xf:
    return 0;
  default:
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


