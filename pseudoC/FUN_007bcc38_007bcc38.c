// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bcc38
// Entry Point: 007bcc38
// Size: 56 bytes
// Signature: undefined FUN_007bcc38(void)


void FUN_007bcc38(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x58))();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


