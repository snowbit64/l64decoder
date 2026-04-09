// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b415d0
// Entry Point: 00b415d0
// Size: 336 bytes
// Signature: undefined FUN_00b415d0(void)


void FUN_00b415d0(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  void *__src;
  size_t __n;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 == (undefined8 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar5 - (long)__src;
    lVar4 = (long)__n >> 2;
    uVar1 = lVar4 * -0x71c71c71c71c71c7 + 1;
    if (0x71c71c71c71c71c < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar4 * 0x1c71c71c71c71c72)) {
      uVar1 = lVar4 * 0x1c71c71c71c71c72;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar4 * -0x71c71c71c71c71c7)) {
      uVar1 = 0x71c71c71c71c71c;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x71c71c71c71c71c < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x24);
    }
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar5 = (undefined8 *)((long)pvVar3 + lVar4 * 4);
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_2 + 4);
    puVar5[1] = uVar7;
    *puVar5 = uVar6;
    puVar5[3] = uVar9;
    puVar5[2] = uVar8;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar5 - __n);
    param_1[1] = (void *)((long)puVar5 + 0x24);
    param_1[2] = (void *)((long)pvVar3 + uVar1 * 0x24);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar8 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    uVar2 = *(undefined4 *)(param_2 + 4);
    puVar5[1] = param_2[1];
    *puVar5 = uVar8;
    puVar5[3] = uVar7;
    puVar5[2] = uVar6;
    *(undefined4 *)(puVar5 + 4) = uVar2;
    param_1[1] = (void *)((long)puVar5 + 0x24);
  }
  return;
}


