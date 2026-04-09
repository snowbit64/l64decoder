// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlock
// Entry Point: 00ad74c4
// Size: 8 bytes
// Signature: undefined __thiscall unlock(VulkanStructBuffer * this, ICommandBuffer * param_1)


/* VulkanStructBuffer::unlock(ICommandBuffer*) */

void __thiscall VulkanStructBuffer::unlock(VulkanStructBuffer *this,ICommandBuffer *param_1)

{
  VulkanBufferResource::unlock
            (*(VulkanBufferResource **)(this + 0x10),(VulkanCommandBuffer *)param_1);
  return;
}


