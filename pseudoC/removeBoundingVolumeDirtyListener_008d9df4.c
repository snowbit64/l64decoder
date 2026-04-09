// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeBoundingVolumeDirtyListener
// Entry Point: 008d9df4
// Size: 108 bytes
// Signature: undefined __thiscall removeBoundingVolumeDirtyListener(DynamicGeometry * this, BoundingVolumeDirtyListener * param_1)


/* DynamicGeometry::removeBoundingVolumeDirtyListener(DynamicGeometry::BoundingVolumeDirtyListener*)
    */

void __thiscall
DynamicGeometry::removeBoundingVolumeDirtyListener
          (DynamicGeometry *this,BoundingVolumeDirtyListener *param_1)

{
  BoundingVolumeDirtyListener **ppBVar1;
  BoundingVolumeDirtyListener **ppBVar2;
  size_t __n;
  BoundingVolumeDirtyListener **__dest;
  
  ppBVar2 = *(BoundingVolumeDirtyListener ***)(this + 0x60);
  ppBVar1 = *(BoundingVolumeDirtyListener ***)(this + 0x58);
  __dest = ppBVar1;
  for (; (ppBVar1 != ppBVar2 && (__dest = ppBVar1, *ppBVar1 != param_1)); ppBVar1 = ppBVar1 + 1) {
    __dest = ppBVar2;
  }
  __n = (long)ppBVar2 - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(size_t *)(this + 0x60) = (long)__dest + __n;
  return;
}


