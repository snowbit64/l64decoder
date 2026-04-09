// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AndroidVulkanRenderWindow
// Entry Point: 00ad9168
// Size: 600 bytes
// Signature: undefined __thiscall AndroidVulkanRenderWindow(AndroidVulkanRenderWindow * this, RenderWindowDesc * param_1, VulkanRenderDevice * param_2)


/* AndroidVulkanRenderWindow::AndroidVulkanRenderWindow(RenderWindowDesc&, VulkanRenderDevice*) */

void __thiscall
AndroidVulkanRenderWindow::AndroidVulkanRenderWindow
          (AndroidVulkanRenderWindow *this,RenderWindowDesc *param_1,VulkanRenderDevice *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  AndroidJNICall *this_00;
  uint uVar4;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined auStack_80 [8];
  uint local_78;
  uint uStack_74;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  VulkanRenderWindow::VulkanRenderWindow((VulkanRenderWindow *)this);
  *(undefined ***)this = &PTR__AndroidVulkanRenderWindow_00fe6ec0;
                    /* try { // try from 00ad91ac to 00ad91b3 has its CatchHandler @ 00ad93e8 */
  this_00 = (AndroidJNICall *)operator_new(0x78);
                    /* try { // try from 00ad91b8 to 00ad91bf has its CatchHandler @ 00ad93d8 */
  AndroidJNICall::AndroidJNICall(this_00,0);
  *(AndroidJNICall **)(this + 0x108) = this_00;
  *(VulkanRenderDevice **)(this + 0xb8) = param_2;
  this[0xe0] = *(AndroidVulkanRenderWindow *)(param_1 + 4);
  lVar2 = AndroidSysUtil::s_pApp;
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0xf8) = 1;
  local_98 = 0;
  local_88 = *(undefined8 *)(lVar2 + 0x48);
  local_90 = 0;
  local_a0[0] = 0x3b9ae940;
                    /* try { // try from 00ad9218 to 00ad932b has its CatchHandler @ 00ad93ec */
  iVar3 = (*vkCreateAndroidSurfaceKHR)(*(undefined8 *)(param_2 + 0x10),local_a0,0,this + 0xc0);
  if (iVar3 != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00ad9388 to 00ad9393 has its CatchHandler @ 00ad93c0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: failed to create vulkan surface.\n");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  if (*(long *)(this + 0xc0) == 0) {
    uVar4 = 0;
    uStack_74 = 0;
    *(undefined4 *)(this + 0xe4) = 0;
  }
  else {
    iVar3 = (*vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
                      (*(undefined8 *)(*(long *)(this + 0xb8) + 0x20),*(long *)(this + 0xc0),
                       auStack_80);
    if (iVar3 == 0) {
      if (uStack_74 < local_78) {
        *(uint *)(this + 0xe4) = local_78;
        uVar4 = local_78;
      }
      else {
        *(uint *)(this + 0xe4) = uStack_74;
        uVar4 = uStack_74;
        uStack_74 = local_78;
      }
    }
    else {
      uStack_74 = *(uint *)(this + 0xe8);
      uVar4 = *(uint *)(this + 0xe4);
    }
  }
  *(uint *)(this + 0xe8) = uStack_74;
  *(uint *)(this + 0xec) = uVar4;
  *(uint *)(this + 0xf0) = uStack_74;
  *(uint *)(this + 0xfc) = uVar4;
  *(uint *)(this + 0x100) = uStack_74;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00ad933c to 00ad9347 has its CatchHandler @ 00ad93c4 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "full window resolution 1: %ux%u\n",(ulong)*(uint *)(this + 0xe4),
                    (ulong)*(uint *)(this + 0xe8));
  VulkanRenderWindow::init((VulkanRenderWindow *)this,param_1);
  AndroidSysUtil::setVisible(true,true);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


