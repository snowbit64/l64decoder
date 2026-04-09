// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRange
// Entry Point: 00a4a120
// Size: 160 bytes
// Signature: undefined __thiscall setRange(AudioSource * this, float param_1)


/* AudioSource::setRange(float) */

void __thiscall AudioSource::setRange(AudioSource *this,float param_1)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = (float)Sample::getMaxDistance();
  if (fVar2 != param_1) {
    uVar1 = *(uint *)(this + 0x40);
    *(uint *)(this + 0x40) = uVar1 | 0x5000;
    if (((uVar1 >> 0xf & 1) == 0) &&
       ((((uVar1 ^ 0xffffffff) & 0x10002) == 0 || ((uVar1 >> 0xd & 1) != 0)))) {
      *(uint *)(this + 0x40) = uVar1 | 0xd000;
      CullingManager::addDirtyAudioSource
                ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    }
    fVar2 = (float)Sample::getMinDistance();
    Sample::setMinMaxDistance((Sample *)(this + 0x158),fVar2,param_1);
    return;
  }
  return;
}


