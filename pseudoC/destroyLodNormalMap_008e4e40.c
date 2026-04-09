// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyLodNormalMap
// Entry Point: 008e4e40
// Size: 44 bytes
// Signature: undefined destroyLodNormalMap(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::destroyLodNormalMap() */

void BaseTerrain::destroyLodNormalMap(void)

{
  long in_x0;
  ResourceManager *this;
  
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this,*(Resource **)(in_x0 + 0x100));
  *(undefined8 *)(in_x0 + 0x100) = 0;
  return;
}


