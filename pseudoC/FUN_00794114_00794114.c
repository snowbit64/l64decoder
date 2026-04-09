// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794114
// Entry Point: 00794114
// Size: 132 bytes
// Signature: undefined FUN_00794114(void)


void FUN_00794114(uint *param_1)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this;
  long lVar3;
  
  uVar1 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this,uVar1);
  if ((((lVar3 == 0) || ((*(byte *)(lVar3 + 0x11) >> 3 & 1) == 0)) ||
      (*(long *)(lVar3 + 0x170) == 0)) ||
     ((*(byte *)(*(long *)(lVar3 + 0x170) + 0x22) >> 6 & 1) == 0)) {
    *(undefined *)(param_1 + 0x40) = 0;
  }
  else {
    lVar3 = SplineGeometry::getSpline();
    *(undefined *)(param_1 + 0x40) = 0;
    param_1[0x42] = 3;
    if (lVar3 == 0) {
      return;
    }
    iVar2 = Spline::getForm();
    *(bool *)(param_1 + 0x40) = iVar2 == 1;
  }
  param_1[0x42] = 3;
  return;
}


