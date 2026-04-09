// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39184
// Entry Point: 00d39184
// Size: 228 bytes
// Signature: undefined FUN_00d39184(void)


undefined8
FUN_00d39184(code **param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x12) {
    iVar2 = (**(code **)(param_5 + 0x30))(param_5,param_3,param_4,"NDATA");
    if (iVar2 != 0) {
      *param_1 = FUN_00d39268;
      return 0xb;
    }
  }
  else {
    if (param_2 == 0x11) {
      pcVar1 = FUN_00d38e90;
      if (*(int *)((long)param_1 + 0x14) != 0) {
        pcVar1 = FUN_00d38538;
      }
      *param_1 = pcVar1;
      return 0xf;
    }
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
  }
  *param_1 = FUN_00d383e8;
  return 0xffffffff;
}


