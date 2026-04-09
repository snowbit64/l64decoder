// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startOverBudgetProtection_async
// Entry Point: 00965dfc
// Size: 52 bytes
// Signature: undefined startOverBudgetProtection_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::startOverBudgetProtection_async() */

void TextureStreamingManager::startOverBudgetProtection_async(void)

{
  long in_x0;
  
  Event::clear();
  *(undefined *)(in_x0 + 0x7c) = 1;
  logFeedback("[Budget] Start over budget protection");
  return;
}


