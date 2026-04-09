// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00a23a58
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::__map_value_compare<GsShape_const*,std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::less<GsShape_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<GsShape const*, ITextureObject*>,
   std::__ndk1::__map_value_compare<GsShape const*, std::__ndk1::__value_type<GsShape const*,
   ITextureObject*>, std::__ndk1::less<GsShape const*>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<GsShape const*, ITextureObject*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<GsShape const*, ITextureObject*>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::__map_value_compare<GsShape_const*,std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::less<GsShape_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>>>
::destroy(__tree<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::__map_value_compare<GsShape_const*,std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::less<GsShape_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>>>
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


