// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addBoundingVolumeDirtyListener
// Entry Point: 008d9ca4
// Size: 256 bytes
// Signature: undefined __thiscall addBoundingVolumeDirtyListener(DynamicGeometry * this, BoundingVolumeDirtyListener * param_1)


/* DynamicGeometry::addBoundingVolumeDirtyListener(DynamicGeometry::BoundingVolumeDirtyListener*) */

void __thiscall
DynamicGeometry::addBoundingVolumeDirtyListener
          (DynamicGeometry *this,BoundingVolumeDirtyListener *param_1)

{
  ulong uVar1;
  BoundingVolumeDirtyListener **ppBVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppBVar2 = *(BoundingVolumeDirtyListener ***)(this + 0x60);
  if (ppBVar2 == *(BoundingVolumeDirtyListener ***)(this + 0x68)) {
    __src = *(void **)(this + 0x58);
    __n = (long)ppBVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
    }
    ppBVar2 = (BoundingVolumeDirtyListener **)((long)__dest + ((long)__n >> 3) * 8);
    *ppBVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x58) = __dest;
    *(BoundingVolumeDirtyListener ***)(this + 0x60) = ppBVar2 + 1;
    *(void **)(this + 0x68) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppBVar2 = param_1;
    *(BoundingVolumeDirtyListener ***)(this + 0x60) = ppBVar2 + 1;
  }
  return;
}


