// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVelocityThreshold
// Entry Point: 00880b54
// Size: 268 bytes
// Signature: undefined __thiscall addVelocityThreshold(AnimalSteering * this, float param_1)


/* AnimalSteering::addVelocityThreshold(float) */

void __thiscall AnimalSteering::addVelocityThreshold(AnimalSteering *this,float param_1)

{
  ulong uVar1;
  float *pfVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  pfVar2 = *(float **)(this + 0x88);
  if (pfVar2 == *(float **)(this + 0x90)) {
    __src = *(void **)(this + 0x80);
    __n = (long)pfVar2 - (long)__src;
    uVar1 = ((long)__n >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 1)) {
      uVar1 = (long)__n >> 1;
    }
    if (0x7ffffffffffffffb < __n) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 2);
    }
    pfVar2 = (float *)((long)__dest + ((long)__n >> 2) * 4);
    *pfVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x80) = __dest;
    *(float **)(this + 0x88) = pfVar2 + 1;
    *(void **)(this + 0x90) = (void *)((long)__dest + uVar1 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *pfVar2 = param_1;
    *(float **)(this + 0x88) = pfVar2 + 1;
  }
  return;
}


