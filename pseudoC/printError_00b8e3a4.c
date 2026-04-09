// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printError
// Entry Point: 00b8e3a4
// Size: 196 bytes
// Signature: undefined __thiscall printError(Preprocessor * this, char * param_1)


/* Preprocessor::printError(char const*) */

void __thiscall Preprocessor::printError(Preprocessor *this,char *param_1)

{
  long lVar1;
  int iVar2;
  Logger *this_00;
  long lVar3;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b8e428 to 00b8e42f has its CatchHandler @ 00b8e478 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b8e434 to 00b8e437 has its CatchHandler @ 00b8e468 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  lVar3 = *(long *)(this + 0x38);
  lVar1 = lVar3 + 0x29;
  if ((*(byte *)(lVar3 + 0x28) & 1) != 0) {
    lVar1 = *(long *)(lVar3 + 0x38);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,"Error: %s(%u). %s.\n",
                     lVar1,(ulong)*(uint *)(lVar3 + 0x44),param_1);
  this[0x131] = (Preprocessor)0x1;
  return;
}


