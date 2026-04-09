// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079e918
// Entry Point: 0079e918
// Size: 168 bytes
// Signature: undefined FUN_0079e918(void)


void FUN_0079e918(long param_1,undefined8 *param_2)

{
  int iVar1;
  Logger *this;
  
  if (param_2[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0079e940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x18))((long *)(param_1 + 0x20),*param_2);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0079e980 to 0079e987 has its CatchHandler @ 0079e9d0 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 0079e98c to 0079e98f has its CatchHandler @ 0079e9c0 */
    Logger::Logger(this);
    LogManager::getInstance()::singletonLogManager = this;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Uncaught nil passed to setXMLString\n");
  return;
}


