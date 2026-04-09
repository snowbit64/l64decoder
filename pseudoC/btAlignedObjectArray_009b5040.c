// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 009b5040
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<Bt2WheelInfo> * this)


/* btAlignedObjectArray<Bt2WheelInfo>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<Bt2WheelInfo>::~btAlignedObjectArray(btAlignedObjectArray<Bt2WheelInfo> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<Bt2WheelInfo>)0x0)) {
                    /* try { // try from 009b5060 to 009b5063 has its CatchHandler @ 009b5080 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2WheelInfo>)0x1;
  return;
}


