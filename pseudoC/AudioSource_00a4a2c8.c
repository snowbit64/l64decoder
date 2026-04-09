// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioSource
// Entry Point: 00a4a2c8
// Size: 124 bytes
// Signature: undefined __thiscall ~AudioSource(AudioSource * this)


/* AudioSource::~AudioSource() */

void __thiscall AudioSource::~AudioSource(AudioSource *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x40);
  *(undefined ***)this = &PTR__AudioSource_00fe33f8;
  if ((uVar1 >> 0xf & 1) != 0) {
                    /* try { // try from 00a4a2f0 to 00a4a323 has its CatchHandler @ 00a4a344 */
    CullingManager::removeDirtyAudioSource
              ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    *(uint *)(this + 0x40) = uVar1 & 0xffffdfff;
    CullingGrid2D::removeEntity
              ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x40),
               (CullingEntity *)(this + 0x154));
  }
  BoundingSphere::~BoundingSphere((BoundingSphere *)(this + 0x260));
  AudioSourceSample::~AudioSourceSample((AudioSourceSample *)(this + 0x158));
  TransformGroup::~TransformGroup((TransformGroup *)this);
  return;
}


