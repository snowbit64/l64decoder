// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd1cc
// Entry Point: 007bd1cc
// Size: 20 bytes
// Signature: undefined FUN_007bd1cc(void)


void FUN_007bd1cc(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


