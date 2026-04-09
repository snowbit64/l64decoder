// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DxcCompiler3
// Entry Point: 00ac5310
// Size: 164 bytes
// Signature: undefined __thiscall DxcCompiler3(DxcCompiler3 * this)


/* DxcCompiler3::DxcCompiler3() */

void __thiscall DxcCompiler3::DxcCompiler3(DxcCompiler3 *this)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
                    /* try { // try from 00ac532c to 00ac535f has its CatchHandler @ 00ac53c8 */
  DxcManager::getInstance();
  lVar2 = DxcManager::createIDxcCompiler3();
  *(long *)this = lVar2;
  if (lVar2 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00ac537c to 00ac5387 has its CatchHandler @ 00ac53b4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Failed to create DxcCompiler\n");
  }
  return;
}


