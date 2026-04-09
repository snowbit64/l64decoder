// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::pair<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>
// Entry Point: 00b77dfc
// Size: 280 bytes
// Signature: pair __thiscall __emplace_unique_key_args<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::pair<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>(__tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>> * this, pair * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned
   short, unsigned short>, unsigned short>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<unsigned short, unsigned
   short>, unsigned short>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned short, unsigned short>,
   unsigned short>, std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned short, unsigned
   short>, std::__ndk1::__value_type<std::__ndk1::pair<unsigned short, unsigned short>, unsigned
   short>, std::__ndk1::less<std::__ndk1::pair<unsigned short, unsigned short> >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned short, unsigned
   short>, unsigned short> > >::__emplace_unique_key_args<std::__ndk1::pair<unsigned short, unsigned
   short>, std::__ndk1::pair<std::__ndk1::pair<unsigned short, unsigned short>, unsigned short>
   >(std::__ndk1::pair<unsigned short, unsigned short> const&,
   std::__ndk1::pair<std::__ndk1::pair<unsigned short, unsigned short>, unsigned short>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
::
__emplace_unique_key_args<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::pair<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>
          (__tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
           *this,pair *param_1,pair *param_2)

{
  pair pVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar5 = (undefined8 *)(this + 8);
  puVar6 = (undefined8 *)*puVar5;
  puVar3 = puVar5;
  if (puVar6 == (undefined8 *)0x0) {
LAB_00b77e84:
    puVar6 = (undefined8 *)*puVar5;
    puVar7 = puVar5;
  }
  else {
    puVar5 = (undefined8 *)(this + 8);
    do {
      while (puVar7 = puVar6, puVar3 = puVar7,
            *(ushort *)((long)puVar7 + 0x1a) <= *(ushort *)param_1) {
        if (*(ushort *)param_1 <= *(ushort *)((long)puVar7 + 0x1a)) {
          if (*(ushort *)((long)param_1 + 2) < *(ushort *)((long)puVar7 + 0x1c)) break;
          if (*(ushort *)((long)param_1 + 2) <= *(ushort *)((long)puVar7 + 0x1c)) goto LAB_00b77e84;
        }
        puVar5 = puVar7 + 1;
        puVar6 = (undefined8 *)*puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) goto LAB_00b77e84;
      }
      puVar5 = puVar7;
      puVar6 = (undefined8 *)*puVar7;
    } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
    puVar6 = (undefined8 *)*puVar7;
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)operator_new(0x20);
    pVar1 = *param_2;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = puVar3;
    uVar2 = *(undefined2 *)(param_2 + 1);
    *(pair *)((long)puVar6 + 0x1a) = pVar1;
    *puVar7 = puVar6;
    plVar4 = *(long **)this;
    *(undefined2 *)((long)puVar6 + 0x1e) = uVar2;
    puVar3 = puVar6;
    if (*plVar4 != 0) {
      *(long *)this = *plVar4;
      puVar3 = (undefined8 *)*puVar7;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar3);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar6;
}


