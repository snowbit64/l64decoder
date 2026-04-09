// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flushUnpinnedUrls
// Entry Point: 00b05a28
// Size: 12 bytes
// Signature: undefined flushUnpinnedUrls(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WebResourceManager::flushUnpinnedUrls() */

void WebResourceManager::flushUnpinnedUrls(void)

{
  long in_x0;
  
  *(undefined *)(in_x0 + 0xa0) = 1;
  update();
  return;
}


