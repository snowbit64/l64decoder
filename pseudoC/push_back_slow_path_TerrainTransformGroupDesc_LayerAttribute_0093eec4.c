// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<TerrainTransformGroupDesc::LayerAttribute>
// Entry Point: 0093eec4
// Size: 608 bytes
// Signature: void __thiscall __push_back_slow_path<TerrainTransformGroupDesc::LayerAttribute>(vector<TerrainTransformGroupDesc::LayerAttribute,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerAttribute>> * this, LayerAttribute * param_1)


/* void std::__ndk1::vector<TerrainTransformGroupDesc::LayerAttribute,
   std::__ndk1::allocator<TerrainTransformGroupDesc::LayerAttribute>
   >::__push_back_slow_path<TerrainTransformGroupDesc::LayerAttribute>(TerrainTransformGroupDesc::LayerAttribute&&)
    */

void __thiscall
std::__ndk1::
vector<TerrainTransformGroupDesc::LayerAttribute,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerAttribute>>
::__push_back_slow_path<TerrainTransformGroupDesc::LayerAttribute>
          (vector<TerrainTransformGroupDesc::LayerAttribute,std::__ndk1::allocator<TerrainTransformGroupDesc::LayerAttribute>>
           *this,LayerAttribute *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar5 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar8 = lVar7 * -0x6666666666666666;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x199999999999998 < (ulong)(lVar7 * -0x3333333333333333)) {
    uVar1 = 0x333333333333333;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x333333333333333 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x50);
  }
  uVar12 = *(undefined8 *)(param_1 + 8);
  uVar11 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar6 = (undefined8 *)((long)pvVar4 + lVar5 * 0x10);
  puVar6[2] = *(undefined8 *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x38);
  lVar10 = *(long *)(param_1 + 0x40);
  puVar6[1] = uVar12;
  *puVar6 = uVar11;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar6[7] = lVar7;
  puVar6[4] = uVar12;
  puVar6[3] = uVar11;
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar6[6] = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = uVar11;
  puVar6[8] = lVar10;
  puVar6[9] = lVar7;
  if (lVar7 == 0) {
    puVar6[7] = (long)pvVar4 + lVar5 * 0x10 + 0x40;
  }
  else {
    *(long *)(lVar10 + 0x10) = (long)pvVar4 + lVar5 * 0x10 + 0x40;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(LayerAttribute **)(param_1 + 0x38) = param_1 + 0x40;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  pvVar2 = *(void **)this;
  pvVar3 = *(void **)(this + 8);
  pvVar4 = (void *)((long)pvVar4 + uVar1 * 0x50);
  if (pvVar3 == pvVar2) {
    *(undefined8 **)this = puVar6;
    *(undefined8 **)(this + 8) = puVar6 + 10;
    *(void **)(this + 0x10) = pvVar4;
  }
  else {
    lVar5 = 0;
    do {
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x48);
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x50);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x40) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x40);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x48) = uVar12;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x50) = uVar11;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x48) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x40) = 0;
      uVar12 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x30);
      uVar11 = *(undefined8 *)((long)pvVar3 + lVar5 + -0x38);
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x50) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x28) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x28);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x30) = uVar12;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x38) = uVar11;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x30) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x28) = 0;
      *(undefined8 *)((long)pvVar3 + lVar5 + -0x38) = 0;
      *(undefined8 *)((long)puVar6 + lVar5 + -0x20) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x20);
      *(undefined8 *)((long)puVar6 + lVar5 + -0x18) = *(undefined8 *)((long)pvVar3 + lVar5 + -0x18);
      lVar7 = *(long *)((long)pvVar3 + lVar5 + -0x10);
      *(long *)((long)puVar6 + lVar5 + -0x10) = lVar7;
      lVar10 = *(long *)((long)pvVar3 + lVar5 + -8);
      *(long *)((long)puVar6 + lVar5 + -8) = lVar10;
      if (lVar10 == 0) {
        *(long *)((long)puVar6 + lVar5 + -0x18) = (long)puVar6 + lVar5 + -0x10;
      }
      else {
        *(long *)(lVar7 + 0x10) = (long)puVar6 + lVar5 + -0x10;
        puVar9 = (undefined8 *)((long)pvVar3 + lVar5 + -0x10);
        *puVar9 = 0;
        *(undefined8 **)((long)pvVar3 + lVar5 + -0x18) = puVar9;
        *(undefined8 *)((long)pvVar3 + lVar5 + -8) = 0;
      }
      lVar5 = lVar5 + -0x50;
    } while ((void *)((long)pvVar3 + lVar5) != pvVar2);
    pvVar2 = *(void **)this;
    pvVar3 = *(void **)(this + 8);
    *(void **)(this + 0x10) = pvVar4;
    *(long *)this = (long)puVar6 + lVar5;
    *(undefined8 **)(this + 8) = puVar6 + 10;
    while (pvVar4 = pvVar3, pvVar4 != pvVar2) {
      __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
      ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                 *)((long)pvVar4 + -0x18),*(__tree_node **)((long)pvVar4 + -0x10));
      if ((*(byte *)((long)pvVar4 + -0x38) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x28));
      }
      pvVar3 = (void *)((long)pvVar4 + -0x50);
      if ((*(byte *)((long)pvVar4 + -0x50) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -0x40));
      }
    }
  }
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


