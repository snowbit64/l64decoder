// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079afa0
// Entry Point: 0079afa0
// Size: 44 bytes
// Signature: undefined FUN_0079afa0(void)


void FUN_0079afa0(char **param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::setUserPairBlocked(this,*param_1,param_1[2],*(bool *)(param_1 + 4));
  return;
}


