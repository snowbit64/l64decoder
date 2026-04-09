// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DebugDrawCallback
// Entry Point: 009abe64
// Size: 40 bytes
// Signature: undefined __thiscall ~DebugDrawCallback(DebugDrawCallback * this)


/* Bt2ScenegraphPhysicsContext::DebugDrawCallback::~DebugDrawCallback() */

void __thiscall
Bt2ScenegraphPhysicsContext::DebugDrawCallback::~DebugDrawCallback(DebugDrawCallback *this)

{
  btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
            ((btInternalTriangleIndexCallback *)(this + 8));
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)this);
  return;
}


