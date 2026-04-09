// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ee7d70
// Entry Point: 00ee7d70
// Size: 296 bytes
// Signature: undefined FUN_00ee7d70(void)


void FUN_00ee7d70(void **param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  long lVar6;
  
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 < param_1[2]) {
    *puVar3 = *param_2;
    param_1[1] = puVar3 + 1;
  }
  else {
    __src = *param_1;
    __n = (long)puVar3 - (long)__src;
    lVar6 = (long)__n >> 2;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar4 = (long)param_1[2] - (long)__src;
    uVar5 = (long)uVar4 >> 1;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
      puVar3 = (undefined4 *)(lVar6 * 4);
      pvVar2 = (void *)0x0;
      *puVar3 = *param_2;
    }
    else {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 2);
      puVar3 = (undefined4 *)((long)__dest + lVar6 * 4);
      pvVar2 = (void *)((long)__dest + uVar1 * 4);
      *puVar3 = *param_2;
    }
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *param_1 = __dest;
    param_1[1] = puVar3 + 1;
    param_1[2] = pvVar2;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


