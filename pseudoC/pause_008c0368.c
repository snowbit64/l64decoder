// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pause
// Entry Point: 008c0368
// Size: 292 bytes
// Signature: undefined pause(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamedSample::pause() */

undefined8 StreamedSample::pause(void)

{
  int iVar1;
  long in_x0;
  Logger *pLVar2;
  char *pcVar3;
  
  if (*(char *)(in_x0 + 0x28) == '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008c03fc to 008c0403 has its CatchHandler @ 008c04a4 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c0408 to 008c040b has its CatchHandler @ 008c0494 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "Error: Can\'t pause, no streamed sampled file loaded.\n";
  }
  else {
    if (*(long **)(in_x0 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(in_x0 + 0x38) + 0x38))();
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 008c044c to 008c0453 has its CatchHandler @ 008c0490 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 008c0458 to 008c045b has its CatchHandler @ 008c048c */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar3 = "Error: Streamed sampled pause\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar3);
  return 0;
}


