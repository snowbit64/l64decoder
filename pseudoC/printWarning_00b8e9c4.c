// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printWarning
// Entry Point: 00b8e9c4
// Size: 196 bytes
// Signature: undefined __thiscall printWarning(Preprocessor * this, char * param_1)


/* Preprocessor::printWarning(char const*) */

void __thiscall Preprocessor::printWarning(Preprocessor *this,char *param_1)

{
  long lVar1;
  int iVar2;
  Logger *this_00;
  long lVar3;
  
  if (this[0x60] != (Preprocessor)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00b8ea48 to 00b8ea4f has its CatchHandler @ 00b8ea98 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b8ea54 to 00b8ea57 has its CatchHandler @ 00b8ea88 */
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
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: %s(%u). %s.\n",lVar1,(ulong)*(uint *)(lVar3 + 0x44),param_1);
  }
  return;
}


