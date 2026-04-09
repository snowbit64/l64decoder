// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setViewport
// Entry Point: 00acd7d8
// Size: 136 bytes
// Signature: undefined __cdecl setViewport(VkCommandBuffer_T * param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* VulkanCommandBuffer::setViewport(VkCommandBuffer_T*, unsigned int, unsigned int, unsigned int,
   unsigned int) */

void VulkanCommandBuffer::setViewport
               (VkCommandBuffer_T *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_40 = (float)(ulong)param_2;
  local_38 = (float)(ulong)param_4;
  fStack_3c = (float)(ulong)param_3 + (float)(ulong)param_5;
  local_28 = *(long *)(lVar1 + 0x28);
  fStack_34 = -(float)(ulong)param_5;
  local_30 = 0x3f80000000000000;
  (*vkCmdSetViewport)(param_1,0,1,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


