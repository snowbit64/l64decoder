// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008b8df0
// Size: 356 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Equalizer::print() const */

void Equalizer::print(void)

{
  int iVar1;
  long *in_x0;
  Logger *pLVar2;
  long lVar3;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b8ec8 to 008b8ecf has its CatchHandler @ 008b8f78 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b8ed4 to 008b8ed7 has its CatchHandler @ 008b8f68 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "== Equalizer Settings ==\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b8f18 to 008b8f1f has its CatchHandler @ 008b8f64 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b8f24 to 008b8f27 has its CatchHandler @ 008b8f54 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"\tNum bands: %d\n",
                    (ulong)(uint)((int)((ulong)(in_x0[1] - *in_x0) >> 3) * -0x49249249));
  if (0 < (int)((ulong)(in_x0[1] - *in_x0) >> 3) * -0x49249249) {
    lVar3 = 0;
    do {
      BiquadResonantFilter::print();
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)((ulong)(in_x0[1] - *in_x0) >> 3) * -0x49249249);
  }
  return;
}


