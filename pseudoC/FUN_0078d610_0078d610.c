// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d610
// Entry Point: 0078d610
// Size: 1136 bytes
// Signature: undefined FUN_0078d610(void)


void FUN_0078d610(long param_1)

{
  int iVar1;
  LuauScriptSystem *this;
  Logger *pLVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  double dVar6;
  
  lVar5 = 0;
  do {
    switch(*(undefined4 *)(param_1 + lVar5 + 8)) {
    case 0:
      if (*(long *)(param_1 + lVar5) != 0) {
        return;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078da20 to 0078da2b has its CatchHandler @ 0078da84 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078da2c to 0078da33 has its CatchHandler @ 0078da80 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar3 = &DAT_004fe8a0;
      goto LAB_0078d6f4;
    case 1:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078d8a4 to 0078d8af has its CatchHandler @ 0078daac */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d8b0 to 0078d8b7 has its CatchHandler @ 0078daa8 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004f1ea9,
                        (ulong)*(uint *)(param_1 + lVar5));
      break;
    case 2:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078d93c to 0078d947 has its CatchHandler @ 0078da9c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d948 to 0078d94f has its CatchHandler @ 0078da98 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004db3f8,
                        (ulong)*(uint *)(param_1 + lVar5));
      break;
    case 3:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078d988 to 0078d993 has its CatchHandler @ 0078da94 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d994 to 0078d99b has its CatchHandler @ 0078da90 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar4 = "false";
      if (*(char *)(param_1 + lVar5) != '\0') {
        pcVar4 = "true";
      }
      goto LAB_0078d688;
    case 4:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078d9d4 to 0078d9df has its CatchHandler @ 0078da8c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d9e0 to 0078d9e7 has its CatchHandler @ 0078da88 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      dVar6 = (double)*(float *)(param_1 + lVar5);
      goto LAB_0078d7a4;
    case 5:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078d858 to 0078d863 has its CatchHandler @ 0078dab4 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d864 to 0078d86b has its CatchHandler @ 0078dab0 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      dVar6 = *(double *)(param_1 + lVar5);
LAB_0078d7a4:
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,dVar6,&DAT_0050f343)
      ;
      break;
    case 6:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078d7c0 to 0078d7cb has its CatchHandler @ 0078dad0 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d7cc to 0078d7d3 has its CatchHandler @ 0078dac0 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar4 = *(char **)(param_1 + lVar5);
LAB_0078d688:
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,pcVar4
                       );
      break;
    default:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078d80c to 0078d817 has its CatchHandler @ 0078dabc */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d818 to 0078d81f has its CatchHandler @ 0078dab8 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar3 = &DAT_004d1ac5;
LAB_0078d6f4:
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,puVar3);
      break;
    case 8:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078d8f0 to 0078d8fb has its CatchHandler @ 0078daa4 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d8fc to 0078d903 has its CatchHandler @ 0078daa0 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"{...}\n");
      ScriptSystemManager::getInstance();
      this = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
      LuauScriptSystem::destroyObjectRef(this,*(void **)(param_1 + lVar5));
    }
    lVar5 = lVar5 + 0x10;
    if (lVar5 == 0x100) {
      return;
    }
  } while( true );
}


