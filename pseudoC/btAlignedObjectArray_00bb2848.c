// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 00bb2848
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<btSoftBody*> * this)


/* btAlignedObjectArray<btSoftBody*>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<btSoftBody*>::~btAlignedObjectArray(btAlignedObjectArray<btSoftBody*> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<btSoftBody*>)0x0)) {
                    /* try { // try from 00bb2868 to 00bb286b has its CatchHandler @ 00bb2888 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<btSoftBody*>)0x1;
  return;
}


