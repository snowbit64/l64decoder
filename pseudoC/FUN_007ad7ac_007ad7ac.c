// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ad7ac
// Entry Point: 007ad7ac
// Size: 48 bytes
// Signature: undefined FUN_007ad7ac(void)


void FUN_007ad7ac(undefined8 param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = GsMaterial::getIsAlphaBlended();
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(byte *)(param_2 + 0x100) = bVar1 & 1;
  return;
}


