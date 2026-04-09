// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<BaseTerrain::OverlayLayer>
// Entry Point: 008ed564
// Size: 668 bytes
// Signature: void __thiscall __push_back_slow_path<BaseTerrain::OverlayLayer>(vector<BaseTerrain::OverlayLayer,std::__ndk1::allocator<BaseTerrain::OverlayLayer>> * this, OverlayLayer * param_1)


/* void std::__ndk1::vector<BaseTerrain::OverlayLayer,
   std::__ndk1::allocator<BaseTerrain::OverlayLayer>
   >::__push_back_slow_path<BaseTerrain::OverlayLayer>(BaseTerrain::OverlayLayer&&) */

void __thiscall
std::__ndk1::vector<BaseTerrain::OverlayLayer,std::__ndk1::allocator<BaseTerrain::OverlayLayer>>::
__push_back_slow_path<BaseTerrain::OverlayLayer>
          (vector<BaseTerrain::OverlayLayer,std::__ndk1::allocator<BaseTerrain::OverlayLayer>> *this
          ,OverlayLayer *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar5 = (*(long *)(this + 8) - *(long *)this) / 0x98;
  uVar1 = lVar5 + 1;
  if (0x1af286bca1af286 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar11 = lVar10 * 0xd79435e50d79436;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0xd79435e50d7942 < (ulong)(lVar10 * -0x79435e50d79435e5)) {
    uVar1 = 0x1af286bca1af286;
  }
  if (0x1af286bca1af286 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar7 = operator_new(uVar1 * 0x98);
  puVar12 = (undefined4 *)((long)pvVar7 + lVar5 * 0x98);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined4 *)param_1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  uVar19 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(puVar12 + 4) = uVar9;
  *(undefined8 *)(puVar12 + 2) = uVar8;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *puVar12 = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar14 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(puVar12 + 0xe) = uVar9;
  *(undefined8 *)(puVar12 + 0xc) = uVar8;
  uVar18 = *(undefined8 *)(param_1 + 0x50);
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(puVar12 + 6) = uVar15;
  *(undefined8 *)(puVar12 + 8) = uVar19;
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  puVar12[10] = uVar4;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(puVar12 + 0x14) = uVar18;
  *(undefined8 *)(puVar12 + 0x12) = uVar17;
  uVar15 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(puVar12 + 0x1a) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(puVar12 + 0x18) = uVar15;
  uVar18 = *(undefined8 *)(param_1 + 0x80);
  uVar17 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar15 = *(undefined8 *)(param_1 + 0x88);
  uVar19 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  *(undefined8 *)(puVar12 + 0x10) = uVar8;
  pvVar16 = (void *)((long)pvVar7 + uVar1 * 0x98);
  *(undefined8 *)(puVar12 + 0x16) = uVar9;
  *(undefined8 *)(puVar12 + 0x1c) = uVar14;
  *(undefined8 *)(puVar12 + 0x22) = uVar15;
  *(undefined8 *)(puVar12 + 0x24) = uVar19;
  *(undefined8 *)(puVar12 + 0x20) = uVar18;
  *(undefined8 *)(puVar12 + 0x1e) = uVar17;
  if (pvVar3 == pvVar2) {
    *(undefined4 **)this = puVar12;
    *(undefined4 **)(this + 8) = puVar12 + 0x26;
    *(void **)(this + 0x10) = pvVar16;
  }
  else {
    lVar10 = 0;
    do {
      lVar6 = lVar10 + lVar5 * 0x98;
      lVar13 = lVar10 + -0x98;
      *(undefined4 *)((long)pvVar7 + lVar6 + -0x98) = *(undefined4 *)((long)pvVar3 + lVar10 + -0x98)
      ;
      uVar19 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x88);
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x90);
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x80) = *(undefined8 *)((long)pvVar3 + lVar10 + -0x80)
      ;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x88) = uVar19;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x90) = uVar15;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x88) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x80) = 0;
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x78);
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x90) = 0;
      *(undefined4 *)((long)pvVar7 + lVar6 + -0x70) = *(undefined4 *)((long)pvVar3 + lVar10 + -0x70)
      ;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x78) = uVar15;
      uVar19 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x60);
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x68);
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x58) = *(undefined8 *)((long)pvVar3 + lVar10 + -0x58)
      ;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x60) = uVar19;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x68) = uVar15;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x60) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x58) = 0;
      uVar19 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x48);
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x50);
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x68) = 0;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x40) = *(undefined8 *)((long)pvVar3 + lVar10 + -0x40)
      ;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x48) = uVar19;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x50) = uVar15;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x50) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x48) = 0;
      uVar19 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x30);
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x38);
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x40) = 0;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x28) = *(undefined8 *)((long)pvVar3 + lVar10 + -0x28)
      ;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x30) = uVar19;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x38) = uVar15;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x30) = 0;
      uVar19 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x18);
      uVar15 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x20);
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x28) = 0;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x10) = *(undefined8 *)((long)pvVar3 + lVar10 + -0x10)
      ;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x18) = uVar19;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x20) = uVar15;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x20) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x10) = 0;
      *(undefined8 *)((long)pvVar7 + lVar6 + -8) = *(undefined8 *)((long)pvVar3 + lVar10 + -8);
      lVar10 = lVar13;
    } while ((void *)((long)pvVar3 + lVar13) != pvVar2);
    *(void **)(this + 0x10) = pvVar16;
    pvVar2 = *(void **)this;
    pvVar16 = *(void **)(this + 8);
    *(long *)this = (long)pvVar7 + lVar13 + lVar5 * 0x98;
    *(undefined4 **)(this + 8) = puVar12 + 0x26;
    while (pvVar16 != pvVar2) {
      pvVar16 = (void *)((long)pvVar16 + -0x98);
      FUN_008ecd9c(this + 0x10,pvVar16);
    }
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


