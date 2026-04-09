// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ad77c
// Entry Point: 007ad77c
// Size: 48 bytes
// Signature: undefined FUN_007ad77c(void)


void FUN_007ad77c(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = GsMaterial::getIsAlphaTested();
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


