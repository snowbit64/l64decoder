// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateServerOverviewForwarding
// Entry Point: 00b3b18c
// Size: 24 bytes
// Signature: undefined updateServerOverviewForwarding(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::updateServerOverviewForwarding() */

void MasterServerManager::updateServerOverviewForwarding(void)

{
  long in_x0;
  
  if (*(int *)(in_x0 + 0x430) == *(int *)(in_x0 + 0x434)) {
    return;
  }
  forwardServerOverview();
  return;
}


