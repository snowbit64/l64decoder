// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c55f70
// Entry Point: 00c55f70
// Size: 312 bytes
// Signature: undefined FUN_00c55f70(void)


void FUN_00c55f70(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *__src;
  size_t __n;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 == (undefined8 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar5 - (long)__src;
    lVar3 = (long)__n >> 3;
    uVar1 = lVar3 * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * -0x6666666666666666)) {
      uVar1 = lVar3 * -0x6666666666666666;
    }
    if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
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
    uVar6 = param_2[1];
    uVar4 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    puVar5 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
    puVar5[4] = param_2[4];
    puVar5[1] = uVar6;
    *puVar5 = uVar4;
    puVar5[3] = uVar8;
    puVar5[2] = uVar7;
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
  else {
    uVar8 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar4 = param_2[4];
    puVar5[1] = param_2[1];
    *puVar5 = uVar8;
    puVar5[3] = uVar7;
    puVar5[2] = uVar6;
    puVar5[4] = uVar4;
    param_1[1] = puVar5 + 5;
  }
  return;
}


