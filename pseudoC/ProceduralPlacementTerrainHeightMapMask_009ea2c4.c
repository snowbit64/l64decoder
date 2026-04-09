// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementTerrainHeightMapMask
// Entry Point: 009ea2c4
// Size: 68 bytes
// Signature: undefined __thiscall ProceduralPlacementTerrainHeightMapMask(ProceduralPlacementTerrainHeightMapMask * this, ProceduralPlacementTerrainHeightMapMask * param_1)


/* ProceduralPlacementTerrainHeightMapMask::ProceduralPlacementTerrainHeightMapMask(ProceduralPlacementTerrainHeightMapMask
   const&) */

void __thiscall
ProceduralPlacementTerrainHeightMapMask::ProceduralPlacementTerrainHeightMapMask
          (ProceduralPlacementTerrainHeightMapMask *this,
          ProceduralPlacementTerrainHeightMapMask *param_1)

{
  ProceduralPlacementTerrainHeightMapMask PVar1;
  
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  PVar1 = param_1[0xd0];
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  this[0xd0] = PVar1;
  *(undefined ***)this = &PTR__ProceduralPlacementTerrainHeightMapMask_00fe2d68;
  return;
}


