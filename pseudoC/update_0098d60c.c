// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0098d60c
// Size: 16 bytes
// Signature: undefined __thiscall update(ScenegraphPhysicsContextManager * this, float param_1)


/* ScenegraphPhysicsContextManager::update(float) */

void __thiscall
ScenegraphPhysicsContextManager::update(ScenegraphPhysicsContextManager *this,float param_1)

{
  if (*(Bt2ScenegraphPhysicsContext **)this != (Bt2ScenegraphPhysicsContext *)0x0) {
    Bt2ScenegraphPhysicsContext::update(*(Bt2ScenegraphPhysicsContext **)this,param_1);
    return;
  }
  return;
}


