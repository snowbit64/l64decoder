// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<TerrainTransformGroupDesc::CombinedLayerDesc>
// Entry Point: 0093ed28
// Size: 412 bytes
// Signature: void __thiscall __push_back_slow_path<TerrainTransformGroupDesc::CombinedLayerDesc>(vector<TerrainTransformGroupDesc::CombinedLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::CombinedLayerDesc>> * this, CombinedLayerDesc * param_1)


/* void std::__ndk1::vector<TerrainTransformGroupDesc::CombinedLayerDesc,
   std::__ndk1::allocator<TerrainTransformGroupDesc::CombinedLayerDesc>
   >::__push_back_slow_path<TerrainTransformGroupDesc::CombinedLayerDesc>(TerrainTransformGroupDesc::CombinedLayerDesc&&)
    */

void __thiscall
std::__ndk1::
vector<TerrainTransformGroupDesc::CombinedLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::CombinedLayerDesc>>
::__push_back_slow_path<TerrainTransformGroupDesc::CombinedLayerDesc>
          (vector<TerrainTransformGroupDesc::CombinedLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::CombinedLayerDesc>>
           *this,CombinedLayerDesc *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar3 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar9 = lVar8 * 0x5555555555555556;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar2 = operator_new(uVar1 * 0x30);
  }
  uVar15 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar5 = (undefined8 *)((long)pvVar2 + lVar3 * 0x10);
  *(undefined8 *)param_1 = 0;
  pbVar13 = *(byte **)this;
  pbVar12 = *(byte **)(this + 8);
  pvVar2 = (void *)((long)pvVar2 + uVar1 * 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  puVar5[1] = uVar15;
  *puVar5 = uVar14;
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  puVar5[2] = uVar4;
  puVar5[5] = uVar10;
  puVar5[4] = uVar15;
  puVar5[3] = uVar14;
  puVar6 = puVar5;
  if (pbVar12 == pbVar13) {
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar5 + 6;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    do {
      uVar10 = *(undefined8 *)(pbVar12 + -0x28);
      uVar4 = *(undefined8 *)(pbVar12 + -0x30);
      pbVar11 = pbVar12 + -0x30;
      puVar6[-4] = *(undefined8 *)(pbVar12 + -0x20);
      puVar7 = puVar6 + -6;
      puVar6[-5] = uVar10;
      puVar6[-6] = uVar4;
      *(undefined8 *)(pbVar12 + -0x28) = 0;
      *(undefined8 *)(pbVar12 + -0x20) = 0;
      *(undefined8 *)(pbVar12 + -0x30) = 0;
      uVar10 = *(undefined8 *)(pbVar12 + -0x10);
      uVar4 = *(undefined8 *)(pbVar12 + -0x18);
      puVar6[-1] = *(undefined8 *)(pbVar12 + -8);
      puVar6[-2] = uVar10;
      puVar6[-3] = uVar4;
      puVar6 = puVar7;
      pbVar12 = pbVar11;
    } while (pbVar11 != pbVar13);
    pbVar13 = *(byte **)this;
    pbVar12 = *(byte **)(this + 8);
    *(undefined8 **)this = puVar7;
    *(undefined8 **)(this + 8) = puVar5 + 6;
    *(void **)(this + 0x10) = pvVar2;
    while (pbVar11 = pbVar12, pbVar11 != pbVar13) {
      pbVar12 = pbVar11 + -0x30;
      if ((*pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar11 + -0x20));
      }
    }
  }
  if (pbVar13 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar13);
  return;
}


