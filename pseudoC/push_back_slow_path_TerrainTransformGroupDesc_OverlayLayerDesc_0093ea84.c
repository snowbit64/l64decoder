// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<TerrainTransformGroupDesc::OverlayLayerDesc>
// Entry Point: 0093ea84
// Size: 676 bytes
// Signature: void __thiscall __push_back_slow_path<TerrainTransformGroupDesc::OverlayLayerDesc>(vector<TerrainTransformGroupDesc::OverlayLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::OverlayLayerDesc>> * this, OverlayLayerDesc * param_1)


/* void std::__ndk1::vector<TerrainTransformGroupDesc::OverlayLayerDesc,
   std::__ndk1::allocator<TerrainTransformGroupDesc::OverlayLayerDesc>
   >::__push_back_slow_path<TerrainTransformGroupDesc::OverlayLayerDesc>(TerrainTransformGroupDesc::OverlayLayerDesc&&)
    */

void __thiscall
std::__ndk1::
vector<TerrainTransformGroupDesc::OverlayLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::OverlayLayerDesc>>
::__push_back_slow_path<TerrainTransformGroupDesc::OverlayLayerDesc>
          (vector<TerrainTransformGroupDesc::OverlayLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::OverlayLayerDesc>>
           *this,OverlayLayerDesc *param_1)

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
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  void *pvVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar4 = (*(long *)(this + 8) - *(long *)this) / 0x90;
  uVar1 = lVar4 + 1;
  if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar11 = lVar9 * 0x1c71c71c71c71c72;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0xe38e38e38e38e2 < (ulong)(lVar9 * -0x71c71c71c71c71c7)) {
    uVar1 = 0x1c71c71c71c71c7;
  }
  if (0x1c71c71c71c71c7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar6 = operator_new(uVar1 * 0x90);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar16 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar12 = (undefined8 *)((long)pvVar6 + lVar4 * 0x90);
  uVar7 = *(undefined8 *)param_1;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  puVar12[3] = uVar17;
  puVar12[2] = uVar8;
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  *puVar12 = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(puVar12 + 1) = uVar16;
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  puVar12[6] = uVar18;
  puVar12[5] = uVar17;
  uVar18 = *(undefined8 *)(param_1 + 0x48);
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  puVar12[7] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar12[9] = uVar18;
  puVar12[8] = uVar17;
  uVar17 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar12[0xc] = *(undefined8 *)(param_1 + 0x60);
  puVar12[0xb] = uVar17;
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  puVar12[4] = uVar10;
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  puVar12[10] = uVar7;
  pvVar15 = (void *)((long)pvVar6 + uVar1 * 0x90);
  puVar12[0xf] = uVar18;
  puVar12[0xe] = uVar17;
  uVar16 = *(undefined4 *)(param_1 + 0x88);
  puVar12[0xd] = uVar8;
  puVar12[0x10] = uVar14;
  *(undefined4 *)(puVar12 + 0x11) = uVar16;
  if (pvVar3 == pvVar2) {
    *(undefined8 **)this = puVar12;
    *(undefined8 **)(this + 8) = puVar12 + 0x12;
    *(void **)(this + 0x10) = pvVar15;
  }
  else {
    lVar9 = 0;
    do {
      lVar5 = lVar9 + lVar4 * 0x90;
      lVar13 = lVar9 + -0x90;
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x90);
      *(undefined4 *)((long)pvVar6 + lVar5 + -0x88) = *(undefined4 *)((long)pvVar3 + lVar9 + -0x88);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x90) = uVar7;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x78);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x80);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x70) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x70);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x78) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x80) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x78) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x70) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x60);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x68);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x80) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x58) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x58);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x60) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x68) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x60) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x58) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x48);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x50);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x68) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x40) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x40);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x48) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x50) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x50) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x48) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x30);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x38);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x40) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x28) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x28);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x30) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x38) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x30) = 0;
      uVar8 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x18);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar9 + -0x20);
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x28) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x10) = *(undefined8 *)((long)pvVar3 + lVar9 + -0x10);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x18) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x20) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x20) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar9 + -0x10) = 0;
      *(undefined4 *)((long)pvVar6 + lVar5 + -8) = *(undefined4 *)((long)pvVar3 + lVar9 + -8);
      lVar9 = lVar13;
    } while ((void *)((long)pvVar3 + lVar13) != pvVar2);
    *(void **)(this + 0x10) = pvVar15;
    pvVar2 = *(void **)this;
    pvVar15 = *(void **)(this + 8);
    *(long *)this = (long)pvVar6 + lVar13 + lVar4 * 0x90;
    *(undefined8 **)(this + 8) = puVar12 + 0x12;
    while (pvVar15 != pvVar2) {
      pvVar15 = (void *)((long)pvVar15 + -0x90);
      FUN_0093d828(this + 0x10,pvVar15);
    }
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


