// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ab5af0
// Entry Point: 00ab5af0
// Size: 272 bytes
// Signature: undefined FUN_00ab5af0(void)


void FUN_00ab5af0(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  size_t __n;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < param_1[2]) {
    *puVar2 = *param_2;
    param_1[1] = puVar2 + 1;
  }
  else {
    __src = *param_1;
    __n = (long)puVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar3 = (long)param_1[2] - (long)__src;
    uVar4 = (long)uVar3 >> 2;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
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
  return;
}


