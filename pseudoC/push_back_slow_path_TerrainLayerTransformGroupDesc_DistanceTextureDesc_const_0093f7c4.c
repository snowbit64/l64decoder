// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<TerrainLayerTransformGroupDesc::DistanceTextureDesc_const&>
// Entry Point: 0093f7c4
// Size: 540 bytes
// Signature: void __thiscall __push_back_slow_path<TerrainLayerTransformGroupDesc::DistanceTextureDesc_const&>(vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>> * this, DistanceTextureDesc * param_1)


/* void std::__ndk1::vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,
   std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>
   >::__push_back_slow_path<TerrainLayerTransformGroupDesc::DistanceTextureDesc
   const&>(TerrainLayerTransformGroupDesc::DistanceTextureDesc const&) */

void __thiscall
std::__ndk1::
vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
::__push_back_slow_path<TerrainLayerTransformGroupDesc::DistanceTextureDesc_const&>
          (vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
           *this,DistanceTextureDesc *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  void *pvVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar8 * -0x2492492492492492;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x492492492492492;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x492492492492492 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x38);
  }
  pbVar12 = (basic_string *)((long)pvVar4 + lVar6 * 8);
                    /* try { // try from 0093f8a4 to 0093f8af has its CatchHandler @ 0093fa00 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar12);
                    /* try { // try from 0093f8c0 to 0093f8c3 has its CatchHandler @ 0093f9e0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)((long)pvVar4 + lVar6 * 8 + 0x18));
  pbVar2 = pbVar12 + 0xe;
  pvVar11 = *(void **)this;
  pvVar7 = *(void **)(this + 8);
  *(undefined4 *)((long)pvVar4 + lVar6 * 8 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  pbVar13 = pbVar12;
  pvVar9 = pvVar11;
  if (pvVar7 != pvVar11) {
    do {
      uVar15 = *(undefined8 *)((long)pvVar7 + -0x30);
      uVar14 = *(undefined8 *)((long)pvVar7 + -0x38);
      *(undefined8 *)(pbVar13 + -10) = *(undefined8 *)((long)pvVar7 + -0x28);
      *(undefined8 *)(pbVar13 + -0xc) = uVar15;
      *(undefined8 *)(pbVar13 + -0xe) = uVar14;
      *(undefined8 *)((long)pvVar7 + -0x30) = 0;
      *(undefined8 *)((long)pvVar7 + -0x28) = 0;
      uVar15 = *(undefined8 *)((long)pvVar7 + -0x18);
      uVar14 = *(undefined8 *)((long)pvVar7 + -0x20);
      *(undefined8 *)((long)pvVar7 + -0x38) = 0;
      *(undefined8 *)(pbVar13 + -4) = *(undefined8 *)((long)pvVar7 + -0x10);
      pvVar9 = (void *)((long)pvVar7 + -0x38);
      *(undefined8 *)(pbVar13 + -6) = uVar15;
      *(undefined8 *)(pbVar13 + -8) = uVar14;
      pbVar12 = pbVar13 + -0xe;
      *(undefined8 *)((long)pvVar7 + -0x18) = 0;
      *(undefined8 *)((long)pvVar7 + -0x10) = 0;
      *(undefined8 *)((long)pvVar7 + -0x20) = 0;
      pbVar13[-2] = *(basic_string *)((long)pvVar7 + -8);
      pvVar7 = pvVar9;
      pbVar13 = pbVar12;
    } while (pvVar9 != pvVar11);
    pvVar11 = *(void **)this;
    pvVar9 = *(void **)(this + 8);
  }
  *(basic_string **)this = pbVar12;
  *(basic_string **)(this + 8) = pbVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x38);
  while (pvVar4 = pvVar9, pvVar4 != pvVar11) {
    if ((*(byte *)((long)pvVar4 + -0x20) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + -0x10));
    }
    pvVar9 = (void *)((long)pvVar4 + -0x38);
    if ((*(byte *)((long)pvVar4 + -0x38) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar4 + -0x28));
    }
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


