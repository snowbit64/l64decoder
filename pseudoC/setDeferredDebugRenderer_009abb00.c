// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDeferredDebugRenderer
// Entry Point: 009abb00
// Size: 16 bytes
// Signature: undefined __thiscall setDeferredDebugRenderer(Bt2ScenegraphPhysicsContext * this, DeferredDebugRenderer * param_1)


/* Bt2ScenegraphPhysicsContext::setDeferredDebugRenderer(DeferredDebugRenderer*) */

void __thiscall
Bt2ScenegraphPhysicsContext::setDeferredDebugRenderer
          (Bt2ScenegraphPhysicsContext *this,DeferredDebugRenderer *param_1)

{
  *(DeferredDebugRenderer **)(this + 0x388) = param_1;
  *(DeferredDebugRenderer **)(*(long *)(this + 0x28) + 0x10) = param_1;
  return;
}


