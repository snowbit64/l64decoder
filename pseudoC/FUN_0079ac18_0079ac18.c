// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ac18
// Entry Point: 0079ac18
// Size: 48 bytes
// Signature: undefined FUN_0079ac18(void)


void FUN_0079ac18(long param_1)

{
  long lVar1;
  
  lVar1 = VoiceChatManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


