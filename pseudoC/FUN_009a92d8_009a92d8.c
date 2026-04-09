// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009a92d8
// Entry Point: 009a92d8
// Size: 264 bytes
// Signature: undefined FUN_009a92d8(void)


void FUN_009a92d8(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar2 - (long)__src;
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
    puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar2 = *param_2;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *param_1 = __dest;
    param_1[1] = puVar2 + 1;
    param_1[2] = (void *)((long)__dest + uVar1 * 8);
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


