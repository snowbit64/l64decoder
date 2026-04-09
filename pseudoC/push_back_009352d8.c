// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 009352d8
// Size: 300 bytes
// Signature: undefined __thiscall push_back(SmallVector<char_const*,1u> * this, char * * param_1)


/* SmallVector<char const*, 1u>::push_back(char const* const&) */

void __thiscall
SmallVector<char_const*,1u>::push_back(SmallVector<char_const*,1u> *this,char **param_1)

{
  ulong uVar1;
  char **ppcVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (*(int *)this == 1) {
    switchToHeapStorage(this,2);
  }
  else if (*(int *)this == 0) {
    *(char **)(this + 4) = *param_1;
    goto LAB_009353d0;
  }
  ppcVar2 = *(char ***)(this + 0x18);
  if (ppcVar2 == *(char ***)(this + 0x20)) {
    __src = *(void **)(this + 0x10);
    __n = (long)ppcVar2 - (long)__src;
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
    ppcVar2 = (char **)((long)__dest + ((long)__n >> 3) * 8);
    *ppcVar2 = *param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x10) = __dest;
    *(char ***)(this + 0x18) = ppcVar2 + 1;
    *(void **)(this + 0x20) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppcVar2 = *param_1;
    *(char ***)(this + 0x18) = ppcVar2 + 1;
  }
LAB_009353d0:
  *(int *)this = *(int *)this + 1;
  return;
}


