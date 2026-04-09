// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: handleCmd
// Entry Point: 006ecffc
// Size: 1032 bytes
// Signature: undefined __thiscall handleCmd(AndroidActivity * this, int param_1)


/* AndroidActivity::handleCmd(int) */

void __thiscall AndroidActivity::handleCmd(AndroidActivity *this,int param_1)

{
  AndroidActivity AVar1;
  long lVar2;
  int iVar3;
  AndroidVulkanRenderWindow *this_00;
  long *plVar4;
  AndroidInputDevice *this_01;
  char *pcVar5;
  WINDOW_FOCUS WVar6;
  uint local_40;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  EngineManager::getInstance();
  this_00 = (AndroidVulkanRenderWindow *)EngineManager::getRenderWindow();
  switch(param_1) {
  case 1:
    if (this_00 != (AndroidVulkanRenderWindow *)0x0) {
      RenderDeviceManager::getInstance();
      iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
      if (iVar3 == 5) {
        AndroidVulkanRenderWindow::initWindow();
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 006ed338 to 006ed343 has its CatchHandler @ 006ed40c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "window re-initialized\n");
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 006ed380 to 006ed38b has its CatchHandler @ 006ed408 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "error while re-initializing window!\n");
        *(undefined4 *)(*(long *)this + 100) = 1;
      }
    }
    this[0x10] = (AndroidActivity)0x1;
    break;
  case 2:
    RenderDeviceManager::getInstance();
    iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
    if (iVar3 == 5) {
      AndroidVulkanRenderWindow::termWindow();
    }
    break;
  default:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 006ed2f0 to 006ed2fb has its CatchHandler @ 006ed410 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Unhandled APP command: %d\n",(ulong)(uint)param_1);
    goto joined_r0x006ed07c;
  case 4:
    if (this_00 != (AndroidVulkanRenderWindow *)0x0) {
      AndroidVulkanRenderWindow::refreshWindowSize();
      AndroidVulkanRenderWindow::getWindowWidthAndHeight(this_00,&local_3c,&local_40);
      this_01 = (AndroidInputDevice *)AndroidInputDevice::getInputDevice();
      AndroidInputDevice::refreshWindowSize(this_01,local_3c,local_40);
    }
    break;
  case 6:
    this[0x11] = (AndroidActivity)0x1;
    if (this_00 != (AndroidVulkanRenderWindow *)0x0) {
      RenderDeviceManager::getInstance();
      iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
      if (iVar3 == 5) {
        AndroidVulkanRenderWindow::windowFocusChanged(this_00,2);
      }
    }
    break;
  case 7:
  case 0xd:
    this[0x11] = (AndroidActivity)0x0;
    if (this_00 != (AndroidVulkanRenderWindow *)0x0) {
      RenderDeviceManager::getInstance();
      iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
      if (iVar3 == 5) {
        AndroidVulkanRenderWindow::windowFocusChanged(this_00,1);
      }
    }
joined_r0x006ed07c:
    if (param_1 == 0xb) {
      AudioDeviceManager::getInstance();
      plVar4 = (long *)AudioDeviceManager::getCurrentAudioDevice();
      if ((plVar4 != (long *)0x0) && (DAT_01052058 == 1)) {
        DAT_01052058 = 0;
        (**(code **)(*plVar4 + 0x158))();
      }
      AndroidSysUtil::notifyAppResumed();
    }
    else if (param_1 == 0xd) {
      AudioDeviceManager::getInstance();
      plVar4 = (long *)AudioDeviceManager::getCurrentAudioDevice();
      if ((plVar4 != (long *)0x0) && ((DAT_01052058 & 1) == 0)) {
        DAT_01052058 = 1;
        (**(code **)(*plVar4 + 0x150))();
      }
      AndroidSysUtil::notifyAppSuspended();
    }
    break;
  case 10:
    if (this_00 != (AndroidVulkanRenderWindow *)0x0) {
      AVar1 = this[0x11];
      RenderDeviceManager::getInstance();
      iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
      if (iVar3 == 5) {
        WVar6 = 1;
        if (AVar1 != (AndroidActivity)0x0) {
          WVar6 = 2;
        }
        AndroidVulkanRenderWindow::windowFocusChanged(this_00,WVar6);
      }
    }
    break;
  case 0xc:
    break;
  case 0xe:
    if (this_00 == (AndroidVulkanRenderWindow *)0x0) {
      if (this[0x10] == (AndroidActivity)0x0) {
        pcVar5 = (char *)LogManager::getInstance();
        LogManager::infof(pcVar5,
                          "Cannot handle APP_CMD_STOP (and switch to FOCUS_INVISIBLE) before APP_CMD_INIT_WINDOW\n"
                         );
      }
      else {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 006ed3c8 to 006ed3d3 has its CatchHandler @ 006ed404 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "App not ready to handle APP_CMD_STOP!\n");
      }
    }
    else {
      RenderDeviceManager::getInstance();
      iVar3 = RenderDeviceManager::getCurrentRenderDeviceType();
      if (iVar3 == 5) {
        AndroidVulkanRenderWindow::windowFocusChanged(this_00,0);
      }
    }
    break;
  case 0xf:
    AndroidSysUtil::s_isSoftDestroy = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


