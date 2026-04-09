// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConvexUserData
// Entry Point: 0098f8e0
// Size: 60 bytes
// Signature: undefined __thiscall ~ConvexUserData(ConvexUserData * this)


/* Bt2PhysicsColShapeCache::ConvexUserData::~ConvexUserData() */

void __thiscall Bt2PhysicsColShapeCache::ConvexUserData::~ConvexUserData(ConvexUserData *this)

{
  *(undefined ***)this = &PTR__ConvexUserData_00fe0b70;
  if (*(void **)(this + 0x20) != (void *)0x0) {
                    /* try { // try from 0098f908 to 0098f90b has its CatchHandler @ 0098f91c */
    btAlignedFreeInternal(*(void **)(this + 0x20));
  }
  operator_delete(this);
  return;
}


