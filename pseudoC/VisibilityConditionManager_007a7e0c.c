// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VisibilityConditionManager
// Entry Point: 007a7e0c
// Size: 44 bytes
// Signature: undefined __thiscall ~VisibilityConditionManager(VisibilityConditionManager * this)


/* VisibilityConditionManager::~VisibilityConditionManager() */

void __thiscall
VisibilityConditionManager::~VisibilityConditionManager(VisibilityConditionManager *this)

{
  Mutex::~Mutex((Mutex *)(this + 0x18));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
  ::destroy((__tree<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::__map_value_compare<VisibilityConditionDesc,std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>,std::__ndk1::less<VisibilityConditionDesc>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<VisibilityConditionDesc,VisibilityCondition>>>
             *)this,*(__tree_node **)(this + 8));
  return;
}


