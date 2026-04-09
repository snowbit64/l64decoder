// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initSensors
// Entry Point: 00b201e4
// Size: 228 bytes
// Signature: undefined initSensors(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidInputDevice::initSensors() */

void AndroidInputDevice::initSensors(void)

{
  int iVar1;
  long in_x0;
  long lVar2;
  undefined8 uVar3;
  Logger *this;
  
  lVar2 = ASensorManager_getInstance();
  *(long *)(in_x0 + 0x14c8) = lVar2;
  if (lVar2 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00b20288 to 00b2028f has its CatchHandler @ 00b202d8 */
      this = (Logger *)operator_new(0x38);
                    /* try { // try from 00b20294 to 00b20297 has its CatchHandler @ 00b202c8 */
      Logger::Logger(this);
      LogManager::getInstance()::singletonLogManager = this;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,"No sensor manager!!"
                      );
    lVar2 = *(long *)(in_x0 + 0x14c8);
  }
  lVar2 = ASensorManager_getDefaultSensor(lVar2,9);
  *(long *)(in_x0 + 0x14d0) = lVar2;
  if (lVar2 == 0) {
    uVar3 = ASensorManager_getDefaultSensor(*(undefined8 *)(in_x0 + 0x14c8),1);
    *(undefined8 *)(in_x0 + 0x14e0) = uVar3;
    uVar3 = ASensorManager_getDefaultSensor(*(undefined8 *)(in_x0 + 0x14c8),4);
    *(undefined8 *)(in_x0 + 0x14f0) = uVar3;
  }
  *(undefined *)(in_x0 + 0x1500) = 0;
  enableSensors(SUB81(in_x0,0));
  return;
}


