// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cd234
// Entry Point: 006cd234
// Size: 620 bytes
// Signature: undefined FUN_006cd234(void)


void FUN_006cd234(long *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  Logger *pLVar5;
  long lVar6;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  EngineManager::getInstance();
  lVar4 = Renderer::getPostFxParams();
  lVar6 = *param_1;
  if ((ulong)((param_1[1] - lVar6 >> 3) * -0x5555555555555555) < 5) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cd40c to 006cd413 has its CatchHandler @ 006cd4b8 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd418 to 006cd41b has its CatchHandler @ 006cd4a8 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      (double)*(float *)(lVar4 + 0x50),(double)*(float *)(lVar4 + 0x54),
                      (double)*(float *)(lVar4 + 0x58),(double)*(float *)(lVar4 + 0x5c),
                      "DoF Blur Area: bottom left(%.3f %.3f) top right(%.3f %.3f)\n");
    goto LAB_006cd3c8;
  }
  local_3c = 0.0;
  pcVar1 = (char *)(lVar6 + 0x19);
  if ((*(byte *)(lVar6 + 0x18) & 1) != 0) {
    pcVar1 = *(char **)(lVar6 + 0x28);
  }
  StringUtil::atof(pcVar1,&local_3c);
  lVar6 = *param_1;
  local_40 = 0.0;
  pcVar1 = (char *)(lVar6 + 0x31);
  if ((*(byte *)(lVar6 + 0x30) & 1) != 0) {
    pcVar1 = *(char **)(lVar6 + 0x40);
  }
  StringUtil::atof(pcVar1,&local_40);
  lVar6 = *param_1;
  local_44 = 1.0;
  pcVar1 = (char *)(lVar6 + 0x49);
  if ((*(byte *)(lVar6 + 0x48) & 1) != 0) {
    pcVar1 = *(char **)(lVar6 + 0x58);
  }
  StringUtil::atof(pcVar1,&local_44);
  lVar6 = *param_1;
  local_48 = 1.0;
  pcVar1 = (char *)(lVar6 + 0x61);
  if ((*(byte *)(lVar6 + 0x60) & 1) != 0) {
    pcVar1 = *(char **)(lVar6 + 0x70);
  }
  StringUtil::atof(pcVar1,&local_48);
  if (local_44 <= local_3c) {
LAB_006cd338:
    local_3c = -1.0;
    local_44 = -1.0;
    local_40 = -1.0;
    local_48 = -1.0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cd45c to 006cd463 has its CatchHandler @ 006cd4a4 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd468 to 006cd46b has its CatchHandler @ 006cd4a0 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: invalid coordinates\n");
  }
  else if (local_48 <= local_40) goto LAB_006cd338;
  *(float *)(lVar4 + 0x50) = local_3c;
  *(float *)(lVar4 + 0x54) = local_40;
  *(float *)(lVar4 + 0x58) = local_44;
  *(float *)(lVar4 + 0x5c) = local_48;
LAB_006cd3c8:
  lVar6 = EngineManager::getInstance();
  *(undefined *)(*(long *)(lVar6 + 0xb8) + 0xf06) = 1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


