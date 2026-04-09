// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderWindowInternal
// Entry Point: 00ad90e4
// Size: 100 bytes
// Signature: undefined __thiscall createRenderWindowInternal(AndroidVulkanRenderDevice * this, RenderWindowDesc * param_1)


/* AndroidVulkanRenderDevice::createRenderWindowInternal(RenderWindowDesc&) */

long * __thiscall
AndroidVulkanRenderDevice::createRenderWindowInternal
          (AndroidVulkanRenderDevice *this,RenderWindowDesc *param_1)

{
  long *this_00;
  ulong uVar1;
  
  this_00 = (long *)operator_new(0x110);
                    /* try { // try from 00ad9108 to 00ad9113 has its CatchHandler @ 00ad9148 */
  AndroidVulkanRenderWindow::AndroidVulkanRenderWindow
            ((AndroidVulkanRenderWindow *)this_00,param_1,(VulkanRenderDevice *)this);
  uVar1 = AndroidVulkanRenderWindow::isInitialized();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*this_00 + 8))(this_00);
    this_00 = (long *)0x0;
  }
  return this_00;
}


