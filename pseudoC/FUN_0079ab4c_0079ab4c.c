// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ab4c
// Entry Point: 0079ab4c
// Size: 36 bytes
// Signature: undefined FUN_0079ab4c(void)


void FUN_0079ab4c(VOICE_ACTIVATION *param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::setRecordingMode(this,*param_1);
  return;
}


