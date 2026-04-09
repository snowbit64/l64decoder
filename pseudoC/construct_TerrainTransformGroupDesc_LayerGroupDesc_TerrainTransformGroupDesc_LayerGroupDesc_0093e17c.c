// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<TerrainTransformGroupDesc::LayerGroupDesc,TerrainTransformGroupDesc::LayerGroupDesc&>
// Entry Point: 0093e17c
// Size: 212 bytes
// Signature: void __thiscall construct<TerrainTransformGroupDesc::LayerGroupDesc,TerrainTransformGroupDesc::LayerGroupDesc&>(allocator<TerrainTransformGroupDesc::LayerGroupDesc> * this, LayerGroupDesc * param_1, LayerGroupDesc * param_2)


/* void 
   std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>::construct<TerrainTransformGroupDesc::LayerGroupDesc,
   TerrainTransformGroupDesc::LayerGroupDesc&>(TerrainTransformGroupDesc::LayerGroupDesc*,
   TerrainTransformGroupDesc::LayerGroupDesc&) */

void __thiscall
std::__ndk1::allocator<TerrainTransformGroupDesc::LayerGroupDesc>::
construct<TerrainTransformGroupDesc::LayerGroupDesc,TerrainTransformGroupDesc::LayerGroupDesc&>
          (allocator<TerrainTransformGroupDesc::LayerGroupDesc> *this,LayerGroupDesc *param_1,
          LayerGroupDesc *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  LayerGroupDesc **ppLVar4;
  LayerGroupDesc *pLVar5;
  undefined8 *puVar6;
  LayerGroupDesc **ppLVar7;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)param_1);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  puVar6 = (undefined8 *)(param_1 + 0x30);
  *puVar6 = 0;
  *(undefined8 **)(param_1 + 0x28) = puVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  ppLVar7 = *(LayerGroupDesc ***)(param_2 + 0x28);
  while (ppLVar7 != (LayerGroupDesc **)(param_2 + 0x30)) {
                    /* try { // try from 0093e1e4 to 0093e1f3 has its CatchHandler @ 0093e250 */
    __tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::
    __emplace_hint_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int_const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>const&>
              ((__tree<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)(param_1 + 0x28),(__tree_const_iterator)puVar6,(uint *)(ppLVar7 + 4),
               (pair *)(ppLVar7 + 4));
    ppLVar4 = (LayerGroupDesc **)ppLVar7[1];
    if ((LayerGroupDesc **)ppLVar7[1] == (LayerGroupDesc **)0x0) {
      ppLVar4 = ppLVar7 + 2;
      bVar2 = *(LayerGroupDesc ***)*ppLVar4 != ppLVar7;
      ppLVar7 = (LayerGroupDesc **)*ppLVar4;
      if (bVar2) {
        do {
          pLVar5 = *ppLVar4;
          ppLVar4 = (LayerGroupDesc **)(pLVar5 + 0x10);
          ppLVar7 = (LayerGroupDesc **)*ppLVar4;
        } while (*ppLVar7 != pLVar5);
      }
    }
    else {
      do {
        ppLVar7 = ppLVar4;
        ppLVar4 = (LayerGroupDesc **)*ppLVar7;
      } while ((LayerGroupDesc **)*ppLVar7 != (LayerGroupDesc **)0x0);
    }
  }
  return;
}


