// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cc960
// Entry Point: 006cc960
// Size: 628 bytes
// Signature: undefined FUN_006cc960(void)


void FUN_006cc960(long *param_1)

{
  long lVar1;
  int iVar2;
  Logger *pLVar3;
  char *pcVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_1;
  if ((ulong)((param_1[1] - lVar5 >> 3) * -0x5555555555555555) < 3) {
    EngineManager::getInstance();
    lVar5 = Renderer::getPostFxParams();
    fVar6 = *(float *)(lVar5 + 0x298);
    fVar7 = *(float *)(lVar5 + 0x29c);
    EngineManager::getInstance();
    lVar5 = Renderer::getPostFxParams();
    fVar8 = *(float *)(lVar5 + 700);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006ccb90 to 006ccb97 has its CatchHandler @ 006ccbd8 */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 006ccb9c to 006ccb9f has its CatchHandler @ 006ccbd4 */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    fVar6 = fVar6 * fVar8;
    fVar7 = fVar7 * fVar8;
    EngineManager::getInstance();
    lVar5 = Renderer::getPostFxParams();
    fVar8 = *(float *)(lVar5 + 700);
    pcVar4 = "Wind-Direction %.2f,%.2f with %.2f m/s\n";
  }
  else {
    pcVar4 = (char *)(lVar5 + 0x19);
    if ((*(byte *)(lVar5 + 0x18) & 1) != 0) {
      pcVar4 = *(char **)(lVar5 + 0x28);
    }
    StringUtil::atof(pcVar4,&local_50);
    lVar5 = *param_1;
    pcVar4 = (char *)(lVar5 + 0x31);
    if ((*(byte *)(lVar5 + 0x30) & 1) != 0) {
      pcVar4 = *(char **)(lVar5 + 0x40);
    }
    StringUtil::atof(pcVar4,(float *)((ulong)&local_50 | 4));
    fVar6 = (float)NEON_fmadd(local_50,local_50,local_4c * local_4c);
    fVar8 = SQRT(fVar6);
    fVar7 = 1.0 / fVar8;
    if (fVar6 <= 1e-06) {
      fVar7 = 1.0;
    }
    local_50 = local_50 * fVar7;
    local_4c = local_4c * fVar7;
    EngineManager::getInstance();
    lVar5 = Renderer::getPostFxParams();
    fVar6 = local_50;
    *(float *)(lVar5 + 700) = fVar8;
    EngineManager::getInstance();
    lVar5 = Renderer::getPostFxParams();
    fVar7 = local_4c;
    *(float *)(lVar5 + 0x298) = fVar6;
    EngineManager::getInstance();
    lVar5 = Renderer::getPostFxParams();
    *(float *)(lVar5 + 0x29c) = fVar7;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006ccb40 to 006ccb47 has its CatchHandler @ 006ccbec */
      pLVar3 = (Logger *)operator_new(0x38);
                    /* try { // try from 006ccb4c to 006ccb4f has its CatchHandler @ 006ccbdc */
      Logger::Logger(pLVar3);
      LogManager::getInstance()::singletonLogManager = pLVar3;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = "Set Wind-Direction %.2f,%.2f with %.2f m/s\n";
    fVar6 = local_50;
    fVar7 = local_4c;
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar6,
                    (double)fVar7,(double)fVar8,pcVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


