// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ad7dc
// Entry Point: 007ad7dc
// Size: 20 bytes
// Signature: undefined FUN_007ad7dc(void)


void FUN_007ad7dc(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


