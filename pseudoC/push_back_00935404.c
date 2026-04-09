// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00935404
// Size: 300 bytes
// Signature: undefined __thiscall push_back(SmallVector<float,1u> * this, float * param_1)


/* SmallVector<float, 1u>::push_back(float const&) */

void __thiscall SmallVector<float,1u>::push_back(SmallVector<float,1u> *this,float *param_1)

{
  ulong uVar1;
  float *pfVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (*(int *)this == 1) {
    switchToHeapStorage(this,2);
  }
  else if (*(int *)this == 0) {
    *(float *)(this + 4) = *param_1;
    goto LAB_009354fc;
  }
  pfVar2 = *(float **)(this + 0x10);
  if (pfVar2 == *(float **)(this + 0x18)) {
    __src = *(void **)(this + 8);
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
    *pfVar2 = *param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 8) = __dest;
    *(float **)(this + 0x10) = pfVar2 + 1;
    *(void **)(this + 0x18) = (void *)((long)__dest + uVar1 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *pfVar2 = *param_1;
    *(float **)(this + 0x10) = pfVar2 + 1;
  }
LAB_009354fc:
  *(int *)this = *(int *)this + 1;
  return;
}


