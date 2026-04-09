// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 00baee0c
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<int> * this)


/* btAlignedObjectArray<int>::~btAlignedObjectArray() */

void __thiscall btAlignedObjectArray<int>::~btAlignedObjectArray(btAlignedObjectArray<int> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (btAlignedObjectArray<int>)0x0)) {
                    /* try { // try from 00baee2c to 00baee2f has its CatchHandler @ 00baee4c */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<int>)0x1;
  return;
}


