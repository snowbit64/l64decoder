// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseFence
// Entry Point: 00ac2adc
// Size: 324 bytes
// Signature: undefined __thiscall releaseFence(VulkanResourceAllocator * this, Fence * param_1)


/* VulkanResourceAllocator::releaseFence(VulkanResourceAllocator::Fence*) */

void __thiscall VulkanResourceAllocator::releaseFence(VulkanResourceAllocator *this,Fence *param_1)

{
  void *__dest;
  Fence **ppFVar1;
  long lVar2;
  void *__src;
  ulong uVar3;
  ulong __n;
  
  Mutex::enterCriticalSection();
  ppFVar1 = *(Fence ***)(this + 0xa38);
  if (ppFVar1 == *(Fence ***)(this + 0xa40)) {
    __src = *(void **)(this + 0xa30);
    __n = (long)ppFVar1 - (long)__src;
    uVar3 = ((long)__n >> 3) + 1;
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ac2c10 to 00ac2c1f has its CatchHandler @ 00ac2c20 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar3 <= (ulong)((long)__n >> 2)) {
      uVar3 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00ac2b70 to 00ac2b73 has its CatchHandler @ 00ac2c20 */
      __dest = operator_new(uVar3 << 3);
    }
    ppFVar1 = (Fence **)((long)__dest + ((long)__n >> 3) * 8);
    *ppFVar1 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xa30) = __dest;
    *(Fence ***)(this + 0xa38) = ppFVar1 + 1;
    *(void **)(this + 0xa40) = (void *)((long)__dest + uVar3 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppFVar1 = param_1;
    *(Fence ***)(this + 0xa38) = ppFVar1 + 1;
  }
  lVar2 = *(long *)param_1;
  if (*(long *)(param_1 + 8) != lVar2) {
    uVar3 = 0;
    do {
                    /* try { // try from 00ac2bd0 to 00ac2bd7 has its CatchHandler @ 00ac2c28 */
      releaseFenceStatus(this,*(FenceStatus **)(lVar2 + uVar3 * 8));
      lVar2 = *(long *)param_1;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(param_1 + 8) - lVar2 >> 3));
  }
                    /* try { // try from 00ac2bec to 00ac2bf3 has its CatchHandler @ 00ac2c24 */
  Mutex::leaveCriticalSection();
  return;
}


