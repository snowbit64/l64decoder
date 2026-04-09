// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyLayerParametersTexture
// Entry Point: 008e4ea8
// Size: 44 bytes
// Signature: undefined destroyLayerParametersTexture(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::destroyLayerParametersTexture() */

void BaseTerrain::destroyLayerParametersTexture(void)

{
  long in_x0;
  ResourceManager *this;
  
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this,*(Resource **)(in_x0 + 0xf8));
  *(undefined8 *)(in_x0 + 0xf8) = 0;
  return;
}


