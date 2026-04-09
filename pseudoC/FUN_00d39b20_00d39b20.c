// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39b20
// Entry Point: 00d39b20
// Size: 340 bytes
// Signature: undefined FUN_00d39b20(void)


undefined8 FUN_00d39b20(code **param_1,int param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x33;
  uVar2 = 0x27;
  switch(param_2) {
  case 0xf:
    goto switchD_00d39b60_caseD_f;
  default:
    if ((param_2 != 0x1c) || (*(int *)((long)param_1 + 0x14) != 0)) goto LAB_00d39c54;
    uVar2 = 0x3b;
switchD_00d39b60_caseD_f:
    return uVar2;
  case 0x14:
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + *(int *)(param_5 + 0x80),param_4,"PCDATA");
    if (iVar1 != 0) {
      *param_1 = FUN_00d39c74;
      return 0x2b;
    }
LAB_00d39c54:
    *param_1 = FUN_00d383e8;
    return 0xffffffff;
  case 0x17:
    *(undefined4 *)(param_1 + 1) = 2;
    *param_1 = FUN_00d39d1c;
    return 0x2c;
  case 0x1e:
    uVar3 = 0x35;
  case 0x12:
  case 0x29:
    *param_1 = FUN_00d39dcc;
    return uVar3;
  case 0x1f:
    *param_1 = FUN_00d39dcc;
    return 0x34;
  case 0x20:
    *param_1 = FUN_00d39dcc;
    return 0x36;
  }
}


