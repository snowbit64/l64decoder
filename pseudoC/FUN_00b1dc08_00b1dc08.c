// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b1dc08
// Entry Point: 00b1dc08
// Size: 308 bytes
// Signature: undefined FUN_00b1dc08(void)


void FUN_00b1dc08(void **param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  void *pvVar4;
  long lVar5;
  undefined4 *puVar6;
  void *__src;
  size_t __n;
  
  puVar6 = (undefined4 *)param_1[1];
  if (puVar6 == (undefined4 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar6 - (long)__src;
    lVar5 = (long)__n >> 1;
    uVar1 = lVar5 * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar5 * 0x5555555555555556)) {
      uVar1 = lVar5 * 0x5555555555555556;
    }
    if (0x1555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar1 = 0x2aaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x2aaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar1 * 6);
    }
    uVar3 = *(undefined2 *)(param_2 + 1);
    puVar6 = (undefined4 *)((long)pvVar4 + lVar5 * 2);
    *puVar6 = *param_2;
    *(undefined2 *)(puVar6 + 1) = uVar3;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar6 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar6 - __n);
    param_1[1] = (void *)((long)puVar6 + 6);
    param_1[2] = (void *)((long)pvVar4 + uVar1 * 6);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar2 = *param_2;
    *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(param_2 + 1);
    *puVar6 = uVar2;
    param_1[1] = (void *)((long)puVar6 + 6);
  }
  return;
}


