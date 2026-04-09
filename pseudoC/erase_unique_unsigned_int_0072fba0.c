// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __erase_unique<unsigned_int>
// Entry Point: 0072fba0
// Size: 236 bytes
// Signature: ulong __thiscall __erase_unique<unsigned_int>(__tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>> * this, uint * param_1)


/* unsigned long std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int,
   VehicleNavigationMapGenerator::BlockingPositionData>, std::__ndk1::__map_value_compare<unsigned
   int, std::__ndk1::__value_type<unsigned int,
   VehicleNavigationMapGenerator::BlockingPositionData>, std::__ndk1::less<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned int,
   VehicleNavigationMapGenerator::BlockingPositionData> > >::__erase_unique<unsigned int>(unsigned
   int const&) */

ulong __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>>
::__erase_unique<unsigned_int>
          (__tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>>
           *this,uint *param_1)

{
  uint uVar1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base **pp_Var4;
  __tree_node_base **pp_Var5;
  __tree_node_base **pp_Var6;
  
  pp_Var4 = (__tree_node_base **)(this + 8);
  pp_Var2 = (__tree_node_base **)*pp_Var4;
  if (pp_Var2 != (__tree_node_base **)0x0) {
    uVar1 = *param_1;
    pp_Var5 = pp_Var2;
    pp_Var6 = pp_Var4;
    do {
      if (*(uint *)(pp_Var5 + 4) >= uVar1) {
        pp_Var6 = pp_Var5;
      }
      pp_Var5 = (__tree_node_base **)pp_Var5[*(uint *)(pp_Var5 + 4) < uVar1];
    } while (pp_Var5 != (__tree_node_base **)0x0);
    if ((pp_Var6 == pp_Var4) || (uVar1 < *(uint *)(pp_Var6 + 4))) {
      pp_Var2 = (__tree_node_base **)0x0;
    }
    else {
      pp_Var4 = (__tree_node_base **)pp_Var6[1];
      if ((__tree_node_base **)pp_Var6[1] == (__tree_node_base **)0x0) {
        pp_Var4 = pp_Var6 + 2;
        pp_Var5 = (__tree_node_base **)*pp_Var4;
        if ((__tree_node_base **)*pp_Var5 != pp_Var6) {
          do {
            p_Var3 = *pp_Var4;
            pp_Var4 = (__tree_node_base **)(p_Var3 + 0x10);
            pp_Var5 = (__tree_node_base **)*pp_Var4;
          } while (*pp_Var5 != p_Var3);
        }
      }
      else {
        do {
          pp_Var5 = pp_Var4;
          pp_Var4 = (__tree_node_base **)*pp_Var5;
        } while ((__tree_node_base **)*pp_Var5 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)this == pp_Var6) {
        *(__tree_node_base ***)this = pp_Var5;
      }
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
      __tree_remove<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)pp_Var2,(__tree_node_base *)pp_Var6);
      p_Var3 = pp_Var6[6];
      if (p_Var3 != (__tree_node_base *)0x0) {
        pp_Var6[7] = p_Var3;
        operator_delete(p_Var3);
      }
      operator_delete(pp_Var6);
      pp_Var2 = (__tree_node_base **)0x1;
    }
  }
  return (ulong)pp_Var2;
}


