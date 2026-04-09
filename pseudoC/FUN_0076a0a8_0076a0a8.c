// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0076a0a8
// Entry Point: 0076a0a8
// Size: 376 bytes
// Signature: undefined FUN_0076a0a8(void)


void FUN_0076a0a8(void **param_1,undefined8 *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < param_1[2]) {
    uVar8 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    puVar4[1] = param_2[1];
    *puVar4 = uVar8;
    puVar4[3] = uVar7;
    puVar4[2] = uVar6;
    uVar8 = param_2[8];
    uVar7 = param_2[0xb];
    uVar6 = param_2[10];
    uVar12 = param_2[5];
    uVar11 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    puVar4[9] = param_2[9];
    puVar4[8] = uVar8;
    puVar4[0xb] = uVar7;
    puVar4[10] = uVar6;
    puVar4[5] = uVar12;
    puVar4[4] = uVar11;
    puVar4[7] = uVar10;
    puVar4[6] = uVar9;
    uVar8 = param_2[0x10];
    uVar7 = param_2[0x13];
    uVar6 = param_2[0x12];
    uVar12 = param_2[0xd];
    uVar11 = param_2[0xc];
    uVar10 = param_2[0xf];
    uVar9 = param_2[0xe];
    puVar4[0x11] = param_2[0x11];
    puVar4[0x10] = uVar8;
    puVar4[0x13] = uVar7;
    puVar4[0x12] = uVar6;
    puVar4[0xd] = uVar12;
    puVar4[0xc] = uVar11;
    puVar4[0xf] = uVar10;
    puVar4[0xe] = uVar9;
    param_1[1] = puVar4 + 0x14;
  }
  else {
    __src = *param_1;
    __n = (long)puVar4 - (long)__src;
    uVar1 = ((long)__n >> 5) * -0x3333333333333333 + 1;
    if (0x199999999999999 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (long)param_1[2] - (long)__src >> 5;
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0xcccccccccccccb < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar1 = 0x199999999999999;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x199999999999999 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0xa0);
    }
    uVar6 = param_2[0xc];
    uVar8 = param_2[0xf];
    uVar7 = param_2[0xe];
    puVar4 = (undefined8 *)((long)pvVar2 + ((long)__n >> 5) * 0x20);
    uVar11 = param_2[0x11];
    uVar10 = param_2[0x10];
    uVar13 = param_2[0x13];
    uVar12 = param_2[0x12];
    puVar4[0xd] = param_2[0xd];
    puVar4[0xc] = uVar6;
    puVar4[0xf] = uVar8;
    puVar4[0xe] = uVar7;
    uVar7 = param_2[5];
    uVar6 = param_2[4];
    uVar9 = param_2[7];
    uVar8 = param_2[6];
    puVar4[0x11] = uVar11;
    puVar4[0x10] = uVar10;
    puVar4[0x13] = uVar13;
    puVar4[0x12] = uVar12;
    uVar11 = param_2[9];
    uVar10 = param_2[8];
    uVar13 = param_2[0xb];
    uVar12 = param_2[10];
    puVar4[5] = uVar7;
    puVar4[4] = uVar6;
    puVar4[7] = uVar9;
    puVar4[6] = uVar8;
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar4[9] = uVar11;
    puVar4[8] = uVar10;
    puVar4[0xb] = uVar13;
    puVar4[10] = uVar12;
    puVar4[1] = uVar7;
    *puVar4 = uVar6;
    puVar4[3] = uVar9;
    puVar4[2] = uVar8;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = puVar4 + 0x14;
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0xa0);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


