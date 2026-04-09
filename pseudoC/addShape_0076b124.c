// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addShape
// Entry Point: 0076b124
// Size: 304 bytes
// Signature: undefined __thiscall addShape(TensionBeltGeometryConstructor * this, MethodInvocation * param_1)


/* TensionBeltGeometryConstructor::addShape(MethodInvocation*) */

void __thiscall
TensionBeltGeometryConstructor::addShape
          (TensionBeltGeometryConstructor *this,MethodInvocation *param_1)

{
  long lVar1;
  int iVar2;
  EntityRegistryManager *this_00;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this_00,*(uint *)param_1);
  uVar5 = (uint)*(undefined8 *)(lVar3 + 0x10);
  if ((uVar5 >> 0xb & 1) != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    uVar8 = *(undefined4 *)(param_1 + 0x30);
    uVar9 = *(undefined4 *)(param_1 + 0x40);
    if ((uVar5 >> 0x12 & 1) == 0) {
      lVar4 = Geometry::getCollisionProxyMesh();
      if ((*(byte *)(lVar4 + 0x8d) & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 0076b218 to 0076b223 has its CatchHandler @ 0076b254 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Could not add shape \'%s\' (%s) to tension belts due to the missing CPU mesh flag.\n"
                          ,*(undefined8 *)(lVar3 + 8),
                          *(undefined8 *)(*(long *)(lVar3 + 0x170) + 0x18));
        goto LAB_0076b1dc;
      }
    }
    local_70 = lVar3;
    local_68 = uVar6;
    uStack_64 = uVar7;
    local_60 = uVar8;
    uStack_5c = uVar9;
    FUN_0076b26c(this + 0x48,&local_70);
  }
LAB_0076b1dc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


