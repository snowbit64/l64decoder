// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSecondaryCommandBuffer
// Entry Point: 00ab7600
// Size: 272 bytes
// Signature: undefined createSecondaryCommandBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderDevice::createSecondaryCommandBuffer() */

VulkanCommandBuffer * VulkanRenderDevice::createSecondaryCommandBuffer(void)

{
  ulong uVar1;
  VulkanRenderDevice *in_x0;
  VulkanCommandBuffer *this;
  void *__dest;
  VulkanCommandBuffer **ppVVar2;
  void *__src;
  ulong __n;
  
  this = (VulkanCommandBuffer *)operator_new(0xb68);
                    /* try { // try from 00ab7628 to 00ab7633 has its CatchHandler @ 00ab7710 */
  VulkanCommandBuffer::VulkanCommandBuffer(this,in_x0,1);
  ppVVar2 = *(VulkanCommandBuffer ***)(in_x0 + 0x5c0);
  if (ppVVar2 == *(VulkanCommandBuffer ***)(in_x0 + 0x5c8)) {
    __src = *(void **)(in_x0 + 0x5b8);
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
    ppVVar2 = (VulkanCommandBuffer **)((long)__dest + ((long)__n >> 3) * 8);
    *ppVVar2 = this;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(in_x0 + 0x5b8) = __dest;
    *(VulkanCommandBuffer ***)(in_x0 + 0x5c0) = ppVVar2 + 1;
    *(void **)(in_x0 + 0x5c8) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppVVar2 = this;
    *(VulkanCommandBuffer ***)(in_x0 + 0x5c0) = ppVVar2 + 1;
  }
  return this;
}


