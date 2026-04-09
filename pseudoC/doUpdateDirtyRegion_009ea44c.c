// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009ea44c
// Size: 148 bytes
// Signature: undefined __cdecl doUpdateDirtyRegion(DirtyRegion * param_1)


/* ProceduralPlacementTerrainHeightMapMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion
   const&) */

void ProceduralPlacementTerrainHeightMapMask::doUpdateDirtyRegion(DirtyRegion *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1[0xd0] != (DirtyRegion)0x0) {
    uVar3 = *(uint *)(param_1 + 0x54);
    if (uVar3 != 0) {
      uVar4 = 0;
      uVar2 = *(uint *)(param_1 + 0x50);
      do {
        if (uVar2 != 0) {
          uVar3 = 0;
          do {
            uVar5 = BaseTerrain::getInterpolatedHeightAtPoint
                              (*(BaseTerrain **)(param_1 + 200),(float)(ulong)uVar3,
                               (float)(ulong)uVar4);
            uVar2 = *(uint *)(param_1 + 0x50);
            uVar1 = uVar3 + uVar4 * uVar2;
            uVar3 = uVar3 + 1;
            *(undefined4 *)(*(long *)(param_1 + 0x58) + (ulong)uVar1 * 4) = uVar5;
          } while (uVar3 < uVar2);
          uVar3 = *(uint *)(param_1 + 0x54);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  return;
}


