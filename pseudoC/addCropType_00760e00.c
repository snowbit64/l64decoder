// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCropType
// Entry Point: 00760e00
// Size: 696 bytes
// Signature: undefined __thiscall addCropType(FieldCropsUpdaterConstructor * this, MethodInvocation * param_1)


/* FieldCropsUpdaterConstructor::addCropType(MethodInvocation*) */

void __thiscall
FieldCropsUpdaterConstructor::addCropType
          (FieldCropsUpdaterConstructor *this,MethodInvocation *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  MethodInvocation MVar6;
  int iVar7;
  EntityRegistryManager *this_00;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  uVar1 = *(uint *)param_1;
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar8 = EntityRegistryManager::getEntityById(this_00,uVar1);
  if ((lVar8 == 0) || ((*(byte *)(lVar8 + 0x16) >> 1 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00760fa8 to 00760fb3 has its CatchHandler @ 007610c4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid foliage with id %u.\n",(ulong)uVar1);
  }
  else {
    uVar1 = *(int *)(lVar8 + 0x80) - 1;
    if (uVar1 < 0x20) {
      uVar2 = *(uint *)(lVar8 + 0xa0);
      if (1 < uVar2) {
        uVar12 = *(uint *)(param_1 + 0x10);
        uVar14 = *(undefined4 *)(param_1 + 0x20);
        MVar6 = param_1[0x30];
        uVar3 = *(uint *)(param_1 + 0x40);
        uVar4 = *(undefined4 *)(param_1 + 0x50);
        uVar5 = *(undefined4 *)(param_1 + 0x60);
        if (uVar2 < uVar12) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar7 != 0)) {
                    /* try { // try from 00761080 to 0076108b has its CatchHandler @ 007610b8 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                            "Warning: Num growth states is bigger than the available foliage states for %s. Limiting to %u.\n"
                            ,*(undefined8 *)(lVar8 + 8),(ulong)uVar2);
          uVar12 = uVar2;
        }
        uVar10 = *(undefined8 *)(lVar8 + 0x50);
        uVar13 = *(undefined8 *)(lVar8 + 0xa4);
        plVar11 = (long *)(this + 8);
        *plVar11 = *(long *)(lVar8 + 0x40) + 0x170;
        *(undefined8 *)(this + 0x10) = uVar10;
        uVar2 = *(uint *)(this + 0x18);
        *(undefined8 *)((long)plVar11 + (ulong)uVar1 * 0x20 + 0x1c) = uVar13;
        *(uint *)((long)plVar11 + (ulong)uVar1 * 0x20 + 0x14) = uVar12;
        *(undefined4 *)(plVar11 + (ulong)uVar1 * 4 + 3) = uVar14;
        *(MethodInvocation *)((long)plVar11 + (ulong)uVar1 * 0x20 + 0x24) = MVar6;
        *(uint *)(plVar11 + (ulong)uVar1 * 4 + 5) = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
        *(undefined4 *)((long)plVar11 + (ulong)uVar1 * 0x20 + 0x2c) = uVar4;
        *(undefined4 *)(plVar11 + (ulong)uVar1 * 4 + 6) = uVar5;
        if (uVar1 <= uVar2) {
          return;
        }
        *(uint *)(this + 0x18) = uVar1;
        return;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00761038 to 00761043 has its CatchHandler @ 007610bc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar10 = *(undefined8 *)(lVar8 + 8);
      pcVar9 = "Error: Invalid foliage with no states %s.\n";
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0))
      {
                    /* try { // try from 00760ff0 to 00760ffb has its CatchHandler @ 007610c0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar10 = *(undefined8 *)(lVar8 + 8);
      pcVar9 = "Error: Invalid foliage type index %s.\n";
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar9,uVar10);
  }
  return;
}


