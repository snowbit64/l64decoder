// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<BaseTerrain::DetailLayer>
// Entry Point: 008ed14c
// Size: 704 bytes
// Signature: void __thiscall __push_back_slow_path<BaseTerrain::DetailLayer>(vector<BaseTerrain::DetailLayer,std::__ndk1::allocator<BaseTerrain::DetailLayer>> * this, DetailLayer * param_1)


/* void std::__ndk1::vector<BaseTerrain::DetailLayer,
   std::__ndk1::allocator<BaseTerrain::DetailLayer>
   >::__push_back_slow_path<BaseTerrain::DetailLayer>(BaseTerrain::DetailLayer&&) */

void __thiscall
std::__ndk1::vector<BaseTerrain::DetailLayer,std::__ndk1::allocator<BaseTerrain::DetailLayer>>::
__push_back_slow_path<BaseTerrain::DetailLayer>
          (vector<BaseTerrain::DetailLayer,std::__ndk1::allocator<BaseTerrain::DetailLayer>> *this,
          DetailLayer *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar4 = (*(long *)(this + 8) - *(long *)this) / 0xb0;
  uVar1 = lVar4 + 1;
  if (0x1745d1745d1745d < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar10 = lVar9 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0xba2e8ba2e8ba2d < (ulong)(lVar9 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x1745d1745d1745d;
  }
  if (0x1745d1745d1745d < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar6 = operator_new(uVar1 * 0xb0);
  uVar8 = *(undefined8 *)param_1;
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  puVar11 = (undefined8 *)((long)pvVar6 + lVar4 * 0xb0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar11[1] = *(undefined8 *)(param_1 + 8);
  *puVar11 = uVar8;
  puVar11[3] = uVar17;
  puVar11[2] = uVar13;
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar11[4] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  puVar11[6] = uVar17;
  puVar11[5] = uVar13;
  uVar18 = *(undefined8 *)(param_1 + 0x48);
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  puVar11[7] = uVar8;
  uVar13 = *(undefined8 *)(param_1 + 0xa0);
  puVar11[10] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  puVar11[9] = uVar18;
  puVar11[8] = uVar17;
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar16 = *(undefined4 *)(param_1 + 0xa8);
  puVar11[0xd] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  puVar11[0xc] = uVar17;
  puVar11[0xb] = uVar8;
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar11[0x10] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  puVar11[0xf] = uVar18;
  puVar11[0xe] = uVar17;
  uVar15 = *(undefined4 *)(param_1 + 0x88);
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  puVar11[0x12] = uVar7;
  puVar11[0x13] = 0;
  pvVar14 = (void *)((long)pvVar6 + uVar1 * 0xb0);
  puVar11[0x13] = uVar8;
  puVar11[0x14] = 0;
  puVar11[0x14] = uVar13;
  *(undefined4 *)(puVar11 + 0x15) = uVar16;
  *(undefined4 *)(puVar11 + 0x11) = uVar15;
  if (pvVar3 == pvVar2) {
    *(undefined8 **)this = puVar11;
    *(undefined8 **)(this + 8) = puVar11 + 0x16;
    *(void **)(this + 0x10) = pvVar14;
  }
  else {
    lVar9 = 0;
    do {
      lVar5 = lVar9 + lVar4 * 0xb0;
      lVar12 = lVar9 + -0xb0;
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0xb0);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0xa8) = *(undefined8 *)((long)pvVar3 + lVar9 + -0xa8);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0xb0) = uVar7;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x98);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0xa0);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x90) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x90);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x98) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0xa0) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x98) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x90) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x80);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x88);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0xa0) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x78) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x78);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x80) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x88) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x80) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x78) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x68);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x70);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x88) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x60) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x60);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x68) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x70) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x70) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x68) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x50);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x58);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x60) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x48) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x48);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x50) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x58) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x58) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x50) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x38);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x40);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x48) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x30) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x30);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x38) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x40) = uVar7;
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x18);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x40) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x30) = 0;
      uVar16 = *(undefined4 *)((long)pvVar3 + lVar9 + -0x28);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x20) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x20);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x18) = uVar7;
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x10);
      *(undefined4 *)((long)pvVar6 + lVar5 + -0x28) = uVar16;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x10) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x20) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x10) = 0;
      *(undefined4 *)((long)pvVar6 + lVar5 + -8) = *(undefined4 *)((long)pvVar3 + lVar9 + -8);
      lVar9 = lVar12;
    } while ((void *)((long)pvVar3 + lVar12) != pvVar2);
    *(void **)(this + 0x10) = pvVar14;
    pvVar2 = *(void **)this;
    pvVar14 = *(void **)(this + 8);
    *(long *)this = (long)pvVar6 + lVar12 + lVar4 * 0xb0;
    *(undefined8 **)(this + 8) = puVar11 + 0x16;
    while (pvVar14 != pvVar2) {
      pvVar14 = (void *)((long)pvVar14 + -0xb0);
      FUN_008eccf8(this + 0x10,pvVar14);
    }
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


