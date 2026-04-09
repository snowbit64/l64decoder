// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00793e8c
// Entry Point: 00793e8c
// Size: 124 bytes
// Signature: undefined FUN_00793e8c(void)


void FUN_00793e8c(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,uVar2);
  if ((((lVar1 == 0) || ((*(byte *)(lVar1 + 0x11) >> 3 & 1) == 0)) ||
      (*(long *)(lVar1 + 0x170) == 0)) ||
     ((*(byte *)(*(long *)(lVar1 + 0x170) + 0x22) >> 6 & 1) == 0)) {
    param_1[0x40] = 0;
  }
  else {
    lVar1 = SplineGeometry::getSpline();
    param_1[0x40] = 0;
    param_1[0x42] = 4;
    if (lVar1 == 0) {
      return;
    }
    uVar2 = Spline::getLength();
    param_1[0x40] = uVar2;
  }
  param_1[0x42] = 4;
  return;
}


