// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00920dd0
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<TransformGroup*, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<TransformGroup*> >::destroy(std::__ndk1::__tree_node<TransformGroup*,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>::
destroy(__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
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


