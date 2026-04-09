// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 0099784c
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<btPersistentManifold*> * this)


/* btAlignedObjectArray<btPersistentManifold*>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<btPersistentManifold*>::~btAlignedObjectArray
          (btAlignedObjectArray<btPersistentManifold*> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<btPersistentManifold*>)0x0)) {
                    /* try { // try from 0099786c to 0099786f has its CatchHandler @ 0099788c */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<btPersistentManifold*>)0x1;
  return;
}


