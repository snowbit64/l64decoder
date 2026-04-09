// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b18dc
// Entry Point: 007b18dc
// Size: 404 bytes
// Signature: undefined FUN_007b18dc(void)


void FUN_007b18dc(DensityMapSyncer *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  EntityRegistryManager *this;
  long lVar4;
  Logger *pLVar5;
  DensityMap *pDVar6;
  ulong uVar7;
  
  uVar2 = *param_2;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar4 = EntityRegistryManager::getEntityById(this,uVar2);
  if ((lVar4 != 0) && (uVar7 = *(ulong *)(lVar4 + 0x10), (uVar7 & 0xa00000000100) != 0)) {
    if ((uVar7 >> 0x2f & 1) == 0) {
      if (((uint)uVar7 >> 8 & 1) == 0) {
        pDVar6 = *(DensityMap **)(lVar4 + 0x20);
      }
      else {
        pDVar6 = *(DensityMap **)(lVar4 + 0x218);
      }
    }
    else {
      if (*(long *)(lVar4 + 0x40) != *(long *)(param_1 + 0x58)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 007b1a30 to 007b1a37 has its CatchHandler @ 007b1a7c */
          pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b1a3c to 007b1a3f has its CatchHandler @ 007b1a70 */
          Logger::Logger(pLVar5);
          LogManager::getInstance()::singletonLogManager = pLVar5;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        lVar1 = lVar4 + 0x29;
        if ((*(byte *)(lVar4 + 0x28) & 1) != 0) {
          lVar1 = *(long *)(lVar4 + 0x38);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Adding synced terrain detail \'%s\' with invalid terrain.\n",
                           lVar1);
        return;
      }
      pDVar6 = *(DensityMap **)(lVar4 + 0x50);
    }
    DensityMapSyncer::addDensityMap(param_1,pDVar6);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 007b19e0 to 007b19e7 has its CatchHandler @ 007b1a90 */
    pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 007b19ec to 007b19ef has its CatchHandler @ 007b1a80 */
    Logger::Logger(pLVar5);
    LogManager::getInstance()::singletonLogManager = pLVar5;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: Invalid density map syncer density map with id %u.\n",(ulong)uVar2);
  return;
}


