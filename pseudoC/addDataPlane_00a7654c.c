// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDataPlane
// Entry Point: 00a7654c
// Size: 264 bytes
// Signature: undefined __thiscall addDataPlane(TerrainTransformGroup * this, TerrainDataPlane * param_1)


/* TerrainTransformGroup::addDataPlane(TerrainDataPlane*) */

void __thiscall
TerrainTransformGroup::addDataPlane(TerrainTransformGroup *this,TerrainDataPlane *param_1)

{
  ulong uVar1;
  void *__dest;
  TerrainDataPlane **ppTVar2;
  void *__src;
  ulong __n;
  
  ppTVar2 = *(TerrainDataPlane ***)(this + 0x548);
  if (ppTVar2 == *(TerrainDataPlane ***)(this + 0x550)) {
    __src = *(void **)(this + 0x540);
    __n = (long)ppTVar2 - (long)__src;
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
    ppTVar2 = (TerrainDataPlane **)((long)__dest + ((long)__n >> 3) * 8);
    *ppTVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x540) = __dest;
    *(TerrainDataPlane ***)(this + 0x548) = ppTVar2 + 1;
    *(void **)(this + 0x550) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppTVar2 = param_1;
    *(TerrainDataPlane ***)(this + 0x548) = ppTVar2 + 1;
  }
  return;
}


