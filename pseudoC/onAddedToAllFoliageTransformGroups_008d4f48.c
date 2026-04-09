// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onAddedToAllFoliageTransformGroups
// Entry Point: 008d4f48
// Size: 180 bytes
// Signature: undefined onAddedToAllFoliageTransformGroups(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FoliageBendingSystem::onAddedToAllFoliageTransformGroups() */

void FoliageBendingSystem::onAddedToAllFoliageTransformGroups(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long in_x0;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  
  lVar4 = *(long *)(in_x0 + 0x4c8);
  uVar2 = *(uint *)(in_x0 + 0x94);
  lVar7 = *(long *)(in_x0 + 0x4d0) - lVar4;
  if (lVar7 != 0) {
    uVar5 = 0;
    uVar6 = (lVar7 >> 3) * -0x3333333333333333;
    do {
      lVar7 = lVar4 + uVar5 * 0x28;
      uVar3 = *(uint *)(lVar7 + 8);
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar9 = uVar2 / uVar3;
      }
      if (uVar9 < 2) {
        iVar8 = 0;
      }
      else {
        iVar8 = 0;
        do {
          iVar8 = iVar8 + 1;
          bVar1 = 3 < uVar9;
          uVar9 = uVar9 >> 1;
        } while (bVar1);
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      *(int *)(lVar7 + 0xc) = iVar8;
    } while (uVar5 <= uVar6 && uVar6 - uVar5 != 0);
  }
  DensityAnimationMap::allocateGrid
            ((DensityAnimationMap *)(in_x0 + 0x98),uVar2,1,*(float *)(in_x0 + 0x4b8),
             *(TerrainTransformGroup **)(in_x0 + 0x4c0));
  *(float *)(in_x0 + 0x90) = *(float *)(in_x0 + 0xc0) * 0.5;
  return;
}


