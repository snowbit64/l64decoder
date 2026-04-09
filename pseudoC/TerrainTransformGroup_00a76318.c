// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainTransformGroup
// Entry Point: 00a76318
// Size: 348 bytes
// Signature: undefined __thiscall ~TerrainTransformGroup(TerrainTransformGroup * this)


/* WARNING: Type propagation algorithm not settling */
/* TerrainTransformGroup::~TerrainTransformGroup() */

void __thiscall TerrainTransformGroup::~TerrainTransformGroup(TerrainTransformGroup *this)

{
  TerrainTransformGroup TVar1;
  UpdateRenderingManager *this_00;
  MaterialManager *pMVar2;
  void *pvVar3;
  long **pplVar4;
  FoliageSystem *this_01;
  long **pplVar5;
  
  *(undefined ***)this = &PTR__TerrainTransformGroup_00fe4280;
  *(undefined ***)(this + 0x158) = &PTR__TerrainTransformGroup_00fe42d8;
  *(undefined ***)(this + 0x160) = &PTR__TerrainTransformGroup_00fe4300;
  if (this[0x445] != (TerrainTransformGroup)0x0) {
                    /* try { // try from 00a76354 to 00a76383 has its CatchHandler @ 00a76474 */
    this_00 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
    UpdateRenderingManager::removeUpdateableRendered(this_00,(UpdateableRendered *)(this + 0x158));
  }
  pMVar2 = (MaterialManager *)MaterialManager::getInstance();
  MaterialManager::releaseMaterial(pMVar2,*(GsMaterial **)(this + 0x4c8));
  pMVar2 = (MaterialManager *)MaterialManager::getInstance();
  MaterialManager::releaseMaterial(pMVar2,*(GsMaterial **)(this + 0x4d0));
  pMVar2 = (MaterialManager *)MaterialManager::getInstance();
  MaterialManager::releaseMaterial(pMVar2,*(GsMaterial **)(this + 0x4d8));
  pplVar5 = *(long ***)(this + 0x548);
  for (pplVar4 = *(long ***)(this + 0x540); pplVar4 != pplVar5; pplVar4 = pplVar4 + 1) {
    if (*pplVar4 != (long *)0x0) {
      (**(code **)(**pplVar4 + 8))();
    }
  }
  this_01 = *(FoliageSystem **)(this + 0x558);
  if (this_01 != (FoliageSystem *)0x0) {
    FoliageSystem::~FoliageSystem(this_01);
    operator_delete(this_01);
  }
  pvVar3 = *(void **)(this + 0x540);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x548) = pvVar3;
    operator_delete(pvVar3);
  }
  if (((byte)this[0x4b0] & 1) == 0) {
    TVar1 = this[0x498];
  }
  else {
    operator_delete(*(void **)(this + 0x4c0));
    TVar1 = this[0x498];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x480];
  }
  else {
    operator_delete(*(void **)(this + 0x4a8));
    TVar1 = this[0x480];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x468];
  }
  else {
    operator_delete(*(void **)(this + 0x490));
    TVar1 = this[0x468];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x450];
  }
  else {
    operator_delete(*(void **)(this + 0x478));
    TVar1 = this[0x450];
  }
  if (((byte)TVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x460));
  }
  GeoMipMappingTerrain::~GeoMipMappingTerrain((GeoMipMappingTerrain *)(this + 0x170));
  Streamable::~Streamable((Streamable *)(this + 0x160));
  TransformGroup::~TransformGroup((TransformGroup *)this);
  return;
}


