// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079aca4
// Entry Point: 0079aca4
// Size: 52 bytes
// Signature: undefined FUN_0079aca4(void)


void FUN_0079aca4(char **param_1)

{
  VoiceChatManager *this;
  undefined4 uVar1;
  
  this = (VoiceChatManager *)VoiceChatManager::getInstance();
  uVar1 = VoiceChatManager::getConnectionStatus(this,*param_1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x21) = 1;
  return;
}


