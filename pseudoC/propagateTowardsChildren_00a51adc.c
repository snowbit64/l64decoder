// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateTowardsChildren
// Entry Point: 00a51adc
// Size: 288 bytes
// Signature: undefined __thiscall propagateTowardsChildren(GsShape * this, uint param_1, uint param_2)


/* GsShape::propagateTowardsChildren(unsigned int, unsigned int) */

void __thiscall GsShape::propagateTowardsChildren(GsShape *this,uint param_1,uint param_2)

{
  uint uVar1;
  ParticleSystem *this_00;
  
  RawTransformGroup::propagateTowardsChildren((RawTransformGroup *)this,param_1,param_2);
  if ((((param_1 >> 1 & 1) != 0) &&
      (this_00 = *(ParticleSystem **)(this + 0x170), this_00 != (ParticleSystem *)0x0)) &&
     ((char)this_00[0x22] < '\0')) {
    ParticleSystem::setEffectiveVisibility(this_00,(bool)((byte)(*(uint *)(this + 0x40) >> 1) & 1));
  }
  if ((param_1 & 0xe) != 0) {
    if ((param_1 >> 2 & 1) != 0) {
      *(undefined8 *)(this + 0x188) = 0;
      *(undefined2 *)(this + 0x194) = 0;
    }
    uVar1 = *(uint *)(this + 0x40);
    *(uint *)(this + 0x40) = uVar1 | 0x4000;
    if (((uVar1 >> 0xf & 1) == 0) &&
       (((uVar1 & 0x82000) != 0 ||
        (((uint)((*(uint *)(this + 400) & 0x1001400) != 0x400) & uVar1 >> 1) != 0)))) {
      *(uint *)(this + 0x40) = uVar1 | 0xc000;
      CullingManager::addDirtyShape((CullingManager *)CullingManager::s_cullingManagerInstance,this)
      ;
    }
  }
  if ((param_1 & 1) != 0) {
    uVar1 = *(uint *)(this + 0x40);
    *(uint *)(this + 0x40) = uVar1 | 0x5000;
    if (((uVar1 >> 0xf & 1) == 0) &&
       (((uVar1 & 0x82000) != 0 ||
        (((uint)((*(uint *)(this + 400) & 0x1001400) != 0x400) & uVar1 >> 1) != 0)))) {
      *(uint *)(this + 0x40) = uVar1 | 0xd000;
      CullingManager::addDirtyShape((CullingManager *)CullingManager::s_cullingManagerInstance,this)
      ;
      return;
    }
  }
  return;
}


