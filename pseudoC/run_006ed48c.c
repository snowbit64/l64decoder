// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: run
// Entry Point: 006ed48c
// Size: 1076 bytes
// Signature: undefined run(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidActivity::run() */

long AndroidActivity::run(void)

{
  uint uVar1;
  int iVar2;
  long *in_x0;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  float fVar6;
  
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006ed720 to 006ed72b has its CatchHandler @ 006ed8d4 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "AndroidActivity::run()\n");
  if (*(void **)(*in_x0 + 0x28) != (void *)0x0) {
    free(*(void **)(*in_x0 + 0x28));
    lVar5 = *in_x0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
  }
  AndroidSysUtil::processEventQueue();
  lVar5 = *in_x0;
  if (*(int *)(lVar5 + 100) == 0) {
    fVar6 = 0.0;
    do {
      if (*(long *)(lVar5 + 0x48) != 0) {
        if ((*(char *)(in_x0 + 2) != '\0') &&
           (uVar3 = AndroidJNICall::callBool((AndroidJNICall *)in_x0[1],"activityReady"),
           (uVar3 & 1) != 0)) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar2 != 0)) {
                    /* try { // try from 006ed840 to 006ed84b has its CatchHandler @ 006ed8c4 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                            "Activity ready, will start initializing the engine...\n");
          lVar5 = mainLoop();
          return lVar5;
        }
        uVar3 = AndroidJNICall::callBool((AndroidJNICall *)in_x0[1],"activityFailed");
        if ((uVar3 & 1) != 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar2 != 0)) {
                    /* try { // try from 006ed7b0 to 006ed7bb has its CatchHandler @ 006ed8cc */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Activity couldn\'t start properly, will exit!\n");
          return 0xffffff9c;
        }
      }
      fVar6 = fVar6 + 0.1;
      if ((*(char *)(in_x0 + 2) != '\0') && (5.0 <= fVar6)) {
        if (*(long *)(*in_x0 + 0x48) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar2 != 0)) {
                    /* try { // try from 006ed888 to 006ed893 has its CatchHandler @ 006ed8c0 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar4 = "ANativeWindow not ready after %1.1fs, will exit!\n";
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar2 != 0)) {
                    /* try { // try from 006ed7f8 to 006ed803 has its CatchHandler @ 006ed8c8 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar4 = "Activity not ready after %1.1fs, will exit!\n";
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar6,
                           pcVar4);
        return 0xffffff9b;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 006ed620 to 006ed627 has its CatchHandler @ 006ed8d8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar6,
                        "Activity not ready after %1.1fs.\n");
      uVar1 = 1000000;
      if (*(char *)(in_x0 + 2) != '\0') {
        uVar1 = 100000;
      }
      ThreadUtil::usleep(uVar1);
      AndroidSysUtil::processEventQueue();
      lVar5 = *in_x0;
    } while (*(int *)(lVar5 + 100) == 0);
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 006ed768 to 006ed773 has its CatchHandler @ 006ed8d0 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Activity destroy requested, will exit!\n");
  EngineManager::getInstance();
  lVar5 = EngineManager::getRenderWindow();
  if (lVar5 != 0) {
    RenderDeviceManager::getInstance();
    iVar2 = RenderDeviceManager::getCurrentRenderDeviceType();
    if (iVar2 == 5) {
      AndroidVulkanRenderWindow::termWindow();
    }
    lVar5 = 0;
  }
  return lVar5;
}


