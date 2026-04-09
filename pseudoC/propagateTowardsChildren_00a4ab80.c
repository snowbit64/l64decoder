// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateTowardsChildren
// Entry Point: 00a4ab80
// Size: 196 bytes
// Signature: undefined __thiscall propagateTowardsChildren(AudioSource * this, uint param_1, uint param_2)


/* AudioSource::propagateTowardsChildren(unsigned int, unsigned int) */

void __thiscall AudioSource::propagateTowardsChildren(AudioSource *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  RawTransformGroup::propagateTowardsChildren((RawTransformGroup *)this,param_1,param_2);
  if ((param_1 & 0xc) != 0) {
    uVar1 = *(uint *)(this + 0x40);
    *(uint *)(this + 0x40) = uVar1 | 0x4000;
    if (((uVar1 >> 0xf & 1) == 0) &&
       ((((uVar1 ^ 0xffffffff) & 0x10002) == 0 || ((uVar1 >> 0xd & 1) != 0)))) {
      *(uint *)(this + 0x40) = uVar1 | 0xc000;
      CullingManager::addDirtyAudioSource
                ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    }
  }
  if ((param_1 & 3) != 0) {
    uVar1 = *(uint *)(this + 0x40);
    *(uint *)(this + 0x40) = uVar1 | 0x5000;
    if (((uVar1 >> 0xf & 1) == 0) &&
       ((((uVar1 ^ 0xffffffff) & 0x10002) == 0 || ((uVar1 >> 0xd & 1) != 0)))) {
      *(uint *)(this + 0x40) = uVar1 | 0xd000;
      CullingManager::addDirtyAudioSource
                ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
      return;
    }
  }
  return;
}


