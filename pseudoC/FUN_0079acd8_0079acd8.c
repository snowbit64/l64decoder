// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079acd8
// Entry Point: 0079acd8
// Size: 36 bytes
// Signature: undefined FUN_0079acd8(void)


void FUN_0079acd8(uint *param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::notifyVoiceChatPacketLost(this,*param_1);
  return;
}


