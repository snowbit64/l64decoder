// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00799998
// Entry Point: 00799998
// Size: 216 bytes
// Signature: undefined FUN_00799998(void)


void FUN_00799998(float *param_1)

{
  int iVar1;
  long lVar2;
  Logger *this;
  float fVar3;
  
  EngineManager::getInstance();
  lVar2 = Renderer::getPostFxParams();
  fVar3 = *param_1;
  if (param_1[4] < fVar3) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00799a30 to 00799a37 has its CatchHandler @ 00799a80 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00799a3c to 00799a3f has its CatchHandler @ 00799a70 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,(double)*param_1,
                      (double)param_1[4],
                      "Warning: \'dist to center left edge\' = %.3f needs to be less or equal to \'dist to center right edge\' = %.3f\n"
                     );
    fVar3 = *param_1;
  }
  *(float *)(lVar2 + 0x1a0) = fVar3;
  *(float *)(lVar2 + 0x1a4) = param_1[4];
  return;
}


