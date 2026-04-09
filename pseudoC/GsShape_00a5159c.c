// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsShape
// Entry Point: 00a5159c
// Size: 248 bytes
// Signature: undefined __thiscall ~GsShape(GsShape * this)


/* GsShape::~GsShape() */

void __thiscall GsShape::~GsShape(GsShape *this)

{
  MaterialManager *pMVar1;
  uint uVar2;
  GsMaterial *pGVar3;
  ulong uVar4;
  
  *(undefined ***)this = &PTR__GsShape_00fe3618;
  *(undefined ***)(this + 0x158) = &PTR__GsShape_00fe3688;
  *(undefined ***)(this + 0x160) = &PTR__GsShape_00fe36b0;
  if (*(void **)(this + 0x180) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x180));
  }
  if (*(short *)(this + 0x196) != 0) {
    if (*(short *)(this + 0x196) == 1) {
      pGVar3 = *(GsMaterial **)(this + 0x178);
                    /* try { // try from 00a515e8 to 00a515f3 has its CatchHandler @ 00a51694 */
      pMVar1 = (MaterialManager *)MaterialManager::getInstance();
      MaterialManager::releaseMaterial(pMVar1,pGVar3);
      goto LAB_00a51628;
    }
    uVar4 = 0;
    do {
                    /* try { // try from 00a515fc to 00a5160b has its CatchHandler @ 00a5169c */
      pMVar1 = (MaterialManager *)MaterialManager::getInstance();
      MaterialManager::releaseMaterial(pMVar1,*(GsMaterial **)(*(long *)(this + 0x178) + uVar4 * 8))
      ;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(this + 0x196));
  }
  if (*(void **)(this + 0x178) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x178));
  }
LAB_00a51628:
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined2 *)(this + 0x196) = 0;
                    /* try { // try from 00a51630 to 00a5167b has its CatchHandler @ 00a51698 */
  setGeometry(this,(Geometry *)0x0);
  uVar2 = *(uint *)(this + 0x40);
  if ((uVar2 >> 0xf & 1) != 0) {
    *(uint *)(this + 0x40) = uVar2 & 0xffff7fff;
    CullingManager::removeDirtyShape
              ((CullingManager *)CullingManager::s_cullingManagerInstance,this);
    uVar2 = *(uint *)(this + 0x40);
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    *(uint *)(this + 0x40) = uVar2 & 0xffffdfff;
    CullingGrid2D::removeEntity
              ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,
               (CullingEntity *)(this + 0x168));
  }
  BoundingSphere::~BoundingSphere((BoundingSphere *)(this + 0x198));
  TransformGroup::~TransformGroup((TransformGroup *)this);
  return;
}


