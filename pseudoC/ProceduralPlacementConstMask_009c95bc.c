// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementConstMask
// Entry Point: 009c95bc
// Size: 36 bytes
// Signature: undefined __thiscall ~ProceduralPlacementConstMask(ProceduralPlacementConstMask * this)


/* ProceduralPlacementConstMask::~ProceduralPlacementConstMask() */

void __thiscall
ProceduralPlacementConstMask::~ProceduralPlacementConstMask(ProceduralPlacementConstMask *this)

{
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  operator_delete(this);
  return;
}


