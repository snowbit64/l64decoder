// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079754c
// Entry Point: 0079754c
// Size: 48 bytes
// Signature: undefined FUN_0079754c(void)


void FUN_0079754c(long param_1)

{
  undefined4 uVar1;
  
  GiantsNotificationManager::getInstance();
  uVar1 = GiantsNotificationManager::getNumNotifications();
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


