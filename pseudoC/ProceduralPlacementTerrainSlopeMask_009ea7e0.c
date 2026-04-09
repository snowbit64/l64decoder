// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementTerrainSlopeMask
// Entry Point: 009ea7e0
// Size: 68 bytes
// Signature: undefined __thiscall ProceduralPlacementTerrainSlopeMask(ProceduralPlacementTerrainSlopeMask * this, ProceduralPlacementTerrainSlopeMask * param_1)


/* ProceduralPlacementTerrainSlopeMask::ProceduralPlacementTerrainSlopeMask(ProceduralPlacementTerrainSlopeMask
   const&) */

void __thiscall
ProceduralPlacementTerrainSlopeMask::ProceduralPlacementTerrainSlopeMask
          (ProceduralPlacementTerrainSlopeMask *this,ProceduralPlacementTerrainSlopeMask *param_1)

{
  ProceduralPlacementTerrainSlopeMask PVar1;
  
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(ProceduralPlacementMask *)param_1);
  PVar1 = param_1[0xd0];
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 200);
  this[0xd0] = PVar1;
  *(undefined ***)this = &PTR__ProceduralPlacementTerrainSlopeMask_00fe2e28;
  return;
}


