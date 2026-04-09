// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079abc4
// Entry Point: 0079abc4
// Size: 48 bytes
// Signature: undefined FUN_0079abc4(void)


void FUN_0079abc4(long param_1)

{
  long lVar1;
  
  lVar1 = VoiceChatManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


