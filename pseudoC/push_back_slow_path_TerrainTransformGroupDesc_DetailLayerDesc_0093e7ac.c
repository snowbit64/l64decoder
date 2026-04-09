// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<TerrainTransformGroupDesc::DetailLayerDesc>
// Entry Point: 0093e7ac
// Size: 728 bytes
// Signature: void __thiscall __push_back_slow_path<TerrainTransformGroupDesc::DetailLayerDesc>(vector<TerrainTransformGroupDesc::DetailLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::DetailLayerDesc>> * this, DetailLayerDesc * param_1)


/* void std::__ndk1::vector<TerrainTransformGroupDesc::DetailLayerDesc,
   std::__ndk1::allocator<TerrainTransformGroupDesc::DetailLayerDesc>
   >::__push_back_slow_path<TerrainTransformGroupDesc::DetailLayerDesc>(TerrainTransformGroupDesc::DetailLayerDesc&&)
    */

void __thiscall
std::__ndk1::
vector<TerrainTransformGroupDesc::DetailLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::DetailLayerDesc>>
::__push_back_slow_path<TerrainTransformGroupDesc::DetailLayerDesc>
          (vector<TerrainTransformGroupDesc::DetailLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::DetailLayerDesc>>
           *this,DetailLayerDesc *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar4 = (*(long *)(this + 8) - *(long *)this) / 0xa8;
  uVar1 = lVar4 + 1;
  if (0x186186186186186 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar8 * -0x6186186186186186;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0xc30c30c30c30c2 < (ulong)(lVar8 * -0x30c30c30c30c30c3)) {
    uVar1 = 0x186186186186186;
  }
  if (0x186186186186186 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar6 = operator_new(uVar1 * 0xa8);
  puVar11 = (undefined8 *)((long)pvVar6 + lVar4 * 0xa8);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar15 = *(undefined4 *)(param_1 + 8);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *puVar11 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  puVar11[3] = uVar13;
  puVar11[2] = uVar16;
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar11 + 1) = uVar15;
  uVar13 = *(undefined8 *)(param_1 + 0xa0);
  puVar11[7] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  puVar11[6] = uVar17;
  puVar11[5] = uVar16;
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar11[10] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  puVar11[9] = uVar17;
  puVar11[8] = uVar16;
  uVar17 = *(undefined8 *)(param_1 + 0x60);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar11[0xd] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  puVar11[0xc] = uVar17;
  puVar11[0xb] = uVar16;
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar11[0x10] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar16 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  puVar11[4] = uVar9;
  puVar11[0xf] = uVar18;
  puVar11[0xe] = uVar17;
  uVar15 = *(undefined4 *)(param_1 + 0x88);
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  puVar11[0x12] = uVar7;
  puVar11[0x13] = 0;
  pvVar14 = (void *)((long)pvVar6 + uVar1 * 0xa8);
  puVar11[0x13] = uVar16;
  puVar11[0x14] = 0;
  puVar11[0x14] = uVar13;
  *(undefined4 *)(puVar11 + 0x11) = uVar15;
  if (pvVar3 == pvVar2) {
    *(undefined8 **)this = puVar11;
    *(undefined8 **)(this + 8) = puVar11 + 0x15;
    *(void **)(this + 0x10) = pvVar14;
  }
  else {
    lVar8 = 0;
    do {
      lVar5 = lVar8 + lVar4 * 0xa8;
      lVar12 = lVar8 + -0xa8;
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar8 + -0xa8);
      *(undefined4 *)((long)pvVar6 + lVar5 + -0xa0) = *(undefined4 *)((long)pvVar3 + lVar8 + -0xa0);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0xa8) = uVar7;
      uVar16 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x90);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x98);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x88) = *(undefined8 *)((long)pvVar3 + lVar8 + -0x88);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x90) = uVar16;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x98) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x90) = 0;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x88) = 0;
      uVar16 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x78);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x80);
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x98) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x70) = *(undefined8 *)((long)pvVar3 + lVar8 + -0x70);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x78) = uVar16;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x80) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x78) = 0;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x70) = 0;
      uVar16 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x60);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x68);
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x80) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x58) = *(undefined8 *)((long)pvVar3 + lVar8 + -0x58);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x60) = uVar16;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x68) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x68) = 0;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x60) = 0;
      uVar16 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x48);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x50);
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x58) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x40) = *(undefined8 *)((long)pvVar3 + lVar8 + -0x40);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x48) = uVar16;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x50) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x50) = 0;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x48) = 0;
      uVar16 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x30);
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x38);
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x40) = 0;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x28) = *(undefined8 *)((long)pvVar3 + lVar8 + -0x28);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x30) = uVar16;
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x38) = uVar7;
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar8 + -0x10);
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x38) = 0;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x30) = 0;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x28) = 0;
      uVar15 = *(undefined4 *)((long)pvVar3 + lVar8 + -0x20);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x18) = *(undefined8 *)((long)pvVar3 + lVar8 + -0x18);
      *(undefined8 *)((long)pvVar6 + lVar5 + -0x10) = uVar7;
      uVar7 = *(undefined8 *)((long)pvVar3 + lVar8 + -8);
      *(undefined4 *)((long)pvVar6 + lVar5 + -0x20) = uVar15;
      *(undefined8 *)((long)pvVar6 + lVar5 + -8) = uVar7;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar8 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + lVar8 + -8) = 0;
      lVar8 = lVar12;
    } while ((void *)((long)pvVar3 + lVar12) != pvVar2);
    *(void **)(this + 0x10) = pvVar14;
    pvVar2 = *(void **)this;
    pvVar14 = *(void **)(this + 8);
    *(long *)this = (long)pvVar6 + lVar12 + lVar4 * 0xa8;
    *(undefined8 **)(this + 8) = puVar11 + 0x15;
    while (pvVar14 != pvVar2) {
      pvVar14 = (void *)((long)pvVar14 + -0xa8);
      FUN_0093d8bc(this + 0x10,pvVar14);
    }
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


