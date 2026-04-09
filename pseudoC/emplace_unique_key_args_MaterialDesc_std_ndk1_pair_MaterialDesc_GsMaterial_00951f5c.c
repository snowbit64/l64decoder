// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_unique_key_args<MaterialDesc,std::__ndk1::pair<MaterialDesc,GsMaterial*>>
// Entry Point: 00951f5c
// Size: 296 bytes
// Signature: pair __thiscall __emplace_unique_key_args<MaterialDesc,std::__ndk1::pair<MaterialDesc,GsMaterial*>>(__tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>> * this, MaterialDesc * param_1, pair * param_2)


/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<MaterialDesc,
   GsMaterial*>, std::__ndk1::__tree_node<std::__ndk1::__value_type<MaterialDesc, GsMaterial*>,
   void*>*, long>, bool> std::__ndk1::__tree<std::__ndk1::__value_type<MaterialDesc, GsMaterial*>,
   std::__ndk1::__map_value_compare<MaterialDesc, std::__ndk1::__value_type<MaterialDesc,
   GsMaterial*>, std::__ndk1::less<MaterialDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc, GsMaterial*> >
   >::__emplace_unique_key_args<MaterialDesc, std::__ndk1::pair<MaterialDesc, GsMaterial*>
   >(MaterialDesc const&, std::__ndk1::pair<MaterialDesc, GsMaterial*>&&) */

pair __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
::__emplace_unique_key_args<MaterialDesc,std::__ndk1::pair<MaterialDesc,GsMaterial*>>
          (__tree<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::__map_value_compare<MaterialDesc,std::__ndk1::__value_type<MaterialDesc,GsMaterial*>,std::__ndk1::less<MaterialDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialDesc,GsMaterial*>>>
           *this,MaterialDesc *param_1,pair *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar4 = (undefined8 *)(this + 8);
  puVar5 = (undefined8 *)*puVar4;
  puVar2 = puVar4;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(this + 8);
    do {
      while( true ) {
        puVar6 = puVar5;
        uVar1 = MaterialDesc::operator<(param_1,(MaterialDesc *)(puVar6 + 4));
        puVar2 = puVar6;
        if ((uVar1 & 1) == 0) break;
        puVar4 = puVar6;
        puVar5 = (undefined8 *)*puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)*puVar6;
          goto joined_r0x00951fe0;
        }
      }
      uVar1 = MaterialDesc::operator<((MaterialDesc *)(puVar6 + 4),param_1);
      if ((uVar1 & 1) == 0) break;
      puVar4 = puVar6 + 1;
      puVar5 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
  puVar5 = (undefined8 *)*puVar4;
  puVar6 = puVar4;
joined_r0x00951fe0:
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x270);
    puVar5[4] = &PTR__MaterialDesc_00fd99f8;
    memcpy(puVar5 + 5,param_2 + 2,0x23c);
    uVar3 = *(undefined8 *)(param_2 + 0x92);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = puVar2;
    puVar5[0x4d] = uVar3;
    *puVar6 = puVar5;
    puVar2 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar2 = (undefined8 *)*puVar6;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  return (pair)puVar5;
}


