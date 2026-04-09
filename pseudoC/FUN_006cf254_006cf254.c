// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cf254
// Entry Point: 006cf254
// Size: 300 bytes
// Signature: undefined FUN_006cf254(void)


void FUN_006cf254(long *param_1)

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
                    /* try { // try from 006cf33c to 006cf343 has its CatchHandler @ 006cf390 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006cf348 to 006cf34b has its CatchHandler @ 006cf380 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    EngineManager::getInstance();
    lVar5 = Renderer::getPostFxParams();
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)*(float *)(lVar5 + 0x2ac),"Sun size scale: %f\n");
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
    *(float *)(lVar5 + 0x2ac) = fVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


