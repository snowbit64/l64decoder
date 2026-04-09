// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DebugDrawCallback
// Entry Point: 009b1b7c
// Size: 48 bytes
// Signature: undefined __thiscall ~DebugDrawCallback(DebugDrawCallback * this)


/* Bt2ScenegraphPhysicsContext::DebugDrawCallback::~DebugDrawCallback() */

void __thiscall
Bt2ScenegraphPhysicsContext::DebugDrawCallback::~DebugDrawCallback(DebugDrawCallback *this)

{
  btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
            ((btInternalTriangleIndexCallback *)(this + 8));
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)this);
  operator_delete(this);
  return;
}


