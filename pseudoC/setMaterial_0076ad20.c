// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaterial
// Entry Point: 0076ad20
// Size: 60 bytes
// Signature: undefined __thiscall setMaterial(TensionBeltGeometryConstructor * this, MethodInvocation * param_1)


/* TensionBeltGeometryConstructor::setMaterial(MethodInvocation*) */

void __thiscall
TensionBeltGeometryConstructor::setMaterial
          (TensionBeltGeometryConstructor *this,MethodInvocation *param_1)

{
  EntityRegistryManager *this_00;
  long lVar1;
  
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this_00,*(uint *)param_1);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x13) >> 1 & 1) != 0)) {
    *(long *)(this + 0x40) = lVar1;
  }
  return;
}


