// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007940b0
// Entry Point: 007940b0
// Size: 100 bytes
// Signature: undefined FUN_007940b0(void)


void FUN_007940b0(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  Spline *this_00;
  uint uVar2;
  
  uVar2 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,uVar2);
  if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x11) >> 3 & 1) != 0)) &&
      (*(long *)(lVar1 + 0x170) != 0)) &&
     (((*(byte *)(*(long *)(lVar1 + 0x170) + 0x22) >> 6 & 1) != 0 &&
      (this_00 = (Spline *)SplineGeometry::getSpline(), this_00 != (Spline *)0x0)))) {
    uVar2 = Spline::getTimeAtCV(this_00,param_1[4]);
    param_1[0x40] = uVar2;
    param_1[0x42] = 4;
  }
  return;
}


