// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FoliageBendingSystem
// Entry Point: 008d47b8
// Size: 348 bytes
// Signature: undefined __thiscall ~FoliageBendingSystem(FoliageBendingSystem * this)


/* FoliageBendingSystem::~FoliageBendingSystem() */

void __thiscall FoliageBendingSystem::~FoliageBendingSystem(FoliageBendingSystem *this)

{
  UpdateRenderingManager *this_00;
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(undefined ***)this = &PTR__FoliageBendingSystem_00fde0c8;
  *(undefined ***)(this + 0x20) = &PTR__FoliageBendingSystem_00fde100;
  *(undefined ***)(this + 0x28) = &PTR__FoliageBendingSystem_00fde128;
                    /* try { // try from 008d47f8 to 008d4803 has its CatchHandler @ 008d4914 */
  this_00 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
  UpdateRenderingManager::removeUpdateableRendered(this_00,(UpdateableRendered *)(this + 0x20));
  if (*(void **)(this + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x30));
  }
  lVar2 = *(long *)(this + 0x78);
  if (*(long *)(this + 0x80) != lVar2) {
    uVar5 = 0;
    do {
                    /* try { // try from 008d4824 to 008d482b has its CatchHandler @ 008d491c */
      FoliageTransformGroup::setFoliageBendingSystem
                (*(FoliageTransformGroup **)(lVar2 + uVar5 * 8),(FoliageBendingSystem *)0x0);
      lVar2 = *(long *)(this + 0x78);
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(this + 0x80) - lVar2 >> 3));
  }
  pvVar3 = *(void **)(this + 0x4d0);
  if (pvVar3 != *(void **)(this + 0x4c8)) {
    uVar5 = 0;
    pvVar3 = *(void **)(this + 0x4c8);
    do {
                    /* try { // try from 008d488c to 008d4893 has its CatchHandler @ 008d4918 */
      DensityMap::removeDirtyListener
                (*(DensityMap **)((long)pvVar3 + uVar5 * 0x28),(DirtyListener *)(this + 0x28));
      pvVar3 = *(void **)(this + 0x4c8);
      pvVar1 = *(void **)((long)pvVar3 + uVar5 * 0x28 + 0x20);
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
        pvVar3 = *(void **)(this + 0x4c8);
      }
      uVar5 = (ulong)((int)uVar5 + 1);
      uVar4 = (*(long *)(this + 0x4d0) - (long)pvVar3 >> 3) * -0x3333333333333333;
    } while (uVar5 <= uVar4 && uVar4 - uVar5 != 0);
  }
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x4d0) = pvVar3;
    operator_delete(pvVar3);
  }
  DensityAnimationMap::~DensityAnimationMap((DensityAnimationMap *)(this + 0x98));
  pvVar3 = *(void **)(this + 0x78);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x60);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x48);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar3;
    operator_delete(pvVar3);
  }
  Entity::~Entity((Entity *)this);
  return;
}


