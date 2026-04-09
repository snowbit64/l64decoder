// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_multi<std::__ndk1::pair<int_const,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>const&>
// Entry Point: 009e7d1c
// Size: 208 bytes
// Signature: __tree_iterator __thiscall __emplace_multi<std::__ndk1::pair<int_const,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>const&>(__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>>> * this, pair * param_1)


/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<int,
   std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,
   std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*> > >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,
   std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*> > >, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<int,
   std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,
   std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*> > >,
   std::__ndk1::__map_value_compare<int, std::__ndk1::__value_type<int,
   std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,
   std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*> > >, std::__ndk1::less<int>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<int,
   std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,
   std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*> > > >
   >::__emplace_multi<std::__ndk1::pair<int const,
   std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,
   std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*> > > const&>(std::__ndk1::pair<int
   const, std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,
   std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*> > > const&) */

__tree_iterator __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>>>
::
__emplace_multi<std::__ndk1::pair<int_const,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>const&>
          (__tree<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>>>>
           *this,pair *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  *(pair *)(puVar2 + 4) = *param_1;
                    /* try { // try from 009e7d4c to 009e7d53 has its CatchHandler @ 009e7dec */
  vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>
  ::vector((vector<ProceduralPlacementRule::ParentObject*,std::__ndk1::allocator<ProceduralPlacementRule::ParentObject*>>
            *)(puVar2 + 5),(vector *)(param_1 + 2));
  puVar3 = (undefined8 *)(this + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar1, *(int *)(puVar2 + 4) < *(int *)(puVar3 + 4)) {
        puVar1 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_009e7d9c;
      }
      puVar1 = (undefined8 *)puVar3[1];
    } while ((undefined8 *)puVar3[1] != (undefined8 *)0x0);
    puVar4 = puVar3 + 1;
  }
LAB_009e7d9c:
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = puVar3;
  *puVar4 = puVar2;
  puVar3 = puVar2;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    puVar3 = (undefined8 *)*puVar4;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar3);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  return (__tree_iterator)puVar2;
}


