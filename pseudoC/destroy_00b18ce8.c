// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00b18ce8
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<unsigned char, std::__ndk1::less<unsigned char>,
   std::__ndk1::allocator<unsigned char> >::destroy(std::__ndk1::__tree_node<unsigned char, void*>*)
    */

void __thiscall
std::__ndk1::
__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
destroy(__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
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


