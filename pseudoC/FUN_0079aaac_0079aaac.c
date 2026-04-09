// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079aaac
// Entry Point: 0079aaac
// Size: 56 bytes
// Signature: undefined FUN_0079aaac(void)


void FUN_0079aaac(undefined8 param_1)

{
  VoiceChatManager *this;
  char *pcVar1;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  EngineManager::getInstance();
  pcVar1 = (char *)EngineManager::getUniqueUserId();
  VoiceChatManager::addLocalUser(this,pcVar1,*(bool *)param_1);
  return;
}


