// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CustomShader::Parameter>
// Entry Point: 0094eb98
// Size: 504 bytes
// Signature: void __thiscall __push_back_slow_path<CustomShader::Parameter>(vector<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>> * this, Parameter * param_1)


/* void std::__ndk1::vector<CustomShader::Parameter, std::__ndk1::allocator<CustomShader::Parameter>
   >::__push_back_slow_path<CustomShader::Parameter>(CustomShader::Parameter&&) */

void __thiscall
std::__ndk1::vector<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>>::
__push_back_slow_path<CustomShader::Parameter>
          (vector<CustomShader::Parameter,std::__ndk1::allocator<CustomShader::Parameter>> *this,
          Parameter *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 7;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar7 = *(long *)(this + 0x10) - *(long *)this;
  uVar9 = (long)uVar7 >> 6;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x7fffffffffffff7f < uVar7) {
    uVar1 = 0x1ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x39 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 << 7);
  }
  puVar8 = (undefined8 *)((long)pvVar5 + lVar13 * 0x80);
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)param_1;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  puVar8[1] = uVar15;
  *puVar8 = uVar14;
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  puVar8[2] = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  puVar8[4] = uVar15;
  puVar8[3] = uVar14;
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  uVar19 = *(undefined8 *)(param_1 + 0x48);
  uVar18 = *(undefined8 *)(param_1 + 0x40);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar8[5] = uVar6;
  pvVar5 = (void *)((long)pvVar5 + uVar1 * 0x80);
  *(undefined4 *)(puVar8 + 0xc) = uVar4;
  puVar2 = puVar8 + 0x10;
  puVar8[0xf] = uVar11;
  puVar8[7] = uVar17;
  puVar8[6] = uVar16;
  puVar8[9] = uVar19;
  puVar8[8] = uVar18;
  puVar8[0xb] = uVar15;
  puVar8[10] = uVar14;
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  pvVar3 = *(void **)this;
  pvVar10 = *(void **)(this + 8);
  puVar8[0xe] = uVar11;
  puVar8[0xd] = uVar6;
  if (pvVar10 == pvVar3) {
    *(undefined8 **)this = puVar8;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = pvVar5;
  }
  else {
    do {
      uVar11 = *(undefined8 *)((long)pvVar10 + -0x78);
      uVar6 = *(undefined8 *)((long)pvVar10 + -0x80);
      puVar8[-0xe] = *(undefined8 *)((long)pvVar10 + -0x70);
      puVar8[-0xf] = uVar11;
      puVar8[-0x10] = uVar6;
      *(undefined8 *)((long)pvVar10 + -0x78) = 0;
      *(undefined8 *)((long)pvVar10 + -0x70) = 0;
      uVar11 = *(undefined8 *)((long)pvVar10 + -0x60);
      uVar6 = *(undefined8 *)((long)pvVar10 + -0x68);
      *(undefined8 *)((long)pvVar10 + -0x80) = 0;
      puVar8[-0xb] = *(undefined8 *)((long)pvVar10 + -0x58);
      puVar8[-0xc] = uVar11;
      puVar8[-0xd] = uVar6;
      uVar14 = *(undefined8 *)((long)pvVar10 + -0x40);
      uVar11 = *(undefined8 *)((long)pvVar10 + -0x28);
      uVar6 = *(undefined8 *)((long)pvVar10 + -0x30);
      *(undefined8 *)((long)pvVar10 + -0x60) = 0;
      *(undefined8 *)((long)pvVar10 + -0x58) = 0;
      *(undefined8 *)((long)pvVar10 + -0x68) = 0;
      uVar4 = *(undefined4 *)((long)pvVar10 + -0x20);
      uVar16 = *(undefined8 *)((long)pvVar10 + -0x48);
      uVar15 = *(undefined8 *)((long)pvVar10 + -0x50);
      puVar8[-7] = *(undefined8 *)((long)pvVar10 + -0x38);
      puVar8[-8] = uVar14;
      puVar8[-5] = uVar11;
      puVar8[-6] = uVar6;
      *(undefined4 *)(puVar8 + -4) = uVar4;
      puVar8[-9] = uVar16;
      puVar8[-10] = uVar15;
      uVar11 = *(undefined8 *)((long)pvVar10 + -0x10);
      uVar6 = *(undefined8 *)((long)pvVar10 + -0x18);
      puVar8[-1] = *(undefined8 *)((long)pvVar10 + -8);
      pvVar12 = (void *)((long)pvVar10 + -0x80);
      puVar8[-2] = uVar11;
      puVar8[-3] = uVar6;
      puVar8 = puVar8 + -0x10;
      *(undefined8 *)((long)pvVar10 + -0x18) = 0;
      *(undefined8 *)((long)pvVar10 + -0x10) = 0;
      *(undefined8 *)((long)pvVar10 + -8) = 0;
      pvVar10 = pvVar12;
    } while (pvVar12 != pvVar3);
    pvVar3 = *(void **)this;
    pvVar10 = *(void **)(this + 8);
    *(undefined8 **)this = puVar8;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = pvVar5;
    while (pvVar5 = pvVar10, pvVar5 != pvVar3) {
      if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + -8));
      }
      if ((*(byte *)((long)pvVar5 + -0x68) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + -0x58));
      }
      pvVar10 = (void *)((long)pvVar5 + -0x80);
      if ((*(byte *)((long)pvVar5 + -0x80) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + -0x70));
      }
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


