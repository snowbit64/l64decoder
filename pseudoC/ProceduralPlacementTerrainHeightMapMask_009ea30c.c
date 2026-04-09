// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementTerrainHeightMapMask
// Entry Point: 009ea30c
// Size: 36 bytes
// Signature: undefined __thiscall ~ProceduralPlacementTerrainHeightMapMask(ProceduralPlacementTerrainHeightMapMask * this)


/* ProceduralPlacementTerrainHeightMapMask::~ProceduralPlacementTerrainHeightMapMask() */

void __thiscall
ProceduralPlacementTerrainHeightMapMask::~ProceduralPlacementTerrainHeightMapMask
          (ProceduralPlacementTerrainHeightMapMask *this)

{
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  operator_delete(this);
  return;
}


