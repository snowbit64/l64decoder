// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLowPriorityPostSimulationTask
// Entry Point: 009ab3ec
// Size: 264 bytes
// Signature: undefined __thiscall addLowPriorityPostSimulationTask(Bt2ScenegraphPhysicsContext * this, IPhysicsTask * param_1)


/* Bt2ScenegraphPhysicsContext::addLowPriorityPostSimulationTask(IPhysicsTask*) */

void __thiscall
Bt2ScenegraphPhysicsContext::addLowPriorityPostSimulationTask
          (Bt2ScenegraphPhysicsContext *this,IPhysicsTask *param_1)

{
  ulong uVar1;
  void *__dest;
  IPhysicsTask **ppIVar2;
  void *__src;
  ulong __n;
  
  ppIVar2 = *(IPhysicsTask ***)(this + 0x5a0);
  if (ppIVar2 == *(IPhysicsTask ***)(this + 0x5a8)) {
    __src = *(void **)(this + 0x598);
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
    ppIVar2 = (IPhysicsTask **)((long)__dest + ((long)__n >> 3) * 8);
    *ppIVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x598) = __dest;
    *(IPhysicsTask ***)(this + 0x5a0) = ppIVar2 + 1;
    *(void **)(this + 0x5a8) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppIVar2 = param_1;
    *(IPhysicsTask ***)(this + 0x5a0) = ppIVar2 + 1;
  }
  return;
}


