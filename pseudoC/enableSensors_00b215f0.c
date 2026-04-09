// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enableSensors
// Entry Point: 00b215f0
// Size: 1016 bytes
// Signature: undefined __cdecl enableSensors(bool param_1)


/* AndroidInputDevice::enableSensors(bool) */

void AndroidInputDevice::enableSensors(bool param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar3 = (ulong)param_1;
  pcVar5 = (char *)(uVar3 + 0x1500);
  if (*(long *)(uVar3 + 0x14d0) == 0) {
    if (*(long *)(uVar3 + 0x14e0) != 0) {
      if (*(long *)(uVar3 + 0x14e8) == 0) {
        uVar4 = ASensorManager_createEventQueue
                          (*(undefined8 *)(uVar3 + 0x14c8),
                           *(undefined8 *)(AndroidSysUtil::s_pApp + 0x38),4,0,0);
        *(undefined8 *)(uVar3 + 0x14e8) = uVar4;
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 00b218d0 to 00b218db has its CatchHandler @ 00b219f4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Accelerometer event queue created\n");
        cVar1 = *(char *)(uVar3 + 0x1501);
      }
      else {
        cVar1 = *(char *)(uVar3 + 0x1501);
      }
      if (((cVar1 == '\0') && (*(long *)(uVar3 + 0x14e8) != 0)) && (*(long *)(uVar3 + 0x14e0) != 0))
      {
        ASensorEventQueue_enableSensor();
        ASensorEventQueue_setEventRate
                  (*(undefined8 *)(uVar3 + 0x14e8),*(undefined8 *)(uVar3 + 0x14e0),16000);
        *(undefined *)(uVar3 + 0x1501) = 1;
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 00b21960 to 00b2196b has its CatchHandler @ 00b219ec */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "Accelerometer event queue enabled\n");
      }
    }
    if (*(long *)(uVar3 + 0x14f0) == 0) {
      return;
    }
    if (*(long *)(uVar3 + 0x14f8) == 0) {
      uVar4 = ASensorManager_createEventQueue
                        (*(undefined8 *)(uVar3 + 0x14c8),
                         *(undefined8 *)(AndroidSysUtil::s_pApp + 0x38),5,0,0);
      *(undefined8 *)(uVar3 + 0x14f8) = uVar4;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00b21918 to 00b21923 has its CatchHandler @ 00b219f0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Gyro event queue created\n");
      cVar1 = *(char *)(uVar3 + 0x1502);
    }
    else {
      cVar1 = *(char *)(uVar3 + 0x1502);
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(long *)(uVar3 + 0x14f8) == 0) {
      return;
    }
    if (*(long *)(uVar3 + 0x14f0) == 0) {
      return;
    }
    ASensorEventQueue_enableSensor();
    ASensorEventQueue_setEventRate
              (*(undefined8 *)(uVar3 + 0x14f8),*(undefined8 *)(uVar3 + 0x14f0),16000);
    *(undefined *)(uVar3 + 0x1502) = 1;
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 == 0)) {
      pcVar5 = "Gyro event queue enabled\n";
      goto LAB_00b21834;
    }
                    /* try { // try from 00b219a8 to 00b219b3 has its CatchHandler @ 00b219e8 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    pcVar5 = "Gyro event queue enabled\n";
  }
  else {
    if (*(long *)(uVar3 + 0x14d8) == 0) {
      uVar4 = ASensorManager_createEventQueue
                        (*(undefined8 *)(uVar3 + 0x14c8),
                         *(undefined8 *)(AndroidSysUtil::s_pApp + 0x38),3,0,0);
      *(undefined8 *)(uVar3 + 0x14d8) = uVar4;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00b21860 to 00b2186b has its CatchHandler @ 00b219fc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Gravity event queue created\n");
      cVar1 = *pcVar5;
    }
    else {
      cVar1 = *pcVar5;
    }
    if (cVar1 != '\0') {
      return;
    }
    if (*(long *)(uVar3 + 0x14d8) == 0) {
      return;
    }
    if (*(long *)(uVar3 + 0x14d0) == 0) {
      return;
    }
    ASensorEventQueue_enableSensor();
    ASensorEventQueue_setEventRate
              (*(undefined8 *)(uVar3 + 0x14d8),*(undefined8 *)(uVar3 + 0x14d0),16000);
    *pcVar5 = '\x01';
    if (((LogManager::getInstance()::singletonLogManager & 1) != 0) ||
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 == 0)) {
      pcVar5 = "Gravity event queue enabled\n";
      goto LAB_00b21834;
    }
                    /* try { // try from 00b218a8 to 00b218b3 has its CatchHandler @ 00b219f8 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    pcVar5 = "Gravity event queue enabled\n";
  }
  __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
               &PTR_LOOP_00fd8de0);
  __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
LAB_00b21834:
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,pcVar5);
  return;
}


