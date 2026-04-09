// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f991fc
// Entry Point: 00f991fc
// Size: 32 bytes
// Signature: undefined FUN_00f991fc(void)


void FUN_00f991fc(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_3;
  *(undefined8 *)(param_2 + 0x10) = param_3[1];
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  *(undefined *)(param_2 + 0x2c) = 1;
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  return;
}


