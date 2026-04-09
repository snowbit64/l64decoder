// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00864554
// Size: 80 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned int,
   ConditionalAnimationShared::ParamInfo>, std::__ndk1::__map_value_compare<unsigned int,
   std::__ndk1::__value_type<unsigned int, ConditionalAnimationShared::ParamInfo>,
   std::__ndk1::less<unsigned int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<unsigned
   int, ConditionalAnimationShared::ParamInfo> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned int,
   ConditionalAnimationShared::ParamInfo>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,ConditionalAnimationShared::ParamInfo>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    if (((byte)param_1[0x30] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x40));
    }
    operator_delete(param_1);
    return;
  }
  return;
}


