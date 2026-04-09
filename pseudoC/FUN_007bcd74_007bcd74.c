// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bcd74
// Entry Point: 007bcd74
// Size: 32 bytes
// Signature: undefined FUN_007bcd74(void)


void FUN_007bcd74(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x118) = 1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


