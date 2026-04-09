// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyLodTexture
// Entry Point: 008f216c
// Size: 48 bytes
// Signature: undefined destroyLodTexture(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainLodTexture::destroyLodTexture() */

void TerrainLodTexture::destroyLodTexture(void)

{
  long in_x0;
  ResourceManager *pRVar1;
  
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(in_x0 + 0x20));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(in_x0 + 0x28));
  return;
}


