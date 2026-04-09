// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796738
// Entry Point: 00796738
// Size: 44 bytes
// Signature: undefined FUN_00796738(void)


void FUN_00796738(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = LanguageUtil::getSystemLanguage();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


