// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ef04
// Entry Point: 0079ef04
// Size: 256 bytes
// Signature: undefined FUN_0079ef04(void)


void FUN_0079ef04(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  LuauScriptSystem *this;
  Logger *this_00;
  long lVar4;
  
  param_2[0x40] = 0;
  uVar2 = *param_2;
  lVar4 = *(long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  param_2[0x42] = 1;
  if (uVar2 < (uint)((ulong)(lVar1 - lVar4) >> 3)) {
    lVar4 = *(long *)(lVar4 + (ulong)uVar2 * 8);
    param_2[0x42] = 1;
    param_2[0x40] = *(uint *)(lVar4 + 0x18);
    return;
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0079efc4 to 0079efcb has its CatchHandler @ 0079f014 */
    this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0079efd0 to 0079efd3 has its CatchHandler @ 0079f004 */
    Logger::Logger(this_00);
    LogManager::getInstance()::singletonLogManager = this_00;
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error: getChildAt index %u out of range for node \'%s\' (#children %u).\n",
                     (ulong)uVar2,*(undefined8 *)(param_1 + 8),
                     (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 3);
  ScriptSystemManager::getInstance();
  this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
  LuauScriptSystem::handleInternalError(this,"getChildAt");
  return;
}


