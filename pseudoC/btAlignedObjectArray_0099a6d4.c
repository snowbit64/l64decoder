// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 0099a6d4
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<Bt2ScenegraphPhysicsContext::DynamicMotionState*> * this)


/* btAlignedObjectArray<Bt2ScenegraphPhysicsContext::DynamicMotionState*>::~btAlignedObjectArray()
    */

void __thiscall
btAlignedObjectArray<Bt2ScenegraphPhysicsContext::DynamicMotionState*>::~btAlignedObjectArray
          (btAlignedObjectArray<Bt2ScenegraphPhysicsContext::DynamicMotionState*> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<Bt2ScenegraphPhysicsContext::DynamicMotionState*>)0x0)) {
                    /* try { // try from 0099a6f4 to 0099a6f7 has its CatchHandler @ 0099a714 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2ScenegraphPhysicsContext::DynamicMotionState*>)0x1;
  return;
}


