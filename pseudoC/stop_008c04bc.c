// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 008c04bc
// Size: 188 bytes
// Signature: undefined stop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamedSample::stop() */

bool StreamedSample::stop(void)

{
  char cVar1;
  int iVar2;
  long in_x0;
  Logger *this;
  
  cVar1 = *(char *)(in_x0 + 0x28);
  if (cVar1 == '\0') {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 008c0538 to 008c053f has its CatchHandler @ 008c0588 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 008c0544 to 008c0547 has its CatchHandler @ 008c0578 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Can\'t stop streamed sample, no file loaded.\n");
  }
  else if (*(long **)(in_x0 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x38) + 0x40))(0,0);
  }
  return cVar1 != '\0';
}


