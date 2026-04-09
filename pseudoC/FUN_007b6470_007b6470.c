// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6470
// Entry Point: 007b6470
// Size: 52 bytes
// Signature: undefined FUN_007b6470(void)


void FUN_007b6470(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


