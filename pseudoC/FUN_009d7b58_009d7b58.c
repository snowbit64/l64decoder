// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009d7b58
// Entry Point: 009d7b58
// Size: 308 bytes
// Signature: undefined FUN_009d7b58(void)


void FUN_009d7b58(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  void *__src;
  size_t __n;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 == (undefined8 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar5 - (long)__src;
    lVar4 = (long)__n >> 2;
    uVar1 = lVar4 * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar4 * 0x5555555555555556)) {
      uVar1 = lVar4 * 0x5555555555555556;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar1 = 0x1555555555555555;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0xc);
    }
    uVar2 = *(undefined4 *)(param_2 + 1);
    puVar5 = (undefined8 *)((long)pvVar3 + lVar4 * 4);
    *puVar5 = *param_2;
    *(undefined4 *)(puVar5 + 1) = uVar2;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar5 - __n);
    param_1[1] = (void *)((long)puVar5 + 0xc);
    param_1[2] = (void *)((long)pvVar3 + uVar1 * 0xc);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar6 = *param_2;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar5 = uVar6;
    param_1[1] = (void *)((long)puVar5 + 0xc);
  }
  return;
}


