// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00bf34cc
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long long, AndroidHTTPSRequest*>,
   std::__ndk1::__map_value_compare<unsigned long long, std::__ndk1::__value_type<unsigned long
   long, AndroidHTTPSRequest*>, std::__ndk1::less<unsigned long long>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long long, AndroidHTTPSRequest*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long long,
   AndroidHTTPSRequest*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::__map_value_compare<unsigned_long_long,std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>,std::__ndk1::less<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long_long,AndroidHTTPSRequest*>>>
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


