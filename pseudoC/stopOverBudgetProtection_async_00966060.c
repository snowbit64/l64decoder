// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopOverBudgetProtection_async
// Entry Point: 00966060
// Size: 40 bytes
// Signature: undefined stopOverBudgetProtection_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::stopOverBudgetProtection_async() */

void TextureStreamingManager::stopOverBudgetProtection_async(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0x7c) = 0;
  Event::post();
  logFeedback("[Budget] Stop over budget protection");
  return;
}


