// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanRenderWindow
// Entry Point: 00ad466c
// Size: 652 bytes
// Signature: undefined __thiscall ~VulkanRenderWindow(VulkanRenderWindow * this)


/* VulkanRenderWindow::~VulkanRenderWindow() */

void __thiscall VulkanRenderWindow::~VulkanRenderWindow(VulkanRenderWindow *this)

{
  void **ppvVar1;
  code *pcVar2;
  undefined8 uVar3;
  VulkanCommandBuffer *this_00;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  void **ppvVar8;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  void **ppvVar9;
  
  pcVar2 = vkQueueWaitIdle;
  uVar3 = *(undefined8 *)(*(long *)(this + 0xb8) + 0x448);
  *(undefined ***)this = &PTR__VulkanRenderWindow_00fe6930;
                    /* try { // try from 00ad46b0 to 00ad4703 has its CatchHandler @ 00ad48f8 */
  (*pcVar2)(uVar3);
  VulkanRenderDevice::destroyImageViewSafely
            (*(VulkanRenderDevice **)(this + 0xb8),*(VkImageView_T **)(this + 0x60));
  this_00 = (VulkanCommandBuffer *)(**(code **)(**(long **)(this + 0xb8) + 0x138))();
  VulkanCommandBuffer::releaseTextureWithGraphicsQueueThreadSafe
            (this_00,*(Texture **)(this + 0x58),(FenceStatus *)0x0,0);
  if (*(long *)(this + 0x30) != 0) {
    (*vkDestroySwapchainKHR)
              (*(undefined8 *)(*(long *)(this + 0xb8) + 0x18),*(long *)(this + 0x30),0);
  }
  if (*(long *)(this + 0xa8) != 0) {
    uVar5 = *(ulong *)(this + 0xa0);
    do {
      lVar10 = *(long *)(*(long *)(this + 0x88) + (uVar5 / 0x66) * 8);
      lVar11 = lVar10 + (uVar5 % 0x66) * 0x28;
      plVar12 = (long *)(lVar11 + 0x10);
      lVar6 = *plVar12;
      plVar13 = (long *)(lVar11 + 0x18);
      if (*plVar13 != lVar6) {
        uVar7 = 0;
        do {
                    /* try { // try from 00ad477c to 00ad4783 has its CatchHandler @ 00ad4900 */
          (*vkDestroyImageView)
                    (*(undefined8 *)(*(long *)(this + 0xb8) + 0x18),
                     *(undefined8 *)(lVar6 + uVar7 * 8),0);
          uVar7 = (ulong)((int)uVar7 + 1);
          lVar6 = *plVar12;
        } while (uVar7 < (ulong)(*plVar13 - lVar6 >> 3));
      }
                    /* try { // try from 00ad47b0 to 00ad47b7 has its CatchHandler @ 00ad48fc */
      (*vkDestroySwapchainKHR)
                (*(undefined8 *)(*(long *)(this + 0xb8) + 0x18),
                 *(undefined8 *)(lVar10 + (uVar5 % 0x66) * 0x28 + 8),0);
      uVar5 = *(ulong *)(this + 0xa0);
      lVar6 = *(long *)(*(long *)(this + 0x88) + (uVar5 / 0x66) * 8);
      pvVar4 = *(void **)(lVar6 + (uVar5 % 0x66) * 0x28 + 0x10);
      if (pvVar4 != (void *)0x0) {
        *(void **)(lVar6 + (uVar5 % 0x66) * 0x28 + 0x18) = pvVar4;
        operator_delete(pvVar4);
        uVar5 = *(ulong *)(this + 0xa0);
      }
      uVar5 = uVar5 + 1;
      lVar6 = *(long *)(this + 0xa8) + -1;
      *(ulong *)(this + 0xa0) = uVar5;
      *(long *)(this + 0xa8) = lVar6;
      if (0xcb < uVar5) {
        operator_delete(**(void ***)(this + 0x88));
        lVar6 = *(long *)(this + 0xa8);
        uVar5 = *(long *)(this + 0xa0) - 0x66;
        *(long *)(this + 0x88) = *(long *)(this + 0x88) + 8;
        *(ulong *)(this + 0xa0) = uVar5;
      }
    } while (lVar6 != 0);
  }
  pvVar4 = *(void **)(this + 200);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar4;
    operator_delete(pvVar4);
  }
  std::__ndk1::
  __deque_base<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain>>
  ::clear();
  ppvVar1 = *(void ***)(this + 0x90);
  ppvVar8 = *(void ***)(this + 0x88);
  if (*(void ***)(this + 0x88) != ppvVar1) {
    do {
      ppvVar9 = ppvVar8 + 1;
      operator_delete(*ppvVar8);
      ppvVar8 = ppvVar9;
    } while (ppvVar9 != ppvVar1);
    lVar6 = *(long *)(this + 0x90) - *(long *)(this + 0x88);
    if (lVar6 != 0) {
      *(ulong *)(this + 0x90) = *(long *)(this + 0x90) + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x80));
  }
  pvVar4 = *(void **)(this + 0x38);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x10);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar4;
    operator_delete(pvVar4);
    return;
  }
  return;
}


