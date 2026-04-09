// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0095f494
// Entry Point: 0095f494
// Size: 448 bytes
// Signature: undefined FUN_0095f494(void)


void FUN_0095f494(void **param_1,undefined8 *param_2)

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
    lVar3 = (long)__n >> 3;
    uVar1 = lVar3 * -0x1084210842108421 + 1;
    if (0x108421084210842 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)(lVar3 * -0x2108421084210842)) {
      uVar1 = lVar3 * -0x2108421084210842;
    }
    if (0x84210842108420 < (ulong)(lVar3 * -0x1084210842108421)) {
      uVar1 = 0x108421084210842;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (0x108421084210842 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar1 * 0xf8);
    }
    uVar9 = param_2[0x1c];
    uVar6 = param_2[0x19];
    uVar5 = param_2[0x18];
    uVar8 = param_2[0x1b];
    uVar7 = param_2[0x1a];
    puVar4 = (undefined8 *)((long)pvVar2 + lVar3 * 8);
    puVar4[0x1d] = param_2[0x1d];
    puVar4[0x1c] = uVar9;
    puVar4[0x19] = uVar6;
    puVar4[0x18] = uVar5;
    puVar4[0x1b] = uVar8;
    puVar4[0x1a] = uVar7;
    uVar6 = param_2[0x11];
    uVar5 = param_2[0x10];
    uVar12 = param_2[0x13];
    uVar11 = param_2[0x12];
    puVar4[0x1e] = param_2[0x1e];
    uVar8 = param_2[0x15];
    uVar7 = param_2[0x14];
    uVar10 = param_2[0x17];
    uVar9 = param_2[0x16];
    puVar4[0x11] = uVar6;
    puVar4[0x10] = uVar5;
    puVar4[0x13] = uVar12;
    puVar4[0x12] = uVar11;
    uVar6 = param_2[9];
    uVar5 = param_2[8];
    uVar12 = param_2[0xb];
    uVar11 = param_2[10];
    puVar4[0x15] = uVar8;
    puVar4[0x14] = uVar7;
    puVar4[0x17] = uVar10;
    puVar4[0x16] = uVar9;
    uVar8 = param_2[0xd];
    uVar7 = param_2[0xc];
    uVar10 = param_2[0xf];
    uVar9 = param_2[0xe];
    puVar4[9] = uVar6;
    puVar4[8] = uVar5;
    puVar4[0xb] = uVar12;
    puVar4[10] = uVar11;
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    puVar4[0xd] = uVar8;
    puVar4[0xc] = uVar7;
    puVar4[0xf] = uVar10;
    puVar4[0xe] = uVar9;
    puVar4[1] = uVar6;
    *puVar4 = uVar5;
    puVar4[3] = uVar12;
    puVar4[2] = uVar11;
    uVar7 = param_2[4];
    uVar6 = param_2[7];
    uVar5 = param_2[6];
    puVar4[5] = param_2[5];
    puVar4[4] = uVar7;
    puVar4[7] = uVar6;
    puVar4[6] = uVar5;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *param_1;
    }
    *param_1 = (void *)((long)puVar4 - __n);
    param_1[1] = puVar4 + 0x1f;
    param_1[2] = (void *)((long)pvVar2 + uVar1 * 0xf8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    uVar7 = param_2[4];
    uVar6 = param_2[7];
    uVar5 = param_2[6];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puVar4[5] = param_2[5];
    puVar4[4] = uVar7;
    puVar4[7] = uVar6;
    puVar4[6] = uVar5;
    puVar4[1] = uVar11;
    *puVar4 = uVar10;
    puVar4[3] = uVar9;
    puVar4[2] = uVar8;
    uVar7 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    uVar11 = param_2[9];
    uVar10 = param_2[8];
    uVar9 = param_2[0xb];
    uVar8 = param_2[10];
    puVar4[0xd] = param_2[0xd];
    puVar4[0xc] = uVar7;
    puVar4[0xf] = uVar6;
    puVar4[0xe] = uVar5;
    puVar4[9] = uVar11;
    puVar4[8] = uVar10;
    puVar4[0xb] = uVar9;
    puVar4[10] = uVar8;
    uVar7 = param_2[0x14];
    uVar6 = param_2[0x17];
    uVar5 = param_2[0x16];
    uVar11 = param_2[0x11];
    uVar10 = param_2[0x10];
    uVar9 = param_2[0x13];
    uVar8 = param_2[0x12];
    puVar4[0x15] = param_2[0x15];
    puVar4[0x14] = uVar7;
    puVar4[0x17] = uVar6;
    puVar4[0x16] = uVar5;
    puVar4[0x11] = uVar11;
    puVar4[0x10] = uVar10;
    puVar4[0x13] = uVar9;
    puVar4[0x12] = uVar8;
    uVar8 = param_2[0x1b];
    uVar7 = param_2[0x1a];
    uVar6 = param_2[0x1d];
    uVar5 = param_2[0x1c];
    uVar10 = param_2[0x19];
    uVar9 = param_2[0x18];
    puVar4[0x1e] = param_2[0x1e];
    puVar4[0x1b] = uVar8;
    puVar4[0x1a] = uVar7;
    puVar4[0x1d] = uVar6;
    puVar4[0x1c] = uVar5;
    puVar4[0x19] = uVar10;
    puVar4[0x18] = uVar9;
    param_1[1] = puVar4 + 0x1f;
  }
  return;
}


