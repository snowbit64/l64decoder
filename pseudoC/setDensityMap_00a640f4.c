// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDensityMap
// Entry Point: 00a640f4
// Size: 64 bytes
// Signature: undefined __thiscall setDensityMap(MultiLayer * this, DensityMap * param_1)


/* FoliageSystemDesc::MultiLayer::setDensityMap(DensityMap*) */

void __thiscall FoliageSystemDesc::MultiLayer::setDensityMap(MultiLayer *this,DensityMap *param_1)

{
  ResourceManager *this_00;
  
  if (param_1 != (DensityMap *)0x0) {
    FUN_00f276d0(1,param_1 + 8);
  }
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)this);
  *(DensityMap **)this = param_1;
  return;
}


