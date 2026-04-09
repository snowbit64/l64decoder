// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 0072fb50
// Size: 80 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int,
   VehicleNavigationMapGenerator::BlockingPositionData>, std::__ndk1::__map_value_compare<unsigned
   int, std::__ndk1::__value_type<unsigned int,
   VehicleNavigationMapGenerator::BlockingPositionData>, std::__ndk1::less<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned int,
   VehicleNavigationMapGenerator::BlockingPositionData> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   VehicleNavigationMapGenerator::BlockingPositionData>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,VehicleNavigationMapGenerator::BlockingPositionData>>>
          *this,__tree_node *param_1)

{
  void *pvVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    pvVar1 = *(void **)(param_1 + 0x30);
    if (pvVar1 != (void *)0x0) {
      *(void **)(param_1 + 0x38) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


