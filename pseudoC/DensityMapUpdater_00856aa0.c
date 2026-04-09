// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapUpdater
// Entry Point: 00856aa0
// Size: 96 bytes
// Signature: undefined __thiscall ~DensityMapUpdater(DensityMapUpdater * this)


/* DensityMapUpdater::~DensityMapUpdater() */

void __thiscall DensityMapUpdater::~DensityMapUpdater(DensityMapUpdater *this)

{
  long *plVar1;
  UpdateManager *this_00;
  
  plVar1 = *(long **)(this + 0x1080);
  *(undefined ***)this = &PTR__DensityMapUpdater_00fdbc50;
  *(undefined ***)(this + 0x20) = &PTR__DensityMapUpdater_00fdbc78;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 00856adc to 00856aef has its CatchHandler @ 00856b00 */
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
  }
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x20));
  Entity::~Entity((Entity *)this);
  return;
}


