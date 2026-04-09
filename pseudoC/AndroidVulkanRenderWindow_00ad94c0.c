// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AndroidVulkanRenderWindow
// Entry Point: 00ad94c0
// Size: 72 bytes
// Signature: undefined __thiscall ~AndroidVulkanRenderWindow(AndroidVulkanRenderWindow * this)


/* AndroidVulkanRenderWindow::~AndroidVulkanRenderWindow() */

void __thiscall
AndroidVulkanRenderWindow::~AndroidVulkanRenderWindow(AndroidVulkanRenderWindow *this)

{
  *(undefined ***)this = &PTR__AndroidVulkanRenderWindow_00fe6ec0;
                    /* try { // try from 00ad94e8 to 00ad94f7 has its CatchHandler @ 00ad9508 */
  VulkanRenderDevice::destroySurfaceSafely
            (*(VulkanRenderDevice **)(this + 0xb8),*(VkSurfaceKHR_T **)(this + 0xc0));
  AndroidSysUtil::setVisible(false,false);
  VulkanRenderWindow::~VulkanRenderWindow((VulkanRenderWindow *)this);
  return;
}


