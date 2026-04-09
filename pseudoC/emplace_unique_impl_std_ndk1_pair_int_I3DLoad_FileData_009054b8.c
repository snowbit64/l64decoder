// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_impl<std::__ndk1::pair<int,I3DLoad::FileData>>
// Entry Point: 009054b8
// Size: 300 bytes
// Signature: pair __thiscall __emplace_unique_impl<std::__ndk1::pair<int,I3DLoad::FileData>>(__tree<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>>> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<unsigned int,
   I3DLoad::FileData>, std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   I3DLoad::FileData>, void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<unsigned
   int, I3DLoad::FileData>, std::__ndk1::__map_value_compare<unsigned int,
   std::__ndk1::__value_type<unsigned int, I3DLoad::FileData>, std::__ndk1::less<unsigned int>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned int, I3DLoad::FileData> >
   >::__emplace_unique_impl<std::__ndk1::pair<int, I3DLoad::FileData> >(std::__ndk1::pair<int,
   I3DLoad::FileData>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>>>
::__emplace_unique_impl<std::__ndk1::pair<int,I3DLoad::FileData>>
          (__tree<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,I3DLoad::FileData>>>
           *this,pair *param_1)

{
  uint uVar1;
  pair pVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar3 = (undefined8 *)operator_new(0x48);
  uVar10 = *(undefined8 *)(param_1 + 4);
  uVar9 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar8 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 6) = 0;
  uVar1 = *param_1;
  puVar3[6] = uVar10;
  puVar3[5] = uVar9;
  pVar2 = param_1[8];
  puVar3[7] = uVar8;
  puVar5 = (undefined8 *)(this + 8);
  puVar6 = (undefined8 *)*puVar5;
  *(uint *)(puVar3 + 4) = uVar1;
  *(pair *)(puVar3 + 8) = pVar2;
  puVar4 = puVar5;
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(this + 8);
    do {
      while (puVar7 = puVar6, puVar4 = puVar7, uVar1 < *(uint *)(puVar7 + 4)) {
        puVar5 = puVar7;
        puVar6 = (undefined8 *)*puVar7;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)*puVar7;
          goto joined_r0x00905558;
        }
      }
      if (uVar1 <= *(uint *)(puVar7 + 4)) break;
      puVar5 = puVar7 + 1;
      puVar6 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  puVar6 = (undefined8 *)*puVar5;
  puVar7 = puVar5;
joined_r0x00905558:
  if (puVar6 == (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = puVar4;
    *puVar7 = puVar3;
    puVar4 = puVar3;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar4 = (undefined8 *)*puVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar4);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    puVar6 = puVar3;
  }
  else {
    if ((*(byte *)(puVar3 + 5) & 1) != 0) {
      operator_delete((void *)puVar3[7]);
    }
    operator_delete(puVar3);
  }
  return (pair)puVar6;
}


