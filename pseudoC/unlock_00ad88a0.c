// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00ad88a0
// Size: 8 bytes
// Signature: undefined __thiscall unlock(VulkanVertexBuffer * this, ICommandBuffer * param_1)


/* VulkanVertexBuffer::unlock(ICommandBuffer*) */

void __thiscall VulkanVertexBuffer::unlock(VulkanVertexBuffer *this,ICommandBuffer *param_1)

{
  VulkanBufferResource::unlock(*(VulkanBufferResource **)(this + 8),(VulkanCommandBuffer *)param_1);
  return;
}


