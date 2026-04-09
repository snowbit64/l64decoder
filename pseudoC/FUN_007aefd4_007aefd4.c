// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aefd4
// Entry Point: 007aefd4
// Size: 20 bytes
// Signature: undefined FUN_007aefd4(void)


void FUN_007aefd4(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


