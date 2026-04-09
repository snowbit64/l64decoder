// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LightSource
// Entry Point: 00a540a8
// Size: 124 bytes
// Signature: undefined __thiscall ~LightSource(LightSource * this)


/* LightSource::~LightSource() */

void __thiscall LightSource::~LightSource(LightSource *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x40);
  *(undefined ***)this = &PTR__LightSource_00fe3768;
  if ((uVar1 >> 0xf & 1) != 0) {
                    /* try { // try from 00a540d0 to 00a54103 has its CatchHandler @ 00a54124 */
    CullingManager::removeDirtyLightSource
              ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    uVar1 = *(uint *)(this + 0x40);
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    *(uint *)(this + 0x40) = uVar1 & 0xffffdfff;
    CullingGrid2D::removeEntity
              ((CullingGrid2D *)(CullingManager::s_cullingManagerInstance + 0x80),
               (CullingEntity *)(this + 0x154));
  }
  unmergeShadow();
  BoundingSphere::~BoundingSphere((BoundingSphere *)(this + 0x210));
  TransformGroup::~TransformGroup((TransformGroup *)this);
  return;
}


