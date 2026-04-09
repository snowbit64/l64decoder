// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementProjectObjectsMask
// Entry Point: 009db2a4
// Size: 68 bytes
// Signature: undefined __thiscall ~ProceduralPlacementProjectObjectsMask(ProceduralPlacementProjectObjectsMask * this)


/* ProceduralPlacementProjectObjectsMask::~ProceduralPlacementProjectObjectsMask() */

void __thiscall
ProceduralPlacementProjectObjectsMask::~ProceduralPlacementProjectObjectsMask
          (ProceduralPlacementProjectObjectsMask *this)

{
  *(undefined ***)this = &PTR__ProceduralPlacementProjectObjectsMask_00fe2630;
  std::__ndk1::
  __tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
  ::destroy((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
             *)(this + 0xd8),*(__tree_node **)(this + 0xe0));
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  operator_delete(this);
  return;
}


