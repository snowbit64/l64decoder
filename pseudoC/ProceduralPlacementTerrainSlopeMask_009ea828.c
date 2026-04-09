// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementTerrainSlopeMask
// Entry Point: 009ea828
// Size: 36 bytes
// Signature: undefined __thiscall ~ProceduralPlacementTerrainSlopeMask(ProceduralPlacementTerrainSlopeMask * this)


/* ProceduralPlacementTerrainSlopeMask::~ProceduralPlacementTerrainSlopeMask() */

void __thiscall
ProceduralPlacementTerrainSlopeMask::~ProceduralPlacementTerrainSlopeMask
          (ProceduralPlacementTerrainSlopeMask *this)

{
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  operator_delete(this);
  return;
}


