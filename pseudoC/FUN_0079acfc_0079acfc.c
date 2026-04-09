// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079acfc
// Entry Point: 0079acfc
// Size: 36 bytes
// Signature: undefined FUN_0079acfc(void)


void FUN_0079acfc(uint *param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::notifyVoiceChatPacketSent(this,*param_1);
  return;
}


