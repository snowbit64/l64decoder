// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: termWindow
// Entry Point: 00ad97b0
// Size: 92 bytes
// Signature: undefined termWindow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidVulkanRenderWindow::termWindow() */

void AndroidVulkanRenderWindow::termWindow(void)

{
  long in_x0;
  
  VulkanRenderDevice::waitUntilGPUIdle();
  VulkanRenderWindow::destroySwapChain();
  if (*(long *)(in_x0 + 0xc0) != 0) {
    (*vkDestroySurfaceKHR)
              (*(undefined8 *)(*(long *)(in_x0 + 0xb8) + 0x10),*(long *)(in_x0 + 0xc0),0);
    *(undefined8 *)(in_x0 + 0xc0) = 0;
  }
  AndroidSysUtil::setVisible(false,true);
  return;
}


