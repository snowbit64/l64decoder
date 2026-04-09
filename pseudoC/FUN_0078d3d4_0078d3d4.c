// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d3d4
// Entry Point: 0078d3d4
// Size: 248 bytes
// Signature: undefined FUN_0078d3d4(void)


void FUN_0078d3d4(uint *param_1)

{
  double dVar1;
  int iVar2;
  long lVar3;
  Logger *this;
  ulong uVar4;
  float fVar5;
  
  uVar4 = (ulong)*param_1;
  if ((*param_1 < 0x10) && ((&EngineScriptBinding::s_intervalTimers)[uVar4 * 0x10] != '\0')) {
    lVar3 = Watch::getCurrentTicks();
    dVar1 = (double)Watch::convertTicksToMs(lVar3 - (&DAT_010530e0)[uVar4 * 2]);
    fVar5 = (float)dVar1;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0078d48c to 0078d493 has its CatchHandler @ 0078d4dc */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d498 to 0078d49b has its CatchHandler @ 0078d4cc */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Bad interval timer index %d\n",uVar4);
    dVar1 = (double)Watch::getTimeSec();
    fVar5 = (float)dVar1 * 1000.0;
  }
  param_1[0x40] = (uint)fVar5;
  param_1[0x42] = 4;
  return;
}


