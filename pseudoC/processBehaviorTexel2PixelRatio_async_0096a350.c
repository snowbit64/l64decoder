// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBehaviorTexel2PixelRatio_async
// Entry Point: 0096a350
// Size: 44 bytes
// Signature: undefined processBehaviorTexel2PixelRatio_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processBehaviorTexel2PixelRatio_async() */

void TextureStreamingManager::processBehaviorTexel2PixelRatio_async(void)

{
  detectAndProcessZombiTextures_async();
  computeAliveTexturePriorities_async();
  processAliveTextures_async();
  return;
}


