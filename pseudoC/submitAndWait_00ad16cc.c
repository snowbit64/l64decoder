// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitAndWait
// Entry Point: 00ad16cc
// Size: 364 bytes
// Signature: undefined __thiscall submitAndWait(VulkanCommandBuffer * this, QUEUE_TYPE param_1)


/* VulkanCommandBuffer::submitAndWait(VulkanUtil::QUEUE_TYPE) */

void __thiscall VulkanCommandBuffer::submitAndWait(VulkanCommandBuffer *this,QUEUE_TYPE param_1)

{
  ulong **ppuVar1;
  ulong *puVar2;
  void *__dest;
  void **ppvVar3;
  ulong uVar4;
  void *__src;
  ulong __n;
  
  puVar2 = (ulong *)VulkanResourceAllocator::getFenceStatus();
  ppvVar3 = *(void ***)(this + (ulong)param_1 * 8 + 0x518);
  if (ppvVar3 == (void **)0x0) {
    ppvVar3 = (void **)VulkanResourceAllocator::getFence
                                 (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),
                                  param_1);
    *(void ***)(this + (ulong)param_1 * 8 + 0x518) = ppvVar3;
  }
  if (puVar2 != (ulong *)0x0) {
    ppuVar1 = (ulong **)ppvVar3[1];
    if (ppuVar1 == (ulong **)ppvVar3[2]) {
      __src = *ppvVar3;
      __n = (long)ppuVar1 - (long)__src;
      uVar4 = ((long)__n >> 3) + 1;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar4 <= (ulong)((long)__n >> 2)) {
        uVar4 = (long)__n >> 2;
      }
      if (0x7ffffffffffffff7 < __n) {
        uVar4 = 0x1fffffffffffffff;
      }
      if (uVar4 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar4 << 3);
      }
      ppuVar1 = (ulong **)((long)__dest + ((long)__n >> 3) * 8);
      *ppuVar1 = puVar2;
      if (0 < (long)__n) {
        memcpy(__dest,__src,__n);
      }
      *ppvVar3 = __dest;
      ppvVar3[1] = ppuVar1 + 1;
      ppvVar3[2] = (void *)((long)__dest + uVar4 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *ppuVar1 = puVar2;
      ppvVar3[1] = ppuVar1 + 1;
    }
  }
  uVar4 = *puVar2;
  submitQueue(this,param_1,false,true);
  while (puVar2[1] < uVar4) {
    ThreadUtil::usleep(100);
  }
  return;
}


