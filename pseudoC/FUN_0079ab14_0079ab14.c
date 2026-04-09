// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ab14
// Entry Point: 0079ab14
// Size: 36 bytes
// Signature: undefined FUN_0079ab14(void)


void FUN_0079ab14(uint *param_1)

{
  VoiceChatManager *this;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  VoiceChatManager::removeConnection(this,*param_1);
  return;
}


