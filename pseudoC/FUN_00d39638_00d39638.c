// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39638
// Entry Point: 00d39638
// Size: 380 bytes
// Signature: undefined FUN_00d39638(void)


undefined8 FUN_00d39638(code **param_1,int param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return 0x21;
  }
  if (param_2 == 0x1b) {
    *param_1 = FUN_00d392d0;
    return 0x25;
  }
  if (param_2 == 0x14) {
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + *(int *)(param_5 + 0x80),param_4,"IMPLIED");
    if (iVar1 != 0) {
      *param_1 = FUN_00d392d0;
      return 0x23;
    }
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + *(int *)(param_5 + 0x80),param_4,"REQUIRED");
    if (iVar1 != 0) {
      *param_1 = FUN_00d392d0;
      return 0x24;
    }
    iVar1 = (**(code **)(param_5 + 0x30))
                      (param_5,param_3 + *(int *)(param_5 + 0x80),param_4,"FIXED");
    if (iVar1 != 0) {
      *param_1 = FUN_00d39864;
      return 0x21;
    }
  }
  else if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


