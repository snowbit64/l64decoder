// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiLayer
// Entry Point: 00a64078
// Size: 104 bytes
// Signature: undefined __thiscall MultiLayer(MultiLayer * this, DensityMap * param_1)


/* FoliageSystemDesc::MultiLayer::MultiLayer(DensityMap*) */

void __thiscall FoliageSystemDesc::MultiLayer::MultiLayer(MultiLayer *this,DensityMap *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ResourceManager *this_00;
  long lVar3;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_1 != (DensityMap *)0x0) {
    FUN_00f276d0(1,param_1 + 8);
  }
                    /* try { // try from 00a640a4 to 00a640c3 has its CatchHandler @ 00a640e0 */
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)this);
  lVar3 = *(long *)param_1;
  *(DensityMap **)this = param_1;
  iVar2 = (**(code **)(lVar3 + 0x60))(param_1);
  uVar1 = 1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(this + 0x20) = uVar1;
  return;
}


