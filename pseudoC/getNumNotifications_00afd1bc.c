// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNumNotifications
// Entry Point: 00afd1bc
// Size: 52 bytes
// Signature: undefined getNumNotifications(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsNotificationManager::getNumNotifications() */

undefined4 GiantsNotificationManager::getNumNotifications(void)

{
  undefined4 uVar1;
  long in_x0;
  
  if (*(char *)(in_x0 + 2) == '\0') {
    uVar1 = 0;
  }
  else {
    applyFilter();
    uVar1 = *(undefined4 *)(in_x0 + 0x38);
  }
  return uVar1;
}


