// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 009bfa18
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<btVector3> * this)


/* btAlignedObjectArray<btVector3>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<btVector3>::~btAlignedObjectArray(btAlignedObjectArray<btVector3> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<btVector3>)0x0)) {
                    /* try { // try from 009bfa38 to 009bfa3b has its CatchHandler @ 009bfa58 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<btVector3>)0x1;
  return;
}


