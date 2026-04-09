// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDirtyShape
// Entry Point: 008c2268
// Size: 256 bytes
// Signature: undefined __thiscall addDirtyShape(CullingManager * this, GsShape * param_1)


/* CullingManager::addDirtyShape(GsShape*) */

void __thiscall CullingManager::addDirtyShape(CullingManager *this,GsShape *param_1)

{
  ulong uVar1;
  GsShape **ppGVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppGVar2 = *(GsShape ***)(this + 0x118);
  if (ppGVar2 == *(GsShape ***)(this + 0x120)) {
    __src = *(void **)(this + 0x110);
    __n = (long)ppGVar2 - (long)__src;
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
    ppGVar2 = (GsShape **)((long)__dest + ((long)__n >> 3) * 8);
    *ppGVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x110) = __dest;
    *(GsShape ***)(this + 0x118) = ppGVar2 + 1;
    *(void **)(this + 0x120) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppGVar2 = param_1;
    *(GsShape ***)(this + 0x118) = ppGVar2 + 1;
  }
  return;
}


