// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006eaa98
// Entry Point: 006eaa98
// Size: 52 bytes
// Signature: undefined FUN_006eaa98(void)


void FUN_006eaa98(long param_1)

{
  byte bVar1;
  
  EngineManager::getInstance();
  bVar1 = EngineManager::getIsUpdateDownloadFinished();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


