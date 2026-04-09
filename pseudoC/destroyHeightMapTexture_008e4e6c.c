// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyHeightMapTexture
// Entry Point: 008e4e6c
// Size: 60 bytes
// Signature: undefined destroyHeightMapTexture(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::destroyHeightMapTexture() */

void BaseTerrain::destroyHeightMapTexture(void)

{
  long in_x0;
  ResourceManager *this;
  
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this,*(Resource **)(in_x0 + 0x110));
  if (*(void **)(in_x0 + 0x120) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x120));
  }
  *(undefined8 *)(in_x0 + 0x120) = 0;
  *(undefined4 *)(in_x0 + 0x128) = 0;
  return;
}


