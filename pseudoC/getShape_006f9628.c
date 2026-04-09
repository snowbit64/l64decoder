// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShape
// Entry Point: 006f9628
// Size: 56 bytes
// Signature: undefined getShape(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BillboardShape::getShape() */

long BillboardShape::getShape(void)

{
  long in_x0;
  EntityRegistryManager *this;
  long lVar1;
  long lVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*(uint *)(in_x0 + 0xc));
  lVar2 = lVar1;
  if ((lVar1 != 0) && (lVar2 = 0, (*(byte *)(lVar1 + 0x11) & 8) != 0)) {
    lVar2 = lVar1;
  }
  return lVar2;
}


