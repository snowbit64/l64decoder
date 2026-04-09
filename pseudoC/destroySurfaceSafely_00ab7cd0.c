// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroySurfaceSafely
// Entry Point: 00ab7cd0
// Size: 264 bytes
// Signature: undefined __thiscall destroySurfaceSafely(VulkanRenderDevice * this, VkSurfaceKHR_T * param_1)


/* VulkanRenderDevice::destroySurfaceSafely(VkSurfaceKHR_T*) */

void __thiscall
VulkanRenderDevice::destroySurfaceSafely(VulkanRenderDevice *this,VkSurfaceKHR_T *param_1)

{
  ulong uVar1;
  void *__dest;
  VkSurfaceKHR_T **ppVVar2;
  void *__src;
  ulong __n;
  
  ppVVar2 = *(VkSurfaceKHR_T ***)(this + 0x420);
  if (ppVVar2 == *(VkSurfaceKHR_T ***)(this + 0x428)) {
    __src = *(void **)(this + 0x418);
    __n = (long)ppVVar2 - (long)__src;
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
    ppVVar2 = (VkSurfaceKHR_T **)((long)__dest + ((long)__n >> 3) * 8);
    *ppVVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x418) = __dest;
    *(VkSurfaceKHR_T ***)(this + 0x420) = ppVVar2 + 1;
    *(void **)(this + 0x428) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppVVar2 = param_1;
    *(VkSurfaceKHR_T ***)(this + 0x420) = ppVVar2 + 1;
  }
  return;
}


