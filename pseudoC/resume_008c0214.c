// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resume
// Entry Point: 008c0214
// Size: 292 bytes
// Signature: undefined resume(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamedSample::resume() */

undefined8 StreamedSample::resume(void)

{
  int iVar1;
  long in_x0;
  Logger *pLVar2;
  char *pcVar3;
  
  if (*(char *)(in_x0 + 0x28) == '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008c02a8 to 008c02af has its CatchHandler @ 008c0350 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c02b4 to 008c02b7 has its CatchHandler @ 008c0340 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "Error: Can\'t play, no streamed sample music file loaded.\n";
  }
  else {
    if (*(long **)(in_x0 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x38) + 0x48))();
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008c02f8 to 008c02ff has its CatchHandler @ 008c033c */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c0304 to 008c0307 has its CatchHandler @ 008c0338 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "Error: Streamed sampled resume.\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar3);
  return 0;
}


