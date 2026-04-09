// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ab70
// Entry Point: 0079ab70
// Size: 48 bytes
// Signature: undefined FUN_0079ab70(void)


void FUN_0079ab70(long param_1)

{
  long lVar1;
  
  lVar1 = VoiceChatManager::getInstance();
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x18);
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


