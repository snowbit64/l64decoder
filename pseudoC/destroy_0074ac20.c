// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 0074ac20
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::__map_value_compare<GsShape*,std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::less<GsShape*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape*,GsShape*>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<GsShape*, GsShape*>,
   std::__ndk1::__map_value_compare<GsShape*, std::__ndk1::__value_type<GsShape*, GsShape*>,
   std::__ndk1::less<GsShape*>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<GsShape*,
   GsShape*> > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<GsShape*, GsShape*>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::__map_value_compare<GsShape*,std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::less<GsShape*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape*,GsShape*>>>
::destroy(__tree<std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::__map_value_compare<GsShape*,std::__ndk1::__value_type<GsShape*,GsShape*>,std::__ndk1::less<GsShape*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape*,GsShape*>>>
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


