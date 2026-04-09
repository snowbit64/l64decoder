// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: downgradePipeline_update_async
// Entry Point: 0096934c
// Size: 68 bytes
// Signature: undefined downgradePipeline_update_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::downgradePipeline_update_async() */

uint TextureStreamingManager::downgradePipeline_update_async(void)

{
  uint uVar1;
  long in_x0;
  
  if (*(char *)(in_x0 + 0x840) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = downgradePipeline_processNewRequests_async();
  }
  downgradePipeline_processCompletedRequests_async();
  return uVar1 & 1;
}


