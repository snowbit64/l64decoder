// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyLowResCollisionHandler
// Entry Point: 0098d5d8
// Size: 52 bytes
// Signature: undefined destroyLowResCollisionHandler(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScenegraphPhysicsContextManager::destroyLowResCollisionHandler() */

void ScenegraphPhysicsContextManager::destroyLowResCollisionHandler(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 8) + 8))();
  }
  *(undefined8 *)(in_x0 + 8) = 0;
  return;
}


