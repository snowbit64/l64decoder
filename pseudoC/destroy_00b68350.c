// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00b68350
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<Vector3, Vector3Comparator, std::__ndk1::allocator<Vector3>
   >::destroy(std::__ndk1::__tree_node<Vector3, void*>*) */

void __thiscall
std::__ndk1::__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>>::destroy
          (__tree<Vector3,Vector3Comparator,std::__ndk1::allocator<Vector3>> *this,
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


