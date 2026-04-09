// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsDebugUserAllocator
// Entry Point: 00bab5fc
// Size: 4 bytes
// Signature: undefined __thiscall ~Bt2PhysicsDebugUserAllocator(Bt2PhysicsDebugUserAllocator * this)


/* Bt2PhysicsDebugUserAllocator::~Bt2PhysicsDebugUserAllocator() */

void __thiscall
Bt2PhysicsDebugUserAllocator::~Bt2PhysicsDebugUserAllocator(Bt2PhysicsDebugUserAllocator *this)

{
  operator_delete(this);
  return;
}


