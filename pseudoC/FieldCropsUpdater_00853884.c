// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FieldCropsUpdater
// Entry Point: 00853884
// Size: 152 bytes
// Signature: undefined __thiscall ~FieldCropsUpdater(FieldCropsUpdater * this)


/* FieldCropsUpdater::~FieldCropsUpdater() */

void __thiscall FieldCropsUpdater::~FieldCropsUpdater(FieldCropsUpdater *this)

{
  long *plVar1;
  UpdateManager *this_00;
  ResourceManager *this_01;
  
  plVar1 = *(long **)(this + 0xd18);
  *(undefined ***)this = &PTR__FieldCropsUpdater_00fdbb68;
  *(undefined ***)(this + 0x20) = &PTR__FieldCropsUpdater_00fdbba0;
  *(undefined ***)(this + 0x30) = &PTR__FieldCropsUpdater_00fdbbc8;
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 008538d0 to 00853907 has its CatchHandler @ 0085391c */
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
  }
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x20));
  if (*(void **)(this + 0xcf8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xcf8));
  }
  DensityMap::removeDirtyListener(*(DensityMap **)(this + 0x38),(DirtyListener *)(this + 0x30));
  this_01 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_01,*(Resource **)(this + 0x38));
  Entity::~Entity((Entity *)this);
  return;
}


