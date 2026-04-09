// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDependency
// Entry Point: 00a0d624
// Size: 256 bytes
// Signature: undefined __thiscall addDependency(RenderTextureSetup * this, RenderTextureSetup * param_1)


/* RenderTextureSetup::addDependency(RenderTextureSetup const*) */

void __thiscall
RenderTextureSetup::addDependency(RenderTextureSetup *this,RenderTextureSetup *param_1)

{
  ulong uVar1;
  RenderTextureSetup **ppRVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppRVar2 = *(RenderTextureSetup ***)(this + 0x98);
  if (ppRVar2 == *(RenderTextureSetup ***)(this + 0xa0)) {
    __src = *(void **)(this + 0x90);
    __n = (long)ppRVar2 - (long)__src;
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
    ppRVar2 = (RenderTextureSetup **)((long)__dest + ((long)__n >> 3) * 8);
    *ppRVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x90) = __dest;
    *(RenderTextureSetup ***)(this + 0x98) = ppRVar2 + 1;
    *(void **)(this + 0xa0) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppRVar2 = param_1;
    *(RenderTextureSetup ***)(this + 0x98) = ppRVar2 + 1;
  }
  return;
}


