// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b7074c
// Entry Point: 00b7074c
// Size: 324 bytes
// Signature: undefined FUN_00b7074c(void)


void FUN_00b7074c(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *__src;
  size_t __n;
  undefined8 uVar7;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < param_1[2]) {
    uVar7 = param_2[1];
    uVar5 = *param_2;
    puVar4[2] = param_2[2];
    puVar4[1] = uVar7;
    *puVar4 = uVar5;
    param_1[1] = puVar4 + 3;
  }
  else {
    __src = *param_1;
    __n = (long)puVar4 - (long)__src;
    uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (long)param_1[2] - (long)__src >> 3;
    uVar6 = lVar3 * 0x5555555555555556;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x18);
    }
    uVar7 = *param_2;
    uVar5 = param_2[2];
    puVar4 = (undefined8 *)((long)pvVar2 + ((long)__n >> 3) * 8);
    puVar4[1] = param_2[1];
    *puVar4 = uVar7;
    puVar4[2] = uVar5;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = puVar4 + 3;
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


