// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 009b3ea8
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<Bt2PhysicsOverlapCallback::OverlapState> * this)


/* btAlignedObjectArray<Bt2PhysicsOverlapCallback::OverlapState>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<Bt2PhysicsOverlapCallback::OverlapState>::~btAlignedObjectArray
          (btAlignedObjectArray<Bt2PhysicsOverlapCallback::OverlapState> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<Bt2PhysicsOverlapCallback::OverlapState>)0x0)) {
                    /* try { // try from 009b3ec8 to 009b3ecb has its CatchHandler @ 009b3ee8 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2PhysicsOverlapCallback::OverlapState>)0x1;
  return;
}


