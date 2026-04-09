// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00a178e8
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::__map_value_compare<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::less<SharedRenderArgs::ShadowRasterizerStateDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,
   std::__ndk1::pair<IRasterizerState*, unsigned long long> >,
   std::__ndk1::__map_value_compare<SharedRenderArgs::ShadowRasterizerStateDesc,
   std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,
   std::__ndk1::pair<IRasterizerState*, unsigned long long> >,
   std::__ndk1::less<SharedRenderArgs::ShadowRasterizerStateDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,
   std::__ndk1::pair<IRasterizerState*, unsigned long long> > >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,
   std::__ndk1::pair<IRasterizerState*, unsigned long long> >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::__map_value_compare<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::less<SharedRenderArgs::ShadowRasterizerStateDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>>>
::destroy(__tree<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::__map_value_compare<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>,std::__ndk1::less<SharedRenderArgs::ShadowRasterizerStateDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<SharedRenderArgs::ShadowRasterizerStateDesc,std::__ndk1::pair<IRasterizerState*,unsigned_long_long>>>>
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


