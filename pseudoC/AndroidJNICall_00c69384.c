// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AndroidJNICall
// Entry Point: 00c69384
// Size: 1316 bytes
// Signature: undefined __thiscall AndroidJNICall(AndroidJNICall * this, JavaClass param_1)


/* AndroidJNICall::AndroidJNICall(AndroidJNICall::JavaClass) */

void __thiscall AndroidJNICall::AndroidJNICall(AndroidJNICall *this,JavaClass param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  _jmethodID *p_Var6;
  long *plVar7;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(AndroidJNICall **)(this + 8) = this + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
                    /* try { // try from 00c693c0 to 00c693cb has its CatchHandler @ 00c69914 */
  Mutex::Mutex((Mutex *)(this + 0x20),true);
  *(JavaClass *)(this + 0x58) = param_1;
  uVar5 = *(undefined8 *)(*(long *)(AndroidSysUtil::s_pApp + 0x18) + 8);
  *(undefined8 *)(this + 0x50) = 0;
  plVar7 = (long *)(this + 0x48);
  *plVar7 = 0;
  *(undefined8 *)this = uVar5;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c69678 to 00c69683 has its CatchHandler @ 00c698c4 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
                    /* try { // try from 00c69414 to 00c69427 has its CatchHandler @ 00c698f4 */
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "JNI call prepared for %s\n",
                    *(undefined8 *)(s_javaClassNames + (ulong)*(uint *)(this + 0x58) * 8));
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x68) = 0;
                    /* try { // try from 00c69430 to 00c69437 has its CatchHandler @ 00c698f0 */
  plVar2 = (long *)getEnv();
  lVar3 = AndroidSysUtil::s_pApp;
  *(long **)(this + 0x70) = plVar2;
  p_Var6 = *(_jmethodID **)(*(long *)(lVar3 + 0x18) + 0x18);
  if (*(int *)(this + 0x58) == 0) {
    if (p_Var6 == (_jmethodID *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00c69828 to 00c69833 has its CatchHandler @ 00c698ac */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00c6961c to 00c6964b has its CatchHandler @ 00c698e4 */
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "AndroidJNICall::init(): activityObject NULL!\n");
      return;
    }
                    /* try { // try from 00c69560 to 00c6958f has its CatchHandler @ 00c698e4 */
    lVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,p_Var6);
    *plVar7 = lVar3;
    if (lVar3 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00c69870 to 00c6987b has its CatchHandler @ 00c698a8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "AndroidJNICall::init(): m_instance NULL!\n");
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c69798 to 00c697a3 has its CatchHandler @ 00c698b4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "JNI call for activity prepared\n");
  }
  else {
    if (p_Var6 == (_jmethodID *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00c69750 to 00c6975b has its CatchHandler @ 00c698b8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00c695e0 to 00c695f3 has its CatchHandler @ 00c698e8 */
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "AndroidJNICall::init(): Activity not ready!\n");
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c696c0 to 00c696cb has its CatchHandler @ 00c698c0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00c69460 to 00c6947b has its CatchHandler @ 00c698e8 */
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "env 0x%p, activity %p\n",plVar2,p_Var6);
                    /* try { // try from 00c69484 to 00c694b7 has its CatchHandler @ 00c698ec */
    lVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2,p_Var6);
    if (lVar3 == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00c697e0 to 00c697eb has its CatchHandler @ 00c698b0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
                    /* try { // try from 00c695fc to 00c6960f has its CatchHandler @ 00c698ec */
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "AndroidJNICall::init(): activityClass NULL!\n");
      return;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00c69708 to 00c69713 has its CatchHandler @ 00c698bc */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"activityClass: %p\n",
                      lVar3);
                    /* try { // try from 00c694e0 to 00c69507 has its CatchHandler @ 00c698dc */
    lVar4 = (**(code **)(*plVar2 + 0x108))
                      (plVar2,lVar3,
                       *(undefined8 *)(s_javaClassGetters + (ulong)*(uint *)(this + 0x58) * 8),
                       *(undefined8 *)(s_javaClassSignatures + (ulong)*(uint *)(this + 0x58) * 8));
    if (lVar4 == 0) {
      return;
    }
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
                    /* try { // try from 00c69508 to 00c6954f has its CatchHandler @ 00c698d8 */
    lVar3 = _JNIEnv::CallObjectMethod((_jobject *)plVar2,p_Var6,lVar4);
    if (lVar3 == 0) {
      return;
    }
    lVar4 = (**(code **)(*plVar2 + 0xa8))(plVar2,lVar3);
    *plVar7 = lVar4;
    if (lVar4 == 0) {
      return;
    }
    (**(code **)(*plVar2 + 0xb8))(plVar2,lVar3);
  }
                    /* try { // try from 00c6959c to 00c695d7 has its CatchHandler @ 00c698e0 */
  uVar5 = (**(code **)(*plVar2 + 0xf8))(plVar2,*plVar7);
  lVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,uVar5);
  *(long *)(this + 0x50) = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2,uVar5);
  }
  return;
}


