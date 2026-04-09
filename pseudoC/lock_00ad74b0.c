// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00ad74b0
// Size: 20 bytes
// Signature: undefined __thiscall lock(VulkanStructBuffer * this, ICommandBuffer * param_1, uint param_2, uint param_3, LOCK_OPTION param_4)


/* VulkanStructBuffer::lock(ICommandBuffer*, unsigned int, unsigned int, IResource::LOCK_OPTION) */

void __thiscall
VulkanStructBuffer::lock
          (VulkanStructBuffer *this,ICommandBuffer *param_1,uint param_2,uint param_3,
          LOCK_OPTION param_4)

{
  VulkanBufferResource::lock
            (*(VulkanBufferResource **)(this + 0x10),(VulkanCommandBuffer *)param_1,
             *(int *)(this + 0x18) * param_2,*(int *)(this + 0x18) * param_3,param_4);
  return;
}


