// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00ad7214
// Size: 8 bytes
// Signature: undefined __thiscall unlock(VulkanIndexBuffer * this, ICommandBuffer * param_1)


/* VulkanIndexBuffer::unlock(ICommandBuffer*) */

void __thiscall VulkanIndexBuffer::unlock(VulkanIndexBuffer *this,ICommandBuffer *param_1)

{
  VulkanBufferResource::unlock(*(VulkanBufferResource **)(this + 8),(VulkanCommandBuffer *)param_1);
  return;
}


