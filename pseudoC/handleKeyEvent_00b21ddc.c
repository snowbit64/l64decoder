// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleKeyEvent
// Entry Point: 00b21ddc
// Size: 1332 bytes
// Signature: undefined __thiscall handleKeyEvent(AndroidInputDevice * this, AInputEvent * param_1)


/* AndroidInputDevice::handleKeyEvent(AInputEvent*) */

undefined4 __thiscall
AndroidInputDevice::handleKeyEvent(AndroidInputDevice *this,AInputEvent *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  AndroidJNICall *pAVar8;
  ulong uVar9;
  
  uVar2 = AInputEvent_getSource(param_1);
  uVar3 = AKeyEvent_getAction(param_1);
  uVar4 = AKeyEvent_getKeyCode(param_1);
  if (1 < uVar3) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00b221b8 to 00b221c3 has its CatchHandler @ 00b22320 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Got unexpected button action %d!\n",(ulong)uVar3);
    return 0;
  }
  uVar9 = (ulong)uVar4;
  if (((uVar2 ^ 0xffffffff) & 0x401) == 0) {
    if ((uVar4 < 0xdf) && ((ulong)*(ushort *)(this + uVar9 * 2 + 0x1206) != 0xffff)) {
      if (uVar3 == 0) {
        *(undefined4 *)(this + (ulong)*(ushort *)(this + uVar9 * 2 + 0x1206) * 4 + 0x13f8) =
             0x3f800000;
        this[0x13c5] = (AndroidInputDevice)0x1;
        return 1;
      }
      *(undefined4 *)(this + (ulong)*(ushort *)(this + uVar9 * 2 + 0x1206) * 4 + 0x13f8) = 0;
      return 1;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00b22200 to 00b2220b has its CatchHandler @ 00b2231c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Got unmapped button code: %d\n",uVar9);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00b22248 to 00b22253 has its CatchHandler @ 00b22318 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,&DAT_004c868b);
  }
  else if ((uVar2 & 0x101) == 0x101) {
    if (uVar4 < 0xdf) {
      uVar1 = *(ushort *)(this + uVar9 * 2 + 0x1048);
      if (uVar1 != 0xffff) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 00b222d8 to 00b222e3 has its CatchHandler @ 00b22310 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "keyboard code %d -> sym 0x%x\n",uVar9,(ulong)(uint)uVar1);
        lVar7 = *(long *)(this + 8);
        if (*(long *)(this + 0x10) == lVar7) {
          return 1;
        }
        uVar9 = 0;
        do {
          plVar6 = *(long **)(lVar7 + uVar9 * 8);
          (**(code **)(*plVar6 + 0x10))(plVar6,0,uVar1,0,uVar3 == 0,0);
          lVar7 = *(long *)(this + 8);
          uVar9 = (ulong)((int)uVar9 + 1);
        } while (uVar9 < (ulong)(*(long *)(this + 0x10) - lVar7 >> 3));
        return 1;
      }
    }
    pAVar8 = *(AndroidJNICall **)(this + 0x30);
    uVar2 = AKeyEvent_getMetaState(param_1);
    uVar2 = AndroidJNICall::callIntFromIntInt(pAVar8,"getAsciiCode",uVar4,uVar2);
    if (uVar2 != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00b22290 to 00b2229b has its CatchHandler @ 00b22314 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "keyboard code %d -> UTF8 %d\n",uVar9,(ulong)uVar2);
      lVar7 = *(long *)(this + 8);
      uVar4 = uVar2 & 0xff;
      if (0x7f < uVar2) {
        uVar4 = 0;
      }
      if (*(long *)(this + 0x10) == lVar7) {
        return 1;
      }
      uVar9 = 0;
      do {
        plVar6 = *(long **)(lVar7 + uVar9 * 8);
        (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,(ulong)uVar2,0,uVar3 == 0,0);
        lVar7 = *(long *)(this + 8);
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (uVar9 < (ulong)(*(long *)(this + 0x10) - lVar7 >> 3));
      return 1;
    }
  }
  if ((uVar3 == 1) && ((uVar4 & 0xfffffffe) == 0x18)) {
    AndroidJNICall::callVoid(*(AndroidJNICall **)(this + 0x30),"enableImmersiveMode");
    return 0;
  }
  if (uVar3 != 0) {
LAB_00b21fb8:
    iVar5 = handleTVRemoteEvents(this,param_1);
    if (iVar5 == 0) {
      return 0;
    }
    this[0x13c5] = (AndroidInputDevice)0x1;
    return 1;
  }
  if (uVar4 == 0x43) {
    uVar2 = 8;
  }
  else {
    pAVar8 = *(AndroidJNICall **)(this + 0x30);
    uVar2 = AKeyEvent_getMetaState(param_1);
    uVar2 = AndroidJNICall::callIntFromIntInt(pAVar8,"getAsciiCode",uVar4,uVar2);
    if (uVar2 == 0) goto LAB_00b21fb8;
  }
  uVar3 = *(uint *)(this + 0x1044);
  *(uint *)(this + 0x1044) = uVar3 + 1;
  *(uint *)(this + (ulong)uVar3 * 4 + 0x40) = uVar2;
  uVar3 = *(uint *)(this + 0x1044);
  if (uVar3 == 0x400) {
    uVar3 = 0;
    *(undefined4 *)(this + 0x1044) = 0;
  }
  *(uint *)(this + 0x1044) = uVar3 + 1;
  *(uint *)(this + (ulong)uVar3 * 4 + 0x40) = uVar2;
  if (*(int *)(this + 0x1044) == 0x400) {
    *(undefined4 *)(this + 0x1044) = 0;
  }
  lVar7 = *(long *)(this + 8);
  uVar3 = uVar2 & 0xff;
  if (0x7f < (int)uVar2) {
    uVar3 = 0;
  }
  if (*(long *)(this + 0x10) == lVar7) {
    return 1;
  }
  uVar9 = 0;
  do {
    plVar6 = *(long **)(lVar7 + uVar9 * 8);
    (**(code **)(*plVar6 + 0x10))(plVar6,uVar3,uVar2,0,1,0);
    lVar7 = *(long *)(this + 8);
    uVar9 = (ulong)((int)uVar9 + 1);
  } while (uVar9 < (ulong)(*(long *)(this + 0x10) - lVar7 >> 3));
  return 1;
}


