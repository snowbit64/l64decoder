// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: downgradePipeline_update_main
// Entry Point: 009672a8
// Size: 48 bytes
// Signature: undefined downgradePipeline_update_main(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::downgradePipeline_update_main() */

void TextureStreamingManager::downgradePipeline_update_main(void)

{
  long in_x0;
  
  if (*(char *)(in_x0 + 0x840) == '\0') {
    downgradePipeline_processNewRequests_main();
  }
  downgradePipeline_processWaitingReallocates_main();
  return;
}


