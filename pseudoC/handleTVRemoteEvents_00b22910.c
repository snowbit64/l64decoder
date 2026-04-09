// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleTVRemoteEvents
// Entry Point: 00b22910
// Size: 480 bytes
// Signature: undefined __thiscall handleTVRemoteEvents(AndroidInputDevice * this, AInputEvent * param_1)


/* AndroidInputDevice::handleTVRemoteEvents(AInputEvent*) */

undefined8 __thiscall
AndroidInputDevice::handleTVRemoteEvents(AndroidInputDevice *this,AInputEvent *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = AInputEvent_getSource(param_1);
  if ((iVar2 == 0x301) && (uVar3 = AKeyEvent_getKeyCode(param_1), uVar3 < 0xdf)) {
    uVar1 = *(ushort *)(this + (ulong)uVar3 * 2 + 0x1206);
    if (uVar1 != 0xffff) {
      uVar3 = AKeyEvent_getAction(param_1);
      if (uVar3 == 1) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 00b22a70 to 00b22a7b has its CatchHandler @ 00b22af4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "TV remote %d up\n",(ulong)(uint)uVar1);
        *(undefined4 *)(this + (ulong)uVar1 * 4 + 0x13f8) = 0;
        return 1;
      }
      uVar4 = (uint)uVar1;
      if (uVar3 == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 00b22a28 to 00b22a33 has its CatchHandler @ 00b22af8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "TV remote %d down\n",(ulong)uVar4);
        *(undefined4 *)(this + (ulong)uVar4 * 4 + 0x13f8) = 0x3f800000;
        return 1;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00b22ab8 to 00b22ac3 has its CatchHandler @ 00b22af0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Unexpected TV remote action %d, keycode %d!\n",(ulong)uVar3,(ulong)uVar4);
    }
  }
  return 0;
}


