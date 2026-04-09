// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronize
// Entry Point: 00ad78b0
// Size: 184 bytes
// Signature: undefined __thiscall synchronize(VulkanStagingBuffer * this, BUFFER_LAYOUT param_1, VulkanCommandBuffer * param_2, VK_COMMAND_BUFFER_TYPE param_3)


/* VulkanStagingBuffer::synchronize(VulkanBufferResource::BUFFER_LAYOUT, VulkanCommandBuffer*,
   VulkanUtil::VK_COMMAND_BUFFER_TYPE) */

void __thiscall
VulkanStagingBuffer::synchronize
          (VulkanStagingBuffer *this,BUFFER_LAYOUT param_1,VulkanCommandBuffer *param_2,
          VK_COMMAND_BUFFER_TYPE param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 local_50 [2];
  undefined8 local_48;
  int local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0x2e;
  local_48 = 0;
  local_40 = (uint)(byte)this[0xd] << 0xc;
  uVar3 = 0x1000;
  if ((byte)this[0xd] == 0) {
    uVar3 = 1;
  }
  uStack_3c = 0x1000;
  uVar2 = VulkanCommandBuffer::acquireVkCommandBuffer(param_2,param_3);
  (*vkCmdPipelineBarrier)(uVar2,uVar3,0x1000,0,1,local_50,0,0,0,0);
  this[0xd] = (VulkanStagingBuffer)0x1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


