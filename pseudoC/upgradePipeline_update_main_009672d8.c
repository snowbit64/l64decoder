// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradePipeline_update_main
// Entry Point: 009672d8
// Size: 56 bytes
// Signature: undefined upgradePipeline_update_main(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::upgradePipeline_update_main() */

void TextureStreamingManager::upgradePipeline_update_main(void)

{
  long in_x0;
  
  if ((*(byte *)(in_x0 + 0x7c) | *(byte *)(in_x0 + 0x840)) == 0) {
    upgradePipeline_processWorkerResults_main();
  }
  upgradePipeline_processWaitingReallocates_main();
  return;
}


