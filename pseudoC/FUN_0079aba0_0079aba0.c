// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079aba0
// Entry Point: 0079aba0
// Size: 36 bytes
// Signature: undefined FUN_0079aba0(void)


void FUN_0079aba0(float *param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::setRecordingVolume(this,*param_1);
  return;
}


