// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConvexUserData
// Entry Point: 0098f8ac
// Size: 48 bytes
// Signature: undefined __thiscall ~ConvexUserData(ConvexUserData * this)


/* Bt2PhysicsColShapeCache::ConvexUserData::~ConvexUserData() */

void __thiscall Bt2PhysicsColShapeCache::ConvexUserData::~ConvexUserData(ConvexUserData *this)

{
  *(undefined ***)this = &PTR__ConvexUserData_00fe0b70;
  if (*(void **)(this + 0x20) != (void *)0x0) {
                    /* try { // try from 0098f8d0 to 0098f8d3 has its CatchHandler @ 0098f8dc */
    btAlignedFreeInternal(*(void **)(this + 0x20));
  }
  return;
}


