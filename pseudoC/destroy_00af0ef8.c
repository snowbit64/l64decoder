// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00af0ef8
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectTypeDescription_const*,std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::less<SpvReflectTypeDescription_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<SpvReflectTypeDescription const*, unsigned int>,
   std::__ndk1::__map_value_compare<SpvReflectTypeDescription const*,
   std::__ndk1::__value_type<SpvReflectTypeDescription const*, unsigned int>,
   std::__ndk1::less<SpvReflectTypeDescription const*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectTypeDescription const*, unsigned int>
   > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<SpvReflectTypeDescription const*,
   unsigned int>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectTypeDescription_const*,std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::less<SpvReflectTypeDescription_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>>>
::destroy(__tree<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::__map_value_compare<SpvReflectTypeDescription_const*,std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>,std::__ndk1::less<SpvReflectTypeDescription_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SpvReflectTypeDescription_const*,unsigned_int>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}


