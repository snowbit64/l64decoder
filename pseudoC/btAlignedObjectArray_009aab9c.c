// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 009aab9c
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<btCollisionObject*> * this)


/* btAlignedObjectArray<btCollisionObject*>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<btCollisionObject*>::~btAlignedObjectArray
          (btAlignedObjectArray<btCollisionObject*> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<btCollisionObject*>)0x0)) {
                    /* try { // try from 009aabbc to 009aabbf has its CatchHandler @ 009aabdc */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<btCollisionObject*>)0x1;
  return;
}


