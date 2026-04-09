// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008b9270
// Size: 380 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WetDry::print() const */

void WetDry::print(void)

{
  int iVar1;
  float *in_x0;
  Logger *pLVar2;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b9314 to 008b931b has its CatchHandler @ 008b9418 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b9320 to 008b9323 has its CatchHandler @ 008b9408 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"WetDry::settings\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b9364 to 008b936b has its CatchHandler @ 008b9404 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b9370 to 008b9373 has its CatchHandler @ 008b93f4 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"\tinvert wet=%d\n",
                    (ulong)*(byte *)(in_x0 + 2));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b93b0 to 008b93b7 has its CatchHandler @ 008b93f0 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b93bc to 008b93bf has its CatchHandler @ 008b93ec */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)*in_x0,
                    (double)in_x0[1],"\twet=%.2f dry=%.2f\n");
  return;
}


