// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AndroidVulkanRenderDevice
// Entry Point: 00ad9000
// Size: 36 bytes
// Signature: undefined __thiscall ~AndroidVulkanRenderDevice(AndroidVulkanRenderDevice * this)


/* AndroidVulkanRenderDevice::~AndroidVulkanRenderDevice() */

void __thiscall
AndroidVulkanRenderDevice::~AndroidVulkanRenderDevice(AndroidVulkanRenderDevice *this)

{
  VulkanRenderDevice::~VulkanRenderDevice((VulkanRenderDevice *)this);
  operator_delete(this);
  return;
}


