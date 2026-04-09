// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registryPipeline_update_async
// Entry Point: 0096927c
// Size: 36 bytes
// Signature: undefined registryPipeline_update_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::registryPipeline_update_async() */

void TextureStreamingManager::registryPipeline_update_async(void)

{
  registryPipeline_processUnregisteredTextures_async();
  registryPipeline_processRegisteredTextures_async();
  return;
}


