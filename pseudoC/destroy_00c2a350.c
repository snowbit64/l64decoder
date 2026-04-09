// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00c2a350
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<IR_Function*,std::__ndk1::less<IR_Function*>,std::__ndk1::allocator<IR_Function*>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<IR_Function*, std::__ndk1::less<IR_Function*>,
   std::__ndk1::allocator<IR_Function*> >::destroy(std::__ndk1::__tree_node<IR_Function*, void*>*)
    */

void __thiscall
std::__ndk1::
__tree<IR_Function*,std::__ndk1::less<IR_Function*>,std::__ndk1::allocator<IR_Function*>>::destroy
          (__tree<IR_Function*,std::__ndk1::less<IR_Function*>,std::__ndk1::allocator<IR_Function*>>
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


