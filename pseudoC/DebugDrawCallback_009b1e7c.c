// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DebugDrawCallback
// Entry Point: 009b1e7c
// Size: 44 bytes
// Signature: undefined __thiscall ~DebugDrawCallback(DebugDrawCallback * this)


/* non-virtual thunk to Bt2ScenegraphPhysicsContext::DebugDrawCallback::~DebugDrawCallback() */

void __thiscall
Bt2ScenegraphPhysicsContext::DebugDrawCallback::~DebugDrawCallback(DebugDrawCallback *this)

{
  btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
            ((btInternalTriangleIndexCallback *)this);
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)(this + -8));
  operator_delete((btTriangleCallback *)(this + -8));
  return;
}


