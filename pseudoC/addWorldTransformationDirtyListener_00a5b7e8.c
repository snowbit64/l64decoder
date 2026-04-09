// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addWorldTransformationDirtyListener
// Entry Point: 00a5b7e8
// Size: 288 bytes
// Signature: undefined __thiscall addWorldTransformationDirtyListener(ScenegraphNode * this, WorldTransformationDirtyListener * param_1)


/* ScenegraphNode::addWorldTransformationDirtyListener(ScenegraphNode::WorldTransformationDirtyListener*)
    */

void __thiscall
ScenegraphNode::addWorldTransformationDirtyListener
          (ScenegraphNode *this,WorldTransformationDirtyListener *param_1)

{
  ulong uVar1;
  WorldTransformationDirtyListener **ppWVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppWVar2 = *(WorldTransformationDirtyListener ***)(this + 0x50);
  if (ppWVar2 == *(WorldTransformationDirtyListener ***)(this + 0x58)) {
    __src = *(void **)(this + 0x48);
    __n = (long)ppWVar2 - (long)__src;
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
    ppWVar2 = (WorldTransformationDirtyListener **)((long)__dest + ((long)__n >> 3) * 8);
    *ppWVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x48) = __dest;
    *(WorldTransformationDirtyListener ***)(this + 0x50) = ppWVar2 + 1;
    *(void **)(this + 0x58) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppWVar2 = param_1;
    *(WorldTransformationDirtyListener ***)(this + 0x50) = ppWVar2 + 1;
  }
  if (((byte)this[0x40] >> 4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a5b8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x20))(this,1);
    return;
  }
  return;
}


