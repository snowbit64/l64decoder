// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementClearMask
// Entry Point: 009d82a0
// Size: 36 bytes
// Signature: undefined __thiscall ~ProceduralPlacementClearMask(ProceduralPlacementClearMask * this)


/* ProceduralPlacementClearMask::~ProceduralPlacementClearMask() */

void __thiscall
ProceduralPlacementClearMask::~ProceduralPlacementClearMask(ProceduralPlacementClearMask *this)

{
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  operator_delete(this);
  return;
}


