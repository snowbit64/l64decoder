// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseFenceStatus
// Entry Point: 00ac2c40
// Size: 276 bytes
// Signature: undefined __thiscall releaseFenceStatus(VulkanResourceAllocator * this, FenceStatus * param_1)


/* VulkanResourceAllocator::releaseFenceStatus(VulkanResourceAllocator::FenceStatus*) */

void __thiscall
VulkanResourceAllocator::releaseFenceStatus(VulkanResourceAllocator *this,FenceStatus *param_1)

{
  ulong uVar1;
  void *__dest;
  FenceStatus **ppFVar2;
  void *__src;
  ulong __n;
  
  Mutex::enterCriticalSection();
  ppFVar2 = *(FenceStatus ***)(this + 0xa68);
  if (ppFVar2 == *(FenceStatus ***)(this + 0xa70)) {
    __src = *(void **)(this + 0xa60);
    __n = (long)ppFVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ac2d44 to 00ac2d53 has its CatchHandler @ 00ac2d54 */
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
                    /* try { // try from 00ac2cd4 to 00ac2cd7 has its CatchHandler @ 00ac2d54 */
      __dest = operator_new(uVar1 << 3);
    }
    ppFVar2 = (FenceStatus **)((long)__dest + ((long)__n >> 3) * 8);
    *ppFVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xa60) = __dest;
    *(FenceStatus ***)(this + 0xa68) = ppFVar2 + 1;
    *(void **)(this + 0xa70) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppFVar2 = param_1;
    *(FenceStatus ***)(this + 0xa68) = ppFVar2 + 1;
  }
                    /* try { // try from 00ac2d20 to 00ac2d27 has its CatchHandler @ 00ac2d6c */
  Mutex::leaveCriticalSection();
  return;
}


