// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079aee4
// Entry Point: 0079aee4
// Size: 48 bytes
// Signature: undefined FUN_0079aee4(void)


void FUN_0079aee4(long param_1)

{
  undefined4 uVar1;
  
  VoiceChatManager::getInstance();
  uVar1 = VoiceChatManager::getAutoActivationSensitivity();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


