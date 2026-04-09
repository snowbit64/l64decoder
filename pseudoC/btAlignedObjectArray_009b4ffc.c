// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 009b4ffc
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<Bt2RaycastVehicle::Differential> * this)


/* btAlignedObjectArray<Bt2RaycastVehicle::Differential>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<Bt2RaycastVehicle::Differential>::~btAlignedObjectArray
          (btAlignedObjectArray<Bt2RaycastVehicle::Differential> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<Bt2RaycastVehicle::Differential>)0x0)) {
                    /* try { // try from 009b501c to 009b501f has its CatchHandler @ 009b503c */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2RaycastVehicle::Differential>)0x1;
  return;
}


