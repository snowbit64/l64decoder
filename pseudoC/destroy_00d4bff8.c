// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00d4bff8
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<long, std::__ndk1::less<long>, std::__ndk1::allocator<long>
   >::destroy(std::__ndk1::__tree_node<long, void*>*) */

void __thiscall
std::__ndk1::__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>::destroy
          (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *this,
          __tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}


