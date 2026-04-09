// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<BaseTerrain::InfoLayer>
// Entry Point: 008eda98
// Size: 532 bytes
// Signature: void __thiscall __push_back_slow_path<BaseTerrain::InfoLayer>(vector<BaseTerrain::InfoLayer,std::__ndk1::allocator<BaseTerrain::InfoLayer>> * this, InfoLayer * param_1)


/* void std::__ndk1::vector<BaseTerrain::InfoLayer, std::__ndk1::allocator<BaseTerrain::InfoLayer>
   >::__push_back_slow_path<BaseTerrain::InfoLayer>(BaseTerrain::InfoLayer&&) */

void __thiscall
std::__ndk1::vector<BaseTerrain::InfoLayer,std::__ndk1::allocator<BaseTerrain::InfoLayer>>::
__push_back_slow_path<BaseTerrain::InfoLayer>
          (vector<BaseTerrain::InfoLayer,std::__ndk1::allocator<BaseTerrain::InfoLayer>> *this,
          InfoLayer *param_1)

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
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar4 = (*(long *)(this + 8) - *(long *)this) / 0x58;
  uVar1 = lVar4 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x1745d1745d1745c < (ulong)(lVar9 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x2e8ba2e8ba2e8ba;
  }
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar6 = operator_new(uVar1 * 0x58);
  puVar11 = (undefined8 *)((long)pvVar6 + lVar4 * 0x58);
  uVar16 = *(undefined8 *)(param_1 + 8);
  uVar15 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar11[1] = uVar16;
  *puVar11 = uVar15;
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  puVar11[2] = uVar7;
  puVar11[5] = uVar8;
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar11[4] = uVar16;
  puVar11[3] = uVar15;
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  puVar11[8] = uVar7;
  puVar11[9] = 0;
  pvVar14 = (void *)((long)pvVar6 + uVar1 * 0x58);
  puVar11[9] = uVar8;
  puVar11[10] = 0;
  puVar11[10] = uVar13;
  puVar11[7] = uVar16;
  puVar11[6] = uVar15;
  if (pvVar3 == pvVar2) {
    *(undefined8 **)this = puVar11;
    *(undefined8 **)(this + 8) = puVar11 + 0xb;
    *(void **)(this + 0x10) = pvVar14;
  }
  else {
    lVar9 = 0;
    do {
      lVar5 = lVar9 + lVar4 * 0x58;
      lVar12 = lVar9 + -0x58;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x50);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x58);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x48) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x48);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x50) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x58) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x50) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x48) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x38);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x40);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x58) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x30) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x30);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x38) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x40) = uVar7;
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x28);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x30) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x40) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x20) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x20);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x28) = uVar7;
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x10);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x18) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x18);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x10) = uVar7;
      *(undefined8 *)((long)pvVar6 + lVar5 + -8) = *(undefined8 *)((long)pvVar3 + lVar9 + -8);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -8) = 0;
      lVar9 = lVar12;
    } while ((void *)((long)pvVar3 + lVar12) != pvVar2);
    *(void **)(this + 0x10) = pvVar14;
    pvVar2 = *(void **)this;
    pvVar14 = *(void **)(this + 8);
    *(long *)this = (long)pvVar6 + lVar12 + lVar4 * 0x58;
    *(undefined8 **)(this + 8) = puVar11 + 0xb;
    while (pvVar14 != pvVar2) {
      pvVar14 = (void *)((long)pvVar14 + -0x58);
      FUN_008ece30(this + 0x10,pvVar14);
    }
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


