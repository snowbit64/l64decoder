// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00926888
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<DestructionShape::InterShapeJointToAdd,
   std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,
   std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>
   >::destroy(std::__ndk1::__tree_node<DestructionShape::InterShapeJointToAdd, void*>*) */

void __thiscall
std::__ndk1::
__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
::destroy(__tree<DestructionShape::InterShapeJointToAdd,std::__ndk1::less<DestructionShape::InterShapeJointToAdd>,std::__ndk1::allocator<DestructionShape::InterShapeJointToAdd>>
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


