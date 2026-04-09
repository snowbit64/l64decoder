// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFixedPoints
// Entry Point: 0076b0b4
// Size: 64 bytes
// Signature: undefined __thiscall setFixedPoints(TensionBeltGeometryConstructor * this, MethodInvocation * param_1)


/* TensionBeltGeometryConstructor::setFixedPoints(MethodInvocation*) */

void __thiscall
TensionBeltGeometryConstructor::setFixedPoints
          (TensionBeltGeometryConstructor *this,MethodInvocation *param_1)

{
  EntityRegistryManager *pEVar1;
  undefined8 uVar2;
  
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  uVar2 = EntityRegistryManager::getEntityById(pEVar1,*(uint *)param_1);
  *(undefined8 *)(this + 0x28) = uVar2;
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  uVar2 = EntityRegistryManager::getEntityById(pEVar1,*(uint *)(param_1 + 0x10));
  *(undefined8 *)(this + 0x30) = uVar2;
  return;
}


