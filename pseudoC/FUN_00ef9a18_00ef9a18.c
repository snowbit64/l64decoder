// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ef9a18
// Entry Point: 00ef9a18
// Size: 392 bytes
// Signature: undefined FUN_00ef9a18(void)


void FUN_00ef9a18(void **param_1,undefined8 *param_2)

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
  undefined8 uVar12;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 == (undefined8 *)param_1[2]) {
    __src = *param_1;
    __n = (long)puVar4 - (long)__src;
    lVar3 = (long)__n >> 2;
    uVar1 = lVar3 * 0xf83e0f83e0f83e1 + 1;
    if (0x1f07c1f07c1f07c < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * 0x1f07c1f07c1f07c2)) {
      uVar1 = lVar3 * 0x1f07c1f07c1f07c2;
    }
    if (0xf83e0f83e0f83d < (ulong)(lVar3 * 0xf83e0f83e0f83e1)) {
      uVar1 = 0x1f07c1f07c1f07c;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x1f07c1f07c1f07c < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0x84);
    }
    uVar6 = param_2[0xd];
    uVar5 = param_2[0xc];
    uVar8 = param_2[0xf];
    uVar7 = param_2[0xe];
    puVar4 = (undefined8 *)((long)pvVar2 + lVar3 * 4);
    *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar10 = param_2[5];
    uVar9 = param_2[4];
    uVar12 = param_2[7];
    uVar11 = param_2[6];
    puVar4[0xd] = uVar6;
    puVar4[0xc] = uVar5;
    puVar4[0xf] = uVar8;
    puVar4[0xe] = uVar7;
    uVar8 = param_2[9];
    uVar7 = param_2[8];
    uVar6 = param_2[0xb];
    uVar5 = param_2[10];
    puVar4[5] = uVar10;
    puVar4[4] = uVar9;
    puVar4[7] = uVar12;
    puVar4[6] = uVar11;
    puVar4[9] = uVar8;
    puVar4[8] = uVar7;
    puVar4[0xb] = uVar6;
    puVar4[10] = uVar5;
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    puVar4[1] = param_2[1];
    *puVar4 = uVar5;
    puVar4[3] = uVar7;
    puVar4[2] = uVar6;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = (void *)((long)puVar4 + 0x84);
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0x84);
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
    uVar8 = param_2[0xd];
    uVar7 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    uVar10 = param_2[0xb];
    uVar9 = param_2[10];
    *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    puVar4[0xd] = uVar8;
    puVar4[0xc] = uVar7;
    puVar4[0xf] = uVar6;
    puVar4[0xe] = uVar5;
    puVar4[0xb] = uVar10;
    puVar4[10] = uVar9;
    param_1[1] = (void *)((long)puVar4 + 0x84);
  }
  return;
}


