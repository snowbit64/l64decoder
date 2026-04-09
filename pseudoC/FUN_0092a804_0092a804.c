// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0092a804
// Entry Point: 0092a804
// Size: 352 bytes
// Signature: undefined FUN_0092a804(void)


void FUN_0092a804(void **param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 == (undefined8 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar5 - (long)__src;
    lVar4 = (long)__n >> 2;
    uVar1 = lVar4 * 0x4ec4ec4ec4ec4ec5 + 1;
    if (0x4ec4ec4ec4ec4ec < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar4 * -0x6276276276276276)) {
      uVar1 = lVar4 * -0x6276276276276276;
    }
    if (0x276276276276275 < (ulong)(lVar4 * 0x4ec4ec4ec4ec4ec5)) {
      uVar1 = 0x4ec4ec4ec4ec4ec;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x4ec4ec4ec4ec4ec < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0x34);
    }
    uVar10 = param_2[4];
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar5 = (undefined8 *)((long)pvVar3 + lVar4 * 4);
    puVar5[5] = param_2[5];
    puVar5[4] = uVar10;
    uVar2 = *(undefined4 *)(param_2 + 6);
    puVar5[1] = uVar7;
    *puVar5 = uVar6;
    puVar5[3] = uVar9;
    puVar5[2] = uVar8;
    *(undefined4 *)(puVar5 + 6) = uVar2;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar5 - __n);
    param_1[1] = (void *)((long)puVar5 + 0x34);
    param_1[2] = (void *)((long)pvVar3 + uVar1 * 0x34);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(param_2 + 6);
    puVar5[3] = uVar9;
    puVar5[2] = uVar8;
    puVar5[5] = uVar7;
    puVar5[4] = uVar6;
    puVar5[1] = uVar11;
    *puVar5 = uVar10;
    param_1[1] = (void *)((long)puVar5 + 0x34);
  }
  return;
}


