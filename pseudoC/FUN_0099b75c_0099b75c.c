// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0099b75c
// Entry Point: 0099b75c
// Size: 384 bytes
// Signature: undefined FUN_0099b75c(void)


void FUN_0099b75c(void **param_1,undefined8 *param_2)

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
    lVar3 = (long)__n >> 4;
    uVar1 = lVar3 * -0x71c71c71c71c71c7 + 1;
    if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * 0x1c71c71c71c71c72)) {
      uVar1 = lVar3 * 0x1c71c71c71c71c72;
    }
    if (0xe38e38e38e38e2 < (ulong)(lVar3 * -0x71c71c71c71c71c7)) {
      uVar1 = 0x1c71c71c71c71c7;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x90);
    }
    uVar9 = param_2[0x10];
    uVar6 = param_2[0xd];
    uVar5 = param_2[0xc];
    uVar8 = param_2[0xf];
    uVar7 = param_2[0xe];
    puVar4 = (undefined8 *)((long)pvVar2 + lVar3 * 0x10);
    puVar4[0x11] = param_2[0x11];
    puVar4[0x10] = uVar9;
    puVar4[0xd] = uVar6;
    puVar4[0xc] = uVar5;
    puVar4[0xf] = uVar8;
    puVar4[0xe] = uVar7;
    uVar5 = param_2[4];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    uVar9 = param_2[9];
    uVar8 = param_2[8];
    uVar7 = param_2[0xb];
    uVar6 = param_2[10];
    puVar4[5] = param_2[5];
    puVar4[4] = uVar5;
    puVar4[7] = uVar11;
    puVar4[6] = uVar10;
    puVar4[9] = uVar9;
    puVar4[8] = uVar8;
    puVar4[0xb] = uVar7;
    puVar4[10] = uVar6;
    uVar7 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    puVar4[1] = param_2[1];
    *puVar4 = uVar7;
    puVar4[3] = uVar6;
    puVar4[2] = uVar5;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = puVar4 + 0x12;
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x90);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar5 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar5;
    uVar7 = param_2[6];
    uVar6 = param_2[9];
    uVar5 = param_2[8];
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    uVar9 = param_2[5];
    uVar8 = param_2[4];
    puVar4[7] = param_2[7];
    puVar4[6] = uVar7;
    puVar4[9] = uVar6;
    puVar4[8] = uVar5;
    puVar4[3] = uVar11;
    puVar4[2] = uVar10;
    puVar4[5] = uVar9;
    puVar4[4] = uVar8;
    uVar7 = param_2[0xe];
    uVar6 = param_2[0x11];
    uVar5 = param_2[0x10];
    uVar11 = param_2[0xb];
    uVar10 = param_2[10];
    uVar9 = param_2[0xd];
    uVar8 = param_2[0xc];
    puVar4[0xf] = param_2[0xf];
    puVar4[0xe] = uVar7;
    puVar4[0x11] = uVar6;
    puVar4[0x10] = uVar5;
    puVar4[0xb] = uVar11;
    puVar4[10] = uVar10;
    puVar4[0xd] = uVar9;
    puVar4[0xc] = uVar8;
    param_1[1] = puVar4 + 0x12;
  }
  return;
}


