// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addWakeUpReport
// Entry Point: 009ab7b8
// Size: 256 bytes
// Signature: undefined __thiscall addWakeUpReport(Bt2ScenegraphPhysicsContext * this, IWakeUpReport * param_1)


/* Bt2ScenegraphPhysicsContext::addWakeUpReport(IWakeUpReport*) */

void __thiscall
Bt2ScenegraphPhysicsContext::addWakeUpReport
          (Bt2ScenegraphPhysicsContext *this,IWakeUpReport *param_1)

{
  ulong uVar1;
  IWakeUpReport **ppIVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppIVar2 = *(IWakeUpReport ***)(this + 0x100);
  if (ppIVar2 == *(IWakeUpReport ***)(this + 0x108)) {
    __src = *(void **)(this + 0xf8);
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
    ppIVar2 = (IWakeUpReport **)((long)__dest + ((long)__n >> 3) * 8);
    *ppIVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xf8) = __dest;
    *(IWakeUpReport ***)(this + 0x100) = ppIVar2 + 1;
    *(void **)(this + 0x108) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppIVar2 = param_1;
    *(IWakeUpReport ***)(this + 0x100) = ppIVar2 + 1;
  }
  return;
}


