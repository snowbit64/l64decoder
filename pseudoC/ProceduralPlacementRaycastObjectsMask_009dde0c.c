// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementRaycastObjectsMask
// Entry Point: 009dde0c
// Size: 88 bytes
// Signature: undefined __thiscall ~ProceduralPlacementRaycastObjectsMask(ProceduralPlacementRaycastObjectsMask * this)


/* ProceduralPlacementRaycastObjectsMask::~ProceduralPlacementRaycastObjectsMask() */

void __thiscall
ProceduralPlacementRaycastObjectsMask::~ProceduralPlacementRaycastObjectsMask
          (ProceduralPlacementRaycastObjectsMask *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__ProceduralPlacementRaycastObjectsMask_00fe2740;
  std::__ndk1::
  __tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
  ::destroy((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
             *)(this + 0x100),*(__tree_node **)(this + 0x108));
  std::__ndk1::
  __tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
  ::destroy((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
             *)(this + 0xe8),*(__tree_node **)(this + 0xf0));
  pvVar1 = *(void **)(this + 200);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar1;
    operator_delete(pvVar1);
  }
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  return;
}


