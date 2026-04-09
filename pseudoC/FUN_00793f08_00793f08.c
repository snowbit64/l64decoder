// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00793f08
// Entry Point: 00793f08
// Size: 124 bytes
// Signature: undefined FUN_00793f08(void)


void FUN_00793f08(uint *param_1)

{
  uint uVar1;
  EntityRegistryManager *this;
  long lVar2;
  
  uVar1 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((((lVar2 == 0) || ((*(byte *)(lVar2 + 0x11) >> 3 & 1) == 0)) ||
      (*(long *)(lVar2 + 0x170) == 0)) ||
     ((*(byte *)(*(long *)(lVar2 + 0x170) + 0x22) >> 6 & 1) == 0)) {
    param_1[0x40] = 0;
  }
  else {
    lVar2 = SplineGeometry::getSpline();
    param_1[0x40] = 0;
    param_1[0x42] = 1;
    if (lVar2 == 0) {
      return;
    }
    uVar1 = Spline::getNumOfCV();
    param_1[0x40] = uVar1;
  }
  param_1[0x42] = 1;
  return;
}


