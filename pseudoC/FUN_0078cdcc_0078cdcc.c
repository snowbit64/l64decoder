// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078cdcc
// Entry Point: 0078cdcc
// Size: 64 bytes
// Signature: undefined FUN_0078cdcc(void)


void FUN_0078cdcc(char **param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)StringUtil::utf8ToUpper(*param_1);
  param_1[0x20] = pcVar1;
  *(undefined4 *)(param_1 + 0x21) = 6;
  *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) | 1;
  return;
}


