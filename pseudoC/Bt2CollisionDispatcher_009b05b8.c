// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2CollisionDispatcher
// Entry Point: 009b05b8
// Size: 36 bytes
// Signature: undefined __thiscall ~Bt2CollisionDispatcher(Bt2CollisionDispatcher * this)


/* Bt2PhysicsContextManager::Bt2CollisionDispatcher::~Bt2CollisionDispatcher() */

void __thiscall
Bt2PhysicsContextManager::Bt2CollisionDispatcher::~Bt2CollisionDispatcher
          (Bt2CollisionDispatcher *this)

{
  btCollisionDispatcher::~btCollisionDispatcher((btCollisionDispatcher *)this);
  operator_delete(this);
  return;
}


