// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: release
// Entry Point: 0088f69c
// Size: 44 bytes
// Signature: undefined release(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMapEntity::release() */

void DensityMapEntity::release(void)

{
  long in_x0;
  ResourceManager *this;
  
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this,*(Resource **)(in_x0 + 0x20));
  *(undefined8 *)(in_x0 + 0x20) = 0;
  return;
}


