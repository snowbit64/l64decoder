// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CustomShader::Texture>
// Entry Point: 0094e950
// Size: 584 bytes
// Signature: void __thiscall __push_back_slow_path<CustomShader::Texture>(vector<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>> * this, Texture * param_1)


/* void std::__ndk1::vector<CustomShader::Texture, std::__ndk1::allocator<CustomShader::Texture>
   >::__push_back_slow_path<CustomShader::Texture>(CustomShader::Texture&&) */

void __thiscall
std::__ndk1::vector<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>>::
__push_back_slow_path<CustomShader::Texture>
          (vector<CustomShader::Texture,std::__ndk1::allocator<CustomShader::Texture>> *this,
          Texture *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar7 = (*(long *)(this + 8) - *(long *)this) / 0x58;
  uVar1 = lVar7 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar12 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar13 = lVar12 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar13) {
    uVar1 = uVar13;
  }
  if (0x1745d1745d1745c < (ulong)(lVar12 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x2e8ba2e8ba2e8ba;
  }
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar9 = operator_new(uVar1 * 0x58);
  puVar14 = (undefined8 *)((long)pvVar9 + lVar7 * 0x58);
  uVar18 = *(undefined8 *)(param_1 + 8);
  uVar17 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar14[1] = uVar18;
  *puVar14 = uVar17;
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar6 = *(undefined2 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x50);
  puVar14[4] = uVar18;
  puVar14[3] = uVar17;
  uVar18 = *(undefined8 *)(param_1 + 0x40);
  uVar17 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  pvVar3 = *(void **)this;
  pvVar4 = *(void **)(this + 8);
  puVar14[2] = uVar10;
  pvVar2 = (void *)((long)pvVar9 + uVar1 * 0x58);
  puVar14[5] = uVar11;
  *(undefined2 *)(puVar14 + 6) = uVar6;
  puVar14[9] = uVar16;
  *(undefined4 *)(puVar14 + 10) = uVar5;
  puVar14[8] = uVar18;
  puVar14[7] = uVar17;
  if (pvVar4 == pvVar3) {
    *(undefined8 **)this = puVar14;
    *(undefined8 **)(this + 8) = puVar14 + 0xb;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    lVar12 = 0;
    do {
      lVar8 = lVar12 + lVar7 * 0x58;
      lVar15 = lVar12 + -0x58;
      uVar11 = *(undefined8 *)((long)pvVar4 + lVar12 + -0x50);
      uVar10 = *(undefined8 *)((long)pvVar4 + lVar12 + -0x58);
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x48) = *(undefined8 *)((long)pvVar4 + lVar12 + -0x48)
      ;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x50) = uVar11;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x58) = uVar10;
      *(undefined8 *)((long)pvVar4 + lVar12 + -0x50) = 0;
      *(undefined8 *)((long)pvVar4 + lVar12 + -0x48) = 0;
      uVar11 = *(undefined8 *)((long)pvVar4 + lVar12 + -0x38);
      uVar10 = *(undefined8 *)((long)pvVar4 + lVar12 + -0x40);
      *(undefined8 *)((long)pvVar4 + lVar12 + -0x58) = 0;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x30) = *(undefined8 *)((long)pvVar4 + lVar12 + -0x30)
      ;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x38) = uVar11;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x40) = uVar10;
      *(undefined8 *)((long)pvVar4 + lVar12 + -0x38) = 0;
      *(undefined8 *)((long)pvVar4 + lVar12 + -0x30) = 0;
      *(undefined8 *)((long)pvVar4 + lVar12 + -0x40) = 0;
      *(undefined2 *)((long)pvVar9 + lVar8 + -0x28) = *(undefined2 *)((long)pvVar4 + lVar12 + -0x28)
      ;
      uVar11 = *(undefined8 *)((long)pvVar4 + lVar12 + -0x18);
      uVar10 = *(undefined8 *)((long)pvVar4 + lVar12 + -0x20);
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x10) = *(undefined8 *)((long)pvVar4 + lVar12 + -0x10)
      ;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x18) = uVar11;
      *(undefined8 *)((long)pvVar9 + lVar8 + -0x20) = uVar10;
      *(undefined8 *)((long)pvVar4 + lVar12 + -0x18) = 0;
      *(undefined8 *)((long)pvVar4 + lVar12 + -0x10) = 0;
      *(undefined8 *)((long)pvVar4 + lVar12 + -0x20) = 0;
      *(undefined4 *)((long)pvVar9 + lVar8 + -8) = *(undefined4 *)((long)pvVar4 + lVar12 + -8);
      lVar12 = lVar15;
    } while ((void *)((long)pvVar4 + lVar15) != pvVar3);
    *(void **)(this + 0x10) = pvVar2;
    pvVar3 = *(void **)this;
    pvVar2 = *(void **)(this + 8);
    *(long *)this = (long)pvVar9 + lVar15 + lVar7 * 0x58;
    *(undefined8 **)(this + 8) = puVar14 + 0xb;
    while (pvVar4 = pvVar2, pvVar4 != pvVar3) {
      if ((*(byte *)((long)pvVar4 + -0x20) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x10));
      }
      if ((*(byte *)((long)pvVar4 + -0x40) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x30));
      }
      pvVar2 = (void *)((long)pvVar4 + -0x58);
      if ((*(byte *)((long)pvVar4 + -0x58) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x48));
      }
    }
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


