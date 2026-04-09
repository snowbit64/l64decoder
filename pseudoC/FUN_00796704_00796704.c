// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796704
// Entry Point: 00796704
// Size: 52 bytes
// Signature: undefined FUN_00796704(void)


void FUN_00796704(char **param_1)

{
  byte bVar1;
  
  bVar1 = PathUtil::isAbsolutePath(*param_1);
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar1 & 1;
  return;
}


