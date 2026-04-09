// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b037c
// Entry Point: 007b037c
// Size: 20 bytes
// Signature: undefined FUN_007b037c(void)


void FUN_007b037c(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


