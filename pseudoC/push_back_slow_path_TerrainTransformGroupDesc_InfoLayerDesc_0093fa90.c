// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<TerrainTransformGroupDesc::InfoLayerDesc>
// Entry Point: 0093fa90
// Size: 540 bytes
// Signature: void __thiscall __push_back_slow_path<TerrainTransformGroupDesc::InfoLayerDesc>(vector<TerrainTransformGroupDesc::InfoLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::InfoLayerDesc>> * this, InfoLayerDesc * param_1)


/* void std::__ndk1::vector<TerrainTransformGroupDesc::InfoLayerDesc,
   std::__ndk1::allocator<TerrainTransformGroupDesc::InfoLayerDesc>
   >::__push_back_slow_path<TerrainTransformGroupDesc::InfoLayerDesc>(TerrainTransformGroupDesc::InfoLayerDesc&&)
    */

void __thiscall
std::__ndk1::
vector<TerrainTransformGroupDesc::InfoLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::InfoLayerDesc>>
::__push_back_slow_path<TerrainTransformGroupDesc::InfoLayerDesc>
          (vector<TerrainTransformGroupDesc::InfoLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::InfoLayerDesc>>
           *this,InfoLayerDesc *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  InfoLayerDesc IVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  void *pvVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar6 = (*(long *)(this + 8) - *(long *)this) / 0x50;
  uVar1 = lVar6 + 1;
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar11 = lVar10 * -0x6666666666666666;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0x199999999999998 < (ulong)(lVar10 * -0x3333333333333333)) {
    uVar1 = 0x333333333333333;
  }
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar8 = operator_new(uVar1 * 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar17 = *(undefined8 *)(param_1 + 8);
  uVar16 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar12 = (undefined8 *)((long)pvVar8 + lVar6 * 0x50);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar12[2] = *(undefined8 *)(param_1 + 0x10);
  IVar5 = param_1[0x34];
  puVar12[5] = uVar9;
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  puVar12[1] = uVar17;
  *puVar12 = uVar16;
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  uVar17 = *(undefined8 *)(param_1 + 0x18);
  *(InfoLayerDesc *)((long)puVar12 + 0x34) = IVar5;
  *(undefined4 *)(puVar12 + 6) = uVar4;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  puVar12[7] = uVar9;
  puVar12[8] = 0;
  pvVar15 = (void *)((long)pvVar8 + uVar1 * 0x50);
  puVar12[8] = uVar16;
  puVar12[9] = 0;
  puVar12[9] = uVar14;
  puVar12[4] = uVar18;
  puVar12[3] = uVar17;
  if (pvVar3 == pvVar2) {
    *(undefined8 **)this = puVar12;
    *(undefined8 **)(this + 8) = puVar12 + 10;
    *(void **)(this + 0x10) = pvVar15;
  }
  else {
    lVar10 = 0;
    do {
      lVar7 = lVar10 + lVar6 * 0x50;
      lVar13 = lVar10 + -0x50;
      uVar16 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x48);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x50);
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x40) = *(undefined8 *)((long)pvVar3 + lVar10 + -0x40)
      ;
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x48) = uVar16;
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x50) = uVar9;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x48) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x40) = 0;
      uVar16 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x30);
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x38);
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x50) = 0;
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x28) = *(undefined8 *)((long)pvVar3 + lVar10 + -0x28)
      ;
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x30) = uVar16;
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x38) = uVar9;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x30) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x28) = 0;
      uVar4 = *(undefined4 *)((long)pvVar3 + lVar10 + -0x20);
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x38) = 0;
      *(undefined *)((long)pvVar8 + lVar7 + -0x1c) = *(undefined *)((long)pvVar3 + lVar10 + -0x1c);
      *(undefined4 *)((long)pvVar8 + lVar7 + -0x20) = uVar4;
      uVar9 = *(undefined8 *)((long)pvVar3 + lVar10 + -0x10);
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x18) = *(undefined8 *)((long)pvVar3 + lVar10 + -0x18)
      ;
      *(undefined8 *)((long)pvVar8 + lVar7 + -0x10) = uVar9;
      *(undefined8 *)((long)pvVar8 + lVar7 + -8) = *(undefined8 *)((long)pvVar3 + lVar10 + -8);
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x18) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -0x10) = 0;
      *(undefined8 *)((long)pvVar3 + lVar10 + -8) = 0;
      lVar10 = lVar13;
    } while ((void *)((long)pvVar3 + lVar13) != pvVar2);
    *(void **)(this + 0x10) = pvVar15;
    pvVar2 = *(void **)this;
    pvVar15 = *(void **)(this + 8);
    *(long *)this = (long)pvVar8 + lVar13 + lVar6 * 0x50;
    *(undefined8 **)(this + 8) = puVar12 + 10;
    while (pvVar15 != pvVar2) {
      pvVar15 = (void *)((long)pvVar15 + -0x50);
      FUN_0093d76c(this + 0x10,pvVar15);
    }
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


