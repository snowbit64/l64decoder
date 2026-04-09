// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0390
// Entry Point: 007b0390
// Size: 20 bytes
// Signature: undefined FUN_007b0390(void)


void FUN_007b0390(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


