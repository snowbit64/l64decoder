// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>>
// Entry Point: 0093f124
// Size: 700 bytes
// Signature: void __thiscall __push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>>(vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>>> * this, pair * param_1)


/* void std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, TerrainLayerTransformGroupDesc>,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, TerrainLayerTransformGroupDesc> >
   >::__push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, TerrainLayerTransformGroupDesc>
   >(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, TerrainLayerTransformGroupDesc>&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>>>
::
__push_back_slow_path<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>>
          (vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,TerrainLayerTransformGroupDesc>>>
           *this,pair *param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar3 = (*(long *)(this + 8) - *(long *)this) / 0x2d8;
  uVar1 = lVar3 + 1;
  if (0x5a05a05a05a05a < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar9 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar10 = lVar9 * 0x5fa5fa5fa5fa5fa6;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  if (0x2d02d02d02d02c < (ulong)(lVar9 * 0x2fd2fd2fd2fd2fd3)) {
    uVar1 = 0x5a05a05a05a05a;
  }
  if (0x5a05a05a05a05a < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  }
  pvVar6 = operator_new(uVar1 * 0x2d8);
  puVar13 = (undefined8 *)((long)pvVar6 + lVar3 * 0x2d8);
  uVar8 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 4);
  pvVar2 = (void *)((long)pvVar6 + uVar1 * 0x2d8);
  uVar18 = *(undefined8 *)(param_1 + 8);
  uVar17 = *(undefined8 *)(param_1 + 6);
  puVar13[1] = *(undefined8 *)(param_1 + 2);
  *puVar13 = uVar8;
  uVar8 = *(undefined8 *)(param_1 + 0xe);
  uVar16 = *(undefined8 *)(param_1 + 0xc);
  uVar15 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)param_1 = 0;
  puVar13[2] = uVar7;
  puVar13[4] = uVar18;
  puVar13[3] = uVar17;
  puVar13[7] = uVar8;
  *(undefined8 *)(param_1 + 4) = 0;
  puVar13[6] = uVar16;
  puVar13[5] = uVar15;
  memcpy(puVar13 + 8,param_1 + 0x10,0x268);
  uVar15 = *(undefined8 *)(param_1 + 0xac);
  uVar8 = *(undefined8 *)(param_1 + 0xaa);
  uVar17 = *(undefined8 *)(param_1 + 0xb0);
  uVar16 = *(undefined8 *)(param_1 + 0xae);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xae) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  puVar13[0x59] = *(undefined8 *)(param_1 + 0xb2);
  uVar7 = *(undefined8 *)(param_1 + 0xb4);
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  pbVar12 = *(byte **)this;
  pbVar11 = *(byte **)(this + 8);
  puVar13[0x56] = uVar15;
  puVar13[0x55] = uVar8;
  puVar13[0x58] = uVar17;
  puVar13[0x57] = uVar16;
  puVar13[0x5a] = uVar7;
  if (pbVar11 == pbVar12) {
    *(undefined8 **)this = puVar13;
    *(undefined8 **)(this + 8) = puVar13 + 0x5b;
    *(void **)(this + 0x10) = pvVar2;
  }
  else {
    lVar9 = 0;
    do {
      lVar4 = lVar9 + lVar3 * 0x2d8;
      uVar8 = *(undefined8 *)(pbVar11 + lVar9 + -0x2d0);
      uVar7 = *(undefined8 *)(pbVar11 + lVar9 + -0x2d8);
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x2c8) = *(undefined8 *)(pbVar11 + lVar9 + -0x2c8);
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x2d0) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x2d8) = uVar7;
      uVar8 = *(undefined8 *)(pbVar11 + lVar9 + -0x2c0);
      uVar16 = *(undefined8 *)(pbVar11 + lVar9 + -0x2a8);
      uVar15 = *(undefined8 *)(pbVar11 + lVar9 + -0x2b0);
      *(undefined8 *)(pbVar11 + lVar9 + -0x2d0) = 0;
      *(undefined8 *)(pbVar11 + lVar9 + -0x2c8) = 0;
      *(undefined8 *)(pbVar11 + lVar9 + -0x2d8) = 0;
      uVar7 = *(undefined8 *)(pbVar11 + lVar9 + -0x2a0);
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x2b8) = *(undefined8 *)(pbVar11 + lVar9 + -0x2b8);
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x2c0) = uVar8;
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x2a8) = uVar16;
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x2b0) = uVar15;
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x2a0) = uVar7;
      memcpy((void *)((long)pvVar6 + lVar4 + -0x298),pbVar11 + lVar9 + -0x298,0x268);
      uVar7 = *(undefined8 *)(pbVar11 + lVar9 + -0x28);
      lVar14 = lVar9 + -0x2d8;
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x30) = *(undefined8 *)(pbVar11 + lVar9 + -0x30);
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x28) = uVar7;
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x20) = *(undefined8 *)(pbVar11 + lVar9 + -0x20);
      uVar7 = *(undefined8 *)(pbVar11 + lVar9 + -0x10);
      *(undefined8 *)(pbVar11 + lVar9 + -0x28) = 0;
      *(undefined8 *)(pbVar11 + lVar9 + -0x20) = 0;
      *(undefined8 *)(pbVar11 + lVar9 + -0x30) = 0;
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x18) = *(undefined8 *)(pbVar11 + lVar9 + -0x18);
      *(undefined8 *)((long)pvVar6 + lVar4 + -0x10) = uVar7;
      *(undefined8 *)((long)pvVar6 + lVar4 + -8) = *(undefined8 *)(pbVar11 + lVar9 + -8);
      *(undefined8 *)(pbVar11 + lVar9 + -0x18) = 0;
      *(undefined8 *)(pbVar11 + lVar9 + -0x10) = 0;
      *(undefined8 *)(pbVar11 + lVar9 + -8) = 0;
      lVar9 = lVar14;
    } while (pbVar11 + lVar14 != pbVar12);
    pbVar12 = *(byte **)this;
    pbVar11 = *(byte **)(this + 8);
    *(long *)this = (long)pvVar6 + lVar14 + lVar3 * 0x2d8;
    *(undefined8 **)(this + 8) = puVar13 + 0x5b;
    *(void **)(this + 0x10) = pvVar2;
    while (pbVar5 = pbVar11, pbVar5 != pbVar12) {
      pbVar11 = pbVar5 + -0x2d8;
      TerrainLayerTransformGroupDesc::~TerrainLayerTransformGroupDesc
                ((TerrainLayerTransformGroupDesc *)(pbVar5 + -0x2c0));
      if ((*pbVar11 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -0x2c8));
      }
    }
  }
  if (pbVar12 == (byte *)0x0) {
    return;
  }
  operator_delete(pbVar12);
  return;
}


