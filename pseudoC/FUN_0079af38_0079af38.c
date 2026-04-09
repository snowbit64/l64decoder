// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079af38
// Entry Point: 0079af38
// Size: 52 bytes
// Signature: undefined FUN_0079af38(void)


void FUN_0079af38(long param_1)

{
  byte bVar1;
  
  VoiceChatManager::getInstance();
  bVar1 = VoiceChatManager::getIsRecordingMuted();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


