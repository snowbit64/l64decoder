// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00d4c2a4
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<unsigned long long, std::__ndk1::less<unsigned long long>,
   std::__ndk1::allocator<unsigned long long> >::destroy(std::__ndk1::__tree_node<unsigned long
   long, void*>*) */

void __thiscall
std::__ndk1::
__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
::destroy(__tree<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
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


