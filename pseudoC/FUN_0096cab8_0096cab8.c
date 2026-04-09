// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0096cab8
// Entry Point: 0096cab8
// Size: 344 bytes
// Signature: undefined FUN_0096cab8(void)


void FUN_0096cab8(void **param_1,void *param_2)

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
    lVar3 = (long)__n >> 3;
    uVar1 = lVar3 * 0xf83e0f83e0f83e1 + 1;
    if (0xf83e0f83e0f83e < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * 0x1f07c1f07c1f07c2)) {
      uVar1 = lVar3 * 0x1f07c1f07c1f07c2;
    }
    if (0x7c1f07c1f07c1e < (ulong)(lVar3 * 0xf83e0f83e0f83e1)) {
      uVar1 = 0xf83e0f83e0f83e;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0xf83e0f83e0f83e < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x108);
    }
    __dest = (void *)((long)pvVar2 + lVar3 * 8);
    memcpy(__dest,param_2,0x108);
    if (0 < (long)__n) {
      memcpy((void *)((long)__dest - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)__dest - __n);
    param_1[1] = (void *)((long)__dest + 0x108);
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x108);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    memcpy(pvVar2,param_2,0x108);
    param_1[1] = (void *)((long)pvVar2 + 0x108);
  }
  return;
}


