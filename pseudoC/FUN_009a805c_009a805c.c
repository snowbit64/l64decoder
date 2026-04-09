// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009a805c
// Entry Point: 009a805c
// Size: 344 bytes
// Signature: undefined FUN_009a805c(void)


void FUN_009a805c(void **param_1,void *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  void *__src;
  size_t __n;
  void *__dest;
  
  pvVar2 = param_1[1];
  if (pvVar2 == param_1[2]) {
    __src = *param_1;
    __n = (long)pvVar2 - (long)__src;
    lVar3 = (long)__n >> 5;
    uVar1 = lVar3 * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0xba2e8ba2e8ba2e < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * 0x5d1745d1745d1746)) {
      uVar1 = lVar3 * 0x5d1745d1745d1746;
    }
    if (0x5d1745d1745d16 < (ulong)(lVar3 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = 0xba2e8ba2e8ba2e;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0xba2e8ba2e8ba2e < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x160);
    }
    __dest = (void *)((long)pvVar2 + lVar3 * 0x20);
    memcpy(__dest,param_2,0x160);
    if (0 < (long)__n) {
      memcpy((void *)((long)__dest - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)__dest - __n);
    param_1[1] = (void *)((long)__dest + 0x160);
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x160);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    memcpy(pvVar2,param_2,0x160);
    param_1[1] = (void *)((long)pvVar2 + 0x160);
  }
  return;
}


