// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCurrentFence
// Entry Point: 00acc404
// Size: 60 bytes
// Signature: undefined __thiscall getCurrentFence(VulkanCommandBuffer * this, QUEUE_TYPE param_1)


/* VulkanCommandBuffer::getCurrentFence(VulkanUtil::QUEUE_TYPE) */

void __thiscall VulkanCommandBuffer::getCurrentFence(VulkanCommandBuffer *this,QUEUE_TYPE param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(this + (ulong)param_1 * 8 + 0x518) == 0) {
    uVar1 = VulkanResourceAllocator::getFence
                      (*(VulkanResourceAllocator **)(*(long *)(this + 0x98) + 0x370),param_1);
    *(undefined8 *)(this + (ulong)param_1 * 8 + 0x518) = uVar1;
  }
  return;
}


