// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00c66004
// Size: 32 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UserBlockManager::update() */

void UserBlockManager::update(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x20) != '\0') {
    *(undefined *)(in_x0 + 0x20) = 0;
    saveBlockedUsersFile();
  }
  return;
}


