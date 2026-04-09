// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: error
// Entry Point: 00c09ac0
// Size: 168 bytes
// Signature: undefined __thiscall error(CreateIR * this, char * param_1)


/* CreateIR::error(char const*) */

void __thiscall CreateIR::error(CreateIR *this,char *param_1)

{
  int iVar1;
  Logger *this_00;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c09b28 to 00c09b2f has its CatchHandler @ 00c09b78 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00c09b34 to 00c09b37 has its CatchHandler @ 00c09b68 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Code generation error: %s\n",param_1);
  this[0x130] = (CreateIR)0x1;
  return;
}


