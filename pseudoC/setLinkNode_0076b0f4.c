// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLinkNode
// Entry Point: 0076b0f4
// Size: 48 bytes
// Signature: undefined __thiscall setLinkNode(TensionBeltGeometryConstructor * this, MethodInvocation * param_1)


/* TensionBeltGeometryConstructor::setLinkNode(MethodInvocation*) */

void __thiscall
TensionBeltGeometryConstructor::setLinkNode
          (TensionBeltGeometryConstructor *this,MethodInvocation *param_1)

{
  EntityRegistryManager *this_00;
  undefined8 uVar1;
  
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  uVar1 = EntityRegistryManager::getEntityById(this_00,*(uint *)param_1);
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}


