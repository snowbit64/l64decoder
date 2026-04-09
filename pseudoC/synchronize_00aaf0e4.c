// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: synchronize
// Entry Point: 00aaf0e4
// Size: 104 bytes
// Signature: undefined __thiscall synchronize(VulkanTextureObject * this, LAYOUT param_1, VulkanCommandBuffer * param_2, VK_COMMAND_BUFFER_TYPE param_3)


/* VulkanTextureObject::synchronize(VulkanTextureObject::LAYOUT, VulkanCommandBuffer*,
   VulkanUtil::VK_COMMAND_BUFFER_TYPE) */

void __thiscall
VulkanTextureObject::synchronize
          (VulkanTextureObject *this,LAYOUT param_1,VulkanCommandBuffer *param_2,
          VK_COMMAND_BUFFER_TYPE param_3)

{
  long lVar1;
  VulkanTextureObject *local_40;
  LAYOUT local_38;
  undefined4 uStack_34;
  undefined local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0xffffffff;
  local_30 = 0;
  local_40 = this;
  local_38 = param_1;
  synchronizeTextures(param_2,param_3,1,(TransitionData *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


