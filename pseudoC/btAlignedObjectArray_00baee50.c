// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 00baee50
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<bool> * this)


/* btAlignedObjectArray<bool>::~btAlignedObjectArray() */

void __thiscall btAlignedObjectArray<bool>::~btAlignedObjectArray(btAlignedObjectArray<bool> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (btAlignedObjectArray<bool>)0x0)) {
                    /* try { // try from 00baee70 to 00baee73 has its CatchHandler @ 00baee90 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<bool>)0x1;
  return;
}


