// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainLayerTransformGroup
// Entry Point: 00a732c4
// Size: 324 bytes
// Signature: undefined __thiscall ~TerrainLayerTransformGroup(TerrainLayerTransformGroup * this)


/* TerrainLayerTransformGroup::~TerrainLayerTransformGroup() */

void __thiscall
TerrainLayerTransformGroup::~TerrainLayerTransformGroup(TerrainLayerTransformGroup *this)

{
  long lVar1;
  byte bVar2;
  MaterialManager *this_00;
  ResourceManager *pRVar3;
  long lVar4;
  long lVar5;
  
  *(undefined ***)this = &PTR__TerrainLayerTransformGroup_00fe3fc8;
  *(undefined ***)(this + 0x158) = &PTR__TerrainLayerTransformGroup_00fe4078;
  *(undefined ***)(this + 0x1e0) = &PTR__TerrainLayerTransformGroup_00fe40a0;
  *(undefined ***)(this + 0x1f0) = &PTR__TerrainLayerTransformGroup_00fe40d0;
  if (*(long **)(this + 0x648) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x648) + 8))();
  }
  if (*(long **)(this + 0x650) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x650) + 8))();
  }
  if (*(long *)(this + 0x638) != 0) {
                    /* try { // try from 00a73334 to 00a7333f has its CatchHandler @ 00a73408 */
    this_00 = (MaterialManager *)MaterialManager::getInstance();
    MaterialManager::releaseMaterial(this_00,*(GsMaterial **)(this + 0x638));
  }
  lVar5 = *(long *)(this + 0x720);
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar5 + -8);
    if (lVar4 != 0) {
      lVar4 = lVar4 * 0x38;
      do {
        lVar1 = lVar5 + lVar4;
        if ((*(byte *)(lVar1 + -0x20) & 1) == 0) {
          bVar2 = *(byte *)(lVar1 + -0x38);
        }
        else {
          operator_delete(*(void **)(lVar1 + -0x10));
          bVar2 = *(byte *)(lVar1 + -0x38);
        }
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(lVar5 + lVar4 + -0x28));
        }
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
    }
    operator_delete__((long *)(lVar5 + -8));
  }
  if (*(long *)(this + 0x6c0) != 0) {
                    /* try { // try from 00a733b0 to 00a733cf has its CatchHandler @ 00a7340c */
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar3,*(Resource **)(this + 0x6c0));
  }
  if (*(long *)(this + 0x6c8) != 0) {
    pRVar3 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar3,*(Resource **)(this + 0x6c8));
  }
  if (((byte)this[0x678] & 1) != 0) {
    operator_delete(*(void **)(this + 0x688));
  }
  if (((byte)this[0x660] & 1) != 0) {
    operator_delete(*(void **)(this + 0x670));
  }
  TerrainDetailTransformGroup::~TerrainDetailTransformGroup((TerrainDetailTransformGroup *)this);
  return;
}


