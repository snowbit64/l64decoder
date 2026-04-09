// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LoadNodesHelper
// Entry Point: 009e5a38
// Size: 64 bytes
// Signature: undefined __thiscall ~LoadNodesHelper(LoadNodesHelper * this)


/* ProceduralPlacementManager::LoadNodesHelper::~LoadNodesHelper() */

void __thiscall ProceduralPlacementManager::LoadNodesHelper::~LoadNodesHelper(LoadNodesHelper *this)

{
  void *pvVar1;
  
  std::__ndk1::
  __tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
  ::destroy((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


