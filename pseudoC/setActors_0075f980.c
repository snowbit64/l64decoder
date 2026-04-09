// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setActors
// Entry Point: 0075f980
// Size: 628 bytes
// Signature: undefined __thiscall setActors(JointConstructor * this, MethodInvocation * param_1)


/* JointConstructor::setActors(MethodInvocation*) */

void __thiscall JointConstructor::setActors(JointConstructor *this,MethodInvocation *param_1)

{
  int iVar1;
  EntityRegistryManager *pEVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pEVar2 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(pEVar2,*(uint *)param_1);
  if (lVar3 != 0) {
    if (((*(byte *)(lVar3 + 0x10) >> 5 & 1) == 0) ||
       (lVar4 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar4 + 8) >> 3 & 1) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0075fae4 to 0075faef has its CatchHandler @ 0075fc00 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar7 = *(undefined8 *)(lVar3 + 8);
      pcVar6 = "Error: Joint actor \'%s\' is not a rigid body.\n";
    }
    else {
      lVar4 = RawTransformGroup::getPhysicsObject();
      if ((*(byte *)(lVar4 + 8) & 3) != 0) {
        *(long *)this = lVar3;
        goto LAB_0075f9f0;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0075fb74 to 0075fb7f has its CatchHandler @ 0075fbf8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar7 = *(undefined8 *)(lVar3 + 8);
      pcVar6 = "Error: Joint actor \'%s\' is not added to the physics.\n";
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar6,uVar7);
  }
LAB_0075f9f0:
  pEVar2 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar4 = EntityRegistryManager::getEntityById(pEVar2,*(uint *)(param_1 + 0x10));
  if (lVar4 != 0) {
    if (((*(byte *)(lVar4 + 0x10) >> 5 & 1) == 0) ||
       (lVar5 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar5 + 8) >> 3 & 1) == 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0075fb2c to 0075fb37 has its CatchHandler @ 0075fbfc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar7 = *(undefined8 *)(lVar4 + 8);
      pcVar6 = "Error: Joint actor \'%s\' is not a rigid body.\n";
    }
    else {
      lVar5 = RawTransformGroup::getPhysicsObject();
      if ((*(byte *)(lVar5 + 8) & 3) != 0) {
        *(long *)(this + 8) = lVar4;
        return;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0075fbbc to 0075fbc7 has its CatchHandler @ 0075fbf4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar7 = *(undefined8 *)(lVar3 + 8);
      pcVar6 = "Error: Joint actor \'%s\' is not added to the physics.\n";
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar6,uVar7);
  }
  return;
}


