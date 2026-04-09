// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d38f14
// Entry Point: 00d38f14
// Size: 264 bytes
// Signature: undefined FUN_00d38f14(void)


undefined8
FUN_00d38f14(code **param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  
  if (param_2 == 0xf) {
    return 0;
  }
  if (param_2 == 0x12) {
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"INCLUDE");
    if (iVar1 != 0) {
      *param_1 = FUN_00d3901c;
      return 0;
    }
    iVar1 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"IGNORE");
    if (iVar1 != 0) {
      *param_1 = FUN_00d3907c;
      return 0;
    }
  }
  else if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
    return 0x3b;
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


