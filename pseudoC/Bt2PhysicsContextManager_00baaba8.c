// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2PhysicsContextManager
// Entry Point: 00baaba8
// Size: 92 bytes
// Signature: undefined __thiscall ~Bt2PhysicsContextManager(Bt2PhysicsContextManager * this)


/* Bt2PhysicsContextManager::~Bt2PhysicsContextManager() */

void __thiscall Bt2PhysicsContextManager::~Bt2PhysicsContextManager(Bt2PhysicsContextManager *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined8 *)this = 0;
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


