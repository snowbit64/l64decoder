// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<BaseTerrain::CombinedLayer>
// Entry Point: 008ed928
// Size: 368 bytes
// Signature: void __thiscall __push_back_slow_path<BaseTerrain::CombinedLayer>(vector<BaseTerrain::CombinedLayer,std::__ndk1::allocator<BaseTerrain::CombinedLayer>> * this, CombinedLayer * param_1)


/* void std::__ndk1::vector<BaseTerrain::CombinedLayer,
   std::__ndk1::allocator<BaseTerrain::CombinedLayer>
   >::__push_back_slow_path<BaseTerrain::CombinedLayer>(BaseTerrain::CombinedLayer&&) */

void __thiscall
std::__ndk1::vector<BaseTerrain::CombinedLayer,std::__ndk1::allocator<BaseTerrain::CombinedLayer>>::
__push_back_slow_path<BaseTerrain::CombinedLayer>
          (vector<BaseTerrain::CombinedLayer,std::__ndk1::allocator<BaseTerrain::CombinedLayer>>
           *this,CombinedLayer *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 *puVar11;
  
  lVar13 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  uVar8 = *(long *)(this + 0x10) - *(long *)this;
  uVar9 = (long)uVar8 >> 5;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x7fffffffffffffbf < uVar8) {
    uVar1 = 0x3ffffffffffffff;
  }
  if (uVar1 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar5 = operator_new(uVar1 << 6);
  }
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar14 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar2 = (undefined4 *)((long)pvVar5 + lVar13 * 0x40);
  uVar4 = *(undefined4 *)param_1;
  puVar3 = *(undefined4 **)this;
  puVar10 = *(undefined4 **)(this + 8);
  pvVar5 = (void *)((long)pvVar5 + uVar1 * 0x40);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar2 + 4) = uVar15;
  *(undefined8 *)(puVar2 + 2) = uVar14;
  uVar15 = *(undefined8 *)(param_1 + 0x34);
  uVar14 = *(undefined8 *)(param_1 + 0x2c);
  *puVar2 = uVar4;
  *(undefined8 *)(puVar2 + 6) = uVar12;
  *(undefined8 *)(puVar2 + 10) = uVar17;
  *(undefined8 *)(puVar2 + 8) = uVar16;
  *(undefined8 *)(puVar2 + 0xd) = uVar15;
  *(undefined8 *)(puVar2 + 0xb) = uVar14;
  puVar6 = puVar2;
  if (puVar10 == puVar3) {
    *(undefined4 **)this = puVar2;
    *(undefined4 **)(this + 8) = puVar2 + 0x10;
    *(void **)(this + 0x10) = pvVar5;
  }
  else {
    do {
      puVar11 = puVar10 + -0x10;
      puVar7 = puVar6 + -0x10;
      *puVar7 = *puVar11;
      uVar14 = *(undefined8 *)(puVar10 + -0xc);
      uVar12 = *(undefined8 *)(puVar10 + -0xe);
      *(undefined8 *)(puVar6 + -10) = *(undefined8 *)(puVar10 + -10);
      *(undefined8 *)(puVar6 + -0xc) = uVar14;
      *(undefined8 *)(puVar6 + -0xe) = uVar12;
      uVar12 = *(undefined8 *)(puVar10 + -5);
      *(undefined8 *)(puVar10 + -0xc) = 0;
      *(undefined8 *)(puVar10 + -10) = 0;
      uVar15 = *(undefined8 *)(puVar10 + -6);
      uVar14 = *(undefined8 *)(puVar10 + -8);
      *(undefined8 *)(puVar10 + -0xe) = 0;
      *(undefined8 *)(puVar6 + -3) = *(undefined8 *)(puVar10 + -3);
      *(undefined8 *)(puVar6 + -5) = uVar12;
      *(undefined8 *)(puVar6 + -6) = uVar15;
      *(undefined8 *)(puVar6 + -8) = uVar14;
      puVar6 = puVar7;
      puVar10 = puVar11;
    } while (puVar11 != puVar3);
    puVar3 = *(undefined4 **)this;
    puVar10 = *(undefined4 **)(this + 8);
    *(undefined4 **)this = puVar7;
    *(undefined4 **)(this + 8) = puVar2 + 0x10;
    *(void **)(this + 0x10) = pvVar5;
    while (puVar2 = puVar10, puVar2 != puVar3) {
      puVar10 = puVar2 + -0x10;
      if ((*(byte *)(puVar2 + -0xe) & 1) != 0) {
        operator_delete(*(void **)(puVar2 + -10));
      }
    }
  }
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  operator_delete(puVar3);
  return;
}


