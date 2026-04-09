// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementClampedMask
// Entry Point: 009c9214
// Size: 36 bytes
// Signature: undefined __thiscall ~ProceduralPlacementClampedMask(ProceduralPlacementClampedMask * this)


/* ProceduralPlacementClampedMask::~ProceduralPlacementClampedMask() */

void __thiscall
ProceduralPlacementClampedMask::~ProceduralPlacementClampedMask
          (ProceduralPlacementClampedMask *this)

{
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  operator_delete(this);
  return;
}


