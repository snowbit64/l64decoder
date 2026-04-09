// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCommandBuffer
// Entry Point: 00ac971c
// Size: 124 bytes
// Signature: undefined __thiscall createCommandBuffer(VulkanCommandBuffer * this, VkCommandPool_T * param_1, bool param_2)


/* VulkanCommandBuffer::createCommandBuffer(VkCommandPool_T*, bool) */

void __thiscall
VulkanCommandBuffer::createCommandBuffer
          (VulkanCommandBuffer *this,VkCommandPool_T *param_1,bool param_2)

{
  long lVar1;
  undefined4 local_50 [2];
  undefined8 local_48;
  VkCommandPool_T *pVStack_40;
  uint local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2 & 1;
  uStack_34 = 1;
  local_48 = 0;
  local_50[0] = 0x28;
  pVStack_40 = param_1;
  (*vkAllocateCommandBuffers)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),local_50,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


