// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 0071bcd0
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<unsigned int, std::__ndk1::less<unsigned int>,
   std::__ndk1::allocator<unsigned int> >::destroy(std::__ndk1::__tree_node<unsigned int, void*>*)
    */

void __thiscall
std::__ndk1::
__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::destroy
          (__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
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


