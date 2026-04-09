// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079abf4
// Entry Point: 0079abf4
// Size: 36 bytes
// Signature: undefined FUN_0079abf4(void)


void FUN_0079abf4(float *param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::setMasterVolume(this,*param_1);
  return;
}


