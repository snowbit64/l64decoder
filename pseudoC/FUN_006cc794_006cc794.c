// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cc794
// Entry Point: 006cc794
// Size: 412 bytes
// Signature: undefined FUN_006cc794(void)


void FUN_006cc794(long *param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  Logger *this;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = *param_1;
  if ((ulong)((param_1[1] - lVar3 >> 3) * -0x5555555555555555) < 3) {
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 == 0))
    goto LAB_006cc868;
                    /* try { // try from 006cc8f0 to 006cc8f7 has its CatchHandler @ 006cc934 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cc8fc to 006cc8ff has its CatchHandler @ 006cc930 */
    Logger::Logger(this);
  }
  else {
    pcVar1 = (char *)(lVar3 + 0x19);
    if ((*(byte *)(lVar3 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar3 + 0x28);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    StringUtil::atof(pcVar1,(float *)(lVar3 + 0x290));
    lVar3 = *param_1;
    pcVar1 = (char *)(lVar3 + 0x31);
    if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
      pcVar1 = *(char **)(lVar3 + 0x40);
    }
    EngineManager::getInstance();
    lVar3 = Renderer::getPostFxParams();
    StringUtil::atof(pcVar1,(float *)(lVar3 + 0x294));
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 == 0))
    goto LAB_006cc868;
                    /* try { // try from 006cc844 to 006cc84b has its CatchHandler @ 006cc948 */
    this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cc850 to 006cc853 has its CatchHandler @ 006cc938 */
    Logger::Logger(this);
  }
  LogManager::getInstance()::singletonLogManager = this;
  __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
               &PTR_LOOP_00fd8de0);
  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
LAB_006cc868:
  EngineManager::getInstance();
  lVar3 = Renderer::getPostFxParams();
  fVar4 = *(float *)(lVar3 + 0x290);
  EngineManager::getInstance();
  lVar3 = Renderer::getPostFxParams();
  fVar5 = *(float *)(lVar3 + 0x294);
  EngineManager::getInstance();
  lVar3 = Renderer::getPostFxParams();
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x290),*(undefined4 *)(lVar3 + 0x290),
                            *(float *)(lVar3 + 0x294) * *(float *)(lVar3 + 0x294));
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar4,
                    (double)fVar5,(double)SQRT(fVar6),
                    "Cirrus-Cloud velocity %.1f,%.1f with %.2f m/s\n");
  return;
}


