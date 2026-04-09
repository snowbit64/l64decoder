// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bce24
// Entry Point: 007bce24
// Size: 20 bytes
// Signature: undefined FUN_007bce24(void)


void FUN_007bce24(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


