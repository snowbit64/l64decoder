// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bcd60
// Entry Point: 007bcd60
// Size: 20 bytes
// Signature: undefined FUN_007bcd60(void)


void FUN_007bcd60(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


