// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setJointTransforms
// Entry Point: 0075fc18
// Size: 232 bytes
// Signature: undefined __thiscall setJointTransforms(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setJointTransforms(MethodInvocation*) */

void __thiscall
JointConstructor::setJointTransforms(JointConstructor *this,MethodInvocation *param_1)

{
  EntityRegistryManager *pEVar1;
  long lVar2;
  undefined4 uVar3;
  
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(pEVar1,*(uint *)param_1);
  if (lVar2 != 0) {
    RawTransformGroup::updateWorldTransformation();
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(lVar2 + 0xb8);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(lVar2 + 0xbc);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(lVar2 + 0xc0);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar2 + 200);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(lVar2 + 0xcc);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(lVar2 + 0xd0);
    uVar3 = *(undefined4 *)(lVar2 + 0xf0);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(lVar2 + 0xe8);
    *(undefined4 *)(this + 0x48) = uVar3;
  }
  pEVar1 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(pEVar1,*(uint *)(param_1 + 0x10));
  if (lVar2 != 0) {
    RawTransformGroup::updateWorldTransformation();
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(lVar2 + 0xb8);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(lVar2 + 0xbc);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(lVar2 + 0xc0);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(lVar2 + 200);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(lVar2 + 0xcc);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(lVar2 + 0xd0);
    uVar3 = *(undefined4 *)(lVar2 + 0xf0);
    *(undefined8 *)(this + 0x4c) = *(undefined8 *)(lVar2 + 0xe8);
    *(undefined4 *)(this + 0x54) = uVar3;
  }
  *(undefined2 *)(this + 0x58) = 0x101;
  this[0x5a] = (JointConstructor)0x1;
  return;
}


