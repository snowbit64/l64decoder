// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lock
// Entry Point: 00ad720c
// Size: 8 bytes
// Signature: undefined __thiscall lock(VulkanIndexBuffer * this, ICommandBuffer * param_1, uint param_2, uint param_3, LOCK_OPTION param_4)


/* VulkanIndexBuffer::lock(ICommandBuffer*, unsigned int, unsigned int, IResource::LOCK_OPTION) */

void __thiscall
VulkanIndexBuffer::lock
          (VulkanIndexBuffer *this,ICommandBuffer *param_1,uint param_2,uint param_3,
          LOCK_OPTION param_4)

{
  VulkanBufferResource::lock
            (*(VulkanBufferResource **)(this + 8),(VulkanCommandBuffer *)param_1,param_2,param_3,
             param_4);
  return;
}


