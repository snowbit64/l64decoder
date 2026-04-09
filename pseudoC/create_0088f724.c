// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: create
// Entry Point: 0088f724
// Size: 120 bytes
// Signature: undefined __thiscall create(DensityMapEntity * this, DensityMapDesc * param_1)


/* DensityMapEntity::create(DensityMapDesc const&) */

void __thiscall DensityMapEntity::create(DensityMapEntity *this,DensityMapDesc *param_1)

{
  ResourceManager *pRVar1;
  DensityMap *this_00;
  
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x20));
  *(undefined8 *)(this + 0x20) = 0;
  this_00 = (DensityMap *)operator_new(0x108);
                    /* try { // try from 0088f758 to 0088f76b has its CatchHandler @ 0088f79c */
  DensityMap::DensityMap(this_00,"",1,param_1);
  *(DensityMap **)(this + 0x20) = this_00;
  FUN_00f276d0(1,this_00 + 8);
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::add(pRVar1,*(Resource **)(this + 0x20),(ResourceDesc *)0x0,false);
  return;
}


