// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateTowardsChildren
// Entry Point: 00a7680c
// Size: 112 bytes
// Signature: undefined __thiscall propagateTowardsChildren(TerrainTransformGroup * this, uint param_1, uint param_2)


/* TerrainTransformGroup::propagateTowardsChildren(unsigned int, unsigned int) */

void __thiscall
TerrainTransformGroup::propagateTowardsChildren
          (TerrainTransformGroup *this,uint param_1,uint param_2)

{
  UpdateRenderingManager *pUVar1;
  
  RawTransformGroup::propagateTowardsChildren((RawTransformGroup *)this,param_1,param_2);
  if ((param_1 >> 1 & 1) != 0) {
    if (((byte)this[0x40] >> 1 & 1) == 0) {
      if (this[0x445] != (TerrainTransformGroup)0x0) {
        this[0x445] = (TerrainTransformGroup)0x0;
        pUVar1 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
        UpdateRenderingManager::removeUpdateableRendered
                  (pUVar1,(UpdateableRendered *)(this + 0x158));
        return;
      }
    }
    else if (this[0x445] == (TerrainTransformGroup)0x0) {
      this[0x445] = (TerrainTransformGroup)0x1;
      pUVar1 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
      UpdateRenderingManager::addUpdateableRendered(pUVar1,(UpdateableRendered *)(this + 0x158));
      return;
    }
  }
  return;
}


