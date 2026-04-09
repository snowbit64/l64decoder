// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b67c38
// Entry Point: 00b67c38
// Size: 360 bytes
// Signature: undefined FUN_00b67c38(void)


void FUN_00b67c38(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  void *__src;
  size_t __n;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 == (undefined8 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar4 - (long)__src;
    lVar3 = (long)__n >> 2;
    uVar1 = lVar3 * -0x79435e50d79435e5 + 1;
    if (0x35e50d79435e50d < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * 0xd79435e50d79436)) {
      uVar1 = lVar3 * 0xd79435e50d79436;
    }
    if (0x1af286bca1af285 < (ulong)(lVar3 * -0x79435e50d79435e5)) {
      uVar1 = 0x35e50d79435e50d;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x35e50d79435e50d < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x4c);
    }
    uVar10 = *(undefined8 *)((long)param_2 + 0x44);
    uVar9 = *(undefined8 *)((long)param_2 + 0x3c);
    uVar5 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    puVar4 = (undefined8 *)((long)pvVar2 + lVar3 * 4);
    puVar4[5] = param_2[5];
    puVar4[4] = uVar5;
    puVar4[7] = uVar7;
    puVar4[6] = uVar6;
    uVar8 = param_2[1];
    uVar7 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    *(undefined8 *)((long)puVar4 + 0x44) = uVar10;
    *(undefined8 *)((long)puVar4 + 0x3c) = uVar9;
    puVar4[1] = uVar8;
    *puVar4 = uVar7;
    puVar4[3] = uVar6;
    puVar4[2] = uVar5;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = (void *)((long)puVar4 + 0x4c);
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x4c);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar5 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar5;
    uVar9 = param_2[5];
    uVar8 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    uVar5 = *(undefined8 *)((long)param_2 + 0x3c);
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    *(undefined8 *)((long)puVar4 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
    *(undefined8 *)((long)puVar4 + 0x3c) = uVar5;
    puVar4[5] = uVar9;
    puVar4[4] = uVar8;
    puVar4[7] = uVar7;
    puVar4[6] = uVar6;
    puVar4[3] = uVar11;
    puVar4[2] = uVar10;
    param_1[1] = (void *)((long)puVar4 + 0x4c);
  }
  return;
}


