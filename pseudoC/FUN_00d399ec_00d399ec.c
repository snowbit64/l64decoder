// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d399ec
// Entry Point: 00d399ec
// Size: 308 bytes
// Signature: undefined FUN_00d399ec(void)


undefined8
FUN_00d399ec(code **param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0xf) {
    return 0x27;
  }
  if (param_2 == 0x17) {
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = FUN_00d39b20;
    return 0x2c;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"EMPTY");
    if (iVar1 == 0) {
      iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,&DAT_0054689e);
      if (iVar1 == 0) goto LAB_00d39b00;
      uVar2 = 0x29;
    }
    else {
      uVar2 = 0x2a;
    }
    *param_1 = FUN_00d38db0;
    *(undefined4 *)((long)param_1 + 0xc) = 0x27;
    return uVar2;
  }
  if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
LAB_00d39b00:
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


