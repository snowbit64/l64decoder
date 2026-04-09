// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00ad736c
// Size: 8 bytes
// Signature: undefined __thiscall unlock(VulkanConstantBuffer * this, ICommandBuffer * param_1)


/* VulkanConstantBuffer::unlock(ICommandBuffer*) */

void __thiscall VulkanConstantBuffer::unlock(VulkanConstantBuffer *this,ICommandBuffer *param_1)

{
  VulkanBufferResource::unlock(*(VulkanBufferResource **)(this + 8),(VulkanCommandBuffer *)param_1);
  return;
}


