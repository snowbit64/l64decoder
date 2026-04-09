// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDlcStart
// Entry Point: 00b3c630
// Size: 20 bytes
// Signature: undefined addDlcStart(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::addDlcStart() */

void MasterServerManager::addDlcStart(void)

{
  long in_x0;
  
  if (*(long *)(in_x0 + 0x28) != *(long *)(in_x0 + 0x20)) {
    *(long *)(in_x0 + 0x28) = *(long *)(in_x0 + 0x20);
  }
  return;
}


