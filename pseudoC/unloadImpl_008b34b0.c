// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadImpl
// Entry Point: 008b34b0
// Size: 76 bytes
// Signature: undefined unloadImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSample::unloadImpl() */

void StaticSample::unloadImpl(void)

{
  long in_x0;
  ResourceManager *this;
  
  if (*(long **)(in_x0 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x78) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x78) = 0;
  if (*(long *)(in_x0 + 0x70) != 0) {
    this = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(this,*(Resource **)(in_x0 + 0x70));
    *(undefined8 *)(in_x0 + 0x70) = 0;
  }
  return;
}


