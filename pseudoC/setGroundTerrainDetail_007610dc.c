// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroundTerrainDetail
// Entry Point: 007610dc
// Size: 228 bytes
// Signature: undefined __thiscall setGroundTerrainDetail(FieldCropsUpdaterConstructor * this, MethodInvocation * param_1)


/* FieldCropsUpdaterConstructor::setGroundTerrainDetail(MethodInvocation*) */

void __thiscall
FieldCropsUpdaterConstructor::setGroundTerrainDetail
          (FieldCropsUpdaterConstructor *this,MethodInvocation *param_1)

{
  uint uVar1;
  int iVar2;
  EntityRegistryManager *this_00;
  long lVar3;
  Logger *this_01;
  
  uVar1 = *(uint *)param_1;
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar3 = EntityRegistryManager::getEntityById(this_00,uVar1);
  if ((lVar3 == 0) || (-1 < *(char *)(lVar3 + 0x15))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00761180 to 00761187 has its CatchHandler @ 007611d0 */
      this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 0076118c to 0076118f has its CatchHandler @ 007611c0 */
      Logger::Logger(this_01);
      LogManager::getInstance()::singletonLogManager = this_01;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid ground with id %u.\n",(ulong)uVar1);
  }
  else {
    *(long *)(this + 0x420) = lVar3;
    *(undefined4 *)(this + 0x428) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x42c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(this + 0x430) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(this + 0x434) = *(undefined4 *)(param_1 + 0x40);
  }
  return;
}


