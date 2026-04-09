// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 00baedc8
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3> * this)


/* btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3>::~btAlignedObjectArray() */

void __thiscall
btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3>::~btAlignedObjectArray
          (btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3>)0x0)) {
                    /* try { // try from 00baede8 to 00baedeb has its CatchHandler @ 00baee08 */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2PhysicsCookingUtil::GrahamScanVector3>)0x1;
  return;
}


