// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: callCommandList
// Entry Point: 00ab6540
// Size: 8 bytes
// Signature: undefined __thiscall callCommandList(VulkanRenderDevice * this, ICommandList * param_1)


/* VulkanRenderDevice::callCommandList(ICommandList*) */

void __thiscall VulkanRenderDevice::callCommandList(VulkanRenderDevice *this,ICommandList *param_1)

{
  VulkanCommandBuffer::executeCommandList(*(VulkanCommandBuffer **)(this + 0x390),param_1);
  return;
}


