// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CustomShader::LodLevel>
// Entry Point: 0094f2dc
// Size: 492 bytes
// Signature: void __thiscall __push_back_slow_path<CustomShader::LodLevel>(vector<CustomShader::LodLevel,std::__ndk1::allocator<CustomShader::LodLevel>> * this, LodLevel * param_1)


/* void std::__ndk1::vector<CustomShader::LodLevel, std::__ndk1::allocator<CustomShader::LodLevel>
   >::__push_back_slow_path<CustomShader::LodLevel>(CustomShader::LodLevel&&) */

void __thiscall
std::__ndk1::vector<CustomShader::LodLevel,std::__ndk1::allocator<CustomShader::LodLevel>>::
__push_back_slow_path<CustomShader::LodLevel>
          (vector<CustomShader::LodLevel,std::__ndk1::allocator<CustomShader::LodLevel>> *this,
          LodLevel *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * 0x1c71c71c71c71c72;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x1c71c71c71c71c6 < (ulong)(lVar9 * -0x71c71c71c71c71c7)) {
    uVar1 = 0x38e38e38e38e38e;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 * 0x48);
  }
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar11 = (undefined8 *)((long)pvVar5 + lVar6 * 8);
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  uVar16 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar19 = *(undefined8 *)(param_1 + 8);
  uVar18 = *(undefined8 *)param_1;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  pvVar5 = (void *)((long)pvVar5 + uVar1 * 0x48);
  pvVar3 = *(void **)this;
  pvVar8 = *(void **)(this + 8);
  puVar11[5] = uVar7;
  puVar2 = puVar11 + 9;
  puVar11[1] = uVar19;
  *puVar11 = uVar18;
  puVar11[4] = uVar15;
  puVar11[3] = uVar14;
  *(undefined4 *)(puVar11 + 2) = uVar4;
  puVar11[8] = uVar12;
  puVar11[7] = uVar17;
  puVar11[6] = uVar16;
  if (pvVar8 == pvVar3) {
    *(undefined8 **)this = puVar11;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = pvVar5;
  }
  else {
    do {
      uVar12 = *(undefined8 *)((long)pvVar8 + -0x40);
      uVar7 = *(undefined8 *)((long)pvVar8 + -0x48);
      *(undefined4 *)(puVar11 + -7) = *(undefined4 *)((long)pvVar8 + -0x38);
      puVar11[-8] = uVar12;
      puVar11[-9] = uVar7;
      uVar12 = *(undefined8 *)((long)pvVar8 + -0x28);
      uVar7 = *(undefined8 *)((long)pvVar8 + -0x30);
      puVar11[-4] = *(undefined8 *)((long)pvVar8 + -0x20);
      puVar11[-5] = uVar12;
      puVar11[-6] = uVar7;
      *(undefined8 *)((long)pvVar8 + -0x28) = 0;
      *(undefined8 *)((long)pvVar8 + -0x20) = 0;
      uVar12 = *(undefined8 *)((long)pvVar8 + -0x10);
      uVar7 = *(undefined8 *)((long)pvVar8 + -0x18);
      *(undefined8 *)((long)pvVar8 + -0x30) = 0;
      puVar11[-1] = *(undefined8 *)((long)pvVar8 + -8);
      pvVar13 = (void *)((long)pvVar8 + -0x48);
      puVar11[-2] = uVar12;
      puVar11[-3] = uVar7;
      puVar11 = puVar11 + -9;
      *(undefined8 *)((long)pvVar8 + -0x10) = 0;
      *(undefined8 *)((long)pvVar8 + -8) = 0;
      *(undefined8 *)((long)pvVar8 + -0x18) = 0;
      pvVar8 = pvVar13;
    } while (pvVar13 != pvVar3);
    pvVar3 = *(void **)this;
    pvVar8 = *(void **)(this + 8);
    *(undefined8 **)this = puVar11;
    *(undefined8 **)(this + 8) = puVar2;
    *(void **)(this + 0x10) = pvVar5;
    while (pvVar5 = pvVar8, pvVar5 != pvVar3) {
      if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + -8));
      }
      pvVar8 = (void *)((long)pvVar5 + -0x48);
      if ((*(byte *)((long)pvVar5 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + -0x20));
      }
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


