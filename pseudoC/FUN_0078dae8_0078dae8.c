// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078dae8
// Entry Point: 0078dae8
// Size: 1136 bytes
// Signature: undefined FUN_0078dae8(void)


void FUN_0078dae8(long param_1)

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
                    /* try { // try from 0078def8 to 0078df03 has its CatchHandler @ 0078df5c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078df04 to 0078df0b has its CatchHandler @ 0078df58 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar3 = &DAT_004fe8a0;
      goto LAB_0078dbcc;
    case 1:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078dd7c to 0078dd87 has its CatchHandler @ 0078df84 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078dd88 to 0078dd8f has its CatchHandler @ 0078df80 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004f1ea9,
                        (ulong)*(uint *)(param_1 + lVar5));
      break;
    case 2:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078de14 to 0078de1f has its CatchHandler @ 0078df74 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078de20 to 0078de27 has its CatchHandler @ 0078df70 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004db3f8,
                        (ulong)*(uint *)(param_1 + lVar5));
      break;
    case 3:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078de60 to 0078de6b has its CatchHandler @ 0078df6c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078de6c to 0078de73 has its CatchHandler @ 0078df68 */
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
      goto LAB_0078db60;
    case 4:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078deac to 0078deb7 has its CatchHandler @ 0078df64 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078deb8 to 0078debf has its CatchHandler @ 0078df60 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      dVar6 = (double)*(float *)(param_1 + lVar5);
      goto LAB_0078dc7c;
    case 5:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078dd30 to 0078dd3b has its CatchHandler @ 0078df8c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078dd3c to 0078dd43 has its CatchHandler @ 0078df88 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      dVar6 = *(double *)(param_1 + lVar5);
LAB_0078dc7c:
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,dVar6,&DAT_0050f343)
      ;
      break;
    case 6:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078dc98 to 0078dca3 has its CatchHandler @ 0078dfa8 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078dca4 to 0078dcab has its CatchHandler @ 0078df98 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar4 = *(char **)(param_1 + lVar5);
LAB_0078db60:
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,pcVar4
                       );
      break;
    default:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078dce4 to 0078dcef has its CatchHandler @ 0078df94 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078dcf0 to 0078dcf7 has its CatchHandler @ 0078df90 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar3 = &DAT_004d1ac5;
LAB_0078dbcc:
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,puVar3);
      break;
    case 8:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078ddc8 to 0078ddd3 has its CatchHandler @ 0078df7c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078ddd4 to 0078dddb has its CatchHandler @ 0078df78 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,"{...}\n");
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


