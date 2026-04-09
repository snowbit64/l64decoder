// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078dfc0
// Entry Point: 0078dfc0
// Size: 1136 bytes
// Signature: undefined FUN_0078dfc0(void)


void FUN_0078dfc0(long param_1)

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
                    /* try { // try from 0078e3d0 to 0078e3db has its CatchHandler @ 0078e434 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078e3dc to 0078e3e3 has its CatchHandler @ 0078e430 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar3 = &DAT_004fe8a0;
      goto LAB_0078e0a4;
    case 1:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078e254 to 0078e25f has its CatchHandler @ 0078e45c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078e260 to 0078e267 has its CatchHandler @ 0078e458 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004f1ea9,
                         (ulong)*(uint *)(param_1 + lVar5));
      break;
    case 2:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078e2ec to 0078e2f7 has its CatchHandler @ 0078e44c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078e2f8 to 0078e2ff has its CatchHandler @ 0078e448 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004db3f8,
                         (ulong)*(uint *)(param_1 + lVar5));
      break;
    case 3:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078e338 to 0078e343 has its CatchHandler @ 0078e444 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078e344 to 0078e34b has its CatchHandler @ 0078e440 */
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
      goto LAB_0078e038;
    case 4:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078e384 to 0078e38f has its CatchHandler @ 0078e43c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078e390 to 0078e397 has its CatchHandler @ 0078e438 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      dVar6 = (double)*(float *)(param_1 + lVar5);
      goto LAB_0078e154;
    case 5:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078e208 to 0078e213 has its CatchHandler @ 0078e464 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078e214 to 0078e21b has its CatchHandler @ 0078e460 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      dVar6 = *(double *)(param_1 + lVar5);
LAB_0078e154:
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,dVar6,&DAT_0050f343
                        );
      break;
    case 6:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078e170 to 0078e17b has its CatchHandler @ 0078e480 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078e17c to 0078e183 has its CatchHandler @ 0078e470 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar4 = *(char **)(param_1 + lVar5);
LAB_0078e038:
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,
                         pcVar4);
      break;
    default:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078e1bc to 0078e1c7 has its CatchHandler @ 0078e46c */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078e1c8 to 0078e1cf has its CatchHandler @ 0078e468 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar3 = &DAT_004d1ac5;
LAB_0078e0a4:
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,puVar3);
      break;
    case 8:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 0078e2a0 to 0078e2ab has its CatchHandler @ 0078e454 */
        pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 0078e2ac to 0078e2b3 has its CatchHandler @ 0078e450 */
        Logger::Logger(pLVar2);
        LogManager::getInstance()::singletonLogManager = pLVar2;
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,"{...}\n");
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


