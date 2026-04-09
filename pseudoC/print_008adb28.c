// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008adb28
// Size: 296 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DistortionSettings::print() const */

void DistortionSettings::print(void)

{
  int iVar1;
  uint *in_x0;
  Logger *pLVar2;
  undefined *puVar3;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008adbc4 to 008adbcb has its CatchHandler @ 008adc74 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008adbd0 to 008adbd3 has its CatchHandler @ 008adc64 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"DistortionSettings\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008adc14 to 008adc1b has its CatchHandler @ 008adc60 */
    pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008adc20 to 008adc23 has its CatchHandler @ 008adc50 */
    Logger::Logger(pLVar2);
    LogManager::getInstance()::singletonLogManager = pLVar2;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  if (*in_x0 < 9) {
    puVar3 = (&s_typeNames)[*in_x0];
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)(float)in_x0[1],
                    "\ttype=%s saturation=%.2f\n",puVar3);
  return;
}


