// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ce320
// Entry Point: 006ce320
// Size: 488 bytes
// Signature: undefined FUN_006ce320(void)


void FUN_006ce320(long *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  Logger *this;
  long lVar5;
  float fVar6;
  float fVar7;
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = *param_1;
  if ((ulong)((param_1[1] - lVar4 >> 3) * -0x5555555555555555) < 4) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006ce4c4 to 006ce4cb has its CatchHandler @ 006ce518 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006ce4d0 to 006ce4d3 has its CatchHandler @ 006ce508 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    EngineManager::getInstance();
    lVar4 = Renderer::getPostFxParams();
    fVar6 = *(float *)(lVar4 + 0x60);
    EngineManager::getInstance();
    lVar4 = Renderer::getPostFxParams();
    fVar7 = *(float *)(lVar4 + 100);
    EngineManager::getInstance();
    lVar4 = Renderer::getPostFxParams();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar6,
                      (double)fVar7,(double)*(float *)(lVar4 + 0x68),"%.3f, %.3f, %.3f\n");
  }
  else {
    pcVar1 = (char *)(lVar4 + 0x19);
    if ((*(byte *)(lVar4 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x28);
    }
    local_4c = 1.0;
    StringUtil::atof(pcVar1,&local_4c);
    fVar6 = local_4c;
    EngineManager::getInstance();
    lVar4 = Renderer::getPostFxParams();
    lVar5 = *param_1;
    *(float *)(lVar4 + 0x60) = fVar6;
    local_4c = 1.0;
    pcVar1 = (char *)(lVar5 + 0x31);
    if ((*(byte *)(lVar5 + 0x30) & 1) != 0) {
      pcVar1 = *(char **)(lVar5 + 0x40);
    }
    StringUtil::atof(pcVar1,&local_4c);
    fVar6 = local_4c;
    EngineManager::getInstance();
    lVar4 = Renderer::getPostFxParams();
    lVar5 = *param_1;
    *(float *)(lVar4 + 100) = fVar6;
    local_4c = 1.0;
    pcVar1 = (char *)(lVar5 + 0x49);
    if ((*(byte *)(lVar5 + 0x48) & 1) != 0) {
      pcVar1 = *(char **)(lVar5 + 0x58);
    }
    StringUtil::atof(pcVar1,&local_4c);
    fVar6 = local_4c;
    EngineManager::getInstance();
    lVar4 = Renderer::getPostFxParams();
    *(float *)(lVar4 + 0x68) = fVar6;
  }
  lVar4 = EngineManager::getInstance();
  *(undefined *)(*(long *)(lVar4 + 0xb8) + 0xf06) = 1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


