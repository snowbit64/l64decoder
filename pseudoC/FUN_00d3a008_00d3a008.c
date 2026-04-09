// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3a008
// Entry Point: 00d3a008
// Size: 264 bytes
// Signature: undefined FUN_00d3a008(void)


undefined8
FUN_00d3a008(code **param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return 0x11;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"SYSTEM");
    if (iVar1 != 0) {
      *param_1 = FUN_00d3a110;
      return 0x11;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"PUBLIC");
    if (iVar1 != 0) {
      *param_1 = FUN_00d3a178;
      return 0x11;
    }
  }
  else if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


