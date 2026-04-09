// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00920d90
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<CharacterSet*,std::__ndk1::less<CharacterSet*>,std::__ndk1::allocator<CharacterSet*>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<CharacterSet*, std::__ndk1::less<CharacterSet*>,
   std::__ndk1::allocator<CharacterSet*> >::destroy(std::__ndk1::__tree_node<CharacterSet*, void*>*)
    */

void __thiscall
std::__ndk1::
__tree<CharacterSet*,std::__ndk1::less<CharacterSet*>,std::__ndk1::allocator<CharacterSet*>>::
destroy(__tree<CharacterSet*,std::__ndk1::less<CharacterSet*>,std::__ndk1::allocator<CharacterSet*>>
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


