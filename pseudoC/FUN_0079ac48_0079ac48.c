// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ac48
// Entry Point: 0079ac48
// Size: 40 bytes
// Signature: undefined FUN_0079ac48(void)


void FUN_0079ac48(char **param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::setUserVolume(this,*param_1,*(float *)(param_1 + 2));
  return;
}


