// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079aae4
// Entry Point: 0079aae4
// Size: 48 bytes
// Signature: undefined FUN_0079aae4(void)


void FUN_0079aae4(uint *param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::addConnection
            (this,*param_1,*(char **)(param_1 + 4),*(char **)(param_1 + 8),param_1[0xc]);
  return;
}


