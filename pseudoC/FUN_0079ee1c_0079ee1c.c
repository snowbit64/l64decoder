// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ee1c
// Entry Point: 0079ee1c
// Size: 32 bytes
// Signature: undefined FUN_0079ee1c(void)


void FUN_0079ee1c(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_2 + 0x100) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x108) = 1;
  if (lVar1 != 0) {
    *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lVar1 + 0x18);
  }
  return;
}


