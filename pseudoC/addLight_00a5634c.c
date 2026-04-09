// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLight
// Entry Point: 00a5634c
// Size: 256 bytes
// Signature: undefined __thiscall addLight(MergedShadowGroup * this, LightSource * param_1)


/* LightSource::MergedShadowGroup::addLight(LightSource*) */

void __thiscall
LightSource::MergedShadowGroup::addLight(MergedShadowGroup *this,LightSource *param_1)

{
  ulong uVar1;
  LightSource **ppLVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppLVar2 = *(LightSource ***)(this + 8);
  if (ppLVar2 == *(LightSource ***)(this + 0x10)) {
    __src = *(void **)this;
    __n = (long)ppLVar2 - (long)__src;
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
    ppLVar2 = (LightSource **)((long)__dest + ((long)__n >> 3) * 8);
    *ppLVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(LightSource ***)(this + 8) = ppLVar2 + 1;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppLVar2 = param_1;
    *(LightSource ***)(this + 8) = ppLVar2 + 1;
  }
  return;
}


