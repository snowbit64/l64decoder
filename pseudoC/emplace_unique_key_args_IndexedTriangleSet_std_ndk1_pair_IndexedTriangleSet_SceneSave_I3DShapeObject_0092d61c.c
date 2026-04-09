// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<IndexedTriangleSet*,std::__ndk1::pair<IndexedTriangleSet*,SceneSave::I3DShapeObject>>
// Entry Point: 0092d61c
// Size: 280 bytes
// Signature: pair __thiscall __emplace_unique_key_args<IndexedTriangleSet*,std::__ndk1::pair<IndexedTriangleSet*,SceneSave::I3DShapeObject>>(__tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>> * this, IndexedTriangleSet * * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<IndexedTriangleSet*,
   SceneSave::I3DShapeObject>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<IndexedTriangleSet*,
   SceneSave::I3DShapeObject>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<IndexedTriangleSet*, SceneSave::I3DShapeObject>,
   std::__ndk1::__map_value_compare<IndexedTriangleSet*,
   std::__ndk1::__value_type<IndexedTriangleSet*, SceneSave::I3DShapeObject>,
   std::__ndk1::less<IndexedTriangleSet*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*, SceneSave::I3DShapeObject>
   > >::__emplace_unique_key_args<IndexedTriangleSet*, std::__ndk1::pair<IndexedTriangleSet*,
   SceneSave::I3DShapeObject> >(IndexedTriangleSet* const&, std::__ndk1::pair<IndexedTriangleSet*,
   SceneSave::I3DShapeObject>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>>
::
__emplace_unique_key_args<IndexedTriangleSet*,std::__ndk1::pair<IndexedTriangleSet*,SceneSave::I3DShapeObject>>
          (__tree<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::__map_value_compare<IndexedTriangleSet*,std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>,std::__ndk1::less<IndexedTriangleSet*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<IndexedTriangleSet*,SceneSave::I3DShapeObject>>>
           *this,IndexedTriangleSet **param_1,pair *param_2)

{
  pair pVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar6 = (undefined8 *)(this + 8);
  puVar7 = (undefined8 *)*puVar6;
  puVar2 = puVar6;
  if (puVar7 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(this + 8);
    do {
      while (puVar8 = puVar7, puVar2 = puVar8, *param_1 < (IndexedTriangleSet *)puVar8[4]) {
        puVar6 = puVar8;
        puVar7 = (undefined8 *)*puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)*puVar8;
          goto joined_r0x0092d690;
        }
      }
      if (*param_1 <= (IndexedTriangleSet *)puVar8[4]) break;
      puVar6 = puVar8 + 1;
      puVar7 = (undefined8 *)*puVar6;
    } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
  }
  puVar7 = (undefined8 *)*puVar6;
  puVar8 = puVar6;
joined_r0x0092d690:
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x48);
    uVar3 = *(undefined8 *)param_2;
    *puVar7 = 0;
    puVar7[1] = 0;
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    uVar5 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    puVar7[4] = uVar3;
    puVar7[6] = uVar10;
    puVar7[5] = uVar9;
    puVar7[7] = uVar5;
    pVar1 = param_2[8];
    puVar7[2] = puVar2;
    *puVar8 = puVar7;
    plVar4 = *(long **)this;
    *(pair *)(puVar7 + 8) = pVar1;
    puVar2 = puVar7;
    if (*plVar4 != 0) {
      *(long *)this = *plVar4;
      puVar2 = (undefined8 *)*puVar8;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar7;
}


