// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFrameRendered
// Entry Point: 00ab7b54
// Size: 16 bytes
// Signature: undefined __thiscall onFrameRendered(VulkanRenderDevice * this, uint param_1)


/* VulkanRenderDevice::onFrameRendered(unsigned int) */

void __thiscall VulkanRenderDevice::onFrameRendered(VulkanRenderDevice *this,uint param_1)

{
  *(uint *)(this + 0x3b8) = param_1;
  Semaphore::post();
  return;
}


