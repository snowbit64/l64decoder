// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: connectVRD
// Entry Point: 00baaf5c
// Size: 136 bytes
// Signature: undefined connectVRD(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsContextManager::connectVRD() */

void Bt2PhysicsContextManager::connectVRD(void)

{
  int iVar1;
  Logger *this;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00baafa4 to 00baafab has its CatchHandler @ 00baaff4 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 00baafb0 to 00baafb3 has its CatchHandler @ 00baafe4 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "Physics Visual Remote Debugger (VRD): Not supported\n");
  return;
}


