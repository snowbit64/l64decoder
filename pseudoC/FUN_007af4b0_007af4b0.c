// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007af4b0
// Entry Point: 007af4b0
// Size: 412 bytes
// Signature: undefined FUN_007af4b0(void)


void FUN_007af4b0(DensityMapUpdater *param_1,uint *param_2)

{
  int iVar1;
  EntityRegistryManager *this;
  long lVar2;
  Logger *pLVar3;
  DensityMap *pDVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *param_2;
  if (uVar5 == 0) {
    pDVar4 = (DensityMap *)0x0;
    uVar5 = 0;
    uVar6 = 0;
LAB_007af524:
    DensityMapUpdater::setUpdateMask(param_1,pDVar4,uVar5,uVar6);
    return;
  }
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,uVar5);
  if ((lVar2 == 0) || (-1 < *(char *)(lVar2 + 0x10))) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007af5bc to 007af5c3 has its CatchHandler @ 007af66c */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 007af5c8 to 007af5cb has its CatchHandler @ 007af65c */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Invalid terrain id %u.\n",(ulong)uVar5);
  }
  else {
    lVar2 = BaseTerrain::findInfoLayer((BaseTerrain *)(lVar2 + 0x170),*(char **)(param_2 + 4));
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x38) != 0)) {
      pDVar4 = *(DensityMap **)(*(long *)(lVar2 + 0x38) + 0x20);
      uVar5 = param_2[8];
      uVar6 = param_2[0xc];
      goto LAB_007af524;
    }
    DensityMapUpdater::setUpdateMask(param_1,(DensityMap *)0x0,0,0);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 007af60c to 007af613 has its CatchHandler @ 007af658 */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 007af618 to 007af61b has its CatchHandler @ 007af64c */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to find update mask info layer \'%s\'.\n",
                       *(undefined8 *)(param_2 + 4));
  }
  return;
}


