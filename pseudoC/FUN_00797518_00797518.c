// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00797518
// Entry Point: 00797518
// Size: 52 bytes
// Signature: undefined FUN_00797518(void)


void FUN_00797518(long param_1)

{
  byte bVar1;
  
  GiantsNotificationManager::getInstance();
  bVar1 = GiantsNotificationManager::isLoaded();
  *(undefined4 *)(param_1 + 0x108) = 3;
  *(byte *)(param_1 + 0x100) = bVar1 & 1;
  return;
}


