// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cba4
// Entry Point: 0078cba4
// Size: 52 bytes
// Signature: undefined FUN_0078cba4(void)


void FUN_0078cba4(char **param_1)

{
  undefined4 uVar1;
  
  uVar1 = StringUtil::getLevenshteinDistance(*param_1,param_1[2]);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = 1;
  return;
}


