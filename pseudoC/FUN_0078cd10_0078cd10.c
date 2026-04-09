// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cd10
// Entry Point: 0078cd10
// Size: 48 bytes
// Signature: undefined FUN_0078cd10(void)


void FUN_0078cd10(char **param_1)

{
  undefined4 uVar1;
  
  uVar1 = StringUtil::utf8Strlen(*param_1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = 1;
  return;
}


