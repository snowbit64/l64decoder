// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b4520
// Entry Point: 007b4520
// Size: 160 bytes
// Signature: undefined FUN_007b4520(void)


void FUN_007b4520(long param_1,uint *param_2)

{
  EntityRegistryManager *this;
  FoliageBendingSystem *this_00;
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  this_00 = (FoliageBendingSystem *)EntityRegistryManager::getEntityById(this,*param_2);
  if ((this_00 != (FoliageBendingSystem *)0x0) && (((byte)this_00[0x17] >> 2 & 1) != 0)) {
    lVar1 = *(long *)(param_1 + 0x28);
    uVar2 = *(long *)(param_1 + 0x30) - lVar1;
    if ((int)(uVar2 >> 3) != 0) {
      lVar3 = 0;
      while( true ) {
        if (((byte)(*(FoliageTransformGroup **)(lVar1 + lVar3))[0x11] >> 2 & 1) != 0) {
          FoliageBendingSystem::addToFoliageTransformGroup
                    (this_00,*(FoliageTransformGroup **)(lVar1 + lVar3));
        }
        if ((uVar2 >> 3 & 0xffffffff) * 8 + -8 == lVar3) break;
        lVar1 = *(long *)(param_1 + 0x28);
        lVar3 = lVar3 + 8;
      }
    }
    FoliageBendingSystem::onAddedToAllFoliageTransformGroups();
    return;
  }
  return;
}


