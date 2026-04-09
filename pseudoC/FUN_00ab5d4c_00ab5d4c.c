// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ab5d4c
// Entry Point: 00ab5d4c
// Size: 264 bytes
// Signature: undefined FUN_00ab5d4c(void)


void FUN_00ab5d4c(void **param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 == (undefined4 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar2 - (long)__src;
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
    puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
    *puVar2 = *param_2;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *param_1 = __dest;
    param_1[1] = puVar2 + 1;
    param_1[2] = (void *)((long)__dest + uVar1 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *puVar2 = *param_2;
    param_1[1] = puVar2 + 1;
  }
  return;
}


