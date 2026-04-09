// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: disableSensors
// Entry Point: 00b203e4
// Size: 496 bytes
// Signature: undefined disableSensors(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInputDevice::disableSensors() */

void AndroidInputDevice::disableSensors(void)

{
  int iVar1;
  long in_x0;
  Logger *pLVar2;
  
  if (*(char *)(in_x0 + 0x1500) != '\0') {
    ASensorEventQueue_disableSensor(*(undefined8 *)(in_x0 + 0x14d8),*(undefined8 *)(in_x0 + 0x14d0))
    ;
    *(char *)(in_x0 + 0x1500) = '\0';
    ASensorManager_destroyEventQueue
              (*(undefined8 *)(in_x0 + 0x14c8),*(undefined8 *)(in_x0 + 0x14d8));
    *(undefined8 *)(in_x0 + 0x14d8) = 0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b204f4 to 00b204fb has its CatchHandler @ 00b205f4 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b20500 to 00b20503 has its CatchHandler @ 00b205e4 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Gravity event queue destroyed\n");
  }
  if (*(char *)(in_x0 + 0x1501) != '\0') {
    ASensorEventQueue_disableSensor(*(undefined8 *)(in_x0 + 0x14e8),*(undefined8 *)(in_x0 + 0x14e0))
    ;
    *(undefined *)(in_x0 + 0x1501) = 0;
    ASensorManager_destroyEventQueue
              (*(undefined8 *)(in_x0 + 0x14c8),*(undefined8 *)(in_x0 + 0x14e8));
    *(undefined8 *)(in_x0 + 0x14e8) = 0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b20544 to 00b2054b has its CatchHandler @ 00b205e0 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b20550 to 00b20553 has its CatchHandler @ 00b205dc */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Accelerometer event queue destroyed\n");
  }
  if (*(char *)(in_x0 + 0x1502) != '\0') {
    ASensorEventQueue_disableSensor(*(undefined8 *)(in_x0 + 0x14f8),*(undefined8 *)(in_x0 + 0x14f0))
    ;
    *(undefined *)(in_x0 + 0x1502) = 0;
    ASensorManager_destroyEventQueue
              (*(undefined8 *)(in_x0 + 0x14c8),*(undefined8 *)(in_x0 + 0x14f8));
    *(undefined8 *)(in_x0 + 0x14f8) = 0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b20594 to 00b2059b has its CatchHandler @ 00b205d8 */
      pLVar2 = (Logger *)operator_new(0x38);
                    /* try { // try from 00b205a0 to 00b205a3 has its CatchHandler @ 00b205d4 */
      Logger::Logger(pLVar2);
      LogManager::getInstance()::singletonLogManager = pLVar2;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Gyro event queue destroyed\n");
  }
  return;
}


