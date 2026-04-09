// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradePipeline_update_async
// Entry Point: 00969390
// Size: 100 bytes
// Signature: undefined upgradePipeline_update_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::upgradePipeline_update_async() */

uint TextureStreamingManager::upgradePipeline_update_async(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long in_x0;
  
  uVar2 = upgradePipeline_processCancels_async();
  if (*(char *)(in_x0 + 0x7c) == '\0') {
    uVar3 = upgradePipeline_processRequests_async();
    uVar2 = uVar2 | uVar3;
    cVar1 = *(char *)(in_x0 + 0x840);
  }
  else {
    cVar1 = *(char *)(in_x0 + 0x840);
  }
  if (cVar1 != '\0') {
    uVar3 = upgradePipeline_processWorkerResults_async();
    uVar2 = uVar2 | uVar3;
  }
  upgradePipeline_processCompletedRequests_async();
  return uVar2 & 1;
}


