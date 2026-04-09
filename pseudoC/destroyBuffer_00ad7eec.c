// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyBuffer
// Entry Point: 00ad7eec
// Size: 84 bytes
// Signature: undefined __cdecl destroyBuffer(VulkanRenderDevice * param_1, VkBuffer_T * param_2, Allocation * param_3)


/* VulkanUtil::destroyBuffer(VulkanRenderDevice*, VkBuffer_T*, VulkanMemoryAllocator::Allocation*)
    */

void VulkanUtil::destroyBuffer(VulkanRenderDevice *param_1,VkBuffer_T *param_2,Allocation *param_3)

{
  if (param_2 != (VkBuffer_T *)0x0) {
    (*vkDestroyBuffer)(*(undefined8 *)(param_1 + 0x18),param_2,0);
  }
  if (param_3 != (Allocation *)0x0) {
    VulkanMemoryAllocator::freeBufferMemory(*(VulkanMemoryAllocator **)(param_1 + 0x378),param_3);
    return;
  }
  return;
}


