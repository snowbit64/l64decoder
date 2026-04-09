// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008988e4
// Entry Point: 008988e4
// Size: 328 bytes
// Signature: undefined FUN_008988e4(void)


void FUN_008988e4(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  void *__src;
  size_t __n;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < param_1[2]) {
    uVar9 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    uVar3 = param_2[4];
    puVar5[1] = param_2[1];
    *puVar5 = uVar9;
    puVar5[3] = uVar8;
    puVar5[2] = uVar7;
    puVar5[4] = uVar3;
    param_1[1] = puVar5 + 5;
  }
  else {
    __src = *param_1;
    __n = (long)puVar5 - (long)__src;
    uVar1 = ((long)__n >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (long)param_1[2] - (long)__src >> 3;
    uVar6 = lVar4 * -0x6666666666666666;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar1 = 0x666666666666666;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x28);
    }
    uVar7 = param_2[1];
    uVar3 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar5 = (undefined8 *)((long)pvVar2 + ((long)__n >> 3) * 8);
    puVar5[4] = param_2[4];
    puVar5[1] = uVar7;
    *puVar5 = uVar3;
    puVar5[3] = uVar9;
    puVar5[2] = uVar8;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar5 - __n);
    param_1[1] = puVar5 + 5;
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x28);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


