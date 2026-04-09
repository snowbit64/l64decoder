// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 007a7e38
// Size: 64 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition>,
   std::__ndk1::__map_value_compare<VisibilityConditionDesc,
   std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition>,
   std::__ndk1::less<VisibilityConditionDesc>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc, VisibilityCondition> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<VisibilityConditionDesc,
   VisibilityCondition>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
::destroy(__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
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


