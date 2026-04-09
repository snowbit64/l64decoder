// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateTowardsChildren
// Entry Point: 00a546b0
// Size: 172 bytes
// Signature: undefined __thiscall propagateTowardsChildren(LightSource * this, uint param_1, uint param_2)


/* LightSource::propagateTowardsChildren(unsigned int, unsigned int) */

void __thiscall LightSource::propagateTowardsChildren(LightSource *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  RawTransformGroup::propagateTowardsChildren((RawTransformGroup *)this,param_1,param_2);
  if ((param_1 & 0xc) != 0) {
    uVar1 = *(uint *)(this + 0x40);
    *(uint *)(this + 0x40) = uVar1 | 0x4000;
    if (((uVar1 >> 0xf & 1) == 0) && ((uVar1 & 0x2002) != 0)) {
      *(uint *)(this + 0x40) = uVar1 | 0xc000;
      CullingManager::addDirtyLightSource
                ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    }
  }
  if ((param_1 & 3) != 0) {
    uVar1 = *(uint *)(this + 0x40);
    *(uint *)(this + 0x40) = uVar1 | 0x5000;
    if (((uVar1 >> 0xf & 1) == 0) && ((uVar1 & 0x2002) != 0)) {
      *(uint *)(this + 0x40) = uVar1 | 0xd000;
      CullingManager::addDirtyLightSource
                ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
      return;
    }
  }
  return;
}


