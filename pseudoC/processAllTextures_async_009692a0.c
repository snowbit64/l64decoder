// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processAllTextures_async
// Entry Point: 009692a0
// Size: 172 bytes
// Signature: undefined processAllTextures_async(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processAllTextures_async() */

void TextureStreamingManager::processAllTextures_async(void)

{
  long in_x0;
  
  _DAT_0210ee28 = 0;
  _DAT_0210ee20 = 0;
  _DAT_0210ee38 = 0;
  _DAT_0210ee30 = 0;
  DAT_0210ee68 = *(undefined8 *)(in_x0 + 0x220);
  switch(*(undefined4 *)(in_x0 + 4)) {
  case 0:
    detectAndProcessZombiTextures_async();
    computeAliveTexturePriorities_async();
    processAliveTextures_async();
    return;
  case 1:
    processBehaviorWorstQuality_async();
    return;
  case 2:
    processBehaviorMinQuality_async();
    return;
  case 3:
    processBehaviorMaxQuality_async();
    return;
  default:
    return;
  }
}


