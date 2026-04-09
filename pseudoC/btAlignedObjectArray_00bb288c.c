// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 00bb288c
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<btGhostObject*> * this)


/* btAlignedObjectArray<btGhostObject*>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<btGhostObject*>::~btAlignedObjectArray
          (btAlignedObjectArray<btGhostObject*> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<btGhostObject*>)0x0)) {
                    /* try { // try from 00bb28ac to 00bb28af has its CatchHandler @ 00bb28cc */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<btGhostObject*>)0x1;
  return;
}


