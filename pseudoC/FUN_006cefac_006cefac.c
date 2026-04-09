// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cefac
// Entry Point: 006cefac
// Size: 300 bytes
// Signature: undefined FUN_006cefac(void)


void FUN_006cefac(long *param_1)

{
  char *pcVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  Logger *this;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = *param_1;
  if ((ulong)((param_1[1] - lVar5 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 006cf094 to 006cf09b has its CatchHandler @ 006cf0e8 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cf0a0 to 006cf0a3 has its CatchHandler @ 006cf0d8 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    EngineManager::getInstance();
    lVar5 = Renderer::getPostFxParams();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)*(float *)(lVar5 + 0x250),&DAT_0050f343);
  }
  else {
    local_3c = 1.0;
    pcVar1 = (char *)(lVar5 + 0x19);
    if ((*(byte *)(lVar5 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar5 + 0x28);
    }
    StringUtil::atof(pcVar1,&local_3c);
    fVar3 = local_3c;
    EngineManager::getInstance();
    lVar5 = Renderer::getPostFxParams();
    *(float *)(lVar5 + 0x250) = fVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


