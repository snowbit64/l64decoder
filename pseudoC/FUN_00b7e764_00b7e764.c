// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b7e764
// Entry Point: 00b7e764
// Size: 368 bytes
// Signature: undefined FUN_00b7e764(void)


void FUN_00b7e764(void **param_1,undefined8 *param_2)

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
    uVar1 = lVar3 * 0x6db6db6db6db6db7 + 1;
    if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * -0x2492492492492492)) {
      uVar1 = lVar3 * -0x2492492492492492;
    }
    if (0x124924924924923 < (ulong)(lVar3 * 0x6db6db6db6db6db7)) {
      uVar1 = 0x249249249249249;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x70);
    }
    uVar9 = param_2[0xc];
    uVar6 = param_2[9];
    uVar5 = param_2[8];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    puVar4 = (undefined8 *)((long)pvVar2 + lVar3 * 0x10);
    puVar4[0xd] = param_2[0xd];
    puVar4[0xc] = uVar9;
    puVar4[9] = uVar6;
    puVar4[8] = uVar5;
    puVar4[0xb] = uVar8;
    puVar4[10] = uVar7;
    uVar7 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    puVar4[1] = param_2[1];
    *puVar4 = uVar7;
    puVar4[3] = uVar6;
    puVar4[2] = uVar5;
    uVar5 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    puVar4[5] = param_2[5];
    puVar4[4] = uVar5;
    puVar4[7] = uVar7;
    puVar4[6] = uVar6;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = puVar4 + 0xe;
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x70);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar7 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    uVar9 = param_2[1];
    uVar8 = *param_2;
    puVar4[3] = param_2[3];
    puVar4[2] = uVar7;
    puVar4[5] = uVar6;
    puVar4[4] = uVar5;
    puVar4[1] = uVar9;
    *puVar4 = uVar8;
    uVar7 = param_2[10];
    uVar6 = param_2[0xd];
    uVar5 = param_2[0xc];
    uVar11 = param_2[7];
    uVar10 = param_2[6];
    uVar9 = param_2[9];
    uVar8 = param_2[8];
    puVar4[0xb] = param_2[0xb];
    puVar4[10] = uVar7;
    puVar4[0xd] = uVar6;
    puVar4[0xc] = uVar5;
    puVar4[7] = uVar11;
    puVar4[6] = uVar10;
    puVar4[9] = uVar9;
    puVar4[8] = uVar8;
    param_1[1] = puVar4 + 0xe;
  }
  return;
}


