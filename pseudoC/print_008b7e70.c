// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008b7e70
// Size: 404 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BandDistortion::print() const */

void BandDistortion::print(void)

{
  int iVar1;
  Logger *pLVar2;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b7f2c to 008b7f33 has its CatchHandler @ 008b8030 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b7f38 to 008b7f3b has its CatchHandler @ 008b8020 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"== BandDistortion ==\n"
                   );
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b7f7c to 008b7f83 has its CatchHandler @ 008b801c */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b7f88 to 008b7f8b has its CatchHandler @ 008b800c */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"Low Pass Filter\n");
  BiquadResonantFilter::print();
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008b7fc8 to 008b7fcf has its CatchHandler @ 008b8008 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008b7fd4 to 008b7fd7 has its CatchHandler @ 008b8004 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"High Pass Filter\n");
  BiquadResonantFilter::print();
  Distortion::print();
  Distortion::print();
  Distortion::print();
  return;
}


