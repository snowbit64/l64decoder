// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initWindow
// Entry Point: 00ad9580
// Size: 532 bytes
// Signature: undefined initWindow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidVulkanRenderWindow::initWindow() */

undefined8 AndroidVulkanRenderWindow::initWindow(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  ulong uVar3;
  uint uVar4;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(AndroidSysUtil::s_pApp + 0x48) != 0) {
    uVar3 = AndroidSysUtil::windowIsResizeable();
    if ((uVar3 & 1) != 0) {
      AndroidJNICall::callVoid(*(AndroidJNICall **)(in_x0 + 0x108),"updateWindowSize");
      if ((*(long *)(in_x0 + 0xc0) == 0) ||
         (iVar2 = (*vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
                            (*(undefined8 *)(*(long *)(in_x0 + 0xb8) + 0x20),*(long *)(in_x0 + 0xc0)
                             ,local_70), iVar2 != 0)) {
        uVar4 = *(uint *)(in_x0 + 0xe8);
      }
      else if (local_68._4_4_ < (uint)local_68) {
        *(uint *)(in_x0 + 0xe4) = (uint)local_68;
        uVar4 = local_68._4_4_;
      }
      else {
        *(uint *)(in_x0 + 0xe4) = local_68._4_4_;
        uVar4 = (uint)local_68;
      }
      *(uint *)(in_x0 + 0xe8) = uVar4;
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00ad96e8 to 00ad96f3 has its CatchHandler @ 00ad9798 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "full window resolution 2: %ux%u\n",(ulong)*(uint *)(in_x0 + 0xe4),
                        (ulong)*(uint *)(in_x0 + 0xe8));
    }
    if (*(long *)(in_x0 + 0xc0) == 0) {
      VulkanRenderWindow::destroySwapChain();
      local_58 = *(undefined8 *)(AndroidSysUtil::s_pApp + 0x48);
      local_60 = 0;
      local_70[0] = 0x3b9ae940;
      local_68 = 0;
      iVar2 = (*vkCreateAndroidSurfaceKHR)
                        (*(undefined8 *)(*(long *)(in_x0 + 0xb8) + 0x10),local_70,0,
                         (long *)(in_x0 + 0xc0));
      if (iVar2 != 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 00ad975c to 00ad9767 has its CatchHandler @ 00ad9794 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: failed to re-create vulkan surface.\n");
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  AndroidSysUtil::setVisible(true,true);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


