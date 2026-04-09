// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c517b8
// Entry Point: 00c517b8
// Size: 352 bytes
// Signature: undefined FUN_00c517b8(void)


void FUN_00c517b8(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__src;
  size_t __n;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 == (undefined8 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar4 - (long)__src;
    lVar3 = (long)__n >> 3;
    uVar1 = lVar3 * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * -0x2492492492492492)) {
      uVar1 = lVar3 * -0x2492492492492492;
    }
    if (0x249249249249248 < (ulong)(lVar3 * 0x6db6db6db6db6db7)) {
      uVar1 = 0x492492492492492;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x38);
    }
    uVar5 = param_2[4];
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar4 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
    puVar4[5] = param_2[5];
    puVar4[4] = uVar5;
    uVar5 = param_2[6];
    puVar4[1] = uVar7;
    *puVar4 = uVar6;
    puVar4[3] = uVar9;
    puVar4[2] = uVar8;
    puVar4[6] = uVar5;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = puVar4 + 7;
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x38);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar4[6] = param_2[6];
    puVar4[3] = uVar8;
    puVar4[2] = uVar7;
    puVar4[5] = uVar6;
    puVar4[4] = uVar5;
    puVar4[1] = uVar10;
    *puVar4 = uVar9;
    param_1[1] = puVar4 + 7;
  }
  return;
}


