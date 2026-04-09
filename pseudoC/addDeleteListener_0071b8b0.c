// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDeleteListener
// Entry Point: 0071b8b0
// Size: 256 bytes
// Signature: undefined __thiscall addDeleteListener(DeleteNotifier * this, IDeleteListener * param_1)


/* DeleteNotifier::addDeleteListener(DeleteNotifier::IDeleteListener*) */

void __thiscall DeleteNotifier::addDeleteListener(DeleteNotifier *this,IDeleteListener *param_1)

{
  ulong uVar1;
  IDeleteListener **ppIVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppIVar2 = *(IDeleteListener ***)(this + 0x10);
  if (ppIVar2 == *(IDeleteListener ***)(this + 0x18)) {
    __src = *(void **)(this + 8);
    __n = (long)ppIVar2 - (long)__src;
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
    ppIVar2 = (IDeleteListener **)((long)__dest + ((long)__n >> 3) * 8);
    *ppIVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 8) = __dest;
    *(IDeleteListener ***)(this + 0x10) = ppIVar2 + 1;
    *(void **)(this + 0x18) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppIVar2 = param_1;
    *(IDeleteListener ***)(this + 0x10) = ppIVar2 + 1;
  }
  return;
}


