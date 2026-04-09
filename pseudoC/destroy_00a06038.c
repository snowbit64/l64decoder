// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00a06038
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<GsShape const*, std::__ndk1::less<GsShape const*>,
   std::__ndk1::allocator<GsShape const*> >::destroy(std::__ndk1::__tree_node<GsShape const*,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>::
destroy(__tree<GsShape_const*,std::__ndk1::less<GsShape_const*>,std::__ndk1::allocator<GsShape_const*>>
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


