// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ce24
// Entry Point: 0079ce24
// Size: 60 bytes
// Signature: undefined FUN_0079ce24(void)


void FUN_0079ce24(char **param_1)

{
  byte bVar1;
  
  bVar1 = FileManager::exist((FileManager *)FileManager::s_singletonFileManager,*param_1);
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar1 & 1;
  return;
}


