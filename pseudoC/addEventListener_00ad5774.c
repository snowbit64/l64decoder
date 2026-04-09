// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEventListener
// Entry Point: 00ad5774
// Size: 256 bytes
// Signature: undefined __thiscall addEventListener(VulkanRenderWindow * this, IRenderWindowEventListener * param_1)


/* VulkanRenderWindow::addEventListener(IRenderWindowEventListener*) */

void __thiscall
VulkanRenderWindow::addEventListener(VulkanRenderWindow *this,IRenderWindowEventListener *param_1)

{
  ulong uVar1;
  IRenderWindowEventListener **ppIVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppIVar2 = *(IRenderWindowEventListener ***)(this + 0xd0);
  if (ppIVar2 == *(IRenderWindowEventListener ***)(this + 0xd8)) {
    __src = *(void **)(this + 200);
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
    ppIVar2 = (IRenderWindowEventListener **)((long)__dest + ((long)__n >> 3) * 8);
    *ppIVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 200) = __dest;
    *(IRenderWindowEventListener ***)(this + 0xd0) = ppIVar2 + 1;
    *(void **)(this + 0xd8) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppIVar2 = param_1;
    *(IRenderWindowEventListener ***)(this + 0xd0) = ppIVar2 + 1;
  }
  return;
}


