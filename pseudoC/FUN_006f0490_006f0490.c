// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006f0490
// Entry Point: 006f0490
// Size: 328 bytes
// Signature: undefined FUN_006f0490(void)


void FUN_006f0490(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < param_1[2]) {
    uVar8 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar4[3] = param_2[3];
    puVar4[2] = uVar8;
    puVar4[5] = uVar7;
    puVar4[4] = uVar6;
    puVar4[1] = uVar10;
    *puVar4 = uVar9;
    param_1[1] = puVar4 + 6;
  }
  else {
    __src = *param_1;
    __n = (long)puVar4 - (long)__src;
    uVar1 = ((long)__n >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (long)param_1[2] - (long)__src >> 4;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar1 = 0x555555555555555;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x30);
    }
    uVar10 = param_2[4];
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar4 = (undefined8 *)((long)pvVar2 + ((long)__n >> 4) * 0x10);
    puVar4[5] = param_2[5];
    puVar4[4] = uVar10;
    puVar4[1] = uVar7;
    *puVar4 = uVar6;
    puVar4[3] = uVar9;
    puVar4[2] = uVar8;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = puVar4 + 6;
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x30);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


