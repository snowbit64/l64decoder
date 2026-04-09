// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 009b4fb8
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<Bt2RaycastVehicle::WheelSolverConstraints> * this)


/* btAlignedObjectArray<Bt2RaycastVehicle::WheelSolverConstraints>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<Bt2RaycastVehicle::WheelSolverConstraints>::~btAlignedObjectArray
          (btAlignedObjectArray<Bt2RaycastVehicle::WheelSolverConstraints> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<Bt2RaycastVehicle::WheelSolverConstraints>)0x0)) {
                    /* try { // try from 009b4fd8 to 009b4fdb has its CatchHandler @ 009b4ff8 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2RaycastVehicle::WheelSolverConstraints>)0x1;
  return;
}


