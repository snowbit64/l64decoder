// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 008e0858
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::pair<unsigned short, unsigned short>,
   std::__ndk1::less<std::__ndk1::pair<unsigned short, unsigned short> >,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned short, unsigned short> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::pair<unsigned short, unsigned short>, void*>*)
    */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
::destroy(__tree<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_short,unsigned_short>>>
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


