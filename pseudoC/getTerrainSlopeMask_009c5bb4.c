// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTerrainSlopeMask
// Entry Point: 009c5bb4
// Size: 84 bytes
// Signature: undefined __thiscall getTerrainSlopeMask(ProceduralPlacementCacheManager * this, BaseTerrain * param_1)


/* ProceduralPlacementCacheManager::getTerrainSlopeMask(BaseTerrain*) */

undefined8 __thiscall
ProceduralPlacementCacheManager::getTerrainSlopeMask
          (ProceduralPlacementCacheManager *this,BaseTerrain *param_1)

{
  ProceduralPlacementTerrainSlopeMask *this_00;
  
  if (*(long *)(this + 0x198) == 0) {
    this_00 = (ProceduralPlacementTerrainSlopeMask *)operator_new(0xd8);
                    /* try { // try from 009c5be0 to 009c5be7 has its CatchHandler @ 009c5c08 */
    ProceduralPlacementTerrainSlopeMask::ProceduralPlacementTerrainSlopeMask(this_00,param_1);
    *(ProceduralPlacementTerrainSlopeMask **)(this + 0x198) = this_00;
  }
  ProceduralPlacementMask::updateDirtyRegion();
  return *(undefined8 *)(this + 0x198);
}


