// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ee68
// Entry Point: 0078ee68
// Size: 48 bytes
// Signature: undefined FUN_0078ee68(void)


void FUN_0078ee68(long param_1)

{
  byte bVar1;
  
  bVar1 = AndroidImeUtil::isSupported();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


