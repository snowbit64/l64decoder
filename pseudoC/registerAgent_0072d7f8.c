// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registerAgent
// Entry Point: 0072d7f8
// Size: 256 bytes
// Signature: undefined __thiscall registerAgent(VehicleNavigationMapGenerator * this, VehicleNavigationAgentEntity * param_1)


/* VehicleNavigationMapGenerator::registerAgent(VehicleNavigationAgentEntity*) */

void __thiscall
VehicleNavigationMapGenerator::registerAgent
          (VehicleNavigationMapGenerator *this,VehicleNavigationAgentEntity *param_1)

{
  ulong uVar1;
  VehicleNavigationAgentEntity **ppVVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppVVar2 = *(VehicleNavigationAgentEntity ***)(this + 0x128);
  if (ppVVar2 == *(VehicleNavigationAgentEntity ***)(this + 0x130)) {
    __src = *(void **)(this + 0x120);
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
    ppVVar2 = (VehicleNavigationAgentEntity **)((long)__dest + ((long)__n >> 3) * 8);
    *ppVVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x120) = __dest;
    *(VehicleNavigationAgentEntity ***)(this + 0x128) = ppVVar2 + 1;
    *(void **)(this + 0x130) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppVVar2 = param_1;
    *(VehicleNavigationAgentEntity ***)(this + 0x128) = ppVVar2 + 1;
  }
  return;
}


