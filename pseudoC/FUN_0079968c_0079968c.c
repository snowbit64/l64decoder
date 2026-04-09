// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079968c
// Entry Point: 0079968c
// Size: 308 bytes
// Signature: undefined FUN_0079968c(void)


void FUN_0079968c(float *param_1)

{
  int iVar1;
  long lVar2;
  Logger *this;
  float fVar3;
  float fVar4;
  float fVar5;
  
  EngineManager::getInstance();
  lVar2 = Renderer::getPostFxParams();
  fVar3 = *param_1;
  if (param_1[4] < fVar3) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00799780 to 00799787 has its CatchHandler @ 007997d0 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 0079978c to 0079978f has its CatchHandler @ 007997c0 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,(double)*param_1,
                      (double)param_1[4],
                      "Warning: \'noise left edge\'=%.3f needs to be less or equal to \'noise right edge\'=%.3f\n"
                     );
    fVar3 = *param_1;
  }
  *(float *)(lVar2 + 0x198) = fVar3;
  *(float *)(lVar2 + 0x19c) = param_1[4];
  fVar3 = param_1[0x14];
  fVar5 = param_1[0x20];
  fVar4 = param_1[8] + fVar3 + fVar5;
  *(float *)(lVar2 + 0x1a8) = param_1[8] / fVar4;
  *(float *)(lVar2 + 0x1ac) = param_1[0xc];
  *(float *)(lVar2 + 0x1b0) = param_1[0x10];
  *(float *)(lVar2 + 0x1b4) = fVar3 / fVar4;
  *(float *)(lVar2 + 0x1b8) = param_1[0x18];
  *(float *)(lVar2 + 0x1bc) = param_1[0x1c];
  *(float *)(lVar2 + 0x1c0) = fVar5 / fVar4;
  *(float *)(lVar2 + 0x1c4) = param_1[0x24];
  *(float *)(lVar2 + 0x1c8) = param_1[0x28];
  return;
}


