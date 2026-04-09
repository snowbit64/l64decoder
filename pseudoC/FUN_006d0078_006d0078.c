// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006d0078
// Entry Point: 006d0078
// Size: 344 bytes
// Signature: undefined FUN_006d0078(void)


void FUN_006d0078(long *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  Logger *this;
  long lVar4;
  uint uStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *param_1;
  if ((ulong)((param_1[1] - lVar4 >> 3) * -0x5555555555555555) < 3) {
    CullingGrid2D::getClipDistanceThresholds
              ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,&uStack_44,&local_40);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006d018c to 006d0193 has its CatchHandler @ 006d01e0 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 006d0198 to 006d019b has its CatchHandler @ 006d01d0 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)local_40,
                      (double)fStack_3c,"Clip distance thresholds: %.3f, %.3f\n");
  }
  else {
    pcVar1 = (char *)(lVar4 + 0x19);
    if ((*(byte *)(lVar4 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x28);
    }
    StringUtil::atof(pcVar1,&local_40);
    lVar4 = *param_1;
    pcVar1 = (char *)(lVar4 + 0x31);
    if ((*(byte *)(lVar4 + 0x30) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x40);
    }
    StringUtil::atof(pcVar1,&fStack_3c);
    CullingGrid2D::setClipDistanceThresholds
              ((CullingGrid2D *)CullingManager::s_cullingManagerInstance,2,&local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


