// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapHeightUpdater
// Entry Point: 0085c47c
// Size: 220 bytes
// Signature: undefined __thiscall ~DensityMapHeightUpdater(DensityMapHeightUpdater * this)


/* DensityMapHeightUpdater::~DensityMapHeightUpdater() */

void __thiscall DensityMapHeightUpdater::~DensityMapHeightUpdater(DensityMapHeightUpdater *this)

{
  int iVar1;
  UpdateManager *this_00;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xc68);
  *(undefined ***)this = &PTR__DensityMapHeightUpdater_00fdbd70;
  *(undefined ***)(this + 0x20) = &PTR__DensityMapHeightUpdater_00fdbda8;
  *(undefined ***)(this + 0x28) = &PTR__DensityMapHeightUpdater_00fdbdd8;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00f27700(0xffffffff,plVar2 + 1), iVar1 < 2)) {
                    /* try { // try from 0085c4dc to 0085c50b has its CatchHandler @ 0085c558 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  plVar2 = *(long **)(this + 0xc78);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
  }
  DensityMap::removeDirtyListener
            (*(DensityMap **)(*(long *)(this + 0xa40) + 0x50),(DirtyListener *)(this + 0x20));
  plVar2 = *(long **)(*(long *)(this + 0xa40) + 0x50);
  iVar1 = FUN_00f27700(0xffffffff,plVar2 + 1);
  if (iVar1 < 2) {
                    /* try { // try from 0085c530 to 0085c543 has its CatchHandler @ 0085c558 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x28));
  Entity::~Entity((Entity *)this);
  return;
}


