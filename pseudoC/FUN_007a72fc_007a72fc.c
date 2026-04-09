// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a72fc
// Entry Point: 007a72fc
// Size: 20 bytes
// Signature: undefined FUN_007a72fc(void)


void FUN_007a72fc(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  return;
}


