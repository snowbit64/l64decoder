// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronize
// Entry Point: 00ad42f4
// Size: 104 bytes
// Signature: undefined __thiscall synchronize(VulkanBufferResource * this, BUFFER_LAYOUT param_1, VulkanCommandBuffer * param_2, VK_COMMAND_BUFFER_TYPE param_3)


/* VulkanBufferResource::synchronize(VulkanBufferResource::BUFFER_LAYOUT, VulkanCommandBuffer*,
   VulkanUtil::VK_COMMAND_BUFFER_TYPE) */

void __thiscall
VulkanBufferResource::synchronize
          (VulkanBufferResource *this,BUFFER_LAYOUT param_1,VulkanCommandBuffer *param_2,
          VK_COMMAND_BUFFER_TYPE param_3)

{
  long lVar1;
  VulkanBufferResource *local_40;
  BUFFER_LAYOUT local_38;
  undefined4 uStack_34;
  undefined local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0xffffffff;
  local_30 = 0;
  local_40 = this;
  local_38 = param_1;
  synchronizeBuffers(param_2,param_3,1,(TransitionData *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


