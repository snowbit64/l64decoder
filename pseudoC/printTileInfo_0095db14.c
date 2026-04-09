// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printTileInfo
// Entry Point: 0095db14
// Size: 468 bytes
// Signature: undefined printTileInfo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MultiresTexture::GridLayer::printTileInfo() */

void MultiresTexture::GridLayer::printTileInfo(void)

{
  int iVar1;
  long in_x0;
  Logger *pLVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(in_x0 + 0x14) != 0) {
    uVar4 = 0;
    do {
      uVar3 = 0;
      do {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 0095dbc8 to 0095dbcf has its CatchHandler @ 0095dd20 */
          pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0095dbd0 to 0095dbd7 has its CatchHandler @ 0095dd10 */
          Logger::Logger(pLVar2);
          LogManager::getInstance()::singletonLogManager = pLVar2;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004e06ef,
                          (ulong)(byte)(&DAT_00519cf6)
                                       [*(byte *)(*(long *)(in_x0 + 0x68) +
                                                 (ulong)(uVar3 + uVar4 * *(int *)(in_x0 + 0x58)))]);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(in_x0 + 0x14));
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0095dc30 to 0095dc37 has its CatchHandler @ 0095dd0c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0095dc3c to 0095dc3f has its CatchHandler @ 0095dcfc */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004fddf9);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(in_x0 + 0x14));
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0095dca8 to 0095dcaf has its CatchHandler @ 0095dcf8 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0095dcb4 to 0095dcb7 has its CatchHandler @ 0095dce8 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004fddf9);
  return;
}


