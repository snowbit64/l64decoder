// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Bt2Broadphase
// Entry Point: 00bab638
// Size: 64 bytes
// Signature: undefined __thiscall ~Bt2Broadphase(Bt2Broadphase * this)


/* Bt2PhysicsContextManager::Bt2Broadphase::~Bt2Broadphase() */

void __thiscall Bt2PhysicsContextManager::Bt2Broadphase::~Bt2Broadphase(Bt2Broadphase *this)

{
  *(undefined ***)this = &PTR__Bt2Broadphase_00feaf10;
  Mutex::~Mutex((Mutex *)(this + 0x120));
  btDbvtBroadphase::~btDbvtBroadphase((btDbvtBroadphase *)this);
  operator_delete(this);
  return;
}


