// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aefc0
// Entry Point: 007aefc0
// Size: 20 bytes
// Signature: undefined FUN_007aefc0(void)


void FUN_007aefc0(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_2 + 0x108) = 1;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


