// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 008ab7f0
// Size: 160 bytes
// Signature: undefined print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BiquadResonantFilter::Settings::print() const */

void BiquadResonantFilter::Settings::print(void)

{
  int iVar1;
  float *in_x0;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008ab850 to 008ab857 has its CatchHandler @ 008ab8a0 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 008ab85c to 008ab85f has its CatchHandler @ 008ab890 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)*in_x0,
                    (double)in_x0[1],(double)in_x0[2],"\tfrequency=%.2f gain=%.2f quality=%.2f\n");
  return;
}


