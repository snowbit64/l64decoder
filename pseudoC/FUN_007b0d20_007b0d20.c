// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0d20
// Entry Point: 007b0d20
// Size: 232 bytes
// Signature: undefined FUN_007b0d20(void)


void FUN_007b0d20(FieldCropsUpdater *param_1,uint *param_2)

{
  int iVar1;
  EntityRegistryManager *this;
  long lVar2;
  Logger *this_00;
  uint uVar3;
  
  uVar3 = *param_2;
  param_2[0x40] = 0;
  param_2[0x42] = 4;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,uVar3);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x16) >> 1 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007b0dc8 to 007b0dcf has its CatchHandler @ 007b0e18 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b0dd4 to 007b0dd7 has its CatchHandler @ 007b0e08 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid foliage with id %u.\n",(ulong)uVar3);
  }
  else {
    uVar3 = FieldCropsUpdater::getGrowthStateTime(param_1,*(int *)(lVar2 + 0x80) - 1);
    param_2[0x40] = uVar3;
    param_2[0x42] = 4;
  }
  return;
}


