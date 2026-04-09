// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00ad7354
// Size: 24 bytes
// Signature: undefined __thiscall lock(VulkanConstantBuffer * this, ICommandBuffer * param_1)


/* VulkanConstantBuffer::lock(ICommandBuffer*) */

void __thiscall VulkanConstantBuffer::lock(VulkanConstantBuffer *this,ICommandBuffer *param_1)

{
  VulkanBufferResource::lock
            (*(VulkanBufferResource **)(this + 8),(VulkanCommandBuffer *)param_1,0,
             *(uint *)(this + 0x10),1);
  return;
}


