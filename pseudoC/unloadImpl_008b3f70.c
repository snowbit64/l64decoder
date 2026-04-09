// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadImpl
// Entry Point: 008b3f70
// Size: 100 bytes
// Signature: undefined unloadImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisSample::unloadImpl() */

void LoopSynthesisSample::unloadImpl(void)

{
  long in_x0;
  ResourceManager *this;
  
  if (*(long **)(in_x0 + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x118) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x118) = 0;
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


