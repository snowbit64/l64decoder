// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementSignedDistanceMask
// Entry Point: 009e91ac
// Size: 36 bytes
// Signature: undefined __thiscall ~ProceduralPlacementSignedDistanceMask(ProceduralPlacementSignedDistanceMask * this)


/* ProceduralPlacementSignedDistanceMask::~ProceduralPlacementSignedDistanceMask() */

void __thiscall
ProceduralPlacementSignedDistanceMask::~ProceduralPlacementSignedDistanceMask
          (ProceduralPlacementSignedDistanceMask *this)

{
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  operator_delete(this);
  return;
}


