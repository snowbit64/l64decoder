// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079af14
// Entry Point: 0079af14
// Size: 36 bytes
// Signature: undefined FUN_0079af14(void)


void FUN_0079af14(undefined8 param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::setIsRecordingMuted(this,*(bool *)param_1);
  return;
}


