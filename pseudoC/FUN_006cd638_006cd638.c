// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006cd638
// Entry Point: 006cd638
// Size: 968 bytes
// Signature: undefined FUN_006cd638(void)


void FUN_006cd638(long *param_1)

{
  char *pcVar1;
  POST_PROCESS_ANTI_ALIASING PVar2;
  int iVar3;
  long lVar4;
  Logger *pLVar5;
  undefined *puVar6;
  
  lVar4 = *param_1;
  if ((ulong)((param_1[1] - lVar4 >> 3) * -0x5555555555555555) < 2) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cd7f8 to 006cd7ff has its CatchHandler @ 006cda20 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd804 to 006cd807 has its CatchHandler @ 006cda1c */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    lVar4 = EngineManager::getInstance();
    if (*(uint *)(lVar4 + 0x218) < 4) {
      puVar6 = &DAT_00516b0c + *(int *)(&DAT_00516b0c + (long)(int)*(uint *)(lVar4 + 0x218) * 4);
    }
    else {
      puVar6 = &DAT_0050a39f;
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Current Post Process Anti Aliasing: %s\n",puVar6);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cd848 to 006cd84f has its CatchHandler @ 006cda18 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd854 to 006cd857 has its CatchHandler @ 006cda08 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Post Process Anti Aliasing Quality options: ");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cd894 to 006cd89b has its CatchHandler @ 006cda34 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd8a0 to 006cd8a3 has its CatchHandler @ 006cda24 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004f121c,
                      &DAT_004f39b5);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cd8e0 to 006cd8e7 has its CatchHandler @ 006cda34 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd8ec to 006cd8ef has its CatchHandler @ 006cda24 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004f121c,
                      &DAT_0050c911);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cd92c to 006cd933 has its CatchHandler @ 006cda34 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd938 to 006cd93b has its CatchHandler @ 006cda24 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004f121c,
                      "TAA_MOBILE");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cd978 to 006cd97f has its CatchHandler @ 006cda34 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd984 to 006cd987 has its CatchHandler @ 006cda24 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004f121c,
                      "Nvidia DLAA");
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006cd9c4 to 006cd9cb has its CatchHandler @ 006cda04 */
      pLVar5 = (Logger *)operator_new(0x38);
                    /* try { // try from 006cd9d0 to 006cd9d3 has its CatchHandler @ 006cda00 */
      Logger::Logger(pLVar5);
      LogManager::getInstance()::singletonLogManager = pLVar5;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004fddf9);
  }
  else {
    pcVar1 = (char *)(lVar4 + 0x19);
    if ((*(byte *)(lVar4 + 0x18) & 1) != 0) {
      pcVar1 = *(char **)(lVar4 + 0x28);
    }
    PVar2 = HardwareScalability::gePostProcessAntiAliasingFromString(pcVar1);
    lVar4 = EngineManager::getInstance();
    HardwareScalability::setPostProcessAntiAliasing((HardwareScalability *)(lVar4 + 0x198),PVar2);
  }
  lVar4 = EngineManager::getInstance();
  *(undefined *)(*(long *)(lVar4 + 0xb8) + 0xf06) = 1;
  return;
}


