// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794b64
// Entry Point: 00794b64
// Size: 92 bytes
// Signature: undefined FUN_00794b64(void)


void FUN_00794b64(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  byte bVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_1);
  if ((((lVar1 == 0) || ((*(byte *)(lVar1 + 0x10) >> 5 & 1) == 0)) ||
      (lVar1 = RawTransformGroup::getPhysicsObject(), lVar1 == 0)) ||
     ((*(uint *)(lVar1 + 8) >> 3 & 1) == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)(*(uint *)(lVar1 + 8) >> 0xc) & 1;
  }
  *(byte *)(param_1 + 0x40) = bVar2;
  param_1[0x42] = 3;
  return;
}


