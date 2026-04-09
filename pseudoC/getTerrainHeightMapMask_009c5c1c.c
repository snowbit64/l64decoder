// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTerrainHeightMapMask
// Entry Point: 009c5c1c
// Size: 84 bytes
// Signature: undefined __thiscall getTerrainHeightMapMask(ProceduralPlacementCacheManager * this, BaseTerrain * param_1)


/* ProceduralPlacementCacheManager::getTerrainHeightMapMask(BaseTerrain*) */

undefined8 __thiscall
ProceduralPlacementCacheManager::getTerrainHeightMapMask
          (ProceduralPlacementCacheManager *this,BaseTerrain *param_1)

{
  ProceduralPlacementTerrainHeightMapMask *this_00;
  
  if (*(long *)(this + 0x1a0) == 0) {
    this_00 = (ProceduralPlacementTerrainHeightMapMask *)operator_new(0xd8);
                    /* try { // try from 009c5c48 to 009c5c4f has its CatchHandler @ 009c5c70 */
    ProceduralPlacementTerrainHeightMapMask::ProceduralPlacementTerrainHeightMapMask
              (this_00,param_1);
    *(ProceduralPlacementTerrainHeightMapMask **)(this + 0x1a0) = this_00;
  }
  ProceduralPlacementMask::updateDirtyRegion();
  return *(undefined8 *)(this + 0x1a0);
}


