// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mainLoop
// Entry Point: 006ed8f0
// Size: 164 bytes
// Signature: undefined mainLoop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidActivity::mainLoop() */

ulong AndroidActivity::mainLoop(void)

{
  int iVar1;
  ulong uVar2;
  Logger *this;
  
  uVar2 = gsMain(0,(char **)0x0);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 006ed954 to 006ed95b has its CatchHandler @ 006ed9a4 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 006ed960 to 006ed963 has its CatchHandler @ 006ed994 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "AndroidActivity: quitting with code %d\n",uVar2 & 0xffffffff);
  return uVar2 & 0xffffffff;
}


