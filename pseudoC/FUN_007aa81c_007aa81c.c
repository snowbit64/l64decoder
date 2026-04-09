// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa81c
// Entry Point: 007aa81c
// Size: 48 bytes
// Signature: undefined FUN_007aa81c(void)


void FUN_007aa81c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = GsMaterial::clone();
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


