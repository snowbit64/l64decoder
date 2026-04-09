// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyContext
// Entry Point: 0098d428
// Size: 80 bytes
// Signature: undefined destroyContext(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ScenegraphPhysicsContextManager::destroyContext() */

void ScenegraphPhysicsContextManager::destroyContext(void)

{
  Bt2ScenegraphPhysicsContext **in_x0;
  Bt2ScenegraphPhysicsContext *this;
  
  this = *in_x0;
  if (this != (Bt2ScenegraphPhysicsContext *)0x0) {
    Bt2ScenegraphPhysicsContext::~Bt2ScenegraphPhysicsContext(this);
    operator_delete(this);
    *in_x0 = (Bt2ScenegraphPhysicsContext *)0x0;
  }
  if ((long *)in_x0[1] != (long *)0x0) {
    (**(code **)(*(long *)in_x0[1] + 8))();
    in_x0[1] = (Bt2ScenegraphPhysicsContext *)0x0;
  }
  return;
}


