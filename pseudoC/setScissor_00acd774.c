// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setScissor
// Entry Point: 00acd774
// Size: 100 bytes
// Signature: undefined __cdecl setScissor(VkCommandBuffer_T * param_1, uint param_2, uint param_3)


/* VulkanCommandBuffer::setScissor(VkCommandBuffer_T*, unsigned int, unsigned int) */

void VulkanCommandBuffer::setScissor(VkCommandBuffer_T *param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 local_38;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = param_2;
  uStack_2c = param_3;
  (*vkCmdSetScissor)(param_1,0,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


