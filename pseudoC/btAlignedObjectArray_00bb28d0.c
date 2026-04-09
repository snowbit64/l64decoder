// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 00bb28d0
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<Bt2VehicleSolverBase*> * this)


/* btAlignedObjectArray<Bt2VehicleSolverBase*>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<Bt2VehicleSolverBase*>::~btAlignedObjectArray
          (btAlignedObjectArray<Bt2VehicleSolverBase*> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<Bt2VehicleSolverBase*>)0x0)) {
                    /* try { // try from 00bb28f0 to 00bb28f3 has its CatchHandler @ 00bb2910 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2VehicleSolverBase*>)0x1;
  return;
}


