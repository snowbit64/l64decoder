// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btAlignedObjectArray
// Entry Point: 0099c2cc
// Size: 64 bytes
// Signature: undefined __thiscall ~btAlignedObjectArray(btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> * this)


/* btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::~btAlignedObjectArray()
    */

void __thiscall
btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>::~btAlignedObjectArray
          (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData> *this)

{
  if ((*(void **)(this + 0x10) != (void *)0x0) &&
     (this[0x18] != (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>)0x0)
     ) {
                    /* try { // try from 0099c2ec to 0099c2ef has its CatchHandler @ 0099c30c */
    btAlignedFreeInternal(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (btAlignedObjectArray<Bt2SceneQueryUtil::AllHitsRayResultCallback::HitData>)0x1;
  return;
}


