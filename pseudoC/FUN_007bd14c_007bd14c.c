// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd14c
// Entry Point: 007bd14c
// Size: 20 bytes
// Signature: undefined FUN_007bd14c(void)


void FUN_007bd14c(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


