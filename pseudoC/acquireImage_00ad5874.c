// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireImage
// Entry Point: 00ad5874
// Size: 888 bytes
// Signature: undefined __thiscall acquireImage(VulkanRenderWindow * this, VkSemaphore_T * param_1, ImageInfos * param_2)


/* VulkanRenderWindow::acquireImage(VkSemaphore_T*, VulkanRenderWindow::ImageInfos&) */

void __thiscall
VulkanRenderWindow::acquireImage
          (VulkanRenderWindow *this,VkSemaphore_T *param_1,ImageInfos *param_2)

{
  VulkanRenderWindow VVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  undefined auStack_a0 [8];
  int local_98;
  int local_94;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (this[0x68] == (VulkanRenderWindow)0x0) {
LAB_00ad58f8:
    if ((this[0x56] == (VulkanRenderWindow)0x0) ||
       (((iVar6 = *(int *)(this + 0x6c), iVar3 = (**(code **)(*(long *)this + 0x10))(this),
         iVar6 != iVar3 ||
         (iVar6 = *(int *)(this + 0x70), iVar3 = (**(code **)(*(long *)this + 0x18))(this),
         iVar6 != iVar3)) && (uVar7 = (**(code **)(*(long *)this + 0xe0))(this), (uVar7 & 1) == 0)))
       ) {
      createSwapChain();
    }
    uVar4 = *(uint *)(this + 0x28);
    if (uVar4 == 0xffffffff) {
      iVar6 = 8;
      do {
        while (uVar4 = (*vkAcquireNextImageKHR)
                                 (*(undefined8 *)(*(long *)(this + 0xb8) + 0x18),
                                  *(undefined8 *)(this + 0x30),0xffffffffffffffff,param_1,0,
                                  this + 0x28), (int)uVar4 < 0) {
          if ((uVar4 != 0xc4653214) && (uVar4 != 0xc4653600)) {
LAB_00ad5b80:
            pcVar9 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar9,
                               "Error: vkAcquireNextImageKHR() failed with unhandled error %d.\n",
                               (ulong)uVar4);
            goto LAB_00ad5b94;
          }
          (*vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
                    (*(undefined8 *)(*(long *)(this + 0xb8) + 0x20),*(undefined8 *)(this + 0xc0),
                     auStack_a0);
          if ((local_98 == 0) || (local_94 == 0)) {
            *(undefined4 *)(this + 0x6c) = 0;
            *(undefined4 *)(this + 0x70) = 0;
            this[0x68] = (VulkanRenderWindow)0x1;
            *(undefined4 *)(this + 0x28) = 0xffffffff;
            *(undefined8 *)(param_2 + 0x20) = 0;
            VVar1 = this[0x68];
            goto joined_r0x00ad5ad0;
          }
          createSwapChain();
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) goto LAB_00ad5a60;
        }
        if (uVar4 != 1) {
          if ((uVar4 != 0x3b9acdeb) && (uVar4 != 0)) goto LAB_00ad5b80;
          uVar4 = *(uint *)(this + 0x28);
          lVar12 = *(long *)(this + 0x38);
          goto LAB_00ad596c;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
LAB_00ad5a60:
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0))
      {
                    /* try { // try from 00ad5bb0 to 00ad5bbb has its CatchHandler @ 00ad5bec */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: vkAcquireNextImageKHR() failed after too many tries.\n");
LAB_00ad5b94:
      uVar8 = 0;
      goto LAB_00ad5b50;
    }
    lVar12 = *(long *)(this + 0x38);
LAB_00ad596c:
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(lVar12 + (ulong)uVar4 * 8);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(*(long *)(this + 0x10) + (ulong)uVar4 * 8);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x50);
    *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(this + 0x74);
    VVar1 = this[0x68];
joined_r0x00ad5ad0:
    if ((VVar1 != (VulkanRenderWindow)0x0) ||
       (uVar7 = (**(code **)(*(long *)this + 0xe0))(this), (uVar7 & 1) != 0)) goto LAB_00ad5ad4;
    *(undefined8 *)param_2 = 0;
  }
  else {
    (*vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
              (*(undefined8 *)(*(long *)(this + 0xb8) + 0x20),*(undefined8 *)(this + 0xc0),
               auStack_a0);
    if ((local_98 != 0) && (local_94 != 0)) {
      this[0x68] = (VulkanRenderWindow)0x0;
      goto LAB_00ad58f8;
    }
    if (this[0x68] == (VulkanRenderWindow)0x0) goto LAB_00ad58f8;
    *(undefined8 *)(param_2 + 0x20) = 0;
LAB_00ad5ad4:
    puVar10 = *(undefined8 **)(this + 0x58);
    *(undefined8 *)param_2 = *puVar10;
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(this + 0x60);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar10 + 1);
    if (((byte)this[0x7c] & 10) == 0) {
      uVar5 = (**(code **)(*(long *)this + 0x18))(this);
      *(undefined4 *)(param_2 + 0x18) = uVar5;
      pcVar11 = *(code **)(*(long *)this + 0x10);
    }
    else {
      uVar5 = (**(code **)(*(long *)this + 0x10))(this);
      *(undefined4 *)(param_2 + 0x18) = uVar5;
      pcVar11 = *(code **)(*(long *)this + 0x18);
    }
    uVar5 = (*pcVar11)(this);
    *(undefined4 *)(param_2 + 0x14) = uVar5;
  }
  uVar8 = 1;
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(this + 0x7c);
LAB_00ad5b50:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


