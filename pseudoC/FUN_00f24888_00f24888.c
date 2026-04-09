// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f24888
// Entry Point: 00f24888
// Size: 76 bytes
// Signature: undefined FUN_00f24888(void)


undefined8
FUN_00f24888(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int param_4,
            undefined8 param_5,int param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_4 < 2) && (1 < param_6)) {
    uVar1 = FUN_00f11034(param_3,param_5);
    uVar2 = 1;
    *param_2 = uVar1;
    param_2[3] = 1;
  }
  return uVar2;
}


